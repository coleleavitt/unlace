__int64 __fastcall sub_57A140(__int64 a1, __int64 a2, int *a3)
{
  __int64 v3; // rbp
  unsigned int v4; // r15d
  char v5; // al
  __int64 v6; // rcx
  unsigned int v7; // edx
  unsigned int v8; // r13d
  __int64 v9; // r9
  char v10; // r12
  __int64 v11; // r12
  __int64 v12; // rbp
  __int64 v13; // rax
  __int64 v14; // rsi
  __int64 v15; // rdi
  __int64 v16; // rbx
  int v17; // eax
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rsi
  const __m128i *v21; // rdx
  __int128 v22; // xmm0
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  _BOOL4 v27; // r14d
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // rbx
  unsigned int v31; // eax
  __int64 result; // rax
  unsigned __int64 v33; // rax
  unsigned __int64 v34; // rax
  __int64 v35; // r8
  __int64 v36; // rsi
  unsigned int v37; // eax
  int v38; // eax
  int v39; // eax
  __int64 v40; // rax
  __int64 v41; // rdx
  __int16 v42; // ax
  __int64 v43; // rcx
  __int64 v44; // rsi
  unsigned int *v45; // rdi
  __int64 v46; // rdx
  __int64 v47; // r8
  unsigned int v48; // eax
  unsigned int v49; // [rsp+20h] [rbp-A8h]
  char v50; // [rsp+27h] [rbp-A1h]
  __int64 v51; // [rsp+28h] [rbp-A0h]
  bool v54; // [rsp+63h] [rbp-65h] BYREF
  unsigned int v55; // [rsp+64h] [rbp-64h] BYREF
  unsigned int v56; // [rsp+68h] [rbp-60h] BYREF
  unsigned int v57; // [rsp+6Ch] [rbp-5Ch] BYREF
  __int128 v58; // [rsp+70h] [rbp-58h] BYREF
  __m128i v59[4]; // [rsp+80h] [rbp-48h] BYREF

  v3 = a1;
  v51 = a1 + 88;
  do
  {
    v4 = 0;
    v54 = 0;
    v5 = sub_566DA0(v3, &v57, &v55, (__int64)&v56, &v54);
    v7 = *(_DWORD *)(v3 + 64);
    v8 = v55;
    v9 = v56;
    v10 = v5;
    if ( v7 )
    {
      v11 = v3;
      v50 = v5;
      v12 = 0;
      v49 = v56;
      while ( 1 )
      {
        while ( 1 )
        {
          v14 = *(_QWORD *)(v11 + 56);
          v15 = 16LL * v4;
          v16 = v14 + v15;
          v17 = *(_DWORD *)(v14 + v15 + 4);
          v19 = *(unsigned __int16 *)(v14 + v15 + 14);
          v18 = v19 & 0xFFF;
          LOWORD(v19) = v19 & 0xFFF;
          if ( (unsigned int)(unsigned __int16)v17 < *(_DWORD *)(v11 + 80) )
            break;
          if ( (unsigned int)v18 < *(_DWORD *)(v11 + 96) )
          {
            v13 = v51;
            goto LABEL_11;
          }
LABEL_6:
          memmove((void *)(v14 + v15), (const void *)(16LL * (v4 + 1) + v14), 16LL * (v7 - v4 - 1));
          v7 = *(_DWORD *)(v11 + 64) - 1;
          *(_DWORD *)(v11 + 64) = v7;
LABEL_7:
          if ( v4 >= v7 )
            goto LABEL_15;
        }
        v13 = *(_QWORD *)(v11 + 72) + 16LL * (unsigned __int16)v17;
        if ( (unsigned int)v18 >= *(_DWORD *)(v13 + 8) )
        {
          *(_DWORD *)(v13 + 8) = -1;
          ++*(_DWORD *)(v11 + 108);
          goto LABEL_6;
        }
LABEL_11:
        v20 = *(_QWORD *)v13;
        v21 = (const __m128i *)(*(_QWORD *)v13 + 40LL * (unsigned __int16)v19);
        v22 = (__int128)_mm_loadu_si128(v21 + 1);
        v58 = (__int128)_mm_loadu_si128(v21);
        v59[0] = (__m128i)v22;
        if ( *(_DWORD *)(v11 + 120) >= (unsigned int)sub_566CC0(v15, v20, (__int64)v21, v6, v18, v19, v58, v22)
          || (v33 = sub_566D00(
                      v15,
                      v20,
                      v23,
                      v24,
                      v25,
                      v26,
                      (__int128)_mm_load_si128((const __m128i *)&v58),
                      (__int128)_mm_load_si128(v59)),
              v23 = *(unsigned int *)(v11 + 128),
              v25 = *(unsigned int *)(v11 + 132),
              v20 = HIDWORD(v33),
              (unsigned int)v33 < (unsigned int)v23) )
        {
          v27 = 1;
        }
        else
        {
          LOBYTE(v20) = (unsigned int)v25 >= HIDWORD(v33);
          v27 = (unsigned int)v25 >= HIDWORD(v33) && (_DWORD)v33 == (_DWORD)v23;
        }
        if ( (unsigned int)sub_565DC0(v15, v20, v23, v24, v25, v26, _mm_load_si128((const __m128i *)&v58).m128i_u32[0]) < *(_DWORD *)(v11 + 124) )
        {
          v34 = sub_565DD0(v15, v20, v28, v6, v29, v9, (__int128)_mm_load_si128((const __m128i *)&v58));
          v36 = *(unsigned int *)(v11 + 140);
          if ( *(_DWORD *)(v11 + 136) >= (unsigned int)v34
            && (*(_DWORD *)(v11 + 136) != (_DWORD)v34 || (unsigned int)v36 > HIDWORD(v34))
            && !v27 )
          {
            v37 = sub_565DC0(v15, v36, HIDWORD(v34), v6, v35, v9, _mm_load_si128((const __m128i *)&v58).m128i_u32[0]);
            if ( v37 < v8 )
            {
              v6 = *(unsigned __int16 *)(v16 + 12);
              v49 = *(unsigned __int16 *)(v16 + 12);
              goto LABEL_32;
            }
            if ( v37 == v8 )
            {
              v6 = v49;
              if ( *(unsigned __int16 *)(v16 + 12) < v49 )
              {
                v49 = *(unsigned __int16 *)(v16 + 12);
LABEL_32:
                v8 = v37;
                v12 = v16;
              }
            }
            v7 = *(_DWORD *)(v11 + 64);
            ++v4;
            goto LABEL_7;
          }
        }
        *(_WORD *)(v16 + 14) = (*(_WORD *)(v16 + 14) + 1) & 0xFFF | *(_WORD *)(v16 + 14) & 0xF000;
        v7 = *(_DWORD *)(v11 + 64);
        if ( v4 >= v7 )
        {
LABEL_15:
          v30 = v12;
          v3 = v11;
          v10 = v50;
          if ( !v30 )
            break;
LABEL_37:
          v38 = *(_DWORD *)v30;
          if ( *(_DWORD *)v30 == -1 )
          {
            v38 = *(_DWORD *)(v3 + 144);
            *(_DWORD *)(v3 + 144) = v38 + 1;
            *(_DWORD *)v30 = v38;
          }
          *(_DWORD *)a2 = v38;
          *(_WORD *)(a2 + 4) = *(_WORD *)(v30 + 12);
          v39 = *(_DWORD *)(v30 + 4);
          if ( (unsigned int)(unsigned __int16)v39 >= *(_DWORD *)(v3 + 80) )
            v40 = v3 + 88;
          else
            v40 = *(_QWORD *)(v3 + 72) + 16LL * (unsigned __int16)v39;
          v41 = *(_QWORD *)v40;
          *(_WORD *)(a2 + 6) = *(_DWORD *)(v40 + 8);
          v42 = *(_WORD *)(v30 + 14);
          *(_QWORD *)(a2 + 8) = v41;
          *a3 = v42 & 0xFFF;
          *(_WORD *)(v30 + 14) = (*(_WORD *)(v30 + 14) + 1) & 0xFFF | *(_WORD *)(v30 + 14) & 0xF000;
          return 1;
        }
      }
    }
    if ( v54 )
    {
      v9 = 16LL * v57;
      v30 = *(_QWORD *)(v3 + 40) + v9;
      if ( v30 )
        goto LABEL_37;
    }
    if ( !*(_DWORD *)(v3 + 108) )
    {
      v31 = *(_DWORD *)(v3 + 80);
      if ( v31 >= *(_DWORD *)(v3 + 104) )
      {
        if ( v10 )
        {
          v43 = *(_QWORD *)(v3 + 40);
          v44 = v57;
          v45 = (unsigned int *)(v43 + 16LL * v57);
          v46 = v45[1];
          v47 = (unsigned __int16)v46;
          if ( (unsigned __int16)v46 < v31 )
          {
            v46 = *(_QWORD *)(v3 + 72) + 16LL * (unsigned __int16)v46;
            *(_DWORD *)(v46 + 8) = -1;
            *(_DWORD *)(v3 + 108) = 1;
          }
          v48 = *(_DWORD *)(v3 + 48);
          if ( (unsigned int)v44 >= v48 )
            sub_55D280(v45, v44, v46, v43, v47, v9);
          memmove(v45, (const void *)(v43 + 16LL * (unsigned int)(v44 + 1)), 16LL * (v48 - (unsigned int)v44 - 1));
          --*(_DWORD *)(v3 + 48);
        }
      }
    }
    result = sub_578840(v3, 1u);
  }
  while ( (_BYTE)result || *(_DWORD *)(v3 + 64) );
  return result;
}
