/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80704E0
// Address: 0x080704E0

//----- (080704E0) --------------------------------------------------------
unsigned int __cdecl sub_80704E0(_DWORD *a1, _DWORD *a2, unsigned int a3)
{
  unsigned int v3; // ecx
  _DWORD *v4; // edi
  _DWORD *v5; // edx
  _DWORD *v6; // eax
  int v7; // esi
  int v8; // ebx
  unsigned int *v9; // esi
  int v10; // eax
  unsigned int v11; // edi
  int v12; // ebx
  int v13; // ecx
  unsigned int *v14; // esi
  unsigned int *v15; // edi
  unsigned int v16; // eax
  unsigned int v17; // ecx
  int v18; // eax
  _BOOL4 v19; // edx
  unsigned int result; // eax
  int v21; // ebx
  int v22; // eax
  unsigned int v23; // edx
  __m128i v24; // xmm1
  int *v25; // ecx
  unsigned int v26; // ebx
  _DWORD *v27; // eax
  _DWORD *v28; // esi
  int v29; // ecx
  int v30; // edx
  unsigned int v31; // ebx
  _DWORD *v32; // esi
  _DWORD *v33; // ebx
  unsigned int v34; // ecx
  unsigned int v35; // edx
  int v36; // eax
  _BOOL4 v37; // edx
  unsigned int v38; // edx
  unsigned int v39; // [esp-64h] [ebp-64h]
  unsigned int v40; // [esp-64h] [ebp-64h]
  unsigned int v41; // [esp-60h] [ebp-60h]
  unsigned int v42; // [esp-60h] [ebp-60h]
  unsigned int v43; // [esp-60h] [ebp-60h]
  unsigned int *v44; // [esp-5Ch] [ebp-5Ch]
  unsigned int v45; // [esp-58h] [ebp-58h]
  unsigned int *v46; // [esp-50h] [ebp-50h]
  int v47; // [esp-50h] [ebp-50h]
  _DWORD *v48; // [esp-4Ch] [ebp-4Ch]
  unsigned int v49; // [esp-4Ch] [ebp-4Ch]
  unsigned int v50; // [esp-4Ch] [ebp-4Ch]
  unsigned int v51; // [esp-4Ch] [ebp-4Ch]
  unsigned int v52; // [esp-48h] [ebp-48h]
  unsigned int v53; // [esp-48h] [ebp-48h]
  _DWORD *v54; // [esp-44h] [ebp-44h] BYREF
  int v55; // [esp-40h] [ebp-40h]
  int v56; // [esp-34h] [ebp-34h] BYREF
  unsigned int v57; // [esp-30h] [ebp-30h]
  int *v58; // [esp-2Ch] [ebp-2Ch]
  int *v59; // [esp-28h] [ebp-28h]
  int v60; // [esp-24h] [ebp-24h]
  unsigned int v61; // [esp-20h] [ebp-20h]

  v61 = __readgsdword(0x14u);
  v3 = a2[15];
  v4 = a1 + 2;
  v5 = (_DWORD *)a1[3];
  v48 = a1 + 2;
  v6 = v5;
  if ( !v5 )
  {
    v56 = 0;
    v32 = a1 + 2;
    v57 = 0;
    v58 = &v56;
    v59 = &v56;
    v60 = 0;
    goto LABEL_50;
  }
  do
  {
    while ( 1 )
    {
      v7 = v6[2];
      v8 = v6[3];
      if ( v6[4] < v3 )
        break;
      v48 = v6;
      v6 = (_DWORD *)v6[2];
      if ( !v7 )
        goto LABEL_6;
    }
    v6 = (_DWORD *)v6[3];
  }
  while ( v8 );
LABEL_6:
  if ( v4 != v48 && v3 >= v48[4] )
  {
    v9 = v48 + 6;
    v10 = v48[7];
    v44 = v48 + 6;
    if ( !v10 )
      goto LABEL_44;
    goto LABEL_9;
  }
  v56 = 0;
  v32 = a1 + 2;
  v57 = 0;
  v58 = &v56;
  v59 = &v56;
  v60 = 0;
  do
  {
    while ( 1 )
    {
      v21 = v5[2];
      v22 = v5[3];
      if ( v5[4] < v3 )
        break;
      v32 = v5;
      v5 = (_DWORD *)v5[2];
      if ( !v21 )
        goto LABEL_31;
    }
    v5 = (_DWORD *)v5[3];
  }
  while ( v22 );
LABEL_31:
  if ( v4 == v32 || v3 < v32[4] )
  {
LABEL_50:
    v33 = (_DWORD *)operator new(0x2Cu);
    v33[6] = 0;
    v33[7] = 0;
    v34 = a2[15];
    v33[4] = v34;
    v33[8] = v33 + 6;
    v33[9] = v33 + 6;
    v33[10] = 0;
    if ( v4 == v32 )
    {
      if ( a1[6] )
      {
        v36 = a1[5];
        v32 = nullptr;
        if ( *(_DWORD *)(v36 + 16) < v34 )
        {
LABEL_56:
          if ( v36 )
          {
            if ( v32 || v4 == (_DWORD *)v36 )
            {
              v37 = 1;
              goto LABEL_70;
            }
            v35 = *(_DWORD *)(v36 + 16);
LABEL_60:
            v37 = v34 < v35;
LABEL_70:
            v32 = v33;
            std::_Rb_tree_insert_and_rebalance(v37, v33, v36, v4);
            ++a1[6];
            goto LABEL_33;
          }
          goto LABEL_72;
        }
      }
    }
    else
    {
      v35 = v32[4];
      if ( v34 >= v35 )
      {
        if ( v35 < v34 )
        {
          if ( (_DWORD *)a1[5] != v32 )
          {
            v43 = v34;
            v40 = v32[4];
            v36 = std::_Rb_tree_increment(v32);
            v34 = v43;
            if ( v43 >= *(_DWORD *)(v36 + 16) )
              goto LABEL_76;
            v35 = v40;
            if ( v32[3] )
            {
              v32 = (_DWORD *)v36;
              goto LABEL_56;
            }
          }
          v36 = (int)v32;
          if ( v32 )
            goto LABEL_60;
        }
LABEL_72:
        if ( v33 )
          operator delete(v33, 0x2Cu);
        goto LABEL_33;
      }
      v36 = (int)v32;
      if ( (_DWORD *)a1[4] == v32 )
        goto LABEL_56;
      v41 = v34;
      v36 = std::_Rb_tree_decrement(v32);
      v34 = v41;
      if ( *(_DWORD *)(v36 + 16) < v41 )
      {
        if ( *(_DWORD *)(v36 + 12) )
          v36 = (int)v32;
        else
          v32 = nullptr;
        goto LABEL_56;
      }
    }
LABEL_76:
    v42 = v34;
    sub_8068F80(&v54, (int)(a1 + 1), v34);
    v32 = v54;
    v36 = v55;
    v34 = v42;
    goto LABEL_56;
  }
LABEL_33:
  sub_80693C0((_DWORD *)v32[7]);
  v23 = v57;
  v32[7] = 0;
  v32[8] = v32 + 6;
  v32[9] = v32 + 6;
  v32[10] = 0;
  if ( v23 )
  {
    v24 = _mm_cvtsi32_si128((unsigned int)v58);
    v32[6] = v56;
    v25 = v59;
    *(_QWORD *)(v32 + 7) = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v23), v24).m128i_u64[0];
    v32[9] = v25;
    *(_DWORD *)(v23 + 4) = v32 + 6;
    v57 = 0;
    v32[10] = v60;
    v60 = 0;
    v58 = &v56;
    v59 = &v56;
  }
  sub_80693C0(nullptr);
  v26 = a2[15];
  v27 = (_DWORD *)a1[3];
  if ( v27 )
  {
    v28 = a1 + 2;
    do
    {
      while ( 1 )
      {
        v29 = v27[2];
        v30 = v27[3];
        if ( v27[4] < v26 )
          break;
        v28 = v27;
        v27 = (_DWORD *)v27[2];
        if ( !v29 )
          goto LABEL_40;
      }
      v27 = (_DWORD *)v27[3];
    }
    while ( v30 );
LABEL_40:
    if ( v4 != v28 && v26 >= v28[4] )
      v4 = v28;
  }
  v48 = v4;
  v9 = v4 + 6;
  v10 = v4[7];
  v44 = v4 + 6;
  if ( !v10 )
  {
LABEL_44:
    v47 = (int)(v48 + 5);
    v15 = (unsigned int *)operator new(0x1Cu);
    v15[6] = 0;
    v31 = a2[8];
    v17 = a2[9];
    v15[4] = v31;
    v15[5] = v17;
    v53 = v31;
    if ( !v48[10] || (v18 = v48[9], v14 = nullptr, *(_QWORD *)(v18 + 16) >= __PAIR64__(v17, v31)) )
    {
LABEL_68:
      v51 = v17;
      sub_80703C0(&v54, v47, v15 + 4);
      v14 = v54;
      v18 = v55;
      v17 = v51;
    }
LABEL_20:
    if ( v18 )
    {
      if ( (unsigned int *)v18 == v44 || v14 )
      {
        v19 = 1;
LABEL_24:
        v14 = v15;
        std::_Rb_tree_insert_and_rebalance(v19, v15, v18, v44);
        ++*(_DWORD *)(v47 + 20);
        goto LABEL_25;
      }
      goto LABEL_66;
    }
    goto LABEL_48;
  }
