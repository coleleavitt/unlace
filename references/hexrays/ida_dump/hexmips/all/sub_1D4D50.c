__int64 __fastcall sub_1D4D50(__int64 a1, __m128i a2)
{
  __int64 v3; // rax
  int *v4; // rbx
  int v5; // eax
  char v7; // dl
  char v8; // dl
  char v9; // dl
  char v10; // al
  _DWORD *v11; // rdx
  __int64 v12; // rax
  int v13; // esi
  __int64 v14; // rax
  int *v15; // rdx
  int *v16; // r8
  int v17; // edi
  int v18; // eax
  _DWORD *v19; // rsi
  int v20; // eax
  char v21; // al
  _DWORD *v22; // rdx
  __int64 v23; // rax
  int v24; // esi
  __int64 v25; // rdx
  __int64 v26; // rdi
  __int64 v27; // rax
  int flags; // eax
  __int64 v29; // rdx
  int v30; // eax
  unsigned __int64 v31; // r12
  _QWORD *v32; // rbx
  __m128 *v33; // rbp
  unsigned __int64 v34; // rdx
  _QWORD *v35; // rsi
  unsigned __int64 v36; // rax
  unsigned __int64 v37; // rdi
  __int64 v38; // rax
  int v39; // ecx
  unsigned __int64 v40; // rdx
  _QWORD *v41; // rsi
  unsigned __int64 v42; // rax
  unsigned __int64 v43; // rdi
  __int64 v44; // rax
  _QWORD *v45; // rbp
  unsigned __int64 v46; // r12
  _QWORD *v47; // rbx
  __int64 v48; // r15
  __int64 v49; // rax
  int v50; // ecx
  __int64 v51; // rdx
  int v52; // eax
  __int64 v53; // rdx
  int v54; // eax
  unsigned __int64 v55; // r12
  _QWORD *v56; // rbx
  __m128 *v57; // rbp
  __int64 v58; // [rsp+10h] [rbp-48h]
  __int64 v59; // [rsp+18h] [rbp-40h]

  if ( *(_BYTE *)(a1 + 138) )
    sub_1D48E0(a1, (__int64 *)(*(_QWORD *)(a1 + 32) + 24LL), 0);
  v3 = *(_QWORD *)(a1 + 120);
  v4 = *(int **)(a1 + 32);
  if ( v3 )
  {
    v7 = *((_BYTE *)v4 + 32);
    if ( v7 == 5 )
    {
      *(_QWORD *)(*((_QWORD *)v4 + 5) + 8LL) += v3;
      v3 = *(_QWORD *)(a1 + 120);
      v4 = *(int **)(a1 + 32);
    }
    else if ( v7 == 8 )
    {
      *(_DWORD *)(*((_QWORD *)v4 + 5) + 12LL) += v3;
      v4 = *(int **)(a1 + 32);
      v3 = *(_QWORD *)(a1 + 120);
      v8 = *((_BYTE *)v4 + 48);
      if ( v8 != 5 )
      {
LABEL_18:
        if ( v8 == 8 )
        {
          *(_DWORD *)(*((_QWORD *)v4 + 7) + 12LL) += v3;
          v3 = *(_QWORD *)(a1 + 120);
          v4 = *(int **)(a1 + 32);
        }
        v9 = *((_BYTE *)v4 + 64);
        if ( v9 != 5 )
          goto LABEL_21;
        goto LABEL_35;
      }
LABEL_34:
      *(_QWORD *)(*((_QWORD *)v4 + 7) + 8LL) += v3;
      v4 = *(int **)(a1 + 32);
      v3 = *(_QWORD *)(a1 + 120);
      v9 = *((_BYTE *)v4 + 64);
      if ( v9 != 5 )
      {
LABEL_21:
        if ( v9 == 8 )
        {
          *(_DWORD *)(*((_QWORD *)v4 + 9) + 12LL) += v3;
          v4 = *(int **)(a1 + 32);
        }
        goto LABEL_4;
      }
LABEL_35:
      *(_QWORD *)(*((_QWORD *)v4 + 9) + 8LL) += v3;
      v4 = *(int **)(a1 + 32);
      goto LABEL_4;
    }
    v8 = *((_BYTE *)v4 + 48);
    if ( v8 != 5 )
      goto LABEL_18;
    goto LABEL_34;
  }
LABEL_4:
  v5 = *v4;
  if ( *(_BYTE *)(a1 + 136) )
  {
    if ( v5 == 55 )
    {
      if ( *((_BYTE *)v4 + 32) != 6 )
      {
        v10 = *((_BYTE *)v4 + 32);
        goto LABEL_28;
      }
      v25 = *(_QWORD *)(a1 + 8);
      v26 = *((_QWORD *)v4 + 5);
      v27 = *(unsigned int *)(a1 + 128);
      if ( (unsigned int)v27 >= *(_DWORD *)(v25 + 64) )
        goto LABEL_96;
      if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v25 + 528) + 8 * v27) + 32LL) == v26 )
      {
LABEL_59:
        v10 = *((_BYTE *)v4 + 32);
        if ( v10 == 6 )
          return 0;
LABEL_28:
        if ( v10 != 7 )
          return 0xFFFFFFFFLL;
        v11 = *(_DWORD **)(a1 + 64);
        v12 = (unsigned int)v4[10];
        if ( (_DWORD)v12 == v11[148] )
        {
          v4[10] = *(_DWORD *)(a1 + 132);
          return 0;
        }
        v13 = v11[146];
        if ( (int)v12 >= v13 && (int)v12 < v11[147] )
        {
          v4[10] = *(_DWORD *)(a1 + 128) + v12 - v13;
          return 0;
        }
        v26 = *(_QWORD *)(a1 + 8);
        if ( (unsigned int)v12 < *(_DWORD *)(v26 + 64) )
        {
          v40 = sub_32BF20(v26, *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v26 + 528) + 8 * v12) + 32LL));
          v41 = **(_QWORD ***)(a1 + 56);
          if ( v41 )
          {
            v42 = *v41 & 0xFFFFFFFFFFFFFFFCLL;
            if ( !v42 )
            {
LABEL_84:
              v49 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1504LL);
              *((_BYTE *)v4 + 32) = 6;
              v50 = 8 * *(_DWORD *)(v49 + 84);
              if ( (unsigned __int64)v50 <= 0x3F )
                v40 &= ~(-1LL << v50);
              *((_QWORD *)v4 + 5) = v40;
              return 0;
            }
            while ( (*(_BYTE *)v42 & 2) == 0 )
            {
              while ( 1 )
              {
                v43 = *(_QWORD *)(v42 + 24);
                if ( v40 >= v43 )
                  break;
                v42 = *(_QWORD *)(v42 + 8);
                if ( (*(_BYTE *)v42 & 2) != 0 )
                  goto LABEL_77;
              }
              if ( v43 >= v40 )
              {
                if ( v41 == (_QWORD *)v42 )
                  break;
                goto LABEL_84;
              }
              v42 = *(_QWORD *)(v42 + 16);
            }
          }
