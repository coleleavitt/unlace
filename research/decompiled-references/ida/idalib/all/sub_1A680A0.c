__int64 __fastcall sub_1A680A0(__int64 a1, __int64 a2, int a3, __int64 a4, unsigned __int64 a5, __int64 a6)
{
  __int64 v6; // rdx
  unsigned __int64 v7; // rcx
  char *v8; // r8
  __int64 v9; // r9
  unsigned __int64 *v10; // rbp
  __int64 v11; // rbx
  unsigned __int64 v12; // r15
  unsigned __int64 v13; // rdi
  __int64 v14; // rbx
  __int64 v15; // r14
  unsigned __int8 v16; // al
  int v17; // edx
  __int64 v19; // r13
  __int16 v20; // ax
  __int64 v21; // rax
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rcx
  __int64 v24; // rsi
  __int64 v25; // rdi
  __int64 v26; // rsi
  char *v27; // rsi
  char *v28; // rdx
  __int64 v29; // rsi
  __int64 v30; // rdx
  __int64 v31; // rax
  __int64 *v32; // rcx
  __int64 v33; // rax
  char *v34; // rsi
  __int64 v35; // rdx
  __int64 v36; // rax
  __int64 *v37; // r14
  __int64 *v38; // rbp
  __int64 *v39; // rcx
  unsigned int v40; // edx
  __int64 v41; // rdi
  int v42; // edi
  _BOOL8 v43; // rax
  __int64 v44; // rdx
  bool v45; // al
  __int64 *v46; // rcx
  __int64 *v47; // rcx
  __int64 *v48; // rcx
  __int64 v49; // rdx
  bool v50; // al
  __int64 v51; // rdx
  bool v52; // al
  unsigned __int64 *v53; // [rsp+0h] [rbp-218h]
  __m128 v57; // [rsp+30h] [rbp-1E8h] BYREF
  __int64 v58; // [rsp+40h] [rbp-1D8h]
  __int64 v59; // [rsp+48h] [rbp-1D0h]
  unsigned __int64 *v60; // [rsp+50h] [rbp-1C8h]
  __int64 *v61; // [rsp+58h] [rbp-1C0h]
  unsigned __int64 v62[2]; // [rsp+60h] [rbp-1B8h] BYREF
  __m128i si128; // [rsp+70h] [rbp-1A8h] BYREF
  _QWORD v64[2]; // [rsp+80h] [rbp-198h] BYREF
  unsigned int v65; // [rsp+90h] [rbp-188h]
  void *v66; // [rsp+98h] [rbp-180h]
  __int64 v67; // [rsp+A0h] [rbp-178h]
  _BYTE v68[136]; // [rsp+A8h] [rbp-170h] BYREF
  __int64 v69; // [rsp+130h] [rbp-E8h] BYREF
  __int64 v70; // [rsp+138h] [rbp-E0h]
  unsigned int v71; // [rsp+140h] [rbp-D8h]
  void *ptr; // [rsp+148h] [rbp-D0h]
  __int64 v73; // [rsp+150h] [rbp-C8h]
  _BYTE v74[192]; // [rsp+158h] [rbp-C0h] BYREF

  v66 = v68;
  ptr = v74;
  v67 = 0x1000000000LL;
  v73 = 0x1000000000LL;
  v64[0] = 0;
  v64[1] = 0;
  v65 = 0;
  v69 = 0;
  v70 = 0;
  v71 = 0;
  sub_1A679B0(a1, a3, a4, a5, (__int64)v64, (__int64)&v69);
  v10 = (unsigned __int64 *)v66;
  v53 = (unsigned __int64 *)((char *)v66 + 8 * (unsigned int)v67);
  if ( v66 != v53 )
  {
    v57.m128_u64[0] = (unsigned __int64)v62;
    v57 = _mm_loadh_ps((const double *)v57.m128_u64);
    while ( 1 )
    {
      v62[0] = *v10;
      v7 = sub_B94670(v62[0], a2, v6, v7, (__int64)v8, v9);
      if ( v7 )
        break;
LABEL_14:
      if ( v53 == ++v10 )
        goto LABEL_15;
    }
    while ( 1 )
    {
      v11 = v7;
      v7 &= 0xFFFFFFFFFFFFFFF8LL;
      v12 = v7;
      v13 = v7;
      v14 = (v11 >> 2) & 1;
      if ( (_DWORD)v14 )
      {
        v13 = 0;
        if ( v7 )
          v13 = *(_QWORD *)v7;
      }
      v15 = v13;
      v16 = *(_BYTE *)(v13 + 28) & 0x7F;
      v17 = v16;
      if ( (unsigned int)v16 - 53 <= 1 )
      {
        v15 = *(_QWORD *)(v13 + 64);
        v16 = *(_BYTE *)(v15 + 28) & 0x7F;
        v17 = v16;
      }
      v6 = (unsigned int)(v17 - 34);
      if ( (unsigned int)v6 <= 5 || v16 == 71 )
      {
        v19 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v13 + 56LL))(v13);
        if ( v19 )
          break;
      }
LABEL_11:
      if ( v14 )
      {
        if ( v12 )
        {
          v7 = *(_QWORD *)(v12 + 8);
          if ( v7 )
            continue;
        }
      }
      goto LABEL_14;
    }
    while ( 1 )
    {
      v20 = *(_WORD *)(v19 + 30);
      if ( (v20 & 0x20) == 0 )
        break;
      v21 = *(_QWORD *)(v19 + 8);
      if ( (v21 & 6) == 0
        || (*(char *)(v19 + 29) < 0
          ? (v29 = sub_B8C660(v19), v21 = *(_QWORD *)(v19 + 8) & 7LL)
          : (v29 = *(_QWORD *)(v19 - 8), LOBYTE(v21) = v21 & 7),
            sub_1A42210(a1, v29, (unsigned __int8)v21 > 2u, v7, (__int64)v8, v9) || sub_1A42580(a1, v19, 0)) )
      {
LABEL_23:
        sub_1A5DB80(a6, v15);
        goto LABEL_11;
      }
      if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 21LL) & 4) != 0 && (unsigned __int8)sub_B8D5B0(v19) )
      {
        v30 = *(_QWORD *)(v19 + 8) & 7LL;
        if ( *(char *)(v19 + 29) < 0 )
        {
          v31 = 0;
          if ( v30 )
            v31 = sub_B8C660(v19);
        }
        else
        {
          v31 = v30 ? *(_QWORD *)(v19 - 8) : 0LL;
        }
        v62[1] = v31;
        if ( sub_B8D690(v19) )
        {
          v32 = (__int64 *)ptr;
          v33 = 8LL * (unsigned int)v73;
          v34 = (char *)ptr + v33;
          si128 = _mm_load_si128((const __m128i *)&v57);
          v35 = v33 >> 3;
          v36 = v33 >> 5;
          v61 = (__int64 *)v34;
          if ( v36 )
          {
            v58 = v15;
            v59 = v14;
            v60 = v10;
            v37 = (__int64 *)((char *)ptr + 32 * v36);
            v38 = (__int64 *)ptr;
            while ( 1 )
            {
              if ( sub_1A38BD0(&si128, (_QWORD **)&si128.m128i_i64[1], *v38) )
              {
                v39 = v38;
                v15 = v58;
                v14 = v59;
                v10 = v60;
                goto LABEL_66;
              }
              if ( sub_1A38BD0(&si128, (_QWORD **)&si128.m128i_i64[1], v38[1]) )
              {
                v47 = v38;
                v15 = v58;
                v14 = v59;
                v10 = v60;
                v39 = v47 + 1;
                goto LABEL_66;
              }
              if ( sub_1A38BD0(&si128, (_QWORD **)&si128.m128i_i64[1], v38[2]) )
              {
                v46 = v38;
                v15 = v58;
                v14 = v59;
                v10 = v60;
                v39 = v46 + 2;
                goto LABEL_66;
              }
              if ( sub_1A38BD0(&si128, (_QWORD **)&si128.m128i_i64[1], v38[3]) )
                break;
              v38 += 4;
              if ( v38 == v37 )
              {
                v32 = v38;
                v15 = v58;
                v14 = v59;
                v10 = v60;
                v35 = v61 - v32;
                goto LABEL_99;
              }
            }
            v48 = v38;
            v15 = v58;
            v14 = v59;
            v10 = v60;
            v39 = v48 + 3;
LABEL_66:
            if ( v61 != v39 )
              goto LABEL_23;
            goto LABEL_46;
          }
LABEL_99:
          if ( v35 != 2 )
          {
            if ( v35 != 3 )
            {
              if ( v35 != 1 )
                goto LABEL_46;
              goto LABEL_102;
            }
            v49 = *v32;
            v58 = (__int64)v32;
            v50 = sub_1A38BD0(&si128, (_QWORD **)&si128.m128i_i64[1], v49);
            v39 = (__int64 *)v58;
            if ( v50 )
              goto LABEL_66;
            v32 = (__int64 *)(v58 + 8);
          }
          v51 = *v32;
          v58 = (__int64)v32;
          v52 = sub_1A38BD0(&si128, (_QWORD **)&si128.m128i_i64[1], v51);
          v39 = (__int64 *)v58;
          if ( v52 )
            goto LABEL_66;
          v32 = (__int64 *)(v58 + 8);
LABEL_102:
          v44 = *v32;
          v58 = (__int64)v32;
          v45 = sub_1A38BD0(&si128, (_QWORD **)&si128.m128i_i64[1], v44);
          v39 = (__int64 *)v58;
          if ( !v45 )
            goto LABEL_46;
          goto LABEL_66;
        }
      }
