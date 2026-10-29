__int64 __fastcall sub_6088B0(__int64 *a1, const char *a2)
{
  _WORD *v4; // rax
  size_t v5; // rax
  __int64 v6; // rbp
  size_t v7; // r14
  size_t v8; // r8
  _BYTE *v9; // rsi
  size_t v10; // r15
  const char *v11; // rsi
  unsigned int name_ea; // ebp
  const char *v14; // rbx
  char *v15; // rax
  char *v16; // r13
  __int64 v17; // r15
  unsigned int v18; // eax
  unsigned int v19; // r14d
  void *v20; // rax
  size_t v21; // r13
  const char *v22; // rdx
  unsigned int v23; // eax
  char v24; // dl
  int v25; // eax
  __int64 v26; // rsi
  void *v27; // rdi
  void *v28; // [rsp+8h] [rbp-90h]
  size_t v29; // [rsp+8h] [rbp-90h]
  int v30; // [rsp+1Ch] [rbp-7Ch] BYREF
  void *v31; // [rsp+20h] [rbp-78h] BYREF
  __int128 v32; // [rsp+28h] [rbp-70h]
  void *ptr; // [rsp+40h] [rbp-58h] BYREF
  __int128 v34; // [rsp+48h] [rbp-50h]
  unsigned __int64 v35; // [rsp+58h] [rbp-40h]

  v35 = __readfsqword(0x28u);
  if ( !a2 || !*a2 )
    return (unsigned int)-1;
  v31 = nullptr;
  v32 = 0;
  v4 = (_WORD *)qvector_reserve(&v31, 0, 7, 1);
  v31 = v4;
  *(_QWORD *)&v32 = 7;
  *(_DWORD *)v4 = 1835622239;
  v4[2] = 24432;
  *((_BYTE *)v31 + 6) = 0;
  v5 = strlen(a2);
  v6 = v32;
  v7 = v5;
  v8 = v5;
  if ( (_QWORD)v32 )
  {
    v6 = v32 - 1;
    v9 = v31;
    v8 = v5 + v32 - 1;
    v10 = v5 + v32;
    if ( *((_QWORD *)&v32 + 1) >= v5 + (unsigned __int64)v32 )
      goto LABEL_5;
LABEL_27:
    v29 = v8;
    v31 = (void *)qvector_reserve(&v31, v9, v10, 1);
    v8 = v29;
    v9 = v31;
    goto LABEL_5;
  }
  v9 = v31;
  v10 = v5 + 1;
  if ( *((_QWORD *)&v32 + 1) < v5 + 1 )
    goto LABEL_27;
LABEL_5:
  *(_QWORD *)&v32 = v10;
  v9[v8] = 0;
  memmove((char *)v31 + v6, a2, v7);
  v11 = haystack;
  if ( (_QWORD)v32 )
    v11 = (const char *)v31;
  name_ea = get_name_ea(0xFFFFFFFFLL, v11);
  if ( name_ea == -1 )
  {
    name_ea = get_name_ea(0xFFFFFFFFLL, a2);
    if ( name_ea == -1 && *a2 == 35 )
    {
      v14 = a2 + 1;
      v15 = strchr(v14, 35);
      v16 = v15;
      if ( v15 )
      {
        v17 = 0;
        v18 = strtol(v15 + 1, nullptr, 10);
        ptr = nullptr;
        v19 = v18;
        v34 = 0;
        v20 = nullptr;
        v21 = v16 - v14;
        if ( v21 )
        {
          v27 = nullptr;
          if ( v21 != -1 )
          {
            ptr = (void *)qvector_reserve(&ptr, 0, v21 + 1, 1);
            v27 = ptr;
          }
          *(_QWORD *)&v34 = v21 + 1;
          memmove(v27, v14, v21);
          *((_BYTE *)ptr + v21) = 0;
          v20 = ptr;
          v17 = *((_QWORD *)&v34 + 1);
          v21 = v34;
        }
        ptr = nullptr;
        v34 = 0;
        if ( v31 )
        {
          v28 = v20;
          *(_QWORD *)&v32 = 0;
          qfree(v31);
          *(_QWORD *)&v32 = v21;
          *((_QWORD *)&v32 + 1) = v17;
          v31 = v28;
          if ( ptr )
          {
            *(_QWORD *)&v34 = 0;
            qfree(ptr);
            v21 = v32;
          }
        }
        else
        {
          v31 = v20;
          *(_QWORD *)&v32 = v21;
          *((_QWORD *)&v32 + 1) = v17;
        }
        v22 = haystack;
        if ( v21 )
          v22 = (const char *)v31;
        v23 = sub_608700((__int64)(a1 + 280), *a1, v22);
        v24 = sub_79BBD0(a1 + 280, *a1, &ptr, v23, 65);
        v25 = -1;
        if ( v24 )
          v25 = (int)ptr;
        v26 = *a1;
        v30 = v25;
        if ( (unsigned __int8)sub_79BBD0(&v30, v26, &ptr, v19, 65) )
          name_ea = sub_3B9110(a1, (int)ptr);
      }
    }
  }
  if ( v31 )
  {
    *(_QWORD *)&v32 = 0;
    qfree(v31);
  }
  return name_ea;
}

