__int64 __fastcall sub_DA8580(__int64 a1, __int64 *a2, __int64 *a3)
{
  __int64 v6; // rax
  __int64 v7; // rsi
  unsigned int v8; // edx
  bool v9; // zf
  __m128i *v10; // r12
  __int64 v11; // r11
  __int64 v12; // rdi
  unsigned int v13; // ecx
  unsigned int v14; // eax
  unsigned int v15; // eax
  int v16; // r8d
  unsigned int v17; // eax
  unsigned int v18; // eax
  unsigned int v19; // edx
  __m128i *v20; // rdx
  __int64 *v21; // rax
  __int64 v22; // rbx
  _QWORD *v24; // rax
  __int64 v25; // rax
  int v26; // edx
  int v27; // ecx
  __int64 v28; // rax
  __int64 v29; // r8
  unsigned int v30; // r8d
  unsigned int v31; // r15d
  unsigned int v32; // r14d
  unsigned int v33; // r13d
  unsigned int v34; // r15d
  __m128i *v35; // rax
  __m128i *v36; // rdi
  __m128i *v37; // r10
  __int64 v38; // r12
  _QWORD *v39; // r9
  _QWORD *v40; // r12
  __m128i *v41; // rbx
  _QWORD *v42; // r11
  unsigned int v43; // r14d
  void *v44; // rdi
  int v45; // r15d
  __int64 v46; // rdx
  const double *v47; // rsi
  __int64 v48; // r11
  unsigned int v49; // eax
  unsigned int v50; // eax
  int v51; // edx
  unsigned int v52; // eax
  unsigned int v53; // eax
  unsigned int v54; // ecx
  __m128i *v55; // rax
  char **exception; // rbp
  __int64 v57; // [rsp+0h] [rbp-A8h]
  _QWORD *v58; // [rsp+0h] [rbp-A8h]
  int v59; // [rsp+Ch] [rbp-9Ch]
  unsigned int v60; // [rsp+Ch] [rbp-9Ch]
  __int64 v61; // [rsp+18h] [rbp-90h]
  __int64 v62; // [rsp+20h] [rbp-88h]
  __int64 v65; // [rsp+38h] [rbp-70h]
  __int64 v66[11]; // [rsp+50h] [rbp-58h] BYREF

  v61 = a1 + 120;
  v6 = sub_17E9C90(a1 + 120, 32);
  v7 = *a2;
  v8 = *(_DWORD *)(a1 + 52);
  v9 = *(_QWORD *)(a1 + 80) == 0;
  v10 = *(__m128i **)(a1 + 32);
  v11 = v6;
  *(_QWORD *)(v6 + 8) = *a2;
  v12 = *a3;
  v13 = v8 - 1;
  *(_QWORD *)(v6 + 16) = *a3;
  if ( v9 )
  {
    v29 = *(unsigned int *)(a1 + 40);
    if ( *(_QWORD *)(a1 + 72) >= (unsigned __int64)&v10[v29] )
    {
      v30 = v29 - v8;
      v31 = 2 * v8;
      v32 = 2 * v30;
      if ( 2 * v8 < v8 || v32 < v30 )
      {
LABEL_46:
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v66, "table overflow");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v66);
        sub_233E40((__int64)v66);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v65 = v6;
      v33 = v31 - 1;
      v59 = 2 * v8;
      v62 = v31;
      while ( 1 )
      {
        v34 = v32 + v59;
        if ( __CFADD__(v32, v59) )
          goto LABEL_46;
        v35 = (__m128i *)sub_186B270(16LL * v34);
        v36 = v35;
        v37 = &v35[v34];
        if ( v34 )
        {
          if ( ((16 * (_BYTE)v34) & 0x10) == 0 || (v35->m128i_i64[0] = 1, ++v35, v35 != v37) )
          {
            do
            {
              v35->m128i_i64[0] = 1;
              v35 += 2;
              v35[-1].m128i_i64[0] = 1;
            }
            while ( v35 != v37 );
          }
        }
        v38 = *(unsigned int *)(a1 + 52);
        v39 = *(_QWORD **)(a1 + 32);
        *(_DWORD *)(a1 + 56) = 0;
        v40 = &v39[2 * v38];
        v41 = &v36[v62];
        if ( v39 == v40 )
          break;
        v42 = v39;
LABEL_26:
        if ( (*v42 & 7LL) == 1 )
          goto LABEL_27;
        v58 = v42;
        v47 = (const double *)v42;
        while ( 1 )
        {
          while ( 1 )
          {
            v48 = *((_QWORD *)v47 + 1);
            v49 = 33
                * ((4097 * *(_DWORD *)(*(_QWORD *)(v48 + 16) & 0xFFFFFFFFFFFFFFFELL) + 2127912214)
                 ^ ((unsigned int)(4097 * *(_DWORD *)(*(_QWORD *)(v48 + 16) & 0xFFFFFFFFFFFFFFFELL) + 2127912214) >> 19)
                 ^ 0xC761C23C);
            v50 = 9 * (((v49 + 374761393) << 9) ^ (v49 - 369570787)) - 42973499;
            v51 = v50 ^ HIWORD(v50);
            v52 = 33
                * ((4097 * *(_DWORD *)(*(_QWORD *)(v48 + 8) & 0xFFFFFFFFFFFFFFFELL) + 2127912214)
                 ^ ((unsigned int)(4097 * *(_DWORD *)(*(_QWORD *)(v48 + 8) & 0xFFFFFFFFFFFFFFFELL) + 2127912214) >> 19)
                 ^ 0xC761C23C);
            v53 = 9 * (((v52 + 374761393) << 9) ^ (v52 - 369570787)) - 42973499;
            v54 = v53 ^ HIWORD(v53) ^ 0xB55A4F09;
            v55 = &v36[v33
                     & (((((v51 ^ 0xB55A4F09) - v54)
                        ^ (v54 << 8)
                        ^ ((v54 - (((v51 ^ 0xB55A4F09) - v54) ^ (v54 << 8))) << 16))
                       + (((v51 ^ 0xB55A4F09) - v54) ^ (v54 << 8))
                       - v54)
                      ^ ((v54 - (((v51 ^ 0xB55A4F09) - v54) ^ (v54 << 8))) << 10))];
            if ( (v55->m128i_i64[0] & 7) != 1 )
              break;
            v55->m128i_i64[0] = 0;
            v47 = *(const double **)v47;
            ++*(_DWORD *)(a1 + 56);
            v55->m128i_i64[1] = v48;
            if ( !v47 )
            {
LABEL_42:
              v42 = v58;
LABEL_27:
              v42 += 2;
              if ( v40 == v42 )
              {
                v10 = v36;
                v43 = v32 + v59;
                v11 = v65;
                v44 = v39;
                v45 = v59;
                v13 = v33;
                goto LABEL_29;
              }
              goto LABEL_26;
            }
          }
          if ( v37 == v41 )
            break;
          *v41++ = _mm_loadu_si128(v55);
          *(__m128 *)v55 = _mm_loadh_ps(v47 + 1);
          v47 = *(const double **)v47;
          if ( !v47 )
            goto LABEL_42;
        }
        sub_186B220(v36);
        if ( 2 * v32 < v32 )
          goto LABEL_46;
        v32 *= 2;
      }
      v10 = v36;
      v43 = v32 + v59;
      v11 = v65;
      v45 = v59;
      v13 = v33;
      v44 = v39;
LABEL_29:
      if ( v44 )
      {
        v60 = v13;
        v57 = v11;
        sub_186B220(v44);
        v13 = v60;
        v11 = v57;
      }
      *(_QWORD *)(a1 + 32) = v10;
      v12 = *(_QWORD *)(v11 + 16);
      *(_DWORD *)(a1 + 40) = v43;
      v7 = *(_QWORD *)(v11 + 8);
      *(_DWORD *)(a1 + 52) = v45;
      *(_QWORD *)(a1 + 72) = v41;
      *(_QWORD *)(a1 + 80) = 0;
      *(_QWORD *)(a1 + 88) = 0;
    }
  }
  v14 = 33
      * ((4097 * *(_DWORD *)(v12 & 0xFFFFFFFFFFFFFFFELL) + 2127912214)
       ^ ((unsigned int)(4097 * *(_DWORD *)(v12 & 0xFFFFFFFFFFFFFFFELL) + 2127912214) >> 19)
       ^ 0xC761C23C);
  v15 = 9 * (((v14 + 374761393) << 9) ^ (v14 - 369570787)) - 42973499;
  v16 = v15 ^ HIWORD(v15);
  v17 = 33
      * ((4097 * *(_DWORD *)(v7 & 0xFFFFFFFFFFFFFFFELL) + 2127912214)
       ^ ((unsigned int)(4097 * *(_DWORD *)(v7 & 0xFFFFFFFFFFFFFFFELL) + 2127912214) >> 19)
       ^ 0xC761C23C);
  v18 = 9 * (((v17 + 374761393) << 9) ^ (v17 - 369570787)) - 42973499;
  v19 = v18 ^ HIWORD(v18) ^ 0xB55A4F09;
  v20 = &v10[v13
           & (((((v16 ^ 0xB55A4F09) - v19) ^ (v19 << 8) ^ ((v19 - (((v16 ^ 0xB55A4F09) - v19) ^ (v19 << 8))) << 16))
             + (((v16 ^ 0xB55A4F09) - v19) ^ (v19 << 8))
             - v19)
            ^ ((v19 - (((v16 ^ 0xB55A4F09) - v19) ^ (v19 << 8))) << 10))];
  v21 = (__int64 *)v20;
  if ( (v20->m128i_i64[0] & 7) == 1 )
  {
    v24 = nullptr;
    *(_QWORD *)(a1 + 56) = _mm_add_epi32(
                             _mm_loadl_epi64((const __m128i *)(a1 + 56)),
                             _mm_loadl_epi64((const __m128i *)&qword_18B6000)).m128i_u64[0];
LABEL_10:
    v20->m128i_i64[1] = v11;
    v22 = v11;
    v20->m128i_i64[0] = (__int64)v24;
LABEL_11:
    v25 = *(_QWORD *)(a1 + 24);
    ++*(_DWORD *)(a1 + 96);
    if ( v25 && (v26 = *(_DWORD *)(v25 - 4)) != 0 )
    {
      v46 = (unsigned int)(v26 - 1);
      v27 = *(_DWORD *)(v25 + 4 * v46);
      *(_DWORD *)(v25 - 4) = v46;
    }
    else
    {
      v27 = *(_DWORD *)(a1 + 16);
      *(_DWORD *)(a1 + 16) = v27 + 1;
    }
    *(_BYTE *)(v22 + 24) &= ~1u;
    *(_DWORD *)v22 = v27;
    v28 = *a2;
    *(_DWORD *)(v22 + 4) = 0;
    ++*(_DWORD *)((v28 & 0xFFFFFFFFFFFFFFFELL) + 4);
    ++*(_DWORD *)((*a3 & 0xFFFFFFFFFFFFFFFELL) + 4);
  }
  else
  {
    while ( 1 )
    {
      v22 = v21[1];
      if ( *(_QWORD *)(v22 + 8) == v7 && *(_QWORD *)(v22 + 16) == v12 )
        break;
      v21 = (__int64 *)*v21;
      ++*(_DWORD *)(a1 + 64);
      if ( !v21 )
      {
        v24 = *(_QWORD **)(a1 + 80);
        ++*(_DWORD *)(a1 + 60);
        if ( v24 )
        {
          *(_QWORD *)(a1 + 80) = *v24;
        }
        else
        {
          v24 = *(_QWORD **)(a1 + 72);
          *(_QWORD *)(a1 + 72) = v24 + 2;
        }
        *(__m128i *)v24 = _mm_loadu_si128(v20);
        goto LABEL_10;
      }
    }
    if ( v11 == v22 )
      goto LABEL_11;
    sub_17E9C40(v61, 32, v11);
  }
  return v22;
}

