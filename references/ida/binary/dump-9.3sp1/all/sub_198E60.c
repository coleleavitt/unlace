__int64 __fastcall sub_198E60(__int64 a1, __int64 a2, _QWORD *a3, __int64 a4, int a5, unsigned int a6)
{
  int v7; // r14d
  __int64 v8; // rdx
  __int64 v9; // r12
  __int64 v10; // rbx
  __int64 v11; // rsi
  __m128i v12; // xmm1
  __int64 v13; // rdx
  __int64 v14; // rax
  _QWORD *v15; // rax
  int v16; // eax
  __int64 v18; // [rsp+8h] [rbp-90h]
  _QWORD *v19; // [rsp+10h] [rbp-88h]
  __int64 v20; // [rsp+18h] [rbp-80h]
  __int64 v21; // [rsp+20h] [rbp-78h]
  unsigned __int64 v23; // [rsp+30h] [rbp-68h]
  int v24; // [rsp+38h] [rbp-60h]
  unsigned __int8 v26[24]; // [rsp+40h] [rbp-58h] BYREF
  unsigned __int64 v27; // [rsp+58h] [rbp-40h]

  v21 = a2;
  v24 = a4;
  v27 = __readfsqword(0x28u);
  if ( a5 > (int)a4 )
  {
    if ( (int)a4 < 0 )
    {
      if ( !under_debugger )
        sub_383060(51582);
    }
    else
    {
      v7 = a6 * a4;
      if ( a2 + (int)(a6 * a4) >= 0 && a2 + (int)(a6 * a5) <= *(_QWORD *)(*(_QWORD *)(a1 + 64) + 136LL) )
      {
        v8 = (int)a4;
        v19 = nullptr;
        v9 = 4LL * (int)a4;
        v23 = 4 * ((int)a4 + (unsigned __int64)(unsigned int)(a5 - a4));
        do
        {
          v10 = j__qalloc_or_throw(80, a2, v8, a4);
          v11 = *(_QWORD *)(*(_QWORD *)(a1 + 64) + 40LL);
          *(_QWORD *)(v10 + 32) = 0xFFFFFFFF00000000LL;
          *(_QWORD *)(v10 + 40) = 0;
          *(_QWORD *)(v10 + 48) = 0xFFFFFFFF00000000LL;
          *(_QWORD *)(v10 + 56) = 0;
          *(_QWORD *)(v10 + 64) = 0xFFFFFFFF00000000LL;
          *(_QWORD *)(v10 + 72) = 0;
          sub_330970(v10, v11);
          *(_DWORD *)v10 = 4;
          v12 = _mm_cvtsi32_si128(*(_DWORD *)(*a3 + v9));
          *(_DWORD *)v26 = 1;
          *(_QWORD *)&v26[4] = _mm_unpacklo_epi32(_mm_cvtsi32_si128(a6), v12).m128i_u64[0];
          sub_125180(v10 + 32, v26);
          v9 += 4;
          sub_11CDA0((__int64)v26);
          v13 = *(_QWORD *)(a1 + 64);
          *(_BYTE *)(v10 + 64) = 5;
          v14 = v7;
          v7 += a6;
          v20 = v13;
          v18 = v21 + v14;
          v15 = (_QWORD *)j__qalloc_or_throw(16, (__int64)v26, v13, v21);
          a2 = v10;
          *v15 = v20;
          v15[1] = v18;
          *(_QWORD *)(v10 + 72) = v15;
          *(_DWORD *)(v10 + 68) = a6;
          v19 = sub_A3160(a1, (_QWORD *)v10, (__int64)v19);
        }
        while ( v9 != v23 );
        v16 = *(_DWORD *)(a1 + 24);
        BYTE1(v16) &= ~2u;
        LOBYTE(v16) = v16 | 0x80;
        *(_DWORD *)(a1 + 24) = v16;
        sub_A2520(a1, (__int64)"added gva64 backups");
        return (unsigned int)(a5 - v24);
      }
      if ( !under_debugger )
        sub_383060(51578);
    }
    BUG();
  }
  return (unsigned int)(a5 - v24);
}
