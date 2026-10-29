__int64 __fastcall sub_22A9290(void *a1, size_t a2, int a3, int a4)
{
  const char **v4; // r13
  __int64 v5; // rbp
  size_t v6; // r12
  const char **v7; // rbx
  const char *v8; // r15
  size_t v9; // rax
  size_t v10; // rdx
  size_t v11; // r8
  int v12; // eax
  const char **v13; // rbx
  const char **v14; // rax
  __int64 v15; // rbp
  const char **v16; // r14
  const char **v17; // r14
  __int64 v18; // rbp
  size_t v19; // rbx
  size_t v20; // rax
  size_t v21; // rdx
  size_t v22; // rcx
  int v23; // eax
  __int64 v24; // r12
  const char **v25; // r13
  const char *v26; // r15
  size_t v28; // rax
  size_t v29; // rdx
  size_t v30; // r8
  int v31; // eax
  const char **v32; // [rsp+8h] [rbp-70h]
  size_t v33; // [rsp+8h] [rbp-70h]
  size_t v34; // [rsp+8h] [rbp-70h]
  size_t v35; // [rsp+8h] [rbp-70h]
  const void *s2; // [rsp+10h] [rbp-68h]
  const char **s2a; // [rsp+10h] [rbp-68h]
  const char ***v38; // [rsp+18h] [rbp-60h]
  void *s1; // [rsp+30h] [rbp-48h] BYREF
  size_t v42; // [rsp+38h] [rbp-40h]

  v38 = (const char ***)&off_2BF2700;
  s1 = a1;
  v42 = a2;
  while ( 1 )
  {
    v4 = *v38;
    v32 = v38[1];
    v5 = (16 * (__int64)v32) >> 4;
    if ( 16 * (__int64)v32 > 0 )
    {
      v6 = v42;
      s2 = s1;
      while ( 1 )
      {
        v7 = &v4[2 * (v5 >> 1)];
        v8 = *v7;
        if ( !*v7 )
          break;
        v9 = strlen(*v7);
        v10 = v6;
        v11 = v9;
        if ( v9 <= v6 )
          v10 = v9;
        if ( !v10 )
          goto LABEL_36;
        v33 = v9;
        v12 = memcmp(v8, s2, v10);
        v11 = v33;
        if ( v12 )
        {
          if ( v12 >= 0 )
            goto LABEL_39;
          goto LABEL_31;
        }
        if ( v33 == v6 )
          goto LABEL_39;
LABEL_10:
        if ( v6 <= v11 )
          goto LABEL_11;
LABEL_31:
        v4 = v7 + 2;
        v5 = v5 - (v5 >> 1) - 1;
LABEL_32:
        if ( v5 <= 0 )
          goto LABEL_33;
      }
      v11 = 0;
LABEL_36:
      if ( v6 != v11 )
        goto LABEL_10;
LABEL_11:
      if ( !v8 )
        goto LABEL_12;
LABEL_39:
      v28 = strlen(v8);
      v29 = v6;
      v30 = v28;
      if ( v28 <= v6 )
        v29 = v28;
      if ( v29 )
      {
        v35 = v28;
        v31 = memcmp(s2, v8, v29);
        v30 = v35;
        if ( v31 )
        {
          if ( v31 >= 0 )
            goto LABEL_12;
          goto LABEL_45;
        }
      }
      if ( v30 != v6 && v30 > v6 )
      {
LABEL_45:
        v5 >>= 1;
        goto LABEL_32;
      }
LABEL_12:
      v13 = v7 + 2;
      v14 = sub_22A8660(v4, (__int64)&v4[2 * (v5 >> 1)], (__int64)&s1);
      v15 = (char *)&v4[2 * v5] - (char *)v13;
      v16 = v14;
      if ( v15 <= 0 )
        goto LABEL_25;
      v17 = v13;
      s2a = v14;
      v18 = v15 >> 4;
      v19 = v42;
      while ( 2 )
      {
        while ( 2 )
        {
          v24 = v18 >> 1;
          v25 = &v17[2 * (v18 >> 1)];
          v26 = *v25;
          if ( !*v25 )
          {
LABEL_22:
            v17 = v25 + 2;
            v18 = v18 - v24 - 1;
            goto LABEL_23;
          }
          v20 = strlen(*v25);
          v21 = v19;
          v22 = v20;
          if ( v20 <= v19 )
            v21 = v20;
          if ( !v21 || (v34 = v20, v23 = memcmp(s1, v26, v21), v22 = v34, !v23) )
          {
            if ( v22 == v19 || v22 <= v19 )
              goto LABEL_22;
            goto LABEL_20;
          }
          if ( v23 < 0 )
          {
LABEL_20:
            v18 >>= 1;
            if ( v24 <= 0 )
              goto LABEL_24;
            continue;
          }
          break;
        }
        v17 = v25 + 2;
        v18 = v18 - v24 - 1;
LABEL_23:
        if ( v18 > 0 )
          continue;
        break;
      }
LABEL_24:
      v13 = v17;
      v16 = s2a;
LABEL_25:
      if ( v16 != v13 )
        break;
    }
LABEL_33:
    v38 += 2;
    if ( v38 == (const char ***)&off_2BF2720 )
      return 0;
  }
  while ( *((_DWORD *)v16 + 2) != a3 || *((_DWORD *)v16 + 3) != a4 )
  {
    v16 += 2;
    if ( v16 == v13 )
      goto LABEL_33;
  }
  return 1;
}
