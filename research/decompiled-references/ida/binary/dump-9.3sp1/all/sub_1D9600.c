__int64 __fastcall sub_1D9600(__int64 a1, __int64 a2, __m128i a3)
{
  __int64 v4; // rax
  int *v5; // rbx
  int v6; // eax
  char v8; // dl
  char v9; // dl
  char v10; // dl
  char v11; // al
  _DWORD *v12; // rdx
  unsigned int v13; // eax
  int v14; // esi
  __int64 v15; // rax
  int *v16; // rdx
  int *v17; // r8
  int v18; // edi
  int v19; // eax
  int v20; // eax
  char v21; // al
  _DWORD *v22; // rdx
  unsigned int v23; // eax
  int v24; // esi
  __int64 v25; // rdx
  __int64 v26; // rdi
  __int64 v27; // rax
  int flags; // eax
  __int64 v29; // rcx
  __int64 v30; // rdi
  __int64 v31; // rdx
  int v32; // eax
  unsigned __int64 v33; // r12
  __int64 v34; // rcx
  _QWORD *v35; // rbx
  __int64 v36; // rdx
  __int64 v37; // rcx
  __m128 *v38; // rbp
  unsigned __int64 v39; // rdx
  _QWORD *v40; // rsi
  unsigned __int64 v41; // rax
  unsigned __int64 v42; // rdi
  __int64 v43; // rax
  int v44; // ecx
  unsigned __int64 v45; // rdx
  _QWORD *v46; // rsi
  unsigned __int64 v47; // rax
  unsigned __int64 v48; // rdi
  __int64 v49; // rdx
  __int64 v50; // rax
  __int64 v51; // rcx
  _QWORD *v52; // rbp
  unsigned __int64 v53; // r12
  _QWORD *v54; // rbx
  __int64 v55; // r15
  __int64 v56; // rax
  int v57; // ecx
  __int64 v58; // rdx
  int v59; // eax
  __int64 v60; // rdx
  int v61; // eax
  unsigned __int64 v62; // r12
  _QWORD *v63; // rbx
  __int64 v64; // rdx
  __int64 v65; // rcx
  __m128 *v66; // rbp
  __int64 v67; // [rsp+10h] [rbp-48h]
  __int64 v68; // [rsp+18h] [rbp-40h]

  if ( *(_BYTE *)(a1 + 138) )
  {
    a2 = *(_QWORD *)(a1 + 32) + 24LL;
    sub_1D9190(a1, (__int64 *)a2, 0);
  }
  v4 = *(_QWORD *)(a1 + 120);
  v5 = *(int **)(a1 + 32);
  if ( v4 )
  {
    v8 = *((_BYTE *)v5 + 32);
    if ( v8 == 5 )
    {
      *(_QWORD *)(*((_QWORD *)v5 + 5) + 8LL) += v4;
      v4 = *(_QWORD *)(a1 + 120);
      v5 = *(int **)(a1 + 32);
    }
    else if ( v8 == 8 )
    {
      *(_DWORD *)(*((_QWORD *)v5 + 5) + 12LL) += v4;
      v5 = *(int **)(a1 + 32);
      v4 = *(_QWORD *)(a1 + 120);
      v9 = *((_BYTE *)v5 + 48);
      if ( v9 != 5 )
      {
LABEL_18:
        if ( v9 == 8 )
        {
          *(_DWORD *)(*((_QWORD *)v5 + 7) + 12LL) += v4;
          v4 = *(_QWORD *)(a1 + 120);
          v5 = *(int **)(a1 + 32);
        }
        v10 = *((_BYTE *)v5 + 64);
        if ( v10 != 5 )
          goto LABEL_21;
        goto LABEL_35;
      }
LABEL_34:
      *(_QWORD *)(*((_QWORD *)v5 + 7) + 8LL) += v4;
      v5 = *(int **)(a1 + 32);
      v4 = *(_QWORD *)(a1 + 120);
      v10 = *((_BYTE *)v5 + 64);
      if ( v10 != 5 )
      {
LABEL_21:
        if ( v10 == 8 )
        {
          *(_DWORD *)(*((_QWORD *)v5 + 9) + 12LL) += v4;
          v5 = *(int **)(a1 + 32);
        }
        goto LABEL_4;
      }
LABEL_35:
      *(_QWORD *)(*((_QWORD *)v5 + 9) + 8LL) += v4;
      v5 = *(int **)(a1 + 32);
      goto LABEL_4;
    }
    v9 = *((_BYTE *)v5 + 48);
    if ( v9 != 5 )
      goto LABEL_18;
    goto LABEL_34;
  }
LABEL_4:
  v6 = *v5;
  if ( *(_BYTE *)(a1 + 136) )
  {
    if ( v6 == 55 )
    {
      if ( *((_BYTE *)v5 + 32) != 6 )
      {
        v11 = *((_BYTE *)v5 + 32);
        goto LABEL_28;
      }
      v25 = *(_QWORD *)(a1 + 8);
      v26 = *((_QWORD *)v5 + 5);
      v27 = *(unsigned int *)(a1 + 128);
      if ( (unsigned int)v27 >= *(_DWORD *)(v25 + 64) )
        goto LABEL_96;
      if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v25 + 528) + 8 * v27) + 32LL) == v26 )
      {
LABEL_59:
        v11 = *((_BYTE *)v5 + 32);
        if ( v11 == 6 )
          return 0;
LABEL_28:
        if ( v11 != 7 )
          return 0xFFFFFFFFLL;
        v12 = *(_DWORD **)(a1 + 64);
        v13 = v5[10];
        if ( v13 == v12[148] )
        {
          v5[10] = *(_DWORD *)(a1 + 132);
          return 0;
        }
        v14 = v12[146];
        if ( (int)v13 >= v14 && (signed int)v13 < v12[147] )
        {
          v5[10] = *(_DWORD *)(a1 + 128) + v13 - v14;
          return 0;
        }
        v26 = *(_QWORD *)(a1 + 8);
        if ( v13 < *(_DWORD *)(v26 + 64) )
        {
          v45 = sub_330F80(v26);
          v46 = **(_QWORD ***)(a1 + 56);
          if ( v46 )
          {
            v47 = *v46 & 0xFFFFFFFFFFFFFFFCLL;
            if ( !v47 )
            {
LABEL_84:
              v56 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1504LL);
              *((_BYTE *)v5 + 32) = 6;
              v57 = 8 * *(_DWORD *)(v56 + 84);
              if ( (unsigned __int64)v57 <= 0x3F )
                v45 &= ~(-1LL << v57);
              *((_QWORD *)v5 + 5) = v45;
              return 0;
            }
            while ( (*(_BYTE *)v47 & 2) == 0 )
            {
              while ( 1 )
              {
                v48 = *(_QWORD *)(v47 + 24);
                if ( v45 >= v48 )
                  break;
                v47 = *(_QWORD *)(v47 + 8);
                if ( (*(_BYTE *)v47 & 2) != 0 )
                  goto LABEL_77;
              }
              if ( v48 >= v45 )
              {
                if ( v46 == (_QWORD *)v47 )
                  break;
                goto LABEL_84;
              }
              v47 = *(_QWORD *)(v47 + 16);
            }
          }
LABEL_77:
          sub_66FA0(*(_QWORD *)(a1 + 8), 0, (__int64)"%a: branch out of outlined function", *(double *)a3.m128i_i64);
          return 0xFFFFFFFFLL;
        }
