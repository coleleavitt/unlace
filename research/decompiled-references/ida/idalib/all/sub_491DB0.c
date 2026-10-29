__int64 __fastcall sub_491DB0(__int64 *a1)
{
  __int64 v1; // rbp
  __int64 v2; // rax
  __int64 i; // r12
  int v4; // r14d
  __int64 v5; // rbx
  __m128i si128; // xmm1
  __int64 v7; // rdi
  __m128 v8; // xmm0
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rdi
  __m128i *v12; // r13
  __int64 v13; // r15
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rdx
  __m128i *v16; // rdi
  __m128i *v17; // r15
  __int64 v18; // rdi
  __int64 v19; // rax
  int v21[2]; // [rsp+0h] [rbp-48h] BYREF
  __m128i *v22; // [rsp+8h] [rbp-40h]

  v1 = operator new(0xB0u);
  sub_485FD0(v1, a1, 0);
  *(_QWORD *)(v1 + 152) = 0;
  *(_QWORD *)v1 = &off_2B2C238;
  *(_QWORD *)v21 = v1 + 152;
  v2 = *(_QWORD *)(v1 + 8);
  *(_QWORD *)(v1 + 72) = 0;
  *(_OWORD *)(v1 + 160) = 0;
  if ( *(int *)(v2 + 28) > 0 )
  {
    for ( i = 0; *(_DWORD *)(v19 + 28) > (int)i; ++i )
    {
      v4 = i;
      v5 = operator new(0x48u);
      si128 = _mm_load_si128((const __m128i *)&xmmword_23A76C0);
      v7 = *(int *)(*(_QWORD *)(v1 + 8) + 4LL * (int)i + 16);
      *(_QWORD *)v5 = &off_2B2C180;
      *(_DWORD *)(v5 + 12) = -1;
      v8 = _mm_loadh_ps((const double *)v21);
      *(_DWORD *)(v5 + 8) = v7;
      *(_QWORD *)(v5 + 48) = 0;
      *(__m128i *)(v5 + 16) = si128;
      *(__m128 *)(v5 + 32) = v8;
      *(_OWORD *)(v5 + 56) = 0;
      v9 = switch_dbctx(v7);
      sub_3FE180(*(_QWORD **)(v9 + 1672), (unsigned __int64 *)(v5 + 48));
      v10 = *(_QWORD *)(v5 + 56);
      v11 = *(_QWORD *)(v5 + 48);
      v12 = (__m128i *)(v11 + 80 * v10);
      v13 = 80 * v10;
      if ( (__m128i *)v11 != v12 )
      {
        v14 = 0xCCCCCCCCCCCCCCCDLL * ((80 * v10) >> 4);
        if ( v14 )
        {
          _BitScanReverse64(&v15, v14);
          v22 = *(__m128i **)(v5 + 48);
          sub_4917D0(v11, (unsigned __int64)v12, 2LL * (int)v15);
          v16 = v22;
          if ( v13 > 1280 )
          {
            v17 = v22 + 80;
            sub_482C60(v22, v22 + 80);
            do
            {
              v18 = (__int64)v17;
              v17 += 5;
              sub_482A50(v18);
            }
            while ( v12 != v17 );
            goto LABEL_8;
          }
        }
        else
        {
          v22 = *(__m128i **)(v5 + 48);
          sub_4917D0(v11, (unsigned __int64)v12, -2);
          v16 = v22;
        }
        sub_482C60(v16, v12);
      }
LABEL_8:
      *(_QWORD *)(v1 + 8 * i + 56) = v5;
      v19 = *(_QWORD *)(v1 + 8);
      *(_DWORD *)(v5 + 12) = v4;
    }
  }
  return v1;
}
