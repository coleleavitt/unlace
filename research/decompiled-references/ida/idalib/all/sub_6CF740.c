__int64 __fastcall sub_6CF740(__int64 a1, __int64 a2, double a3, double a4)
{
  unsigned int v5; // edx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rdi
  int v10; // ebp
  unsigned int v11; // ebx
  char **v13; // rbp
  char *v14; // rax
  __int64 v15; // rbx
  __int64 v16; // rsi
  __int64 v17; // rdi
  char *v18; // rbp
  __int64 v19; // rsi
  int v20; // eax
  void *idati; // rax
  __int64 v22; // rax
  __int64 v23; // r14
  char *v24; // rbp
  unsigned int v25; // eax
  __int64 v26; // r15
  int v27; // ebp
  int v28; // [rsp+4h] [rbp-84h] BYREF
  __int64 v29; // [rsp+8h] [rbp-80h] BYREF
  void *ptr; // [rsp+10h] [rbp-78h] BYREF
  __int128 v31; // [rsp+18h] [rbp-70h]
  void *v32; // [rsp+30h] [rbp-58h] BYREF
  __int128 v33; // [rsp+38h] [rbp-50h]
  unsigned __int64 v34; // [rsp+48h] [rbp-40h]

  v5 = *(_DWORD *)(a2 + 32);
  v34 = __readfsqword(0x28u);
  if ( v5 )
    goto LABEL_6;
  v7 = *(_QWORD *)a1;
  v8 = *(_QWORD *)a2;
  ptr = nullptr;
  v31 = 0;
  sub_5301C0(*(__int64 **)(*(_QWORD *)v7 + 1872LL), &ptr, v8);
  if ( (unsigned __int64)v31 <= 1 )
  {
LABEL_3:
    if ( ptr )
    {
      *(_QWORD *)&v31 = 0;
      qfree(ptr);
    }
    v5 = *(_DWORD *)(a2 + 32);
LABEL_6:
    v9 = *(_QWORD *)a1;
    v29 = 0;
    v28 = sub_6BA720(v9, &v29, v5, 1);
    v10 = v28;
    if ( get_tinfo_property(v29, 288) )
    {
      v32 = nullptr;
      v33 = 0;
      if ( (v29 & 0x100) == 0 )
        goto LABEL_9;
      if ( !get_tinfo_pdata(&v32, v29, 2) )
      {
        if ( v32 )
        {
          *(_QWORD *)&v33 = 0;
          qfree(v32);
        }
        goto LABEL_9;
      }
      v23 = *(_QWORD *)a1;
      v24 = (char *)haystack;
      if ( (_QWORD)v33 )
        v24 = (char *)v32;
      get_tinfo_pdata(&ptr, v29, 3);
      v25 = sub_658420(0.0, a4, v23, *(_QWORD *)(*(_QWORD *)a1 + 8LL), (__int64)ptr, v24);
      v28 = sub_6BA720(*(_QWORD *)a1, &v29, v25, 1);
      v10 = v28;
      if ( v32 )
      {
        *(_QWORD *)&v33 = 0;
        qfree(v32);
      }
    }
    else if ( *(_DWORD *)(a2 + 32) == v28 )
    {
LABEL_16:
      v11 = 1;
      goto LABEL_10;
    }
    if ( v10 && (get_tinfo_property(v29, 2) & 0x2F) == 0xD )
    {
      v13 = sub_6CF4C0((char **)(a1 + 96), &v28);
      v14 = v13[1];
      v15 = *(_QWORD *)a2;
      v16 = (__int64)*v13;
      if ( v13[2] < v14 + 1 )
      {
        v22 = qvector_reserve(v13, v16, v14 + 1, 8);
        *v13 = (char *)v22;
        v16 = v22;
        v14 = v13[1];
      }
      *(_QWORD *)(v16 + 8LL * (_QWORD)v14) = v15;
      ++v13[1];
      goto LABEL_16;
    }
LABEL_9:
    v11 = 0;
LABEL_10:
    clear_tinfo_t(&v29);
    return v11;
  }
  v17 = *(_QWORD *)a1;
  v18 = (char *)ptr;
  v19 = *(_QWORD *)(*(_QWORD *)a1 + 8LL);
  v20 = sub_6500C0(*(_QWORD *)a1, v19, (const char *)ptr);
  if ( v20 )
  {
LABEL_18:
    *(_DWORD *)(a2 + 28) |= 0x1000u;
    *(_DWORD *)(a2 + 32) = v20;
    goto LABEL_3;
  }
  v29 = 0;
  if ( v18 )
  {
    idati = *(void **)(*(_QWORD *)a1 + 8LL);
    WORD4(v33) = 256;
    *(_QWORD *)&v33 = v18;
    if ( !idati )
      idati = (void *)get_idati(v17, v19);
    v32 = idati;
    if ( (unsigned __int8)create_tinfo(&v29, 61, 61, &v32) )
    {
      v26 = *(_QWORD *)a1;
      get_tinfo_pdata(&v32, v29, 3);
      v27 = sub_658420(0.0, a4, v26, *(_QWORD *)(*(_QWORD *)a1 + 8LL), (__int64)v32, v18);
      if ( v27 )
      {
        clear_tinfo_t(&v29);
        v20 = v27;
        goto LABEL_18;
      }
    }
  }
  clear_tinfo_t(&v29);
  if ( ptr )
  {
    *(_QWORD *)&v31 = 0;
    qfree(ptr);
  }
  return 1;
}
