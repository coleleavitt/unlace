__int64 *__fastcall sub_B3B670(__int64 **a1, unsigned int a2)
{
  __int64 *v2; // rbx
  unsigned int *v3; // rax
  unsigned int v4; // ecx
  __int64 v5; // rdx
  unsigned int v6; // r15d
  __int64 v7; // r13
  double v8; // xmm4_8
  unsigned int v9; // r14d
  __int64 v10; // rsi
  unsigned int v11; // r9d
  unsigned int v12; // r8d
  double v13; // xmm2_8
  __int64 v14; // rax
  unsigned int v15; // ebx
  __int64 v16; // r11
  __int64 v17; // rdx
  __int64 v18; // r12
  __int64 v19; // rdi
  unsigned int v20; // r10d
  __int64 v21; // rbp
  __int64 v22; // rax
  int v23; // r14d
  double v24; // xmm0_8
  __int64 i; // rax
  int v26; // r12d
  double v27; // xmm1_8
  __int64 j; // rax
  int v29; // r10d
  double v30; // xmm0_8
  __int64 v31; // rbx
  __int64 v32; // rdi
  __int64 k; // rax
  int v34; // r8d
  double v35; // xmm1_8
  int v36; // r10d
  int v37; // edx
  int v38; // r12d
  __int64 v39; // rax
  int v40; // r14d
  __int64 v42; // [rsp+0h] [rbp-90h]
  unsigned int v43; // [rsp+Ch] [rbp-84h]
  __int64 *v44; // [rsp+10h] [rbp-80h]
  __int64 v45; // [rsp+18h] [rbp-78h]
  __int64 v46; // [rsp+20h] [rbp-70h]
  unsigned int *v47; // [rsp+28h] [rbp-68h]
  __int64 *v48; // [rsp+30h] [rbp-60h]
  __int64 *v49; // [rsp+38h] [rbp-58h]
  int v50; // [rsp+40h] [rbp-50h]
  unsigned int v51; // [rsp+44h] [rbp-4Ch]
  unsigned int *v52; // [rsp+48h] [rbp-48h]
  __int64 v53; // [rsp+50h] [rbp-40h]

  v2 = a1[2];
  v43 = a2;
  v44 = v2;
  v3 = (unsigned int *)v2 + a2;
  v45 = a2;
  v4 = *v3;
  if ( v2 )
    v50 = *((_DWORD *)v2 - 1);
  else
    v50 = 0;
  v5 = v4;
  v6 = 2 * a2;
  v48 = a1[3];
  if ( v50 <= (int)(2 * a2) )
    goto LABEL_82;
  v49 = a1[1];
  v7 = *v49;
  v46 = **a1;
  v8 = *(double *)(v46 + 8LL * v4);
  while ( 2 )
  {
    v9 = v6 + 1;
    v10 = LODWORD(v44[v6 / 2]);
    v47 = (unsigned int *)&v44[v6 / 2];
    v11 = *v47;
    v12 = *v47;
    v13 = *(double *)(v46 + 8 * v10);
    v14 = *((unsigned int *)v49 + 2);
    v15 = v14 - 1;
    v16 = 24 * v14;
    v17 = v7 + 24 * v14;
    v18 = 24LL * (((_DWORD)v14 - 1) & (unsigned int)v10);
    v42 = v18;
    v19 = v7 + v18;
    if ( (int)(v6 + 1) >= v50 )
    {
LABEL_44:
      v9 = v6;
      if ( v42 == v16 )
        goto LABEL_25;
LABEL_45:
      j = v19;
      while ( 1 )
      {
        v36 = *(_DWORD *)(j + 4);
        if ( v36 == 2 )
        {
          if ( *(_DWORD *)j == v12 && *(_DWORD *)(j + 8) == v12 )
          {
LABEL_32:
            v30 = *(double *)(j + 16);
            goto LABEL_33;
          }
        }
        else if ( !v36 )
        {
          goto LABEL_53;
        }
        j += 24;
        if ( j == v17 )
          goto LABEL_25;
      }
    }
    v20 = *((_DWORD *)v44 + v9);
    v52 = (unsigned int *)v44 + v9;
    v53 = 24LL * (v15 & v20);
    v21 = v7 + v53;
    if ( v53 == v16 )
      goto LABEL_73;
    v51 = v6 + 1;
    v22 = v7 + v53;
    do
    {
      v23 = *(_DWORD *)(v22 + 4);
      if ( v23 == 2 )
      {
        if ( v20 == *(_DWORD *)v22 && v20 == *(_DWORD *)(v22 + 8) )
        {
          v9 = v6 + 1;
          v24 = *(double *)(v22 + 16);
          goto LABEL_14;
        }
      }
      else if ( !v23 )
      {
LABEL_62:
        v9 = v51;
LABEL_63:
        v24 = 0.0;
        if ( v16 == v18 )
          goto LABEL_15;
LABEL_64:
        i = v7 + v18;
        while ( 1 )
        {
          v38 = *(_DWORD *)(i + 4);
          if ( v38 == 2 )
          {
            if ( *(_DWORD *)i == (_DWORD)v10 && *(_DWORD *)(i + 8) == (_DWORD)v10 )
            {
LABEL_22:
              v27 = *(double *)(i + 16);
              goto LABEL_23;
            }
          }
          else if ( !v38 )
          {
            goto LABEL_71;
          }
          i += 24;
          if ( i == v17 )
            goto LABEL_15;
        }
      }
      v22 += 24;
    }
    while ( v22 != v17 );
    v9 = v6 + 1;
LABEL_73:
    if ( v21 == v7 )
      goto LABEL_63;
    v51 = v9;
    v39 = v7;
    while ( 1 )
    {
      v40 = *(_DWORD *)(v39 + 4);
      if ( v40 != 2 )
      {
        if ( !v40 )
          goto LABEL_62;
        goto LABEL_76;
      }
      if ( v20 == *(_DWORD *)v39 && v20 == *(_DWORD *)(v39 + 8) )
        break;
LABEL_76:
      v39 += 24;
      if ( v21 == v39 )
        goto LABEL_62;
    }
    v9 = v51;
    v24 = *(double *)(v39 + 16);
LABEL_14:
    if ( v16 != v18 )
      goto LABEL_64;
LABEL_15:
    if ( v7 != v19 )
    {
      for ( i = v7; i != v19; i += 24 )
      {
        v26 = *(_DWORD *)(i + 4);
        if ( v26 == 2 )
        {
          if ( *(_DWORD *)i == (_DWORD)v10 && *(_DWORD *)(i + 8) == (_DWORD)v10 )
            goto LABEL_22;
        }
        else if ( !v26 )
        {
          break;
        }
      }
    }
LABEL_71:
    v27 = 0.0;
LABEL_23:
    if ( v24 + *(double *)(v46 + 8LL * v20) <= v27 + v13 )
      goto LABEL_44;
    v19 = v7 + v53;
    v13 = *(double *)(v46 + 8LL * v20);
    v12 = v20;
    v11 = v20;
    v10 = v20;
    v47 = v52;
    if ( v53 != v16 )
      goto LABEL_45;
LABEL_25:
    if ( v7 != v19 )
    {
      for ( j = v7; j != v19; j += 24 )
      {
        v29 = *(_DWORD *)(j + 4);
        if ( v29 == 2 )
        {
          if ( *(_DWORD *)j == v12 && *(_DWORD *)(j + 8) == v12 )
            goto LABEL_32;
        }
        else if ( !v29 )
        {
          break;
        }
      }
    }
LABEL_53:
    v30 = 0.0;
LABEL_33:
    v31 = v4 & v15;
    v32 = v7 + 24 * v31;
    if ( 24 * v31 != v16 )
    {
      for ( k = v7 + 24 * v31; k != v17; k += 24 )
      {
        v34 = *(_DWORD *)(k + 4);
        if ( v34 == 2 )
        {
          if ( *(_DWORD *)k == v4 && *(_DWORD *)(k + 8) == v4 )
          {
LABEL_40:
            v35 = *(double *)(k + 16);
            goto LABEL_41;
          }
        }
        else if ( !v34 )
        {
          goto LABEL_52;
        }
      }
    }
    if ( v7 != v32 )
    {
      for ( k = v7; v32 != k; k += 24 )
      {
        v37 = *(_DWORD *)(k + 4);
        if ( v37 == 2 )
        {
          if ( *(_DWORD *)k == v4 && *(_DWORD *)(k + 8) == v4 )
            goto LABEL_40;
        }
        else if ( !v37 )
        {
          break;
        }
      }
    }
LABEL_52:
    v35 = 0.0;
LABEL_41:
    v3 = (unsigned int *)v44 + v45;
    if ( v30 + v13 <= v35 + v8 )
    {
      v5 = v4;
    }
    else
    {
      *v3 = v11;
      v6 = 2 * v9;
      *((_DWORD *)v48 + v10) = v43;
      if ( (int)(2 * v9) < v50 )
      {
        v43 = v9;
        v45 = v9;
        continue;
      }
      v5 = v4;
      v3 = v47;
      v43 = v9;
    }
    break;
  }
LABEL_82:
  *v3 = v4;
  *((_DWORD *)v48 + v5) = v43;
  return v48;
}

