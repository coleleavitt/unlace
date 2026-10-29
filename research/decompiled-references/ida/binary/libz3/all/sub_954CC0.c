bool __fastcall sub_954CC0(
        __int64 *a1,
        unsigned int *a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6,
        unsigned int a7,
        unsigned int a8,
        __int64 a9,
        __int64 a10)
{
  __int64 v14; // r14
  unsigned int v15; // edi
  __int64 v16; // r10
  unsigned int **v17; // rcx
  int v18; // r11d
  __int64 v19; // r10
  unsigned int **v20; // rsi
  __int64 v21; // r11
  unsigned int **v22; // r8
  unsigned int **v23; // rax
  unsigned int *v24; // rdx
  unsigned int **v25; // rax
  unsigned int *v26; // rdx
  unsigned int v27; // r13d
  unsigned int **v28; // rax
  unsigned int *v29; // rdx
  unsigned int *v30; // rax
  unsigned int *v31; // rax
  __int64 v32; // rax
  __int64 v33; // r13
  unsigned int v35; // r13d
  int v36; // [rsp-8h] [rbp-50h]
  int v37; // [rsp+0h] [rbp-48h]
  int v38; // [rsp+8h] [rbp-40h]
  unsigned int v39; // [rsp+Ch] [rbp-3Ch]
  int v40; // [rsp+10h] [rbp-38h]
  void *v41; // [rsp+18h] [rbp-30h]

  v14 = *a1;
  v15 = a2[3];
  v16 = *(unsigned int *)(v14 + 1112);
  v17 = *(unsigned int ***)(v14 + 1104);
  v18 = v16 - 1;
  v19 = 16 * v16;
  v20 = &v17[(unsigned __int64)v19 / 8];
  v21 = 16LL * (v15 & v18);
  v22 = &v17[(unsigned __int64)v21 / 8];
  if ( v21 == v19 )
  {
LABEL_9:
    if ( v17 == v22 )
      goto LABEL_8;
    v25 = *(unsigned int ***)(v14 + 1104);
    while ( 1 )
    {
      v26 = *v25;
      if ( (unsigned __int64)*v25 > 1 )
      {
        if ( v26[3] == v15 && a2 == v26 )
        {
          v35 = v25[1][2];
          if ( a7 >= v35 )
            v35 = a7;
          v39 = v35;
          if ( v21 == v19 )
          {
            while ( 1 )
            {
LABEL_32:
              v30 = *v17;
              if ( (unsigned __int64)*v17 > 1 )
              {
                if ( v30[3] == v15 && a2 == v30 )
                {
                  v28 = v17;
                  goto LABEL_36;
                }
              }
              else if ( !v30 )
              {
                goto LABEL_8;
              }
              v17 += 2;
              if ( v17 == v22 )
                goto LABEL_8;
            }
          }
          goto LABEL_20;
        }
      }
      else if ( !v26 )
      {
        goto LABEL_8;
      }
      v25 += 2;
      if ( v22 == v25 )
        goto LABEL_8;
    }
  }
  v23 = &v17[(unsigned __int64)v21 / 8];
  while ( 1 )
  {
    v24 = *v23;
    if ( (unsigned __int64)*v23 <= 1 )
    {
      if ( !v24 )
        goto LABEL_8;
      goto LABEL_5;
    }
    if ( v24[3] == v15 && a2 == v24 )
      break;
LABEL_5:
    v23 += 2;
    if ( v20 == v23 )
      goto LABEL_9;
  }
  v27 = v23[1][2];
  if ( a7 >= v27 )
    v27 = a7;
  v39 = v27;
LABEL_20:
  v28 = &v17[(unsigned __int64)v21 / 8];
  while ( 1 )
  {
    while ( 1 )
    {
      v29 = *v28;
      if ( (unsigned __int64)*v28 > 1 )
        break;
      if ( !v29 )
        goto LABEL_8;
      v28 += 2;
      if ( v28 == v20 )
      {
LABEL_27:
        if ( v17 != v22 )
          goto LABEL_32;
LABEL_8:
        BUG();
      }
    }
    if ( v29[3] == v15 && a2 == v29 )
      break;
    v28 += 2;
    if ( v28 == v20 )
      goto LABEL_27;
  }
LABEL_36:
  v31 = v28[1];
  if ( v31[10] < v39 )
    v31[10] = v39;
  v32 = sub_B70A50(*(_QWORD *)(v14 + 8) + 8440LL, a2, *a2, a4, a5, a6);
  v33 = v32;
  if ( v32 )
  {
    if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v14 + 8) + 104LL) + 912LL) )
      sub_956FE0(v14, v32, (int)a2, a3, a4, a5, a10, v36, v37, v38, v40, v41);
    sub_ADBB40(v14 + 24, v33, a3, v39, a8, a7);
    ++*(_DWORD *)(v14 + 1200);
  }
  return v33 != 0;
}

