_DWORD *__fastcall sub_F1E6F0(_DWORD *a1, int a2, __int64 a3, __int64 a4, _BYTE *a5)
{
  _DWORD *result; // rax
  unsigned int v8; // r14d
  __int64 v9; // rbp
  const __m128i *v10; // rsi
  __int64 v11; // rbx
  bool v12; // al
  _BYTE *v13; // r8
  __int64 v14; // rax
  _QWORD *v15; // rdi
  char v16; // al
  char v17; // bl
  unsigned __int64 v18; // rax
  __int64 v19; // rdi
  char v20; // r10
  char v21; // al
  char v22; // bl
  char v23; // r11
  char v24; // r10
  __int64 v25; // rax
  __int64 v26; // r15
  __int64 v27; // rdi
  char v28; // al
  _DWORD *v29; // rdi
  char v30; // bl
  char v31; // r11
  char v32; // r10
  char v33; // al
  char v34; // r10
  char v35; // si
  char v36; // bl
  char v37; // al
  char v38; // bl
  char v39; // r10
  char v40; // si
  _BYTE *v42; // [rsp+8h] [rbp-60h]
  _BYTE *v43; // [rsp+8h] [rbp-60h]
  _BYTE *v44; // [rsp+8h] [rbp-60h]
  _BYTE *v45; // [rsp+10h] [rbp-58h]
  __int64 v46; // [rsp+10h] [rbp-58h]
  _BYTE v47[64]; // [rsp+28h] [rbp-40h] BYREF

  a1[2] = a2;
  *a1 = *(_DWORD *)(a3 + 272);
  a1[1] = *(_DWORD *)(a3 + 276);
  result = (_DWORD *)*(unsigned int *)(a3 + 8);
  a1[3] = (_DWORD)result;
  if ( (_DWORD)result )
  {
    v8 = 0;
    do
    {
      v9 = 32LL * v8;
      v10 = (const __m128i *)(v9 + *(_QWORD *)a3);
      switch ( v10->m128i_i32[0] & 0x7FFFFFFF )
      {
        case 0:
        case 9:
          v25 = v10->m128i_i64[1];
          v17 = 0;
          v46 = v25 + 24LL * v10->m128i_u32[1];
          if ( v25 != v46 )
          {
            v26 = v10->m128i_i64[1];
            do
            {
              v27 = v26;
              v43 = a5;
              v26 += 24;
              v28 = sub_F1D2B0(v27);
              a5 = v43;
              v17 |= v28;
            }
            while ( v46 != v26 );
            v10 = (const __m128i *)(v9 + *(_QWORD *)a3);
          }
          break;
        case 1:
          v18 = v10->m128i_i64[1] & 0xFFFFFFFFFFFFFFF0LL;
          v19 = *(_QWORD *)v18;
          v20 = *(_BYTE *)(*(_QWORD *)v18 + 17LL);
          v21 = (2 * ((v20 & 2) != 0))
              | ((v20 & 4) != 0 ? 0xC : 0)
              | (16 * ((v20 & 0x10) != 0))
              | v20 & 1
              | (32 * ((v20 & 8) != 0));
          v22 = (2 * ((v20 & 2) != 0)) & 0x10 | (16 * ((v20 & 0x10) != 0)) & 0x10;
          if ( v22 )
            v22 = 8;
          v23 = (2 * ((v20 & 2) != 0)) & 0xC | ((v20 & 4) != 0 ? 0xC : 0);
          if ( v23 )
            v23 = 4;
          v24 = (2 * ((v20 & 2) != 0)) & 2;
          if ( (v21 & 2) != 0 )
            v24 = 2;
          v17 = v24 | v23 | v21 & 1 | v22;
          if ( *(_BYTE *)(v19 + 16) == 38 )
            v17 |= 4u;
          break;
        case 2:
          v11 = v10[1].m128i_i64[0];
          v45 = a5;
          v12 = sub_B8E0B0(v11);
          v13 = v45;
          if ( !v12 || (v14 = sub_B8D340(v11), v13 = v45, (v15 = (_QWORD *)v14) == nullptr) )
          {
            v15 = (_QWORD *)(*(_QWORD *)(v10[1].m128i_i64[0] + 16) & 0xFFFFFFFFFFFFFFF8LL);
            if ( (*(_QWORD *)(v10[1].m128i_i64[0] + 16) & 4) != 0 )
              v15 = (_QWORD *)*v15;
          }
          v42 = v13;
          v16 = sub_B8E180((unsigned __int64)v15);
          a5 = v42;
          v10 = (const __m128i *)(v9 + *(_QWORD *)a3);
          if ( v16 )
            goto LABEL_10;
          goto LABEL_7;
        case 3:
        case 4:
        case 5:
LABEL_7:
          v17 = 0;
          break;
        case 6:
          v44 = a5;
          sub_F22A90(v47, v10->m128i_i64[1]);
          v33 = sub_F23270(v47);
          a5 = v44;
          v34 = v33 & 8;
          if ( (v33 & 8) != 0 )
            v34 = 16;
          v35 = v33 & 4;
          if ( (v33 & 4) != 0 )
            v35 = 12;
          v36 = v33 & 2;
          if ( (v33 & 2) != 0 )
            v36 = 2;
          v37 = v36 | v35 | v34 | v33 & 1;
          v38 = v37 & 0x10;
          if ( (v37 & 0x10) != 0 )
            v38 = 8;
          v39 = v37 & 0xC;
          if ( (v37 & 0xC) != 0 )
            v39 = 4;
          v40 = v37 & 2;
          if ( (v37 & 2) != 0 )
            v40 = 2;
          v17 = v40 | v39 | v37 & 1 | v38;
          v10 = (const __m128i *)(v9 + *(_QWORD *)a3);
          break;
        case 7:
LABEL_10:
          v17 = 6;
          break;
        case 8:
          v29 = (_DWORD *)v10->m128i_i64[1];
          v30 = ((2 * (((*v29 >> 14) & 2) != 0))
               | (4 * (((*v29 >> 14) & 4) != 0))
               | (8 * (((*v29 >> 14) & 8) != 0))
               | (16 * (((*v29 >> 14) & 0x10) != 0))
               | ((*v29 & 0x4000) != 0))
              & 0x10;
          if ( v30 )
            v30 = 8;
          v31 = (2 * (((*v29 >> 14) & 2) != 0)) & 0xC
              | (4 * (((*v29 >> 14) & 4) != 0)) & 0xC
              | (8 * (((*v29 >> 14) & 8) != 0)) & 0xC
              | ((*v29 & 0x4000) != 0) & 0xC;
          if ( v31 )
            v31 = 4;
          v32 = (2 * (((*v29 >> 14) & 2) != 0)) & 2 | ((*v29 & 0x4000) != 0) & 2;
          if ( v32 )
            v32 = 2;
          v17 = v32 | v31 | ((*v29 & 0x4000) != 0) | v30;
          if ( (*(_WORD *)v29 & 0x1FF) == 0x16 )
            v17 |= 6u;
          break;
      }
      *a5 |= v17;
      ++v8;
      result = a1;
      *(__m128i *)(a4 + v9) = _mm_loadu_si128(v10);
      *(__m128i *)(a4 + v9 + 16) = _mm_loadu_si128(v10 + 1);
    }
    while ( a1[3] != v8 );
  }
  return result;
}