LABEL_9:
  v46 = v9;
  v11 = a2[9];
  v52 = a2[8];
  do
  {
    while ( 1 )
    {
      v12 = *(_DWORD *)(v10 + 8);
      v13 = *(_DWORD *)(v10 + 12);
      if ( *(_QWORD *)(v10 + 16) < __PAIR64__(v11, v52) )
        break;
      v46 = (unsigned int *)v10;
      v10 = *(_DWORD *)(v10 + 8);
      if ( !v12 )
        goto LABEL_13;
    }
    v10 = *(_DWORD *)(v10 + 12);
  }
  while ( v13 );
LABEL_13:
  v14 = v46;
  if ( v44 == v46 )
    goto LABEL_44;
  if ( __PAIR64__(v11, v52) >= *((_QWORD *)v46 + 2) )
    goto LABEL_25;
  v47 = (int)(v48 + 5);
  v15 = (unsigned int *)operator new(0x1Cu);
  v16 = a2[8];
  v17 = a2[9];
  v15[6] = 0;
  v15[4] = v16;
  v15[5] = v17;
  v53 = v16;
  v45 = v14[5];
  if ( __PAIR64__(v17, v16) < *((_QWORD *)v14 + 2) )
  {
    v18 = (int)v14;
    if ( (unsigned int *)v48[8] == v14 )
      goto LABEL_20;
    v49 = v17;
    v18 = std::_Rb_tree_decrement(v14);
    v17 = v49;
    if ( *(_QWORD *)(v18 + 16) >= __PAIR64__(v49, v53) )
      goto LABEL_68;
    if ( *(_DWORD *)(v18 + 12) )
      v18 = (int)v14;
    else
      v14 = nullptr;
    goto LABEL_20;
  }
  v39 = v14[4];
  if ( *((_QWORD *)v14 + 2) >= __PAIR64__(v17, v16) )
    goto LABEL_48;
  if ( (unsigned int *)v48[9] != v14 )
  {
    v50 = v17;
    v18 = std::_Rb_tree_increment(v14);
    v17 = v50;
    if ( __PAIR64__(v50, v53) < *(_QWORD *)(v18 + 16) )
    {
      v38 = v39;
      if ( !v14[3] )
      {
        v18 = (int)v14;
        if ( v14 )
          goto LABEL_67;
        goto LABEL_48;
      }
      v14 = (unsigned int *)v18;
      goto LABEL_20;
    }
    goto LABEL_68;
  }
  v18 = (int)v14;
  if ( v14 )
  {
LABEL_66:
    v38 = *(_DWORD *)(v18 + 16);
    v45 = *(_DWORD *)(v18 + 20);
LABEL_67:
    v19 = __PAIR64__(v17, v53) < __PAIR64__(v45, v38);
    goto LABEL_24;
  }
LABEL_48:
  if ( v15 )
    operator delete(v15, 0x1Cu);
LABEL_25:
  v14[6] = a3;
  result = v61 - __readgsdword(0x14u);
  if ( result )
    sub_80D7AB0();
  return result;
}
// 804B110: using guessed type int __cdecl std::_Rb_tree_insert_and_rebalance(_DWORD, _DWORD, _DWORD, _DWORD);
// 804B4A0: using guessed type int __cdecl std::_Rb_tree_increment(_DWORD);
// 804B760: using guessed type int __cdecl std::_Rb_tree_decrement(_DWORD);