LABEL_46:
      v19 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v19 + 48LL))(v19);
      if ( !v19 )
        goto LABEL_11;
    }
    if ( (v20 & 0x180) == 0 )
      goto LABEL_46;
    v22 = *(_QWORD *)(v19 + 16) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_QWORD *)(v19 + 16) & 4) != 0 )
      v22 = *(_QWORD *)(v22 + 8);
    if ( v22 )
      v22 -= 64LL;
    if ( (_DWORD)v70 )
    {
      if ( !v71 )
        goto LABEL_46;
      v23 = v71 - 1;
      v40 = v23 & (((unsigned int)v22 >> 9) ^ ((unsigned int)v22 >> 4));
      v41 = *(_QWORD *)(v69 + 8LL * v40);
      if ( v41 != v22 )
      {
        if ( v41 == -4096 )
          goto LABEL_46;
        v42 = 1;
        while ( 1 )
        {
          v9 = (unsigned int)(v42 + 1);
          v40 = v23 & (v42 + v40);
          v8 = *(char **)(v69 + 8LL * v40);
          if ( (char *)v22 == v8 )
            break;
          ++v42;
          if ( v8 == (char *)-4096LL )
            goto LABEL_46;
        }
      }
      goto LABEL_70;
    }
    v23 = (unsigned __int64)ptr;
    v24 = 8LL * (unsigned int)v73;
    v8 = (char *)ptr + v24;
    v25 = v24 >> 3;
    v26 = v24 >> 5;
    if ( v26 )
    {
      if ( *(_QWORD *)ptr == v22 )
      {
        v43 = ptr != v8;
      }
      else if ( v22 == *((_QWORD *)ptr + 1) )
      {
        v23 = (unsigned __int64)ptr + 8;
        v43 = v8 != (char *)ptr + 8;
      }
      else if ( v22 == *((_QWORD *)ptr + 2) )
      {
        v23 = (unsigned __int64)ptr + 16;
        v43 = v8 != (char *)ptr + 16;
      }
      else
      {
        v27 = (char *)ptr + 32 * v26;
        if ( v22 == *((_QWORD *)ptr + 3) )
        {
          v23 = (unsigned __int64)ptr + 24;
          v43 = v8 != (char *)ptr + 24;
        }
        else
        {
          while ( 1 )
          {
            v28 = (char *)(v23 + 32);
            if ( v27 == (char *)(v23 + 32) )
            {
              v25 = (v8 - v28) >> 3;
              goto LABEL_43;
            }
            if ( v22 == *(_QWORD *)(v23 + 32) )
              goto LABEL_78;
            if ( v22 == *(_QWORD *)(v23 + 40) )
            {
              v23 += 40LL;
              v43 = v8 != (char *)v23;
              goto LABEL_79;
            }
            if ( v22 == *(_QWORD *)(v23 + 48) )
            {
              v23 += 48LL;
              v43 = v8 != (char *)v23;
              goto LABEL_79;
            }
            if ( v22 == *(_QWORD *)(v23 + 56) )
              break;
            v23 += 32LL;
          }
          v23 += 56LL;
          v43 = v8 != (char *)v23;
        }
      }
LABEL_79:
      if ( !v43 )
        goto LABEL_46;
LABEL_70:
      if ( (*(_BYTE *)(v19 + 8) & 6) == 0 || sub_1A42350(a1, v19, 1u, v23, (__int64)v8, v9) )
        goto LABEL_23;
      goto LABEL_46;
    }
    v28 = (char *)ptr;
LABEL_43:
    if ( v25 != 2 )
    {
      if ( v25 != 3 )
      {
        if ( v25 != 1 )
          goto LABEL_46;
        goto LABEL_77;
      }
      if ( v22 == *(_QWORD *)v28 )
      {
        v43 = v28 != v8;
        goto LABEL_79;
      }
      v28 += 8;
    }
    if ( v22 == *(_QWORD *)v28 )
    {
LABEL_78:
      v43 = v8 != v28;
      goto LABEL_79;
    }
    v28 += 8;
LABEL_77:
    if ( v22 != *(_QWORD *)v28 )
      goto LABEL_46;
    goto LABEL_78;
  }
LABEL_15:
  if ( ptr != v74 )
    free(ptr);
  operator delete(v69, 8LL * v71, 8);
  if ( v66 != v68 )
    free(v66);
  return operator delete(v64[0], 8LL * v65, 8);
}
