/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_454A00
// Address: 0x0000000000454A00

//----- (0000000000454A00) ----------------------------------------------------
__int64 __fastcall sub_454A00(_QWORD *a1, int *a2, __int64 a3, int a4)
{
  __int64 v5; // rbx
  _QWORD *v6; // r13
  unsigned __int64 v7; // rcx
  _QWORD *v8; // rdi
  _QWORD *v9; // r14
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r15
  unsigned __int64 v13; // rdx
  _WORD *v14; // rax
  __int64 v15; // rcx
  __int64 v16; // r8
  unsigned __int64 v17; // r12
  unsigned __int64 v18; // rsi
  __int64 v19; // rax
  _BOOL8 v20; // rdi
  unsigned __int64 v21; // r12
  size_t v22; // r9
  void *v23; // r15
  size_t v24; // r12
  __m128i v25; // xmm0
  void *v26; // rdi
  _QWORD *v28; // r12
  _QWORD *v29; // r14
  unsigned __int64 v30; // rax
  _QWORD *v31; // rsi
  bool v32; // al
  signed __int64 v33; // rdi
  void *v34; // rdi
  void *v35; // rdi
  _QWORD *i; // rax
  __int64 v37; // r9
  __int64 v38; // r8
  _QWORD *v39; // rdi
  __int64 v40; // rax
  void *v41; // rdi
  _QWORD *v42; // r15
  void *v43; // rdi
  const void *v44; // r15
  void *v45; // rax
  __int64 v46; // rax
  unsigned __int64 v47; // rsi
  unsigned __int64 v48; // rdx
  void *v49; // rsi
  __m128i v50; // [rsp+0h] [rbp-68h] BYREF
  __int64 v51; // [rsp+10h] [rbp-58h]
  _QWORD *v52; // [rsp+18h] [rbp-50h]
  int *v53; // [rsp+20h] [rbp-48h]
  int v54; // [rsp+2Ch] [rbp-3Ch]

  v53 = a2;
  v54 = a4;
  if ( a4 > 0 )
  {
    v5 = a3 + 8;
    v6 = a1 + 49;
    v51 = a3 + 432LL * v54 + 8;
    while ( 1 )
    {
      v7 = *(_QWORD *)(v5 - 8);
      v8 = (_QWORD *)a1[50];
      if ( *(_QWORD *)(v5 + 8) > 1u )
        break;
      v28 = v6;
      if ( v8 )
      {
        v29 = (_QWORD *)a1[50];
        while ( 1 )
        {
          while ( 1 )
          {
            v30 = v29[4];
            if ( v30 >= v7 )
              break;
            v29 = (_QWORD *)v29[3];
            if ( !v29 )
              goto LABEL_43;
          }
          v31 = (_QWORD *)v29[2];
          if ( v7 >= v30 )
            break;
          v28 = v29;
          v29 = (_QWORD *)v29[2];
          if ( !v31 )
          {
LABEL_43:
            v32 = v6 == v28;
            goto LABEL_44;
          }
        }
        for ( i = (_QWORD *)v29[3]; i; i = (_QWORD *)i[2] )
        {
          while ( 1 )
          {
            v37 = i[3];
            if ( v7 < i[4] )
              break;
            i = (_QWORD *)i[3];
            if ( !v37 )
              goto LABEL_58;
          }
          v28 = i;
        }
LABEL_58:
        while ( v31 )
        {
          while ( 1 )
          {
            v38 = v31[3];
            if ( v31[4] >= v7 )
              break;
            v31 = (_QWORD *)v31[3];
            if ( !v38 )
              goto LABEL_61;
          }
          v29 = v31;
          v31 = (_QWORD *)v31[2];
        }
LABEL_61:
        if ( (_QWORD *)a1[51] != v29 || v6 != v28 )
        {
          while ( v29 != v28 )
          {
            v39 = v29;
            v29 = (_QWORD *)std::_Rb_tree_increment(v29);
            v40 = std::_Rb_tree_rebalance_for_erase(v39, v6);
            v41 = *(void **)(v40 + 80);
            v42 = (_QWORD *)v40;
            if ( v41 )
            {
              *(_QWORD *)(v40 + 88) = 0;
              j__free(v41);
            }
            v43 = (void *)v42[6];
            if ( v43 )
            {
              v42[7] = 0;
              j__free(v43);
            }
            operator delete(v42, 0x1D8u);
            --a1[53];
          }
          goto LABEL_33;
        }
      }
      else
      {
        v32 = 1;
LABEL_44:
        if ( (_QWORD *)a1[51] != v28 || !v32 )
          goto LABEL_33;
      }
      sub_454190(v8);
      a1[51] = v6;
      a1[50] = 0;
      a1[52] = v6;
      a1[53] = 0;
LABEL_33:
      v5 += 432;
      if ( v51 == v5 )
        goto LABEL_34;
    }
    v9 = v6;
    if ( v8 )
    {
      do
      {
        while ( 1 )
        {
          v10 = v8[2];
          v11 = v8[3];
          if ( v8[4] >= v7 )
            break;
          v8 = (_QWORD *)v8[3];
          if ( !v11 )
            goto LABEL_9;
        }
        v9 = v8;
        v8 = (_QWORD *)v8[2];
      }
      while ( v10 );
LABEL_9:
      if ( v6 != v9 && v7 >= v9[4] )
      {
LABEL_24:
        v9[5] = v7;
        if ( v9 + 6 != (_QWORD *)v5 )
        {
          v21 = *(_QWORD *)(v5 + 8);
          if ( v21 && (v22 = v21 - 1, v21 != 1) )
          {
            v44 = *(const void **)v5;
            v45 = (void *)v9[6];
            if ( v9[8] < v21 )
            {
              v48 = *(_QWORD *)(v5 + 8);
              v49 = (void *)v9[6];
              v50.m128i_i64[0] = v21 - 1;
              v45 = sub_481540((__int64)(v9 + 6), v49, v48, 1u);
              v22 = v50.m128i_i64[0];
              v9[6] = v45;
            }
            v9[7] = v21;
            memmove(v45, v44, v22);
            *(_BYTE *)(v9[6] + v21 - 1) = 0;
          }
          else
          {
            v9[7] = 0;
          }
        }
        v23 = nullptr;
        *((_DWORD *)v9 + 18) = *(_DWORD *)(v5 + 24);
        v24 = *(_QWORD *)(v5 + 40);
        v25 = _mm_unpacklo_epi64((__m128i)v24, (__m128i)v24);
        if ( v24 )
        {
          v33 = *(_QWORD *)(v5 + 40);
          v50 = v25;
          v23 = sub_4814F0(v33);
          memcpy(v23, *(const void **)(v5 + 32), v24);
          v25 = _mm_load_si128(&v50);
        }
        v26 = (void *)v9[10];
        if ( v26 )
        {
          v9[11] = 0;
          v50 = v25;
          j__free(v26);
          v25 = _mm_load_si128(&v50);
        }
        v9[10] = v23;
        *(__m128i *)(v9 + 11) = v25;
        qmemcpy(v9 + 13, (const void *)(v5 + 56), 0x169u);
        *((_DWORD *)v9 + 117) = *(_DWORD *)(v5 + 420);
        goto LABEL_33;
      }
    }
    v50.m128i_i64[0] = *(_QWORD *)(v5 - 8);
    v52 = a1 + 48;
    v12 = operator new(0x1D8u);
    *(_QWORD *)(v12 + 32) = v50.m128i_i64[0];
    v13 = v12 + 464;
    memset((void *)(v12 + 40), 0, 0x1B0u);
    *(_OWORD *)(v12 + 104) = -1;
    v14 = (_WORD *)(v12 + 144);
    *(_QWORD *)(v12 + 120) = -1;
    do
    {
      v15 = 0;
      v16 = 0;
      *v14 = 0;
      v14 += 20;
      *(v14 - 19) = 0;
      *(v14 - 18) = 0;
      *((_DWORD *)v14 - 2) = 0;
      *(v14 - 17) = 0;
      *((_OWORD *)v14 - 2) = 0;
      *((_QWORD *)v14 - 2) = 0;
    }
    while ( (_WORD *)v13 != v14 );
    v17 = *(_QWORD *)(v12 + 32);
    if ( v6 == v9 )
    {
      if ( a1[53] )
      {
        v13 = a1[52];
        v9 = nullptr;
        if ( *(_QWORD *)(v13 + 32) < v17 )
          goto LABEL_18;
      }
    }
    else
    {
      v18 = v9[4];
      if ( v17 < v18 )
      {
        v13 = (unsigned __int64)v9;
        if ( (_QWORD *)a1[51] == v9 )
          goto LABEL_18;
        v19 = std::_Rb_tree_decrement(v9, v18, v9, 0, 0);
        v13 = v19;
        if ( *(_QWORD *)(v19 + 32) >= v17 )
          goto LABEL_17;
        if ( *(_QWORD *)(v19 + 24) )
          v13 = (unsigned __int64)v9;
        else
          v9 = nullptr;
LABEL_18:
        if ( v13 )
        {
          if ( v9 || v6 == (_QWORD *)v13 )
          {
            v20 = 1;
LABEL_22:
            v9 = (_QWORD *)v12;
            std::_Rb_tree_insert_and_rebalance(v20, v12, v13, v6);
            ++a1[53];
LABEL_23:
            v7 = *(_QWORD *)(v5 - 8);
            goto LABEL_24;
          }
          goto LABEL_86;
        }
        goto LABEL_48;
      }
      v50.m128i_i64[0] = v9[4];
      if ( v18 >= v17 )
        goto LABEL_48;
      if ( (_QWORD *)a1[52] == v9 )
      {
        v13 = (unsigned __int64)v9;
        if ( v9 )
        {
LABEL_86:
          v47 = *(_QWORD *)(v13 + 32);
LABEL_87:
          v20 = v17 < v47;
          goto LABEL_22;
        }
LABEL_48:
        if ( v12 )
        {
          v34 = *(void **)(v12 + 80);
          if ( v34 )
          {
            *(_QWORD *)(v12 + 88) = 0;
            j__free(v34);
          }
          v35 = *(void **)(v12 + 48);
          if ( v35 )
          {
            *(_QWORD *)(v12 + 56) = 0;
            j__free(v35);
          }
          operator delete((void *)v12, 0x1D8u);
        }
        goto LABEL_23;
      }
      v46 = std::_Rb_tree_increment(v9);
      v13 = v46;
      if ( v17 < *(_QWORD *)(v46 + 32) )
      {
        v47 = v50.m128i_i64[0];
        if ( !v9[3] )
        {
          v13 = (unsigned __int64)v9;
          if ( v9 )
            goto LABEL_87;
          goto LABEL_48;
        }
        v9 = (_QWORD *)v46;
        goto LABEL_18;
      }
    }
LABEL_17:
    v9 = sub_453D40((__int64)v52, v17, v13, v15, v16);
    goto LABEL_18;
  }
LABEL_34:
  if ( v53 )
    *v53 = v54;
  return 1;
}
// 454BB8: variable 'v15' is possibly undefined
// 454BB8: variable 'v16' is possibly undefined
// 454BC3: variable 'v13' is possibly undefined
// 4050E0: using guessed type __int64 __fastcall std::_Rb_tree_insert_and_rebalance(_QWORD, _QWORD, _QWORD, _QWORD);
// 4053F0: using guessed type __int64 __fastcall std::_Rb_tree_rebalance_for_erase(_QWORD, _QWORD);
// 405450: using guessed type __int64 __fastcall std::_Rb_tree_increment(_QWORD);
// 405650: using guessed type __int64 __fastcall std::_Rb_tree_decrement(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
// 405760: using guessed type __int64 __fastcall std::_Rb_tree_increment(_QWORD);
