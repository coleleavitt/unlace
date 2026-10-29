void __fastcall sub_1A3D950(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        double a7,
        double a8)
{
  int v8; // eax
  unsigned __int64 v10; // rsi
  __m128i *v11; // r12
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rsi
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __m128i *v26; // r12
  __int64 v27; // rax
  __int64 v28; // rsi
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  unsigned __int64 v33; // rsi
  __m128i *v34; // r12
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rsi
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9

  if ( a4 )
  {
    v8 = a2 & 7;
    switch ( v8 )
    {
      case 7:
        v10 = a2 & 0xFFFFFFFFFFFFFFF8LL;
        if ( !*(_DWORD *)v10 )
          sub_1DB4160(a1, *(_QWORD *)(v10 + 16));
        break;
      case 4:
        if ( (*(_BYTE *)(a4 + 8) & 0x7Fu) - 59 <= 2 )
        {
          v26 = (__m128i *)(a4 - 64);
          if ( a4 != 64 )
          {
            v27 = *(_QWORD *)(a4 + 64);
            if ( v27
              || (sub_7052B0((__int64 *)(*(_QWORD *)(a4 + 40) + 96LL), *(_QWORD *)(a4 + 40), a3, a4, a5, a6),
                  (v27 = *(_QWORD *)(a4 + 64)) != 0) )
            {
              if ( *(_QWORD *)(v27 + 88) )
              {
                v28 = *(_QWORD *)(a4 + 40);
                sub_7052B0((__int64 *)(v28 + 96), v28, a3, a4, a5, a6);
                if ( (*(_BYTE *)(*(_QWORD *)(a4 + 64) + 9LL) & 0x20) == 0
                  && sub_1A3D840(a4 - 64, v28, v29, v30, v31, v32) )
                {
                  sub_18892E0(a1, v26, a7, a8);
                }
              }
            }
          }
        }
        break;
      case 6:
        v33 = a2 & 0xFFFFFFFFFFFFFFF8LL;
        if ( *(_DWORD *)v33 == 15 && (*(_BYTE *)(a4 + 8) & 0x7Fu) - 59 <= 2 )
        {
          v34 = (__m128i *)(a4 - 64);
          if ( a4 != 64 )
          {
            v35 = *(_QWORD *)(a4 + 64);
            if ( v35
              || (v33 = *(_QWORD *)(a4 + 40),
                  sub_7052B0((__int64 *)(v33 + 96), v33, a3, a4, a5, a6),
                  (v35 = *(_QWORD *)(a4 + 64)) != 0) )
            {
              if ( *(_QWORD *)(v35 + 88) && sub_1A3D840(a4 - 64, v33, a3, a4, a5, a6) )
              {
                v40 = *(_QWORD *)(a4 + 40);
                sub_7052B0((__int64 *)(v40 + 96), v40, v36, v37, v38, v39);
                if ( (*(_BYTE *)(*(_QWORD *)(a4 + 64) + 9LL) & 8) == 0 )
                {
                  v40 = a4 - 64;
                  sub_188BD60(a1, (__m128i *)(a4 - 64), a7, a8);
                }
                if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 1LL) & 0x10) != 0
                  && (unsigned __int8)sub_B9C100(a4 - 64, v40, v41, v42, v43, v44) )
                {
                  sub_188B8A0(a1, v34, a7, a8);
                }
              }
            }
          }
        }
        break;
      default:
        if ( v8 == 3 && (*(_BYTE *)(a4 + 8) & 0x7Fu) - 59 <= 2 )
        {
          v11 = (__m128i *)(a4 - 64);
          if ( a4 != 64 )
          {
            v12 = *(_QWORD *)(a4 + 64);
            if ( v12
              || (a2 = *(_QWORD *)(a4 + 40),
                  sub_7052B0((__int64 *)(a2 + 96), a2, a3, a4, a5, a6),
                  (v12 = *(_QWORD *)(a4 + 64)) != 0) )
            {
              if ( *(_QWORD *)(v12 + 88) && sub_1A3D840(a4 - 64, a2, a3, a4, a5, a6) )
              {
                if ( (unsigned __int8)sub_B9BFC0(a4 - 64, a2, v13, v14, v15, v16) )
                  sub_1889700(a1, a4 - 64, a7, a8);
                v21 = *(_QWORD *)(a4 + 40);
                sub_7052B0((__int64 *)(v21 + 96), v21, v17, v18, v19, v20);
                if ( (*(_BYTE *)(*(_QWORD *)(a4 + 64) + 9LL) & 2) == 0 )
                {
                  v21 = a4 - 64;
                  sub_188B1F0(a1, (__m128i *)(a4 - 64), a7, a8);
                }
                if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 1LL) & 0x10) != 0 )
                {
                  if ( (unsigned __int8)sub_B9C060(a4 - 64, v21, v22, v23, v24, v25) )
                    sub_188ABF0(a1, v11, a7, a8);
                }
              }
            }
          }
        }
        break;
    }
  }
}
