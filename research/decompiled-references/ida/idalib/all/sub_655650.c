__int64 __fastcall sub_655650(_QWORD *a1, __int64 *a2, __int64 a3, __int64 a4, __int64 a5, unsigned __int8 a6)
{
  __int64 *v8; // r15
  __int64 v10; // rax
  char *v11; // rdi
  const char *v12; // r14
  unsigned __int8 v13; // r13
  char *v14; // rax
  const char *v15; // rbp
  __int64 v16; // rsi
  int v17; // eax
  char *v18; // rdx
  int v19; // r14d
  char *v20; // r9
  size_t v21; // r10
  size_t v22; // r11
  char *v23; // rsi
  char *v24; // r9
  unsigned __int64 v25; // rdx
  __int64 v26; // rsi
  __int64 v27; // rax
  unsigned __int64 v28; // rbp
  __int64 result; // rax
  char *v30; // rdi
  unsigned __int64 v31; // r12
  __int64 v32; // rax
  __int64 v33; // rax
  unsigned __int8 v35; // [rsp+18h] [rbp-90h]
  char v36; // [rsp+1Fh] [rbp-89h]
  char *s; // [rsp+20h] [rbp-88h]
  unsigned __int64 v39; // [rsp+30h] [rbp-78h]
  char *v40; // [rsp+30h] [rbp-78h]
  char *v41; // [rsp+38h] [rbp-70h]
  size_t v42; // [rsp+38h] [rbp-70h]
  char *v43; // [rsp+40h] [rbp-68h]
  size_t v44; // [rsp+48h] [rbp-60h]
  void *src; // [rsp+50h] [rbp-58h] BYREF
  __int128 v46; // [rsp+58h] [rbp-50h]
  unsigned __int64 v47; // [rsp+68h] [rbp-40h]

  v8 = *(__int64 **)(*a1 + 1704LL);
  v47 = __readfsqword(0x28u);
  v10 = qstrdup(a5);
  v11 = (char *)*a2;
  s = (char *)v10;
  if ( *a2 )
  {
    a2[1] = 0;
    qfree(v11);
    *a2 = 0;
    a2[2] = 0;
  }
  if ( !*s )
  {
    qfree(s);
    v28 = a2[1];
    if ( v28 <= 1 )
      return 2;
    v30 = (char *)*a2;
    if ( *(_BYTE *)(*a2 + v28 - 2) != 10 )
      return 2;
    v31 = v28 - 1;
    v36 = 0;
    v13 = 0;
    if ( (__int64)(v28 - 1) > 1 )
      goto LABEL_38;
    if ( v30 )
    {
      a2[1] = 0;
      qfree(v30);
      *a2 = 0;
      a2[2] = 0;
    }
    v13 = 0;
    return 2 * (v13 ^ 1u);
  }
  v36 = 0;
  v12 = s;
  v13 = 0;
  v35 = a6;
  while ( 1 )
  {
    v14 = strchr(v12, 44);
    if ( v14 )
    {
      *v14 = 0;
      v15 = v14 + 1;
    }
    else
    {
      v15 = &v12[strlen(v12)];
    }
    src = nullptr;
    v16 = a3;
    v46 = 0;
    if ( !a3 )
      v16 = a1[1];
    v17 = sub_655520(v8, v16, a4, v12, (char **)&src, v35);
    v18 = (char *)v46;
    v19 = v17;
    if ( (unsigned __int64)v46 <= 1 )
    {
      if ( v17 != 1 )
        goto LABEL_6;
    }
    else
    {
      v20 = (char *)a2[1];
      v21 = v46 - 1;
      v22 = v46 - 1;
      if ( v20 )
      {
        --v20;
        v22 = (size_t)&v20[v21];
        v18 = &v20[v46];
      }
      v23 = (char *)*a2;
      if ( a2[2] < (unsigned __int64)v18 )
      {
        v44 = v22;
        v43 = v20;
        v42 = v46 - 1;
        v40 = v18;
        v32 = qvector_reserve(a2, v23, v18, 1);
        v22 = v44;
        v20 = v43;
        *a2 = v32;
        v23 = (char *)v32;
        v21 = v42;
        v18 = v40;
      }
      a2[1] = (__int64)v18;
      v23[v22] = 0;
      memcpy(&v20[*a2], src, v21);
      v24 = (char *)a2[1];
      v25 = 2;
      if ( v24 )
        v25 = (unsigned __int64)(v24-- + 1);
      v26 = *a2;
      if ( a2[2] < v25 )
      {
        v41 = v24;
        v39 = v25;
        v27 = qvector_reserve(a2, v26, v25, 1);
        v24 = v41;
        v25 = v39;
        *a2 = v27;
        v26 = v27;
      }
      a2[1] = v25;
      v24[v26] = 10;
      v24[*a2 + 1] = 0;
      if ( v19 != 1 )
      {
LABEL_6:
        v13 |= v19 == 0;
        goto LABEL_7;
      }
    }
    v36 = 1;
LABEL_7:
    if ( src )
    {
      *(_QWORD *)&v46 = 0;
      qfree(src);
    }
    if ( !*v15 )
      break;
    v12 = v15;
  }
  qfree(s);
  v28 = a2[1];
  if ( v28 > 1 )
  {
    v30 = (char *)*a2;
    if ( *(_BYTE *)(*a2 + v28 - 2) == 10 )
    {
      v31 = v28 - 1;
      if ( (__int64)(v28 - 1) <= 1 )
      {
        if ( v30 )
        {
          a2[1] = 0;
          qfree(v30);
          *a2 = 0;
          a2[2] = 0;
        }
      }
      else
      {
LABEL_38:
        if ( a2[2] < v31 )
        {
          v33 = qvector_reserve(a2, v30, v31, 1);
          *a2 = v33;
          v30 = (char *)v33;
        }
        a2[1] = v31;
        v30[v28 - 2] = 0;
      }
    }
  }
  result = 1;
  if ( !v36 )
    return 2 * (v13 ^ 1u);
  return result;
}
