void __fastcall sub_1DDDEA0(
        unsigned __int64 a1,
        unsigned int a2,
        unsigned __int64 a3,
        unsigned int a4,
        __m128 a5,
        __m128 a6)
{
  __int64 v6; // r15
  char v11; // dl
  unsigned __int8 v12; // al
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rsi
  __int64 (__fastcall *v16)(__int64); // rdx
  __int64 v17; // rax
  unsigned __int64 v18; // rdx
  const __m128i *v19; // rcx
  __m128 *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rdi
  unsigned __int64 v23; // rdi
  _QWORD *v24; // rdi
  __int64 v25; // rax
  __int64 *v26; // [rsp+8h] [rbp-F0h]
  __int64 v27; // [rsp+10h] [rbp-E8h]
  _BYTE *v28; // [rsp+10h] [rbp-E8h]
  _QWORD v29[4]; // [rsp+20h] [rbp-D8h] BYREF
  void *ptr; // [rsp+40h] [rbp-B8h] BYREF
  __int64 v31; // [rsp+48h] [rbp-B0h]
  _BYTE v32[96]; // [rsp+50h] [rbp-A8h] BYREF
  int v33; // [rsp+B0h] [rbp-48h]
  char v34; // [rsp+B4h] [rbp-44h]

  v6 = a3;
  v34 = 0;
  v33 = 0;
  ptr = v32;
  v31 = 0x400000000LL;
  if ( !a3 )
    v6 = sub_B8C1B0(0);
  v26 = (__int64 *)(a1 + 248);
  while ( !(unsigned __int8)sub_B8D560(v6) )
  {
    v12 = *(_BYTE *)(v6 + 28) & 0x7F;
    if ( (unsigned int)v12 - 41 <= 1 )
    {
      v6 = sub_1DB96D0(v6, (__int64)&ptr, 0);
LABEL_5:
      if ( v11 )
        break;
    }
    else
    {
      if ( v12 == 61 )
      {
        v13 = sub_B8D390(v6);
        v33 += v13;
        break;
      }
      if ( (unsigned int)v12 - 60 <= 1 )
      {
        v6 = sub_1DB8D80(v6, (__int64 *)&ptr, 0);
        goto LABEL_5;
      }
      if ( (unsigned int)v12 - 34 <= 5 )
      {
        v6 = sub_1DB9A10(a1, v6, (__int64)&ptr, 0, 0, 0, 0);
        goto LABEL_5;
      }
      if ( (unsigned int)v12 - 59 <= 2 )
      {
        v6 = sub_1DBA190(a1, v6, (__int64)&ptr, 0);
        goto LABEL_5;
      }
      switch ( v12 )
      {
        case 'T':
          v14 = *(unsigned int *)(v6 + 36);
          v15 = v6 + 40;
          v16 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 32LL);
          v17 = v6;
          if ( v16 != sub_A4F000 )
          {
            v27 = *(unsigned int *)(v6 + 36);
            v17 = v16(v6);
            v15 = v6 + 40;
            v14 = v27;
          }
          v29[1] = v15;
          v29[0] = v17 & 0xFFFFFFFFFFFFFFFBLL;
          v29[2] = v14;
          v18 = (unsigned int)v31 + 1LL;
          v19 = (const __m128i *)v29;
          v20 = (__m128 *)((char *)ptr + 24 * (unsigned int)v31);
          if ( v18 > HIDWORD(v31) )
          {
            if ( ptr > v29 || v20 <= (__m128 *)v29 )
            {
              sub_2237220(&ptr, v32, v18, 24);
              v19 = (const __m128i *)v29;
              v20 = (__m128 *)((char *)ptr + 24 * (unsigned int)v31);
            }
            else
            {
              v28 = ptr;
              sub_2237220(&ptr, v32, v18, 24);
              v19 = (const __m128i *)((char *)ptr + (char *)v29 - v28);
              v20 = (__m128 *)((char *)ptr + 24 * (unsigned int)v31);
            }
          }
          a5 = (__m128)_mm_loadu_si128(v19);
          *v20 = a5;
          v21 = v19[1].m128i_i64[0];
          LODWORD(v31) = v31 + 1;
          v20[1].m128_u64[0] = v21;
          v22 = *(_QWORD *)(v6 + 16);
          if ( (v22 & 4) != 0 )
            v23 = *(_QWORD *)(v22 & 0xFFFFFFFFFFFFFFF8LL);
          else
            v23 = v22 & 0xFFFFFFFFFFFFFFF8LL;
          goto LABEL_25;
        case 'G':
          v6 = sub_1DB9EB0(v26, (_QWORD *)v6, (__int64)&ptr);
          goto LABEL_5;
        case 'H':
          v23 = *(_QWORD *)(v6 + 16) & 0xFFFFFFFFFFFFFFF8LL;
          if ( (*(_QWORD *)(v6 + 16) & 4) != 0 )
            v23 = *(_QWORD *)(v23 + 8);
LABEL_25:
          v6 = sub_B8C1B0(v23);
          break;
        default:
          if ( sub_B8E0B0(v6) )
          {
            v6 = sub_1DB76E0(v6);
            goto LABEL_5;
          }
          v24 = (_QWORD *)(*(_QWORD *)(v6 + 16) & 0xFFFFFFFFFFFFFFF8LL);
          if ( (*(_QWORD *)(v6 + 16) & 4) != 0 )
            v24 = (_QWORD *)*v24;
          v25 = sub_B8C1B0((__int64)v24);
          if ( (*(_BYTE *)(v6 + 28) & 0x7F) == 0x44 )
          {
            v6 = sub_1DB8320(v6, (__int64)&ptr);
            goto LABEL_5;
          }
          v6 = v25;
          break;
      }
    }
  }
  sub_1DDD4A0(a1, a2, a3, (__int64)&ptr, a4, *(double *)a5.m128_u64, a6);
  if ( ptr != v32 )
    free(ptr);
}