LABEL_77:
          sub_62DA0(*(_QWORD *)(a1 + 8), 0, (__int64)"%a: branch out of outlined function", *(double *)a2.m128i_i64);
          return 0xFFFFFFFFLL;
        }
LABEL_96:
        sub_1CF350(v26);
      }
      flags = get_flags_ex(v26, 4);
      v4 = *(int **)(a1 + 32);
      if ( (~(_WORD)flags & 0x600) == 0 && (flags & 0x10000000) != 0 )
      {
        *v4 = 56;
        v51 = *(_QWORD *)(a1 + 16);
        v52 = *(_DWORD *)(v51 + 24);
        BYTE1(v52) &= ~2u;
        LOBYTE(v52) = v52 | 0x80;
        *(_DWORD *)(v51 + 24) = v52;
        v53 = *(_QWORD *)(a1 + 16);
        v54 = *(_DWORD *)(v53 + 24);
        BYTE1(v54) &= ~2u;
        LOBYTE(v54) = v54 | 0x80;
        *(_DWORD *)(v53 + 24) = v54;
        v55 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 24LL);
        v56 = (_QWORD *)j__qalloc_or_throw(80);
        v56[4] = 0xFFFFFFFF00000000LL;
        v56[5] = 0;
        v56[6] = 0xFFFFFFFF00000000LL;
        v56[7] = 0;
        v56[8] = 0xFFFFFFFF00000000LL;
        v56[9] = 0;
        sub_32B920(v56, v55);
        *(_DWORD *)v56 = 58;
        v57 = (__m128 *)sub_64DC0(*(_QWORD *)(a1 + 8), *(_DWORD *)(*(_QWORD *)(a1 + 16) + 72LL) + 1);
        sub_9EF60((__int64)v57, v56, 0);
        v57[1].m128_i32[2] |= 2u;
        a2 = _mm_unpacklo_epi64((__m128i)v55, (__m128i)(v55 + 1));
        v57[2] = (__m128)a2;
        ++*(_DWORD *)(*(_QWORD *)(a1 + 64) + 588LL);
        v4 = *(int **)(a1 + 32);
      }
      v5 = *v4;
      if ( *v4 != 54 )
      {
LABEL_58:
        if ( v5 != 55 )
        {
LABEL_7:
          if ( (unsigned int)(v5 - 42) > 0xA )
          {
            if ( v5 != 53 )
            {
LABEL_9:
              if ( v5 == 58 )
              {
                *v4 = 55;
                *(_BYTE *)(*(_QWORD *)(a1 + 32) + 32LL) = 7;
                *(_DWORD *)(*(_QWORD *)(a1 + 32) + 40LL) = *(_DWORD *)(a1 + 132);
                v44 = *(_QWORD *)(a1 + 32);
                v45 = *(_QWORD **)(v44 + 16);
                v58 = *(_QWORD *)(v44 + 24);
                v59 = *(_QWORD *)(a1 + 16);
                if ( *(_QWORD *)(a1 + 104) )
                {
                  v46 = 0;
                  do
                  {
                    v47 = (_QWORD *)j__qalloc_or_throw(80);
                    v47[4] = 0xFFFFFFFF00000000LL;
                    v47[5] = 0;
                    v47[6] = 0xFFFFFFFF00000000LL;
                    v47[7] = 0;
                    v47[8] = 0xFFFFFFFF00000000LL;
                    v47[9] = 0;
                    sub_32B920(v47, v58);
                    *(_DWORD *)v47 = 4;
                    v48 = v46++;
                    v48 *= 16;
                    sub_120F80((__int64)(v47 + 4), (unsigned __int8 *)(v48 + *(_QWORD *)(a1 + 96)));
                    sub_120F80((__int64)(v47 + 8), (unsigned __int8 *)(v48 + *(_QWORD *)(a1 + 72)));
                    v45 = sub_9EF60(v59, v47, (__int64)v45);
                  }
                  while ( v46 < *(_QWORD *)(a1 + 104) );
                }
              }
              return 0;
            }
            v14 = *((_QWORD *)v4 + 7);
            v15 = *(int **)(v14 + 24);
            v16 = &v15[*(_QWORD *)(v14 + 32)];
            if ( v16 != v15 )
            {
              do
              {
                v19 = *(_DWORD **)(a1 + 64);
                v20 = *v15;
                if ( *v15 == v19[148] )
                {
                  v18 = *(_DWORD *)(a1 + 132);
                }
                else
                {
                  v17 = v19[146];
                  if ( v20 < v17 || v20 >= v19[147] )
                    return 0xFFFFFFFFLL;
                  v18 = *(_DWORD *)(a1 + 128) + v20 - v17;
                }
                *v15++ = v18;
              }
              while ( v16 != v15 );
              v4 = *(int **)(a1 + 32);
              v5 = *v4;
              goto LABEL_9;
            }
            return 0;
          }
          v21 = *((_BYTE *)v4 + 64);
          if ( v21 == 6 )
            return 0;
          if ( v21 != 7 )
            return 0xFFFFFFFFLL;
          v22 = *(_DWORD **)(a1 + 64);
          v23 = (unsigned int)v4[18];
          if ( (_DWORD)v23 == v22[148] )
          {
            v4[18] = *(_DWORD *)(a1 + 132);
            return 0;
          }
          v24 = v22[146];
          if ( (int)v23 >= v24 && (int)v23 < v22[147] )
          {
            v4[18] = *(_DWORD *)(a1 + 128) + v23 - v24;
            return 0;
          }
          v26 = *(_QWORD *)(a1 + 8);
          if ( (unsigned int)v23 < *(_DWORD *)(v26 + 64) )
          {
            v34 = sub_32BF20(v26, *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v26 + 528) + 8 * v23) + 32LL));
            v35 = **(_QWORD ***)(a1 + 56);
            if ( v35 )
            {
              v36 = *v35 & 0xFFFFFFFFFFFFFFFCLL;
              if ( !v36 )
              {
LABEL_68:
                v38 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1504LL);
                *((_BYTE *)v4 + 64) = 6;
                v39 = 8 * *(_DWORD *)(v38 + 84);
                if ( (unsigned __int64)v39 <= 0x3F )
                  v34 &= ~(-1LL << v39);
                *((_QWORD *)v4 + 9) = v34;
                return 0;
              }
              while ( (*(_BYTE *)v36 & 2) == 0 )
              {
                v37 = *(_QWORD *)(v36 + 24);
                if ( v34 >= v37 )
                {
                  if ( v37 >= v34 )
                  {
                    if ( v35 == (_QWORD *)v36 )
                      goto LABEL_77;
                    goto LABEL_68;
                  }
                  v36 = *(_QWORD *)(v36 + 16);
                }
                else
                {
                  v36 = *(_QWORD *)(v36 + 8);
                }
              }
            }
            goto LABEL_77;
          }
          goto LABEL_96;
        }
        goto LABEL_59;
      }
    }
    else if ( v5 != 54 )
    {
      goto LABEL_7;
    }
    *v4 = 57;
    sub_118810((char *)(*(_QWORD *)(a1 + 32) + 32LL), (char *)(*(_QWORD *)(a1 + 32) + 48LL));
    sub_118810((char *)(*(_QWORD *)(a1 + 32) + 48LL), (char *)(*(_QWORD *)(a1 + 32) + 64LL));
    v29 = *(_QWORD *)(a1 + 16);
    v30 = *(_DWORD *)(v29 + 24);
    BYTE1(v30) &= ~2u;
    LOBYTE(v30) = v30 | 0x80;
    *(_DWORD *)(v29 + 24) = v30;
    v31 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 24LL);
    v32 = (_QWORD *)j__qalloc_or_throw(80);
    v32[4] = 0xFFFFFFFF00000000LL;
    v32[5] = 0;
    v32[6] = 0xFFFFFFFF00000000LL;
    v32[7] = 0;
    v32[8] = 0xFFFFFFFF00000000LL;
    v32[9] = 0;
    sub_32B920(v32, v31);
    *(_DWORD *)v32 = 58;
    v33 = (__m128 *)sub_64DC0(*(_QWORD *)(a1 + 8), *(_DWORD *)(*(_QWORD *)(a1 + 16) + 72LL) + 1);
    sub_9EF60((__int64)v33, v32, 0);
    v33[1].m128_i32[2] |= 2u;
    a2 = _mm_unpacklo_epi64((__m128i)v31, (__m128i)(v31 + 1));
    v33[2] = (__m128)a2;
    ++*(_DWORD *)(*(_QWORD *)(a1 + 64) + 588LL);
    v4 = *(int **)(a1 + 32);
    v5 = *v4;
    goto LABEL_58;
  }
  if ( v5 == 55 )
  {
    if ( *((_BYTE *)v4 + 32) != 7 || *(_DWORD *)(*(_QWORD *)(a1 + 64) + 592LL) != v4[10] )
      return 0;
    *v4 = 58;
    sub_118BA0(*(_QWORD *)(a1 + 32) + 32LL);
    v4 = *(int **)(a1 + 32);
    v5 = *v4;
  }
  if ( (unsigned int)(v5 - 42) > 0xA )
  {
    if ( v5 != 57 )
      return 0;
    return (unsigned int)*(unsigned __int8 *)(a1 + 137) - 1;
  }
  else
  {
    if ( *((_BYTE *)v4 + 64) != 7 )
      return 0;
    return (unsigned int)-(*(_DWORD *)(*(_QWORD *)(a1 + 64) + 592LL) == v4[18]);
  }
}
