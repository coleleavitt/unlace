__int64 __fastcall sub_47D2D0(const char *a1)
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
  __int64 v10; // rdi
  __int64 v11; // r15
  __int64 v12; // r13
  unsigned __int64 v13; // rdx
  __int64 v14; // rdi
  __int64 *v15; // r15
  __int64 *v16; // rdi
  __int64 v17; // rax
  int v19[2]; // [rsp+0h] [rbp-48h] BYREF
  __int64 v20; // [rsp+8h] [rbp-40h]

  v1 = operator new(0xB0u);
  sub_4717D0(v1, a1);
  *(_QWORD *)(v1 + 152) = 0;
  *(_QWORD *)v1 = &off_2B02278;
  *(_QWORD *)v19 = v1 + 152;
  v2 = *(_QWORD *)(v1 + 8);
  *(_QWORD *)(v1 + 72) = 0;
  *(_OWORD *)(v1 + 160) = 0;
  if ( *(int *)(v2 + 28) > 0 )
  {
    for ( i = 0; *(_DWORD *)(v17 + 28) > (int)i; ++i )
    {
      v4 = i;
      v5 = operator new(0x48u);
      si128 = _mm_load_si128((const __m128i *)&xmmword_23838C0);
      v7 = *(int *)(*(_QWORD *)(v1 + 8) + 4LL * (int)i + 16);
      *(_QWORD *)v5 = &off_2B021C0;
      *(_DWORD *)(v5 + 12) = -1;
      v8 = _mm_loadh_ps((const double *)v19);
      *(_DWORD *)(v5 + 8) = v7;
      *(_QWORD *)(v5 + 48) = 0;
      *(__m128i *)(v5 + 16) = si128;
      *(__m128 *)(v5 + 32) = v8;
      *(_OWORD *)(v5 + 56) = 0;
      v9 = switch_dbctx(v7);
      sub_3EB200(*(_QWORD **)(v9 + 1480), (unsigned __int64 *)(v5 + 48));
      v10 = *(_QWORD *)(v5 + 48);
      v11 = *(_QWORD *)(v5 + 56) << 6;
      v12 = v10 + v11;
      if ( v10 != v10 + v11 )
      {
        if ( v11 >> 6 )
        {
          _BitScanReverse64(&v13, v11 >> 6);
          v20 = *(_QWORD *)(v5 + 48);
          sub_47CD40(v10, v10 + v11, 2LL * (int)(63 - (v13 ^ 0x3F)));
          v14 = v20;
          if ( v11 > 1024 )
          {
            v15 = (__int64 *)(v20 + 1024);
            sub_46E500(v20, v20 + 1024);
            do
            {
              v16 = v15;
              v15 += 8;
              sub_46E300(v16);
            }
            while ( (__int64 *)v12 != v15 );
            goto LABEL_8;
          }
        }
        else
        {
          v20 = *(_QWORD *)(v5 + 48);
          sub_47CD40(v10, v10 + v11, -2);
          v14 = v20;
        }
        sub_46E500(v14, v12);
      }
LABEL_8:
      *(_QWORD *)(v1 + 8 * i + 56) = v5;
      v17 = *(_QWORD *)(v1 + 8);
      *(_DWORD *)(v5 + 12) = v4;
    }
  }
  return v1;
}

