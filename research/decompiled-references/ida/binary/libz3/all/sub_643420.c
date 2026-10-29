__int64 __fastcall sub_643420(__int64 a1, const __m128i *a2)
{
  __m128 v3; // xmm0
  _OWORD *v4; // rax
  __int64 v5; // rsi
  _OWORD *v6; // rax
  _OWORD *v7; // rax
  _OWORD *v8; // rax
  __int64 *v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // r13
  __int64 v13; // r13
  __int64 v14; // rbp
  __int64 result; // rax

  v3 = (__m128)_mm_loadu_si128(a2);
  *(_QWORD *)(a1 + 24) = 0;
  *(__m128 *)a1 = v3;
  _mm_storeh_ps((double *)(a1 + 16), v3);
  v4 = (_OWORD *)sub_186B270(0x80u);
  *(_QWORD *)(a1 + 32) = v4;
  v5 = a2->m128i_i64[0];
  *(_DWORD *)(a1 + 48) = 0;
  *v4 = 0;
  *(_QWORD *)(a1 + 40) = 8;
  v4[1] = 0;
  v4[2] = 0;
  v4[3] = 0;
  v4[4] = 0;
  v4[5] = 0;
  v4[6] = 0;
  v4[7] = 0;
  sub_639440(a1 + 56, v5);
  *(_QWORD *)(a1 + 144) = 0;
  v6 = (_OWORD *)sub_186B270(0x40u);
  *(_QWORD *)(a1 + 152) = v6;
  *(_QWORD *)(a1 + 160) = 8;
  *(_DWORD *)(a1 + 168) = 0;
  *v6 = 0;
  v6[1] = 0;
  v6[2] = 0;
  v6[3] = 0;
  v7 = (_OWORD *)sub_186B270(0x80u);
  *(_QWORD *)(a1 + 176) = v7;
  *(_QWORD *)(a1 + 184) = 8;
  *(_DWORD *)(a1 + 192) = 0;
  *v7 = 0;
  v7[1] = 0;
  v7[2] = 0;
  v7[3] = 0;
  v7[4] = 0;
  v7[5] = 0;
  v7[6] = 0;
  v7[7] = 0;
  v8 = (_OWORD *)sub_186B270(0x80u);
  *(_QWORD *)(a1 + 200) = v8;
  *v8 = 0;
  v8[1] = 0;
  v8[2] = 0;
  v8[3] = 0;
  v8[4] = 0;
  v8[5] = 0;
  v8[6] = 0;
  v8[7] = 0;
  v9 = *(__int64 **)a1;
  *(_QWORD *)(a1 + 208) = 8;
  *(_DWORD *)(a1 + 216) = 0;
  v10 = *v9;
  *(_QWORD *)(a1 + 240) = 0;
  *(_QWORD *)(a1 + 224) = v10;
  v11 = a2[1].m128i_i64[1];
  *(_QWORD *)(a1 + 232) = 0;
  if ( v11 )
  {
    v12 = *(unsigned int *)(v11 - 4);
    if ( (_DWORD)v12 )
    {
      v13 = 8 * v12;
      v14 = 0;
      while ( 1 )
      {
        sub_63DAD0(a1, *(_QWORD *)(v11 + v14), 0.0);
        v14 += 8;
        if ( v13 == v14 )
          break;
        v11 = a2[1].m128i_i64[1];
      }
    }
  }
  result = (__int64)sub_63DFA0((__m128i *)a1, (__int64)a2);
  if ( a2[9].m128i_i64[0] )
  {
    result = sub_6430A0(a1);
    if ( !(_BYTE)result )
    {
      sub_1872CE0("");
      sub_1873130(114, 261);
    }
  }
  return result;
}