LABEL_96:
        sub_1D36D0(v26);
      }
      a2 = 4;
      flags = get_flags_ex();
      v5 = *(int **)(a1 + 32);
      if ( (~(_WORD)flags & 0x600) == 0 && (flags & 0x10000000) != 0 )
      {
        *v5 = 56;
        v58 = *(_QWORD *)(a1 + 16);
        v59 = *(_DWORD *)(v58 + 24);
        BYTE1(v59) &= ~2u;
        LOBYTE(v59) = v59 | 0x80;
        *(_DWORD *)(v58 + 24) = v59;
        v60 = *(_QWORD *)(a1 + 16);
        v61 = *(_DWORD *)(v60 + 24);
        BYTE1(v61) &= ~2u;
        LOBYTE(v61) = v61 | 0x80;
        *(_DWORD *)(v60 + 24) = v61;
        v62 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 24LL);
        v63 = (_QWORD *)j__qalloc_or_throw(80, 4, v60, v29);
        v63[4] = 0xFFFFFFFF00000000LL;
        v63[5] = 0;
        v63[6] = 0xFFFFFFFF00000000LL;
        v63[7] = 0;
        v63[8] = 0xFFFFFFFF00000000LL;
        v63[9] = 0;
        sub_330970(v63, v62);
        *(_DWORD *)v63 = 58;
        a2 = (__int64)v63;
        v66 = (__m128 *)sub_68FC0(*(_QWORD *)(a1 + 8), *(_DWORD *)(*(_QWORD *)(a1 + 16) + 72LL) + 1, v64, v65);
        sub_A3160((__int64)v66, v63, 0);
        v66[1].m128_i32[2] |= 2u;
        a3 = _mm_unpacklo_epi64((__m128i)v62, (__m128i)(v62 + 1));
        v66[2] = (__m128)a3;
        ++*(_DWORD *)(*(_QWORD *)(a1 + 64) + 588LL);
        v5 = *(int **)(a1 + 32);
      }
      v6 = *v5;
      if ( *v5 != 54 )
      {
LABEL_58:
        if ( v6 != 55 )
        {
LABEL_7:
          if ( (unsigned int)(v6 - 42) > 0xA )
          {
            if ( v6 != 53 )
            {
LABEL_9:
              if ( v6 == 58 )
              {
                *v5 = 55;
                *(_BYTE *)(*(_QWORD *)(a1 + 32) + 32LL) = 7;
                v49 = *(unsigned int *)(a1 + 132);
                *(_DWORD *)(*(_QWORD *)(a1 + 32) + 40LL) = v49;
                v50 = *(_QWORD *)(a1 + 32);
                v51 = *(_QWORD *)(v50 + 24);
                v52 = *(_QWORD **)(v50 + 16);
                v67 = v51;
                v68 = *(_QWORD *)(a1 + 16);
                if ( *(_QWORD *)(a1 + 104) )
                {
                  v53 = 0;
                  do
                  {
                    v54 = (_QWORD *)j__qalloc_or_throw(80, a2, v49, v51);
                    v54[4] = 0xFFFFFFFF00000000LL;
                    v54[5] = 0;
                    v54[6] = 0xFFFFFFFF00000000LL;
                    v54[7] = 0;
                    v54[8] = 0xFFFFFFFF00000000LL;
                    v54[9] = 0;
                    sub_330970(v54, v67);
                    *(_DWORD *)v54 = 4;
                    v55 = v53++;
                    v55 *= 16;
                    sub_125180((__int64)(v54 + 4), (unsigned __int8 *)(v55 + *(_QWORD *)(a1 + 96)));
                    sub_125180((__int64)(v54 + 8), (unsigned __int8 *)(v55 + *(_QWORD *)(a1 + 72)));
                    a2 = (__int64)v54;
                    v52 = sub_A3160(v68, v54, (__int64)v52);
                  }
                  while ( v53 < *(_QWORD *)(a1 + 104) );
                }
              }
              return 0;
            }
            v15 = *((_QWORD *)v5 + 7);
            v16 = *(int **)(v15 + 24);
            v17 = &v16[*(_QWORD *)(v15 + 32)];
            if ( v17 != v16 )
            {
              do
              {
                a2 = *(_QWORD *)(a1 + 64);
                v20 = *v16;
                if ( *v16 == *(_DWORD *)(a2 + 592) )
                {
                  v19 = *(_DWORD *)(a1 + 132);
                }
                else
                {
                  v18 = *(_DWORD *)(a2 + 584);
                  if ( v20 < v18 || v20 >= *(_DWORD *)(a2 + 588) )
                    return 0xFFFFFFFFLL;
                  v19 = *(_DWORD *)(a1 + 128) + v20 - v18;
                }
                *v16++ = v19;
              }
              while ( v17 != v16 );
              v5 = *(int **)(a1 + 32);
              v6 = *v5;
              goto LABEL_9;
            }
            return 0;
          }
          v21 = *((_BYTE *)v5 + 64);
          if ( v21 == 6 )
            return 0;
          if ( v21 != 7 )
            return 0xFFFFFFFFLL;
          v22 = *(_DWORD **)(a1 + 64);
          v23 = v5[18];
          if ( v23 == v22[148] )
          {
            v5[18] = *(_DWORD *)(a1 + 132);
            return 0;
          }
          v24 = v22[146];
          if ( (int)v23 >= v24 && (signed int)v23 < v22[147] )
          {
            v5[18] = *(_DWORD *)(a1 + 128) + v23 - v24;
            return 0;
          }
          v26 = *(_QWORD *)(a1 + 8);
          if ( v23 < *(_DWORD *)(v26 + 64) )
          {
            v39 = sub_330F80(v26);
            v40 = **(_QWORD ***)(a1 + 56);
            if ( v40 )
            {
              v41 = *v40 & 0xFFFFFFFFFFFFFFFCLL;
              if ( !v41 )
              {
LABEL_68:
                v43 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1504LL);
                *((_BYTE *)v5 + 64) = 6;
                v44 = 8 * *(_DWORD *)(v43 + 84);
                if ( (unsigned __int64)v44 <= 0x3F )
                  v39 &= ~(-1LL << v44);
                *((_QWORD *)v5 + 9) = v39;
                return 0;
              }
              while ( (*(_BYTE *)v41 & 2) == 0 )
              {
                v42 = *(_QWORD *)(v41 + 24);
                if ( v39 >= v42 )
                {
                  if ( v42 >= v39 )
                  {
                    if ( v40 == (_QWORD *)v41 )
                      goto LABEL_77;
                    goto LABEL_68;
                  }
                  v41 = *(_QWORD *)(v41 + 16);
                }
                else
                {
                  v41 = *(_QWORD *)(v41 + 8);
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
    else if ( v6 != 54 )
    {
      goto LABEL_7;
    }
    *v5 = 57;
    sub_11CA10((char *)(*(_QWORD *)(a1 + 32) + 32LL), (char *)(*(_QWORD *)(a1 + 32) + 48LL));
    v30 = *(_QWORD *)(a1 + 32);
    sub_11CA10((char *)(v30 + 48), (char *)(v30 + 64));
    v31 = *(_QWORD *)(a1 + 16);
    v32 = *(_DWORD *)(v31 + 24);
    BYTE1(v32) &= ~2u;
    LOBYTE(v32) = v32 | 0x80;
    *(_DWORD *)(v31 + 24) = v32;
    v33 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 24LL);
    v35 = (_QWORD *)j__qalloc_or_throw(80, v30 + 64, v31, v34);
    v35[4] = 0xFFFFFFFF00000000LL;
    v35[5] = 0;
    v35[6] = 0xFFFFFFFF00000000LL;
    v35[7] = 0;
    v35[8] = 0xFFFFFFFF00000000LL;
    v35[9] = 0;
    sub_330970(v35, v33);
    *(_DWORD *)v35 = 58;
    a2 = (__int64)v35;
    v38 = (__m128 *)sub_68FC0(*(_QWORD *)(a1 + 8), *(_DWORD *)(*(_QWORD *)(a1 + 16) + 72LL) + 1, v36, v37);
    sub_A3160((__int64)v38, v35, 0);
    v38[1].m128_i32[2] |= 2u;
    a3 = _mm_unpacklo_epi64((__m128i)v33, (__m128i)(v33 + 1));
    v38[2] = (__m128)a3;
    ++*(_DWORD *)(*(_QWORD *)(a1 + 64) + 588LL);
    v5 = *(int **)(a1 + 32);
    v6 = *v5;
    goto LABEL_58;
  }
  if ( v6 == 55 )
  {
    if ( *((_BYTE *)v5 + 32) != 7 || *(_DWORD *)(*(_QWORD *)(a1 + 64) + 592LL) != v5[10] )
      return 0;
    *v5 = 58;
    sub_11CDA0(*(_QWORD *)(a1 + 32) + 32LL);
    v5 = *(int **)(a1 + 32);
    v6 = *v5;
  }
  if ( (unsigned int)(v6 - 42) > 0xA )
  {
    if ( v6 != 57 )
      return 0;
    return (unsigned int)*(unsigned __int8 *)(a1 + 137) - 1;
  }
  else
  {
    if ( *((_BYTE *)v5 + 64) != 7 )
      return 0;
    return (unsigned int)-(*(_DWORD *)(*(_QWORD *)(a1 + 64) + 592LL) == v5[18]);
  }
}
