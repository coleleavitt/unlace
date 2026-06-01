__int64 __fastcall sub_2228C50(char *a1, char *a2, __int64 a3)
{
  __int64 result; // rax
  char *v4; // rbx
  char *v5; // r12
  __int64 v6; // r15
  size_t v7; // rbp
  size_t v8; // rdx
  __int64 v9; // r14
  size_t v10; // r13
  int v11; // eax
  _QWORD *v12; // r10
  size_t v13; // r9
  const void *v14; // r11
  size_t v15; // rdx
  int v16; // eax
  size_t v17; // rdx
  int v18; // eax
  __int64 v19; // rax
  size_t v20; // r9
  const void *v21; // r11
  size_t v22; // rdx
  int v23; // eax
  size_t v24; // rdx
  int v25; // eax
  __int64 v26; // rax
  char *v27; // rax
  const void *v28; // r13
  size_t v29; // r15
  char *v30; // rbx
  char *v31; // rbp
  char *v32; // rax
  __int64 v33; // rax
  __int64 v34; // r12
  size_t v35; // rdx
  size_t v36; // r14
  int v37; // eax
  char *v38; // rax
  char *v39; // rbp
  char *v40; // rbx
  char *i; // r14
  __int64 v42; // r9
  size_t v43; // rdx
  size_t v44; // r13
  int v45; // eax
  char *v46; // rbp
  __int64 v47; // rdx
  __int64 v48; // rbp
  __int64 v49; // r13
  __int64 *v50; // r12
  __int64 v51; // rcx
  __int64 v52; // rbp
  __int64 v53; // rax
  __int64 v54; // rax
  void *s1; // [rsp+0h] [rbp-78h]
  _QWORD *s1b; // [rsp+0h] [rbp-78h]
  char *s1a; // [rsp+0h] [rbp-78h]
  __int64 v58; // [rsp+8h] [rbp-70h]
  void *v59; // [rsp+10h] [rbp-68h]
  _QWORD *v60; // [rsp+10h] [rbp-68h]
  void *v61; // [rsp+10h] [rbp-68h]
  size_t v62; // [rsp+18h] [rbp-60h]
  __int64 v63; // [rsp+18h] [rbp-60h]
  const void *v64; // [rsp+20h] [rbp-58h]
  const void *v65; // [rsp+20h] [rbp-58h]
  size_t v66; // [rsp+20h] [rbp-58h]
  char *v67; // [rsp+20h] [rbp-58h]
  _QWORD *v68; // [rsp+28h] [rbp-50h]
  _QWORD *v69; // [rsp+28h] [rbp-50h]
  char *v70; // [rsp+28h] [rbp-50h]
  size_t v71; // [rsp+38h] [rbp-40h]
  size_t v72; // [rsp+38h] [rbp-40h]

  result = a2 - a1;
  v4 = a1;
  v58 = a3;
  if ( a2 - a1 <= 128 )
    return result;
  if ( !a3 )
  {
    v47 = a2 - a1;
    v70 = a2;
    goto LABEL_59;
  }
  v5 = a2;
  while ( 2 )
  {
    v6 = *((_QWORD *)v4 + 1);
    --v58;
    v7 = *(_QWORD *)(v6 + 16);
    v8 = v7;
    v59 = *(void **)(v6 + 8);
    v9 = *(_QWORD *)&v4[8 * ((__int64)(((v5 - v4) >> 3) + ((unsigned __int64)(v5 - v4) >> 63)) >> 1)];
    v10 = *(_QWORD *)(v9 + 16);
    s1 = *(void **)(v9 + 8);
    if ( v10 <= v7 )
      v8 = *(_QWORD *)(v9 + 16);
    if ( v8 )
    {
      v11 = memcmp(*(const void **)(v6 + 8), *(const void **)(v9 + 8), v8);
      if ( v11 )
      {
        if ( v11 < 0 )
          goto LABEL_10;
LABEL_24:
        v12 = *((_QWORD **)v5 - 1);
        v20 = v12[2];
        v21 = (const void *)v12[1];
        v22 = v20;
        if ( v7 <= v20 )
          v22 = v7;
        if ( v22
          && (v72 = v12[2],
              v69 = *((_QWORD **)v5 - 1),
              v65 = (const void *)v12[1],
              v23 = memcmp(v59, v65, v22),
              v21 = v65,
              v12 = v69,
              v20 = v72,
              v23) )
        {
          if ( v23 < 0 )
          {
            v54 = *(_QWORD *)v4;
            *(_QWORD *)v4 = v6;
            *((_QWORD *)v4 + 1) = v54;
            goto LABEL_37;
          }
        }
        else if ( v7 != v20 && v7 < v20 )
        {
          goto LABEL_67;
        }
        v24 = v20;
        if ( v10 <= v20 )
          v24 = v10;
        if ( v24 && (v66 = v20, v60 = v12, v25 = memcmp(s1, v21, v24), v12 = v60, v20 = v66, v25) )
        {
          if ( v25 < 0 )
            goto LABEL_22;
        }
        else if ( v10 != v20 && v10 < v20 )
        {
          goto LABEL_22;
        }
        goto LABEL_36;
      }
    }
    if ( v10 == v7 || v10 <= v7 )
      goto LABEL_24;
LABEL_10:
    v12 = *((_QWORD **)v5 - 1);
    v13 = v12[2];
    v14 = (const void *)v12[1];
    v15 = v13;
    if ( v10 <= v13 )
      v15 = v10;
    if ( !v15
      || (v71 = v12[2],
          v68 = *((_QWORD **)v5 - 1),
          v64 = (const void *)v12[1],
          v16 = memcmp(s1, v64, v15),
          v14 = v64,
          v12 = v68,
          v13 = v71,
          !v16) )
    {
      if ( v10 == v13 || v10 >= v13 )
        goto LABEL_16;
LABEL_36:
      v26 = *(_QWORD *)v4;
      *(_QWORD *)v4 = v9;
      *(_QWORD *)&v4[8 * ((__int64)(((v5 - v4) >> 3) + ((unsigned __int64)(v5 - v4) >> 63)) >> 1)] = v26;
      v6 = *(_QWORD *)v4;
      goto LABEL_37;
    }
    if ( v16 < 0 )
      goto LABEL_36;
LABEL_16:
    v17 = v13;
    if ( v7 <= v13 )
      v17 = v7;
    if ( !v17 || (v62 = v13, s1b = v12, v18 = memcmp(v59, v14, v17), v12 = s1b, v13 = v62, !v18) )
    {
      if ( v7 != v13 && v7 < v13 )
        goto LABEL_22;
LABEL_67:
      v53 = *(_QWORD *)v4;
      *(_QWORD *)v4 = v6;
      *((_QWORD *)v4 + 1) = v53;
      goto LABEL_37;
    }
    if ( v18 >= 0 )
      goto LABEL_67;
LABEL_22:
    v19 = *(_QWORD *)v4;
    *(_QWORD *)v4 = v12;
    *((_QWORD *)v5 - 1) = v19;
    v6 = *(_QWORD *)v4;
LABEL_37:
    v27 = v4;
    v28 = *(const void **)(v6 + 8);
    s1a = v5;
    v29 = *(_QWORD *)(v6 + 16);
    v67 = v5;
    v30 = a1 + 8;
    v31 = v27;
    while ( 1 )
    {
      v34 = *(_QWORD *)v30;
      v35 = v29;
      v70 = v30;
      v36 = *(_QWORD *)(*(_QWORD *)v30 + 16LL);
      if ( v36 <= v29 )
        v35 = *(_QWORD *)(v34 + 16);
      if ( !v35 )
        break;
      v37 = memcmp(*(const void **)(v34 + 8), v28, v35);
      if ( !v37 )
        break;
      if ( v37 >= 0 )
        goto LABEL_47;
LABEL_40:
      v30 += 8;
    }
    if ( v36 != v29 && v36 < v29 )
      goto LABEL_40;
LABEL_47:
    v61 = (void *)v28;
    v38 = v31;
    v39 = v30;
    v40 = v38;
    for ( i = s1a - 8; ; i -= 8 )
    {
      v42 = *(_QWORD *)i;
      v43 = v29;
      s1a = i;
      v44 = *(_QWORD *)(*(_QWORD *)i + 16LL);
      if ( v44 <= v29 )
        v43 = *(_QWORD *)(v42 + 16);
      if ( v43 )
      {
        v63 = *(_QWORD *)i;
        v45 = memcmp(v61, *(const void **)(v42 + 8), v43);
        v42 = v63;
        if ( v45 )
          break;
      }
      if ( v44 == v29 || v44 <= v29 )
      {
        v32 = v40;
        v30 = v39;
        v31 = v32;
        if ( v30 >= i )
          goto LABEL_57;
LABEL_39:
        *(_QWORD *)v30 = v42;
        *(_QWORD *)i = v34;
        v33 = *(_QWORD *)v32;
        v29 = *(_QWORD *)(v33 + 16);
        v28 = *(const void **)(v33 + 8);
        goto LABEL_40;
      }
LABEL_54:
      ;
    }
    if ( v45 < 0 )
      goto LABEL_54;
    v32 = v40;
    v30 = v39;
    v31 = v32;
    if ( v30 < i )
      goto LABEL_39;
LABEL_57:
    v46 = v30;
    v4 = v32;
    result = sub_2228C50(v46, v67, v58);
    v47 = v46 - v4;
    if ( v46 - v4 > 128 )
    {
      v5 = v46;
      if ( !v58 )
      {
LABEL_59:
        v48 = v47 >> 3;
        v49 = ((v47 >> 3) - 2) >> 1;
        sub_2228930((__int64)v4, v49, v47 >> 3, *(_QWORD *)&v4[8 * v49]);
        do
        {
          --v49;
          sub_2228930((__int64)v4, v49, v48, *(_QWORD *)&v4[8 * v49]);
        }
        while ( v49 );
        v50 = (__int64 *)(v70 - 8);
        do
        {
          v51 = *v50;
          v52 = (char *)v50-- - v4;
          v50[1] = *(_QWORD *)v4;
          result = sub_2228930((__int64)v4, 0, v52 >> 3, v51);
        }
        while ( v52 > 8 );
        return result;
      }
      continue;
    }
    return result;
  }
}
