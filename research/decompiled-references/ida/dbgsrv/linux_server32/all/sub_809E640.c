/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_809E640
// Address: 0x0809E640

//----- (0809E640) --------------------------------------------------------
int __cdecl sub_809E640(_DWORD *a1, int *a2, int a3, int a4)
{
  int v4; // ebp
  int *v5; // esi
  unsigned int v6; // edi
  _DWORD *v7; // eax
  _DWORD *v8; // esi
  int v9; // edx
  int v10; // ecx
  _DWORD *v11; // eax
  _DWORD *v12; // edx
  _DWORD *v13; // eax
  _DWORD *v14; // edx
  unsigned int v15; // edi
  unsigned int v16; // edx
  int v17; // eax
  _BOOL4 v18; // edx
  unsigned int v19; // edi
  size_t n; // ecx
  void *v21; // edi
  __m128i v22; // xmm0
  unsigned __int64 v23; // xmm1_8
  void *v24; // eax
  _DWORD *v26; // esi
  _DWORD *v27; // eax
  unsigned int v28; // ecx
  _DWORD *v29; // edx
  bool v30; // zf
  char v31; // dl
  void *v32; // eax
  void *v33; // eax
  _DWORD *v34; // ecx
  _DWORD *v35; // eax
  int v36; // edx
  int v37; // esi
  int v38; // eax
  int v39; // ecx
  int v40; // eax
  int v41; // eax
  void *v42; // edx
  _DWORD *v43; // ebp
  void *v44; // edx
  void *v45; // edx
  unsigned int v46; // edx
  void *v47; // eax
  size_t size; // [esp+0h] [ebp-7Ch]
  _DWORD *v49; // [esp+1Ch] [ebp-60h]
  _DWORD *v50; // [esp+20h] [ebp-5Ch]
  _DWORD *v51; // [esp+20h] [ebp-5Ch]
  _DWORD *v52; // [esp+20h] [ebp-5Ch]
  const void *v53; // [esp+20h] [ebp-5Ch]
  int v54; // [esp+28h] [ebp-54h]
  unsigned int v55; // [esp+30h] [ebp-4Ch]
  _DWORD *v56; // [esp+30h] [ebp-4Ch]
  _DWORD *v57; // [esp+30h] [ebp-4Ch]
  int v58; // [esp+30h] [ebp-4Ch]
  _DWORD *v59; // [esp+3Ch] [ebp-40h]
  _DWORD v60[5]; // [esp+48h] [ebp-34h] BYREF
  unsigned int v61; // [esp+5Ch] [ebp-20h]

  v4 = a3 + 4;
  v61 = __readgsdword(0x14u);
  v5 = a2;
  v54 = 0;
  v49 = a1 + 51;
  if ( a4 > 0 )
  {
    while ( 1 )
    {
      v6 = *(_DWORD *)(v4 - 4);
      v7 = (_DWORD *)a1[52];
      if ( *(_DWORD *)(v4 + 4) > 1u )
        break;
      if ( v7 )
      {
        v26 = (_DWORD *)a1[52];
        v27 = a1 + 51;
        while ( 1 )
        {
          while ( 1 )
          {
            v28 = v26[4];
            if ( v28 >= v6 )
              break;
            v26 = (_DWORD *)v26[3];
            if ( !v26 )
              goto LABEL_44;
          }
          v29 = (_DWORD *)v26[2];
          if ( v6 >= v28 )
            break;
          v27 = v26;
          v26 = (_DWORD *)v26[2];
          if ( !v29 )
          {
LABEL_44:
            v51 = v27;
            v30 = v49 == v27;
            v7 = (_DWORD *)a1[52];
            v31 = v30;
            goto LABEL_45;
          }
        }
        v34 = (_DWORD *)v26[3];
        v52 = v27;
        v7 = (_DWORD *)a1[52];
        if ( v34 )
        {
          v35 = v52;
          v56 = v26;
          v59 = (_DWORD *)v26[2];
          do
          {
            while ( 1 )
            {
              v36 = v34[2];
              v37 = v34[3];
              if ( v6 < v34[4] )
                break;
              v34 = (_DWORD *)v34[3];
              if ( !v37 )
                goto LABEL_60;
            }
            v35 = v34;
            v34 = (_DWORD *)v34[2];
          }
          while ( v36 );
LABEL_60:
          v26 = v56;
          v29 = v59;
          v52 = v35;
          v7 = (_DWORD *)a1[52];
        }
        if ( v29 )
        {
          v57 = v7;
          do
          {
            while ( 1 )
            {
              v38 = v29[2];
              v39 = v29[3];
              if ( v29[4] >= v6 )
                break;
              v29 = (_DWORD *)v29[3];
              if ( !v39 )
                goto LABEL_66;
            }
            v26 = v29;
            v29 = (_DWORD *)v29[2];
          }
          while ( v38 );
LABEL_66:
          v7 = v57;
        }
        if ( (_DWORD *)a1[53] != v26 || v49 != v52 )
        {
          if ( v26 != v52 )
          {
            v58 = v4;
            do
            {
              v40 = std::_Rb_tree_increment(v26);
              size = (size_t)v26;
              v26 = (_DWORD *)v40;
              v41 = std::_Rb_tree_rebalance_for_erase(size, v49);
              v42 = *(void **)(v41 + 40);
              v43 = (_DWORD *)v41;
              if ( v42 )
              {
                *(_DWORD *)(v41 + 44) = 0;
                sub_80CF780(v42);
              }
              v44 = (void *)v43[6];
              if ( v44 )
              {
                v43[7] = 0;
                sub_80CF780(v44);
              }
              operator delete(v43, 0x114u);
              --a1[55];
            }
            while ( v26 != v52 );
            v4 = v58;
          }
          goto LABEL_32;
        }
      }
      else
      {
        v31 = 1;
        v51 = a1 + 51;
LABEL_45:
        if ( (_DWORD *)a1[53] != v51 || !v31 )
          goto LABEL_32;
      }
      sub_809DE10(v7);
      a1[52] = 0;
      a1[53] = v49;
      a1[54] = v49;
      a1[55] = 0;
LABEL_32:
      ++v54;
      v4 += 256;
      if ( a4 == v54 )
      {
        v5 = a2;
        goto LABEL_34;
      }
    }
    v8 = a1 + 51;
    if ( v7 )
    {
      do
      {
        while ( 1 )
        {
          v9 = v7[2];
          v10 = v7[3];
          if ( v7[4] >= v6 )
            break;
          v7 = (_DWORD *)v7[3];
          if ( !v10 )
            goto LABEL_8;
        }
        v8 = v7;
        v7 = (_DWORD *)v7[2];
      }
      while ( v9 );
LABEL_8:
      if ( v49 != v8 && v6 >= v8[4] )
      {
LABEL_23:
        v8[5] = v6;
        if ( v8 + 6 != (_DWORD *)v4 )
        {
          v19 = *(_DWORD *)(v4 + 4);
          if ( v19 && (n = v19 - 1, v19 != 1) )
          {
            v53 = *(const void **)v4;
            v45 = (void *)v8[6];
            if ( v8[8] < v19 )
            {
              v47 = sub_80CF920((int)(v8 + 6), v45, v19, 1u);
              n = v19 - 1;
              v8[6] = v47;
              v45 = v47;
            }
            v8[7] = v19;
            memmove(v45, v53, n);
            *(_BYTE *)(v8[6] + v19 - 1) = 0;
          }
          else
          {
            v8[7] = 0;
          }
        }
        v21 = nullptr;
        v8[9] = *(_DWORD *)(v4 + 12);
        v22 = _mm_cvtsi32_si128(*(_DWORD *)(v4 + 20));
        v23 = _mm_unpacklo_epi32(v22, v22).m128i_u64[0];
        if ( _mm_cvtsi128_si32(v22) )
        {
          v21 = sub_80CF8B0(_mm_cvtsi128_si32(v22));
          memcpy(v21, *(const void **)(v4 + 16), _mm_cvtsi128_si32(_mm_cvtsi32_si128(_mm_cvtsi128_si32(v22))));
        }
        v24 = (void *)v8[10];
        if ( v24 )
        {
          v8[11] = 0;
          sub_80CF780(v24);
        }
        v8[10] = v21;
        *(_QWORD *)(v8 + 11) = v23;
        *(__m128i *)(v8 + 13) = _mm_loadu_si128((const __m128i *)(v4 + 28));
        *(__m128i *)(v8 + 17) = _mm_loadu_si128((const __m128i *)(v4 + 44));
        *(__m128i *)(v8 + 21) = _mm_loadu_si128((const __m128i *)(v4 + 60));
        *(__m128i *)(v8 + 25) = _mm_loadu_si128((const __m128i *)(v4 + 76));
        *(__m128i *)(v8 + 29) = _mm_loadu_si128((const __m128i *)(v4 + 92));
        *(__m128i *)(v8 + 33) = _mm_loadu_si128((const __m128i *)(v4 + 108));
        *(__m128i *)(v8 + 37) = _mm_loadu_si128((const __m128i *)(v4 + 124));
        *(__m128i *)(v8 + 41) = _mm_loadu_si128((const __m128i *)(v4 + 140));
        *(__m128i *)(v8 + 45) = _mm_loadu_si128((const __m128i *)(v4 + 156));
        *(__m128i *)(v8 + 49) = _mm_loadu_si128((const __m128i *)(v4 + 172));
        *(__m128i *)(v8 + 53) = _mm_loadu_si128((const __m128i *)(v4 + 188));
        *(__m128i *)(v8 + 57) = _mm_loadu_si128((const __m128i *)(v4 + 204));
        *(__m128i *)(v8 + 61) = _mm_loadu_si128((const __m128i *)(v4 + 220));
        *(_QWORD *)(v8 + 65) = *(_QWORD *)(v4 + 236);
        *((_BYTE *)v8 + 268) = *(_BYTE *)(v4 + 244);
        v8[68] = *(_DWORD *)(v4 + 248);
        goto LABEL_32;
      }
    }
    v11 = (_DWORD *)operator new(0x114u);
    v11[4] = v6;
    v12 = v11;
    v50 = v11;
    memset(v11 + 5, 0, 0x100u);
    v11[13] = -1;
    v13 = v11 + 19;
    v14 = v12 + 67;
    *(v14 - 53) = -1;
    *(v14 - 52) = -1;
    do
    {
      v13[5] = 0;
      v13 += 6;
      *((_WORD *)v13 - 12) = 0;
      *((_WORD *)v13 - 11) = 0;
      *((_WORD *)v13 - 10) = 0;
      *((_WORD *)v13 - 9) = 0;
      *(v13 - 4) = 0;
      *(v13 - 3) = 0;
      *(v13 - 2) = 0;
    }
    while ( v14 != v13 );
    v15 = v50[4];
    if ( v49 == v8 )
    {
      if ( a1[55] )
      {
        v17 = a1[54];
        v8 = nullptr;
        if ( *(_DWORD *)(v17 + 16) < v15 )
          goto LABEL_17;
      }
    }
    else
    {
      v16 = v8[4];
      if ( v15 < v16 )
      {
        v17 = (int)v8;
        if ( (_DWORD *)a1[53] == v8 )
          goto LABEL_17;
        v17 = std::_Rb_tree_decrement(v8);
        if ( *(_DWORD *)(v17 + 16) >= v15 )
          goto LABEL_16;
        if ( *(_DWORD *)(v17 + 12) )
          v17 = (int)v8;
        else
          v8 = nullptr;
LABEL_17:
        if ( v17 )
        {
          if ( v8 || v49 == (_DWORD *)v17 )
          {
            v18 = 1;
LABEL_21:
            v8 = v50;
            std::_Rb_tree_insert_and_rebalance(v18, v50, v17, v49);
            ++a1[55];
LABEL_22:
            v6 = *(_DWORD *)(v4 - 4);
            goto LABEL_23;
          }
          goto LABEL_90;
        }
        goto LABEL_49;
      }
      v55 = v8[4];
      if ( v16 >= v15 )
        goto LABEL_49;
      if ( (_DWORD *)a1[54] == v8 )
      {
        v17 = (int)v8;
        if ( v8 )
        {
LABEL_90:
          v46 = *(_DWORD *)(v17 + 16);
LABEL_91:
          v18 = v15 < v46;
          goto LABEL_21;
        }
LABEL_49:
        if ( v50 )
        {
          v32 = (void *)v50[10];
          if ( v32 )
          {
            v50[11] = 0;
            sub_80CF780(v32);
          }
          v33 = (void *)v50[6];
          if ( v33 )
          {
            v50[7] = 0;
            sub_80CF780(v33);
          }
          operator delete(v50, 0x114u);
        }
        goto LABEL_22;
      }
      v17 = std::_Rb_tree_increment(v8);
      if ( v15 < *(_DWORD *)(v17 + 16) )
      {
        v46 = v55;
        if ( !v8[3] )
        {
          v17 = (int)v8;
          if ( v8 )
            goto LABEL_91;
          goto LABEL_49;
        }
        v8 = (_DWORD *)v17;
        goto LABEL_17;
      }
    }
LABEL_16:
    sub_809D7C0(v60, (int)(a1 + 50), v15);
    v8 = (_DWORD *)v60[0];
    v17 = v60[1];
    goto LABEL_17;
  }
LABEL_34:
  if ( v5 )
    *v5 = a4;
  if ( v61 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return 1;
}
// 804B110: using guessed type int __cdecl std::_Rb_tree_insert_and_rebalance(_DWORD, _DWORD, _DWORD, _DWORD);
// 804B400: using guessed type int __cdecl std::_Rb_tree_rebalance_for_erase(_DWORD, _DWORD);
// 804B4A0: using guessed type int __cdecl std::_Rb_tree_increment(_DWORD);
// 804B760: using guessed type int __cdecl std::_Rb_tree_decrement(_DWORD);
// 804B870: using guessed type int __cdecl std::_Rb_tree_increment(_DWORD);
