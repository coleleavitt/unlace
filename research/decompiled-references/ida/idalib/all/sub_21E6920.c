char *__fastcall sub_21E6920(__int64 a1, __int64 a2, char *a3, char a4)
{
  __int64 v6; // rax
  __int64 v7; // rax
  __m128 v8; // xmm0
  __int64 v9; // rax
  size_t v10; // rax
  size_t v11; // r13
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  size_t v16; // r13
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  char *result; // rax
  unsigned __int8 *v22; // rax
  void *v23; // rbp
  _BYTE *v24; // r14
  __int64 v25; // r12
  __int64 v26; // r12
  __int64 v27; // r8
  __int64 v28; // rax
  void *v29; // r15
  __int64 *v30; // rax
  void *v31; // rax
  size_t v32; // rax
  size_t v33; // rax
  size_t v34; // rax
  size_t v35; // rax
  _BYTE *v36; // r12
  __int64 v37; // rbp
  size_t v38; // r13
  bool v39; // dl
  _BYTE *v40; // rbp
  __int64 v41; // rdx
  __int64 v42; // rax
  char v43; // dl
  __int64 *v44; // rax
  unsigned __int64 v45; // rax
  __int64 v46; // rdi
  char v47; // dl
  char *v48; // [rsp+8h] [rbp-F0h] BYREF
  char v49; // [rsp+17h] [rbp-E1h]
  __int64 v50; // [rsp+18h] [rbp-E0h]
  unsigned __int8 *v51; // [rsp+28h] [rbp-D0h] BYREF
  void *ptr; // [rsp+30h] [rbp-C8h] BYREF
  __int64 v53; // [rsp+38h] [rbp-C0h]
  _BYTE v54[184]; // [rsp+40h] [rbp-B8h] BYREF

  *(_BYTE *)(a1 + 937) = a4;
  v48 = &a3[a2];
  v6 = *(_QWORD *)(a1 + 16);
  *(_WORD *)(a1 + 776) = 1;
  *(_QWORD *)(a1 + 24) = v6;
  v7 = *(_QWORD *)(a1 + 296);
  *(_QWORD *)(a1 + 784) = -1;
  v8 = _mm_loadh_ps((const double *)&v48);
  *(_QWORD *)(a1 + 304) = v7;
  v9 = *(_QWORD *)(a1 + 664);
  *(_QWORD *)(a1 + 792) = 0;
  *(_QWORD *)(a1 + 672) = v9;
  *(_DWORD *)(a1 + 800) = 0;
  *(_QWORD *)(a1 + 920) = 0;
  *(__m128 *)a1 = v8;
  v10 = j__strlen("_Z");
  if ( v10 > (unsigned __int64)a3 || v10 && memcmp((const void *)a2, "_Z", v10) )
  {
    v32 = j__strlen("__Z");
    if ( (unsigned __int64)a3 < v32 || v32 && memcmp((const void *)a2, "__Z", v32) )
    {
      v33 = j__strlen("___Z");
      if ( (unsigned __int64)a3 < v33 || v33 && memcmp((const void *)a2, "___Z", v33) )
      {
        v34 = j__strlen("____Z");
        if ( (unsigned __int64)a3 < v34 || v34 && memcmp((const void *)a2, "____Z", v34) )
        {
          ptr = a3;
          v53 = a2;
          return sub_21D5030(a1 + 808, (__int64 *)&ptr);
        }
      }
    }
  }
  v11 = j__strlen("_Z");
  if ( sub_20D1BF0((size_t)a3, (const void *)a2, v11, "_Z")
    || (v11 = j__strlen("__Z"), sub_20D1BF0((size_t)a3, (const void *)a2, v11, "__Z")) )
  {
    *(_QWORD *)a1 = v11 + a2;
    v22 = sub_21E4F70((__int64 *)a1, 1, v12, v13, v14, v15);
    v23 = v22;
    if ( v22 )
    {
      v24 = *(_BYTE **)a1;
      v25 = *(_QWORD *)(a1 + 8);
      if ( *(_QWORD *)a1 == v25 )
        return (char *)v23;
      if ( *v24 == 46 )
      {
        v26 = v25 - (_QWORD)v24;
        v27 = *(_QWORD *)a1;
        v49 = *(_BYTE *)(a1 + 937);
        ptr = v54;
        v48 = v54;
        v53 = 0x2000000000LL;
        sub_21D0350((__int64)&ptr, 1u, (unsigned __int64)v22, v26, v27);
        v50 = a1 + 904;
        v28 = sub_2223360(a1 + 904, &ptr, &v51, off_2BE9FD0);
        v29 = (void *)v28;
        if ( v28 )
        {
          v29 = (void *)(v28 + 8);
          if ( ptr != v48 )
            free(ptr);
          if ( v29 )
          {
            ptr = v29;
            v30 = sub_21D4F30(a1 + 944, (__int64 *)&ptr);
            if ( v30 )
            {
              v31 = (void *)v30[1];
              if ( v31 )
                v29 = v31;
            }
            if ( *(void **)(a1 + 928) == v29 )
              *(_BYTE *)(a1 + 936) = 1;
          }
        }
        else
        {
          if ( v49 )
          {
            v45 = sub_21D40A0((__int64 *)(a1 + 808), 48, 3u);
            v46 = v50;
            *(_WORD *)(v45 + 16) = 16385;
            v47 = *(_BYTE *)(v45 + 18);
            v29 = (void *)(v45 + 8);
            *(_QWORD *)v45 = 0;
            *(_QWORD *)(v45 + 24) = v23;
            *(_QWORD *)(v45 + 32) = v26;
            *(_BYTE *)(v45 + 18) = v47 & 0xF0 | 5;
            *(_QWORD *)(v45 + 40) = v24;
            *(_QWORD *)(v45 + 8) = off_2BE66C0;
            sub_2223210(v46, v45, v51, off_2BE9FD0);
          }
          if ( ptr != v54 )
            free(ptr);
          *(_QWORD *)(a1 + 920) = v29;
        }
        *(_QWORD *)a1 = *(_QWORD *)(a1 + 8);
        return (char *)v29;
      }
    }
    return nullptr;
  }
  v16 = j__strlen("___Z");
  if ( !sub_20D1BF0((size_t)a3, (const void *)a2, v16, "___Z") )
  {
    v16 = j__strlen("____Z");
    if ( !sub_20D1BF0((size_t)a3, (const void *)a2, v16, "____Z") )
    {
      result = sub_21DFD40(a1);
      if ( *(_QWORD *)a1 == *(_QWORD *)(a1 + 8) )
        return result;
      return nullptr;
    }
  }
  *(_QWORD *)a1 = v16 + a2;
  v51 = sub_21E4F70((__int64 *)a1, 1, v17, v18, v19, v20);
  if ( !v51 )
    return nullptr;
  v35 = j__strlen("_block_invoke");
  v36 = *(_BYTE **)(a1 + 8);
  v37 = *(_QWORD *)a1;
  v38 = v35;
  v39 = sub_20D1BF0((size_t)&v36[-*(_QWORD *)a1], *(const void **)a1, v35, "_block_invoke");
  result = nullptr;
  if ( !v39 )
    return result;
  v40 = (_BYTE *)(v38 + v37);
  *(_QWORD *)a1 = v40;
  if ( v36 != v40 && *v40 == 95 )
  {
    *(_QWORD *)a1 = v40 + 1;
    result = (char *)sub_21CFC00((char **)a1, 0);
    if ( !result )
      return result;
  }
  else
  {
    sub_21CFC00((char **)a1, 0);
  }
  v41 = *(_QWORD *)(a1 + 8);
  if ( *(_QWORD *)a1 == v41 )
    goto LABEL_42;
  if ( **(_BYTE **)a1 != 46 )
    return nullptr;
  *(_QWORD *)a1 = v41;
LABEL_42:
  v42 = sub_21D4220((__int64 *)(a1 + 808), *(_BYTE *)(a1 + 937), "invocation function for block in ", (__int64 *)&v51);
  v23 = (void *)v42;
  if ( v43 )
  {
    *(_QWORD *)(a1 + 920) = v42;
    return (char *)v23;
  }
  result = nullptr;
  if ( v23 )
  {
    ptr = v23;
    v44 = sub_21D4F30(a1 + 944, (__int64 *)&ptr);
    if ( v44 )
    {
      result = (char *)v44[1];
      if ( !result )
        result = (char *)v23;
    }
    else
    {
      result = (char *)v23;
    }
    if ( *(char **)(a1 + 928) == result )
      *(_BYTE *)(a1 + 936) = 1;
  }
  return result;
}
