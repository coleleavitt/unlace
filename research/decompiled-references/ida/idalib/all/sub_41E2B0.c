const char *__fastcall sub_41E2B0(__int64 a1, __int64 *a2, __int64 a3, __int64 a4)
{
  __int16 v7; // di
  __int64 fixup_handler; // rax
  const void *v10; // r14
  size_t v11; // rax
  size_t v12; // r15
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // r13
  __int64 v16; // r13
  int v17; // eax
  const char *v18; // rbp
  __int64 v20; // r13
  unsigned __int64 v21; // r14
  __int64 v22; // r15
  char *v23; // rsi
  _DWORD *v24; // r13
  __int64 v25; // r13
  unsigned __int64 v26; // r14
  __int64 v27; // r15
  char *v28; // rsi
  __int64 v29; // rdi
  void *v30; // rdi
  size_t v31; // rdx
  char *v32; // rsi
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  size_t v37; // [rsp+8h] [rbp-80h]
  void *v38; // [rsp+10h] [rbp-78h] BYREF
  __int128 v39; // [rsp+18h] [rbp-70h]
  void *ptr; // [rsp+30h] [rbp-58h] BYREF
  __int128 v41; // [rsp+38h] [rbp-50h]
  unsigned __int64 v42; // [rsp+48h] [rbp-40h]

  v7 = *(_WORD *)a4;
  v42 = __readfsqword(0x28u);
  fixup_handler = get_fixup_handler(v7);
  if ( fixup_handler )
  {
    v10 = *(const void **)(fixup_handler + 8);
    if ( v10 )
    {
      v11 = strlen(*(const char **)(fixup_handler + 8));
      v12 = v11;
      if ( v11 )
      {
        v30 = (void *)*a2;
        v31 = v11 + 1;
        if ( a2[2] < v11 + 1 )
        {
          v37 = v11 + 1;
          v36 = qvector_reserve(a2, *a2, v31, 1);
          v31 = v37;
          *a2 = v36;
          v30 = (void *)v36;
        }
        a2[1] = v31;
        memmove(v30, v10, v12);
        *(_BYTE *)(*a2 + v12) = 0;
      }
      else
      {
        a2[1] = 0;
      }
    }
    else
    {
      sub_35A790((char **)a2);
    }
    v13 = *(_QWORD *)(a4 + 16);
    v39 = 0;
    v38 = nullptr;
    sub_50CCC0(a1, &v38, a3, v13);
    v14 = *(_DWORD *)(a4 + 4);
    if ( (v14 & 2) != 0 )
    {
      if ( (v14 & 1) != 0 )
      {
        v15 = *(_QWORD *)(a4 + 8);
      }
      else
      {
        v29 = *(_QWORD *)(a4 + 16);
        v15 = 0;
        if ( v29 != -1 )
          v15 = 16 * sel2para(v29);
      }
      v16 = *(_QWORD *)(a4 + 24) + v15;
      v41 = 0;
      ptr = nullptr;
      get_ea_name(&ptr, v16, 21, 0);
      sub_35A910(a2);
      if ( ptr )
      {
        *(_QWORD *)&v41 = 0;
        qfree(ptr);
      }
      v17 = *(_DWORD *)(a4 + 4);
      if ( (v17 & 1) == 0 )
      {
LABEL_11:
        if ( (v17 & 4) == 0 )
          goto LABEL_12;
        goto LABEL_21;
      }
    }
    else
    {
      sub_35A910(a2);
      v17 = *(_DWORD *)(a4 + 4);
      if ( (v17 & 1) == 0 )
        goto LABEL_11;
    }
    sub_35A910(a2);
    v17 = *(_DWORD *)(a4 + 4);
    if ( (v17 & 4) == 0 )
    {
LABEL_12:
      if ( (v17 & 8) == 0 )
        goto LABEL_13;
      goto LABEL_26;
    }
LABEL_21:
    v20 = a2[1];
    if ( v20 )
    {
      v22 = v20 + 6;
      v21 = v20 + 7;
      --v20;
    }
    else
    {
      v21 = 8;
      v22 = 7;
    }
    v23 = (char *)*a2;
    if ( a2[2] < v21 )
    {
      v33 = qvector_reserve(a2, v23, v21, 1);
      *a2 = v33;
      v23 = (char *)v33;
    }
    a2[1] = v21;
    v23[v22] = 0;
    v24 = (_DWORD *)(*a2 + v20);
    *v24 = 1970165024;
    *(_DWORD *)((char *)v24 + 3) = 1684370293;
    if ( (*(_DWORD *)(a4 + 4) & 8) == 0 )
    {
LABEL_13:
      if ( !*(_QWORD *)(a4 + 32) )
      {
LABEL_14:
        v18 = haystack;
        if ( a2[1] )
          v18 = (const char *)*a2;
        if ( v38 )
        {
          *(_QWORD *)&v39 = 0;
          qfree(v38);
        }
        return v18;
      }
LABEL_31:
      sub_35A910(a2);
      goto LABEL_14;
    }
LABEL_26:
    v25 = a2[1];
    if ( v25 )
    {
      v27 = v25 + 10;
      v26 = v25 + 11;
      --v25;
    }
    else
    {
      v26 = 12;
      v27 = 11;
    }
    v28 = (char *)*a2;
    if ( a2[2] < v26 )
    {
      v34 = qvector_reserve(a2, v28, v26, 1);
      *a2 = v34;
      v28 = (char *)v34;
    }
    a2[1] = v26;
    v28[v27] = 0;
    qmemcpy((void *)(*a2 + v25), " Artificial", 11);
    if ( !*(_QWORD *)(a4 + 32) )
      goto LABEL_14;
    goto LABEL_31;
  }
  v32 = (char *)*a2;
  if ( (unsigned __int64)a2[2] <= 0xD )
  {
    v35 = qvector_reserve(a2, v32, 14, 1);
    *a2 = v35;
    v32 = (char *)v35;
  }
  a2[1] = 14;
  v18 = haystack;
  qmemcpy(v32, "Unknown fixup", 13);
  *(_BYTE *)(*a2 + 13) = 0;
  if ( a2[1] )
    return (const char *)*a2;
  return v18;
}
