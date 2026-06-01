__int64 __fastcall sub_C8AAA0(__int64 *a1, __int64 a2, __int64 *a3, __int64 *a4)
{
  _DWORD *v4; // rax
  __int64 v9; // rdi
  __int64 v10; // r11
  __int64 v11; // rbp
  __int64 v12; // rax
  int v13; // r8d
  __int64 *v14; // rcx
  unsigned int v15; // edx
  __int64 *v16; // rsi
  __int64 v17; // rdx
  __int64 *v18; // r10
  __int64 *i; // rax
  __int64 v20; // rdx
  void *v21; // rdi
  __int64 v22; // r12
  __int64 v23; // rdi
  __int64 v24; // r8
  __int64 v25; // r13
  __int64 v26; // rax
  __int64 *v27; // rcx
  int v28; // r10d
  unsigned int v29; // edx
  __int64 *v30; // rsi
  __int64 v31; // rdx
  __int64 *v32; // r11
  __int64 *v33; // rax
  __int64 v34; // rdx
  void *v35; // rbp
  __int64 v36; // rax
  __int64 v37; // r13
  __int64 v38; // r14
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // r13
  __int64 v42; // rsi
  __int64 v43; // rdi
  void *v45; // rbp
  __int64 v46; // rax
  __int64 v47; // r13
  __int64 v48; // rbp
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rbp
  void *v52; // rbp
  int v53[2]; // [rsp+0h] [rbp-70h]
  char v54; // [rsp+17h] [rbp-59h] BYREF
  __int64 v55; // [rsp+18h] [rbp-58h] BYREF
  __int64 v56; // [rsp+20h] [rbp-50h]
  __int64 v57; // [rsp+28h] [rbp-48h] BYREF
  __int64 v58; // [rsp+30h] [rbp-40h]

  v4 = *(_DWORD **)(a2 + 24);
  if ( !v4 || *v4 || v4[1] != 2 )
    return 5;
  v9 = a1[1];
  v10 = *a3;
  v55 = 0;
  v11 = a3[1];
  v57 = 1;
  v12 = *(unsigned int *)(v9 + 768);
  v13 = *(_DWORD *)(v10 + 12);
  v14 = *(__int64 **)(v9 + 760);
  v56 = 0;
  v58 = 0;
  v15 = v12 - 1;
  v12 *= 16;
  v16 = (__int64 *)((char *)v14 + v12);
  v17 = 16LL * (v13 & v15);
  v18 = &v14[(unsigned __int64)v17 / 8];
  if ( v17 != v12 )
  {
    for ( i = &v14[(unsigned __int64)v17 / 8]; v16 != i; i += 2 )
    {
      v20 = *i;
      if ( (unsigned __int64)*i > 1 )
      {
        if ( *(_DWORD *)(v20 + 12) == v13 && v10 == v20 )
        {
LABEL_14:
          v22 = i[1];
          if ( (unsigned __int8)sub_1666AE0(v9 + 24, v11, &v55, &v54) )
          {
            v47 = *a1;
            v48 = a1[1] + 40;
            v49 = sub_15D1F10(v22);
            sub_16746C0(v48, &v55, v49);
            v50 = sub_15E1B70(v47);
            v51 = v50;
            if ( v50 )
              ++*(_DWORD *)(v50 + 8);
            sub_C8A9F0(*a4, a4[1]);
            *a4 = v51;
            v52 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, &v55);
            sub_182CBA0(v52, &v57);
            return 4;
          }
          v21 = qword_1C7F2C0;
          goto LABEL_16;
        }
      }
      else if ( !v20 )
      {
        goto LABEL_12;
      }
    }
  }
  for ( ; v18 != v14; v14 += 2 )
  {
    v36 = *v14;
    if ( (unsigned __int64)*v14 > 1 )
    {
      if ( *(_DWORD *)(v36 + 12) == v13 && v10 == v36 )
      {
        i = v14;
        goto LABEL_14;
      }
    }
    else if ( !v36 )
    {
      break;
    }
  }
LABEL_12:
  v21 = qword_1C7F2C0;
LABEL_16:
  sub_182CBA0(v21, &v55);
  sub_182CBA0(v21, &v57);
  v23 = a1[1];
  v24 = *a3;
  v55 = 0;
  v57 = 1;
  v25 = a3[1];
  v26 = *(unsigned int *)(v23 + 768);
  v27 = *(__int64 **)(v23 + 760);
  v56 = 0;
  v58 = 0;
  v28 = *(_DWORD *)(v25 + 12);
  v29 = v26 - 1;
  v26 *= 16;
  v30 = (__int64 *)((char *)v27 + v26);
  v31 = 16LL * (v28 & v29);
  v32 = &v27[(unsigned __int64)v31 / 8];
  if ( v31 == v26 )
  {
LABEL_41:
    if ( v27 != v32 )
    {
      while ( 1 )
      {
        v46 = *v27;
        if ( (unsigned __int64)*v27 > 1 )
        {
          if ( *(_DWORD *)(v46 + 12) == v28 && v25 == v46 )
          {
            v33 = v27;
            goto LABEL_33;
          }
        }
        else if ( !v46 )
        {
          goto LABEL_23;
        }
        v27 += 2;
        if ( v32 == v27 )
          goto LABEL_23;
      }
    }
    goto LABEL_23;
  }
  v33 = &v27[(unsigned __int64)v31 / 8];
  while ( 1 )
  {
    v34 = *v33;
    if ( (unsigned __int64)*v33 > 1 )
      break;
    if ( !v34 )
      goto LABEL_23;
LABEL_20:
    v33 += 2;
    if ( v30 == v33 )
      goto LABEL_41;
  }
  if ( *(_DWORD *)(v34 + 12) != v28 || v25 != v34 )
    goto LABEL_20;
LABEL_33:
  v37 = v33[1];
  if ( (unsigned __int8)sub_1666AE0(v23 + 24, v24, &v55, &v54) )
  {
    *(_QWORD *)v53 = *a1;
    v38 = a1[1] + 40;
    v39 = sub_15D1F10(v37);
    sub_16746C0(v38, &v55, v39);
    v40 = sub_15E1B70(v53[0]);
    v41 = v40;
    if ( v40 )
      ++*(_DWORD *)(v40 + 8);
    v42 = *a4;
    if ( *a4 )
    {
      v43 = a4[1];
      if ( (*(_DWORD *)(v42 + 8))-- == 1 )
        sub_15D7BC0(v43, v42);
    }
    v45 = qword_1C7F2C0;
    *a4 = v41;
    sub_182CBA0(v45, &v55);
    sub_182CBA0(v45, &v57);
    return 4;
  }
LABEL_23:
  v35 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v55);
  sub_182CBA0(v35, &v57);
  return 5;
}

