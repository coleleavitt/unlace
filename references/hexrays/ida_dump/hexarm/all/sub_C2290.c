__int64 __fastcall sub_C2290(_QWORD *a1)
{
  __int64 v2; // rbp
  __int64 v3; // rdi
  int v4; // ebp
  __int64 v5; // r12
  unsigned int *v6; // rax
  __int64 v7; // rdi
  __int64 v8; // rdi
  unsigned __int64 *v9; // rax
  unsigned __int64 v10; // rbp
  __int64 v11; // rdi
  __int64 v12; // rdi
  __int64 v13; // rdi
  __int64 v14; // r13
  __int64 v15; // r14
  __int64 v16; // r12
  __int64 v17; // rbp
  __int64 v18; // rdi
  __int64 v19; // rdi
  __int64 v20; // rdi
  __int64 v21; // rdi
  __int64 v22; // rdx
  __int64 v23; // r12
  __int64 i; // rbp
  __int64 *v25; // rax
  __int64 v26; // rdi
  __int64 v27; // rdi
  __int64 result; // rax
  unsigned __int64 v29; // rcx
  unsigned __int64 v30; // r12
  __int64 v31; // r13
  _QWORD *v32; // rdi
  _QWORD *v33; // rdi
  __int64 v34; // r13
  _QWORD *v35; // rdi
  _QWORD *v36; // rdi
  __int64 *v37; // rbp
  __int64 v38; // rdx
  __int64 *v39; // r12
  __int64 v40; // rax
  __int64 *v41; // rdi
  __int64 *v42; // rdi
  __int64 *v43; // r12
  __int64 *v44; // rdi
  __int64 *v45; // rdi
  __int64 v46; // rax
  unsigned __int64 v47; // [rsp+8h] [rbp-30h]
  unsigned __int64 v48; // [rsp+8h] [rbp-30h]
  unsigned __int64 v49; // [rsp+8h] [rbp-30h]
  unsigned __int64 v50; // [rsp+8h] [rbp-30h]
  unsigned __int64 v51; // [rsp+8h] [rbp-30h]
  unsigned __int64 v52; // [rsp+8h] [rbp-30h]

  v2 = a1[27];
  if ( v2 )
  {
    sub_BAB60((_QWORD *)a1[27]);
    j__qfree(v2);
  }
  v3 = a1[41];
  if ( v3 )
  {
    v4 = *((_DWORD *)a1 + 50) - 1;
    if ( v4 >= 0 )
    {
      v5 = 16LL * (unsigned int)v4;
      while ( 1 )
      {
        --v4;
        v6 = (unsigned int *)(v5 + a1[24]);
        v5 -= 16;
        sub_1379F0(v3, *v6, *((_QWORD *)v6 + 1));
        if ( v4 == -1 )
          break;
        v3 = a1[41];
      }
    }
  }
  v7 = a1[49];
  *((_OWORD *)a1 + 20) = 0;
  if ( v7 )
  {
    a1[50] = 0;
    qfree(v7);
  }
  v8 = a1[46];
  if ( v8 )
  {
    a1[47] = 0;
    qfree(v8);
  }
  v9 = (unsigned __int64 *)a1[44];
  if ( v9 )
  {
    v10 = *v9;
    if ( !a1[45] )
    {
      *v9 = (unsigned __int64)v9 & 0xFFFFFFFFFFFFFFFCLL | *v9 & 3;
      *(__m128i *)(a1[44] + 8LL) = _mm_unpacklo_epi64(
                                     (__m128i)(unsigned __int64)a1[44],
                                     (__m128i)(unsigned __int64)a1[44]);
      *(_QWORD *)a1[44] &= ~1uLL;
      *(_QWORD *)a1[44] |= 2uLL;
      goto LABEL_15;
    }
    v30 = v10 & 0xFFFFFFFFFFFFFFFCLL;
    if ( (*(_BYTE *)(v10 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
    {
LABEL_67:
      *v9 = (unsigned __int64)v9 & 0xFFFFFFFFFFFFFFFCLL | v10 & 3;
      *(__m128i *)(a1[44] + 8LL) = _mm_unpacklo_epi64(
                                     (__m128i)(unsigned __int64)a1[44],
                                     (__m128i)(unsigned __int64)a1[44]);
      *(_QWORD *)a1[44] &= ~1uLL;
      *(_QWORD *)a1[44] |= 2uLL;
      a1[45] = 0;
LABEL_15:
      v11 = a1[44];
      if ( v11 )
        qfree(v11);
      goto LABEL_17;
    }
    v31 = *(_QWORD *)(v30 + 8);
    if ( (*(_BYTE *)v31 & 2) != 0 )
    {
      v34 = *(_QWORD *)(v30 + 16);
      if ( (*(_BYTE *)v34 & 2) != 0 )
        goto LABEL_63;
      goto LABEL_56;
    }
    v32 = *(_QWORD **)(v31 + 8);
    if ( (*(_BYTE *)v32 & 2) != 0 )
    {
      v33 = *(_QWORD **)(v31 + 16);
      if ( (*(_BYTE *)v33 & 2) != 0 )
      {
LABEL_94:
        sub_11C7E0(v31 + 96);
        sub_11C7E0(v31 + 80);
        sub_11C7E0(v31 + 64);
        *(_QWORD *)v31 |= 2uLL;
LABEL_53:
        if ( v31 )
          qfree(v31);
        v34 = *(_QWORD *)(v30 + 16);
        if ( (*(_BYTE *)v34 & 2) != 0 )
        {
LABEL_62:
          if ( (*(_BYTE *)v30 & 2) != 0 )
          {
LABEL_64:
            if ( v10 > 3 )
              qfree(v10 & 0xFFFFFFFFFFFFFFFCLL);
            v9 = (unsigned __int64 *)a1[44];
            v10 = *v9;
            goto LABEL_67;
          }
LABEL_63:
          sub_11C7E0(v30 + 96);
          sub_11C7E0(v30 + 80);
          sub_11C7E0(v30 + 64);
          *(_QWORD *)v30 |= 2uLL;
          goto LABEL_64;
        }
LABEL_56:
        v35 = *(_QWORD **)(v34 + 8);
        if ( (*(_BYTE *)v35 & 2) != 0 )
        {
          v36 = *(_QWORD **)(v34 + 16);
          if ( (*(_BYTE *)v36 & 2) != 0 )
          {
LABEL_101:
            sub_11C7E0(v34 + 96);
            sub_11C7E0(v34 + 80);
            sub_11C7E0(v34 + 64);
            *(_QWORD *)v34 |= 2uLL;
LABEL_60:
            if ( v34 )
              qfree(v34);
            goto LABEL_62;
          }
        }
        else
        {
          sub_B9160(v35);
          v36 = *(_QWORD **)(v34 + 16);
          if ( (*(_BYTE *)v36 & 2) != 0 )
            goto LABEL_59;
        }
        sub_B9160(v36);
LABEL_59:
        if ( (*(_BYTE *)v34 & 2) != 0 )
          goto LABEL_60;
        goto LABEL_101;
      }
    }
    else
    {
      sub_B9160(v32);
      v33 = *(_QWORD **)(v31 + 16);
      if ( (*(_BYTE *)v33 & 2) != 0 )
        goto LABEL_52;
    }
    sub_B9160(v33);
LABEL_52:
    if ( (*(_BYTE *)v31 & 2) != 0 )
      goto LABEL_53;
    goto LABEL_94;
  }
LABEL_17:
  qfree(a1[42]);
  v12 = a1[37];
  if ( v12 )
  {
    a1[38] = 0;
    qfree(v12);
  }
  v13 = a1[34];
  if ( v13 )
  {
    v14 = a1[35];
    if ( v14 )
    {
      v15 = 0;
      v16 = 0;
      do
      {
        v17 = v13 + v15;
        ++v16;
        v15 += 88;
        sub_11C7E0(v17 + 72);
        sub_11C7E0(v17 + 56);
        sub_11C7E0(v17 + 40);
        v13 = a1[34];
      }
      while ( v14 != v16 );
    }
    a1[35] = 0;
    qfree(v13);
  }
  v18 = a1[31];
  if ( v18 )
  {
    a1[32] = 0;
    qfree(v18);
  }
  qfree(a1[29]);
  v19 = a1[24];
  if ( v19 )
  {
    a1[25] = 0;
    qfree(v19);
  }
  sub_C2220((__int64)(a1 + 14));
  v20 = a1[11];
  if ( v20 )
  {
    a1[12] = 0;
    qfree(v20);
  }
  v21 = a1[8];
  if ( v21 )
  {
    a1[9] = 0;
    qfree(v21);
  }
  v22 = a1[5];
  if ( v22 )
  {
    v23 = a1[6];
    if ( v23 )
    {
      for ( i = 0; i != v23; ++i )
      {
        v25 = (__int64 *)(v22 + 24 * i);
        v26 = *v25;
        if ( *v25 )
        {
          v25[1] = 0;
          qfree(v26);
          v22 = a1[5];
        }
      }
    }
    a1[6] = 0;
    qfree(v22);
  }
  v27 = a1[2];
  if ( v27 )
  {
    a1[3] = 0;
    qfree(v27);
  }
  result = *a1;
  if ( *a1 )
  {
    v29 = *(_QWORD *)result;
    if ( !a1[1] )
    {
      *(_QWORD *)result = *(_QWORD *)result & 3LL | result & 0xFFFFFFFFFFFFFFFCLL;
      *(__m128i *)(*a1 + 8LL) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)*a1, (__m128i)(unsigned __int64)*a1);
      *(_QWORD *)*a1 &= ~1uLL;
      result = *a1;
      *(_QWORD *)*a1 |= 2uLL;
      goto LABEL_44;
    }
    v37 = (__int64 *)(v29 & 0xFFFFFFFFFFFFFFFCLL);
    v38 = *(_QWORD *)(v29 & 0xFFFFFFFFFFFFFFFCLL);
    if ( (v38 & 2) != 0 )
    {
LABEL_88:
      *(_QWORD *)result = v29 & 3 | result & 0xFFFFFFFFFFFFFFFCLL;
      *(__m128i *)(*a1 + 8LL) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)*a1, (__m128i)(unsigned __int64)*a1);
      *(_QWORD *)*a1 &= ~1uLL;
      result = *a1;
      *(_QWORD *)*a1 |= 2uLL;
      a1[1] = 0;
LABEL_44:
      if ( *a1 )
        return qfree(*a1);
      return result;
    }
    v39 = (__int64 *)v37[1];
    v40 = *v39;
    if ( (*v39 & 2) != 0 )
    {
      v43 = (__int64 *)v37[2];
      if ( (*(_BYTE *)v43 & 2) != 0 )
        goto LABEL_84;
      goto LABEL_77;
    }
    v41 = (__int64 *)v39[1];
    if ( (*(_BYTE *)v41 & 2) != 0 )
    {
      v42 = (__int64 *)v39[2];
      if ( (*(_BYTE *)v42 & 2) != 0 )
      {
LABEL_96:
        *v39 = v40 | 2;
LABEL_74:
        if ( v39 )
        {
          v49 = v29;
          qfree(v39);
          v29 = v49;
        }
        v43 = (__int64 *)v37[2];
        if ( (*(_BYTE *)v43 & 2) != 0 )
        {
LABEL_83:
          v38 = *v37;
          if ( (*v37 & 2) != 0 )
          {
LABEL_85:
            if ( v29 > 3 )
              qfree(v37);
            result = *a1;
            v29 = *(_QWORD *)*a1;
            goto LABEL_88;
          }
LABEL_84:
          *v37 = v38 | 2;
          goto LABEL_85;
        }
LABEL_77:
        v44 = (__int64 *)v43[1];
        if ( (*(_BYTE *)v44 & 2) != 0 )
        {
          v45 = (__int64 *)v43[2];
          if ( (*(_BYTE *)v45 & 2) != 0 )
          {
            v46 = *v43;
LABEL_99:
            *v43 = v46 | 2;
LABEL_81:
            if ( v43 )
            {
              v52 = v29;
              qfree(v43);
              v29 = v52;
            }
            goto LABEL_83;
          }
        }
        else
        {
          v50 = v29;
          sub_B7D90(v44);
          v45 = (__int64 *)v43[2];
          v29 = v50;
          if ( (*(_BYTE *)v45 & 2) != 0 )
            goto LABEL_80;
        }
        v51 = v29;
        sub_B7D90(v45);
        v29 = v51;
LABEL_80:
        v46 = *v43;
        if ( (*v43 & 2) != 0 )
          goto LABEL_81;
        goto LABEL_99;
      }
    }
    else
    {
      v47 = v29;
      sub_B7D90(v41);
      v42 = (__int64 *)v39[2];
      v29 = v47;
      if ( (*(_BYTE *)v42 & 2) != 0 )
        goto LABEL_73;
    }
    v48 = v29;
    sub_B7D90(v42);
    v29 = v48;
LABEL_73:
    v40 = *v39;
    if ( (*v39 & 2) != 0 )
      goto LABEL_74;
    goto LABEL_96;
  }
  return result;
}
