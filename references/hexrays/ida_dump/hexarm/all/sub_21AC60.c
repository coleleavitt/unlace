__int64 __fastcall sub_21AC60(unsigned int *a1, int *a2, __int64 a3, __int64 *a4)
{
  __int64 result; // rax
  __int64 v7; // r14
  __int64 v8; // rax
  __int64 v9; // r14
  unsigned int *v10; // r8
  __int64 v11; // rdx
  char *v12; // r14
  __int64 v13; // rcx
  __int64 v14; // r15
  int v15; // eax
  unsigned int v16; // eax
  unsigned int v17; // eax
  __int64 v18; // r9
  __int64 v19; // rsi
  int v20; // edi
  unsigned int v21; // edx
  int v22; // eax
  unsigned int v23; // eax
  __int64 v24; // rdx
  int *v25; // r15
  __int64 v26; // rcx
  int v27; // esi
  __int64 v28; // r12
  unsigned int v29; // eax
  unsigned int v30; // eax
  __int64 v31; // r13
  __int64 v32; // r12
  int v33; // eax
  __int64 v34; // rax
  __int64 v35; // r13
  int v36; // eax
  __int64 v37; // rax
  int v38; // eax
  int v39; // eax
  unsigned int v40; // eax
  __int64 i; // r13
  int v42; // ecx
  __int64 v43; // r15
  signed int v44; // ecx
  unsigned int v45; // eax
  __int64 v46; // rdx
  __int64 v47; // r15
  unsigned int v48; // eax
  unsigned int v49; // eax
  unsigned int v50; // edx
  signed int v51; // eax
  unsigned int v52; // eax
  unsigned int v53; // eax
  unsigned int v54; // edx
  unsigned int v55; // eax
  int *v56; // [rsp+8h] [rbp-60h]
  __int64 v58; // [rsp+18h] [rbp-50h]
  __int64 v59; // [rsp+18h] [rbp-50h]
  __int64 v60; // [rsp+18h] [rbp-50h]
  __int64 v61; // [rsp+18h] [rbp-50h]
  unsigned int *v62; // [rsp+20h] [rbp-48h]
  unsigned int *v63; // [rsp+20h] [rbp-48h]
  unsigned int *v64; // [rsp+20h] [rbp-48h]
  unsigned int *v65; // [rsp+28h] [rbp-40h]

  result = (char *)a2 - (char *)a1;
  v56 = a2;
  if ( (char *)a2 - (char *)a1 <= 64 )
    return result;
  while ( 2 )
  {
    v7 = result;
    v8 = result >> 3;
    v9 = v7 >> 2;
    if ( !a3 )
    {
      for ( i = v8 - 1; ; --i )
      {
        sub_21AA00((__int64)a1, i, v9, a1[i], a4);
        if ( !i )
          break;
      }
      for ( result = (char *)v56 - (char *)a1;
            (char *)v56 - (char *)a1 > 4;
            result = sub_21AA00((__int64)a1, 0, ((char *)v56 - (char *)a1) >> 2, v42, a4) )
      {
        v42 = *--v56;
        *v56 = *a1;
      }
      return result;
    }
    v10 = &a1[v8];
    v11 = *a4;
    v12 = (char *)(a1 + 1);
    --a3;
    v13 = *a4 + 104LL * (int)a1[1];
    v14 = *a4 + 104LL * (int)*v10;
    v15 = *(_DWORD *)(v14 + 24) & 0x100;
    if ( (*(_BYTE *)(v13 + 25) & 1) != 0 )
    {
      if ( !v15 )
      {
        v19 = v11 + 104LL * *(v56 - 1);
        if ( (*(_BYTE *)(v19 + 25) & 1) != 0 )
        {
          v43 = v11 + 104LL * *(v56 - 1);
          goto LABEL_67;
        }
        goto LABEL_10;
      }
    }
    else if ( v15 )
    {
      v19 = v11 + 104LL * *(v56 - 1);
      if ( (*(_BYTE *)(v19 + 25) & 1) == 0 )
        goto LABEL_40;
      v46 = *a4 + 104LL * (int)*v10;
      v47 = v19;
      goto LABEL_59;
    }
    v62 = v10;
    v58 = *a4 + 104LL * (int)a1[1];
    v16 = sub_1C2510((int *)v13, (int *)v14);
    v10 = v62;
    if ( v16 )
      v17 = v16 >> 31;
    else
      LOBYTE(v17) = *(_QWORD *)(v58 + 16) < *(_QWORD *)(v14 + 16);
    v18 = *a4;
    v19 = *a4 + 104LL * *(v56 - 1);
    v20 = *(_DWORD *)(v19 + 24) & 0x100;
    if ( (_BYTE)v17 )
    {
      v21 = *v62;
      v14 = v18 + 104LL * (int)*v62;
      if ( (*(_BYTE *)(v14 + 25) & 1) != 0 )
      {
        if ( !v20 )
        {
LABEL_13:
          v23 = *a1;
          *a1 = v21;
          *v10 = v23;
          v24 = (int)*a1;
          goto LABEL_14;
        }
      }
      else if ( v20 )
      {
        v24 = (int)a1[1];
        v43 = *a4 + 104LL * *(v56 - 1);
        v13 = v18 + 104LL * (int)v24;
        if ( (*(_BYTE *)(v13 + 25) & 1) == 0 )
          goto LABEL_66;
        goto LABEL_67;
      }
LABEL_10:
      v63 = v10;
      v22 = sub_1C2510((int *)v14, (int *)v19);
      v10 = v63;
      if ( v22 )
      {
        if ( v22 < 0 )
          goto LABEL_12;
      }
      else if ( *(_QWORD *)(v14 + 16) < *(_QWORD *)(v19 + 16) )
      {
LABEL_12:
        v21 = *v63;
        goto LABEL_13;
      }
      v51 = *(v56 - 1);
      v24 = (int)a1[1];
      v13 = *a4 + 104 * v24;
      v43 = *a4 + 104LL * v51;
      if ( (*(_BYTE *)(v13 + 25) & 1) == 0 )
      {
LABEL_66:
        if ( (*(_BYTE *)(v43 + 25) & 1) != 0 )
        {
LABEL_71:
          *(_QWORD *)a1 = __ROL8__(*(_QWORD *)a1, 32);
          goto LABEL_14;
        }
        goto LABEL_67;
      }
      if ( (*(_BYTE *)(v43 + 25) & 1) == 0 )
      {
LABEL_79:
        v54 = *a1;
        *a1 = v51;
        *(v56 - 1) = v54;
        v24 = (int)*a1;
        goto LABEL_14;
      }
LABEL_67:
      v61 = v13;
      v52 = sub_1C2510((int *)v13, (int *)v43);
      if ( v52 )
        v53 = v52 >> 31;
      else
        LOBYTE(v53) = *(_QWORD *)(v61 + 16) < *(_QWORD *)(v43 + 16);
      if ( !(_BYTE)v53 )
      {
        v24 = (int)a1[1];
        goto LABEL_71;
      }
      v51 = *(v56 - 1);
      goto LABEL_79;
    }
    v24 = (int)a1[1];
    v40 = a1[1];
    v13 = v18 + 104 * v24;
    if ( (*(_BYTE *)(v13 + 25) & 1) != 0 )
    {
      if ( !v20 )
        goto LABEL_43;
LABEL_40:
      v65 = v10;
      v59 = v13;
      v39 = sub_1C2510((int *)v13, (int *)v19);
      v10 = v65;
      if ( v39 )
      {
        if ( v39 < 0 )
          goto LABEL_42;
      }
      else if ( *(_QWORD *)(v59 + 16) < *(_QWORD *)(v19 + 16) )
      {
LABEL_42:
        v24 = (int)a1[1];
        v40 = a1[1];
LABEL_43:
        *(_QWORD *)a1 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v40), _mm_cvtsi32_si128(*a1)).m128i_u64[0];
        goto LABEL_14;
      }
      v44 = *(v56 - 1);
      v45 = *v65;
      v46 = *a4 + 104LL * (int)*v65;
      v47 = *a4 + 104LL * v44;
      if ( (*(_BYTE *)(v46 + 25) & 1) != 0 )
      {
        if ( (*(_BYTE *)(v47 + 25) & 1) == 0 )
          goto LABEL_81;
        goto LABEL_59;
      }
      goto LABEL_58;
    }
    if ( !v20 )
      goto LABEL_40;
    v47 = *a4 + 104LL * *(v56 - 1);
    v45 = *v62;
    v46 = v18 + 104LL * (int)*v62;
    if ( (*(_BYTE *)(v46 + 25) & 1) == 0 )
    {
LABEL_58:
      if ( (*(_BYTE *)(v47 + 25) & 1) != 0 )
      {
LABEL_63:
        v50 = *a1;
        *a1 = v45;
        *v10 = v50;
        v24 = (int)*a1;
        goto LABEL_14;
      }
    }
