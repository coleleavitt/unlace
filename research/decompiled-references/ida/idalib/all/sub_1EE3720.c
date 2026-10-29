__int64 __fastcall sub_1EE3720(__int64 a1, unsigned int a2, int a3, int a4, __int64 *a5)
{
  __int64 v5; // r15
  __int64 v7; // rbp
  __int64 v9; // rax
  __int64 v10; // r12
  __int64 v11; // rdx
  unsigned int v12; // edi
  int *v13; // rsi
  __int64 *v14; // r13
  int *v15; // rdx
  __int64 result; // rax
  __int64 v17; // rdx
  int v18; // ecx
  __int64 v19; // rax
  unsigned __int64 *v20; // r15
  __int64 v21; // r12
  __int64 v22; // rbp
  unsigned __int64 *v23; // r13
  unsigned __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  int v29; // esi
  __int64 v30; // rax
  unsigned __int64 *v31; // rbp
  unsigned __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rdx
  __int64 v38; // r12
  __int64 v39; // rbp
  unsigned __int64 *v40; // r13
  unsigned __int64 v41; // rax
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  int v45; // edx
  unsigned __int64 *v46; // rax
  unsigned __int64 *v47; // rdx
  unsigned __int64 v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // r9
  __int64 v53; // rcx
  __int64 v54; // rdx
  __int64 v55; // rax
  unsigned __int64 v56; // rsi
  __int64 v57; // rax
  __int64 v58; // rax
  __int64 v60; // [rsp+8h] [rbp-A0h]
  __int64 v61; // [rsp+8h] [rbp-A0h]
  __int64 v63; // [rsp+10h] [rbp-98h]
  __int64 v64; // [rsp+18h] [rbp-90h]
  unsigned __int64 v65; // [rsp+18h] [rbp-90h]
  int v66; // [rsp+24h] [rbp-84h]
  __int64 *v67; // [rsp+30h] [rbp-78h]
  unsigned __int64 v68; // [rsp+30h] [rbp-78h]
  __int64 *v69; // [rsp+38h] [rbp-70h]
  unsigned __int64 *v70; // [rsp+38h] [rbp-70h]
  int v71; // [rsp+5Ch] [rbp-4Ch] BYREF
  __m128 v72[4]; // [rsp+60h] [rbp-48h] BYREF

  v5 = a1 + 3696;
  v7 = a2;
  v9 = *(unsigned int *)(a1 + 3712);
  v10 = *(_QWORD *)(a1 + 80);
  v11 = *(_QWORD *)(a1 + 3696);
  if ( !(_DWORD)v9 )
    goto LABEL_11;
  v12 = (v9 - 1) & a2;
  v13 = (int *)(v11 + 32LL * v12);
  if ( *v13 != (_DWORD)v7 )
  {
    if ( *v13 )
    {
      v18 = 1;
      do
      {
        v12 = (v9 - 1) & (v18 + v12);
        v13 = (int *)(v11 + 32LL * v12);
        if ( *v13 == (_DWORD)v7 )
          goto LABEL_3;
        ++v18;
      }
      while ( *v13 );
    }
LABEL_11:
    sub_1ECCEB0(v72, (int *)(v11 + 32LL * (unsigned int)v9), (int *)(v11 + 32LL * (unsigned int)v9), v5, 1);
    v14 = (__int64 *)v72[0].m128_u64[0];
    goto LABEL_4;
  }
LABEL_3:
  sub_1ECCEB0(v72, v13, (int *)(32 * v9 + v11), v5, 1);
  v14 = (__int64 *)v72[0].m128_u64[0];
LABEL_4:
  v15 = (int *)(*(_QWORD *)(a1 + 3696) + 32LL * *(unsigned int *)(a1 + 3712));
  result = sub_1ECCEB0(v72, v15, v15, v5, 1);
  if ( v14 == (__int64 *)v72[0].m128_u64[0] )
    return result;
  v17 = v14[3];
  if ( !v17 )
    return result;
  v72[0].m128_i8[0] = 0;
  if ( (unsigned int)(v7 + 1) <= 1 )
    goto LABEL_18;
  if ( (int)v7 >= 0 )
  {
    v19 = *(_QWORD *)(v10 + 184) + 24 * v7;
    goto LABEL_15;
  }
  v56 = (unsigned int)(-2 - v7);
  v57 = *(_QWORD *)(*(_QWORD *)(v10 + 320) + 8LL * ((unsigned int)(-2 - v7) >> 6));
  if ( _bittest64(&v57, v56) )
    v19 = sub_101F8A0(v10 + 264, (int)v56);
  else
    v19 = sub_101F930(v10, v56, v72);
  v17 = v14[3];
  if ( !v72[0].m128_i8[0] )
  {
LABEL_15:
    if ( v19 && *(char *)(v19 + 3) >= 0 )
      a3 += *(_DWORD *)v19 & 0x7FFFFFFF;
  }
LABEL_18:
  v66 = a3 + a4;
  v20 = (unsigned __int64 *)v14[2];
  v60 = v14[1];
  v21 = (8 * v17) >> 3;
  if ( 8 * v17 <= 0 )
  {
    v31 = (unsigned __int64 *)v14[2];
    goto LABEL_31;
  }
  v69 = v14;
  while ( 1 )
  {
    v22 = v21 >> 1;
    v23 = &v20[v21 >> 1];
    v72[0].m128_u64[0] = *v23;
    v64 = *(_QWORD *)(a1 + 80);
    v24 = sub_1EE1310(a1, v60, v72[0].m128_u64[0]);
    v29 = 0;
    if ( v24 > 0x13 )
    {
      v68 = v24;
      v55 = sub_1EDB740(a1, v24, v25, v26, v27, v28);
      if ( v55 )
      {
        v29 = *(_DWORD *)(v55 + 24);
      }
      else
      {
        v71 = 0;
        sub_1F1F830(a1, v68, &v71);
        v29 = v71;
      }
      if ( v29 < 0 )
        v29 = sub_1021D50(v64, v29);
    }
    if ( !sub_10246C0(*(_QWORD *)(a1 + 80), v29, a3) )
      break;
    v20 = v23 + 1;
    v22 = v21 - v22 - 1;
    if ( v22 <= 0 )
      goto LABEL_25;
LABEL_21:
    v21 = v22;
  }
  if ( v22 )
    goto LABEL_21;
LABEL_25:
  v14 = v69;
  v30 = v69[2];
  if ( (unsigned __int64 *)v30 == v20 )
  {
    v31 = v20;
    v17 = v69[3];
  }
  else
  {
    v31 = v20 - 1;
    if ( v20 - 1 == (unsigned __int64 *)v30 )
    {
      --v20;
LABEL_61:
      v17 = v69[3];
    }
    else
    {
      while ( 1 )
      {
        v32 = sub_1EE1310(a1, v69[1], *v31);
        if ( (*(_BYTE *)(sub_1EDB980((_QWORD *)a1, v32, v33, v34, v35, v36) + 29) & 0x10) == 0 )
          break;
        v20 = (unsigned __int64 *)v69[2];
        if ( --v31 == v20 )
          goto LABEL_61;
      }
      v20 = (unsigned __int64 *)v69[2];
      v17 = v69[3];
    }
  }
LABEL_31:
  v37 = v17;
  v38 = (v37 * 8) >> 3;
  if ( v37 > 0 )
  {
    v67 = v14;
    v70 = v31;
    while ( 1 )
    {
      v39 = v38 >> 1;
      v40 = &v20[v38 >> 1];
      v72[0].m128_u64[0] = *v40;
      v63 = *(_QWORD *)(a1 + 80);
      v41 = sub_1EE1310(a1, v60, v72[0].m128_u64[0]);
      v45 = 0;
      if ( v41 > 0x13 )
      {
        v65 = v41;
        v58 = sub_1EDB740(a1, v41, 0, v42, v43, v44);
        if ( v58 )
        {
          v45 = *(_DWORD *)(v58 + 24);
        }
        else
        {
          v71 = 0;
          sub_1F1F830(a1, v65, &v71);
          v45 = v71;
        }
        if ( v45 < 0 )
          v45 = sub_1021D50(v63, v45);
      }
      if ( sub_10246C0(*(_QWORD *)(a1 + 80), v66, v45) )
      {
        if ( !v39 )
        {
LABEL_38:
          v14 = v67;
          v31 = v70;
          v46 = (unsigned __int64 *)v67[2];
          v37 = v67[3];
          goto LABEL_39;
        }
      }
      else
      {
        v20 = v40 + 1;
        v39 = v38 - v39 - 1;
        if ( v39 <= 0 )
          goto LABEL_38;
      }
      v38 = v39;
    }
  }
  v46 = v20;
LABEL_39:
  v47 = &v46[v37];
  result = (__int64)(v20 + 1);
  if ( v20 != v47 )
    ++v20;
  for ( ; v20 != v31; ++*((_DWORD *)a5 + 2) )
  {
    v48 = sub_1EE1310(a1, v14[1], *v31);
    result = sub_1EDB980((_QWORD *)a1, v48, v49, v50, v51, v52);
    v53 = *((unsigned int *)a5 + 2);
    if ( v53 + 1 > (unsigned __int64)*((unsigned int *)a5 + 3) )
    {
      v61 = result;
      sub_2237220(a5, a5 + 2, v53 + 1, 8);
      v53 = *((unsigned int *)a5 + 2);
      v54 = *a5;
      result = v61;
    }
    else
    {
      v54 = *a5;
    }
    ++v31;
    *(_QWORD *)(v54 + 8 * v53) = result;
  }
  return result;
}