LABEL_59:
    v64 = v10;
    v60 = v46;
    v48 = sub_1C2510((int *)v46, (int *)v47);
    v10 = v64;
    if ( v48 )
      v49 = v48 >> 31;
    else
      LOBYTE(v49) = *(_QWORD *)(v60 + 16) < *(_QWORD *)(v47 + 16);
    if ( !(_BYTE)v49 )
    {
      v45 = *v64;
      goto LABEL_63;
    }
    v44 = *(v56 - 1);
LABEL_81:
    v55 = *a1;
    *a1 = v44;
    *(v56 - 1) = v55;
    v24 = (int)*a1;
LABEL_14:
    v25 = v56;
    while ( 2 )
    {
      v26 = *a4;
      v27 = *(_DWORD *)(*a4 + 104 * v24 + 24);
      while ( 1 )
      {
        v31 = v26 + 104LL * *(int *)v12;
        if ( (*(_BYTE *)(v31 + 25) & 1) != 0 )
        {
          if ( (v27 & 0x100) == 0 )
            goto LABEL_20;
        }
        else if ( (v27 & 0x100) != 0 )
        {
          goto LABEL_28;
        }
        v28 = v26 + 104 * v24;
        v29 = sub_1C2510((int *)v31, (int *)v28);
        if ( v29 )
          v30 = v29 >> 31;
        else
          LOBYTE(v30) = *(_QWORD *)(v31 + 16) < *(_QWORD *)(v28 + 16);
        v24 = (int)*a1;
        v26 = *a4;
        v27 = *(_DWORD *)(*a4 + 104 * v24 + 24);
        if ( !(_BYTE)v30 )
          break;
LABEL_20:
        v12 += 4;
      }
      while ( 1 )
      {
LABEL_28:
        v34 = *--v25;
        v35 = v26 + 104 * v34;
        v36 = *(_DWORD *)(v35 + 24) & 0x100;
        if ( (v27 & 0x100) != 0 )
        {
          if ( !v36 )
          {
            do
            {
              v37 = *--v25;
              v35 = v26 + 104 * v37;
            }
            while ( (*(_DWORD *)(v35 + 24) & 0x100) == 0 );
          }
        }
        else if ( v36 )
        {
          goto LABEL_34;
        }
        v32 = v26 + 104 * v24;
        v33 = sub_1C2510((int *)v32, (int *)v35);
        if ( v33 )
          break;
        if ( *(_QWORD *)(v32 + 16) >= *(_QWORD *)(v35 + 16) )
          goto LABEL_34;
LABEL_27:
        v24 = (int)*a1;
        v26 = *a4;
        v27 = *(_DWORD *)(*a4 + 104 * v24 + 24);
      }
      if ( v33 < 0 )
        goto LABEL_27;
LABEL_34:
      if ( v12 < (char *)v25 )
      {
        v38 = *(_DWORD *)v12;
        v12 += 4;
        *((_DWORD *)v12 - 1) = *v25;
        *v25 = v38;
        v24 = (int)*a1;
        continue;
      }
      break;
    }
    sub_21AC60(v12, v56, a3, a4);
    result = v12 - (char *)a1;
    if ( v12 - (char *)a1 > 64 )
    {
      v56 = (int *)v12;
      continue;
    }
    return result;
  }
}
