void __fastcall sub_152ACD0(__int64 a1, __int64 *a2, __int64 a3, int *a4)
{
  int v4; // r12d
  __m128i v5; // xmm0
  unsigned __int64 v6; // rax
  int v7; // edx
  __m128i v8; // xmm3
  __int64 v9; // rsi
  int v10; // ecx
  __int32 v11; // r13d
  unsigned __int64 v12; // rax
  int v13; // edx
  __m128i v14; // xmm1
  int v15; // edx
  __m128i v16; // xmm2
  __m128i vars0; // [rsp+0h] [rbp+0h] BYREF
  __int64 vars10; // [rsp+10h] [rbp+10h]
  __m128i vars20; // [rsp+20h] [rbp+20h] BYREF
  __int64 vars30; // [rsp+30h] [rbp+30h]
  __m128i vars40; // [rsp+40h] [rbp+40h] BYREF
  int vars50; // [rsp+50h] [rbp+50h]
  unsigned __int8 *vars60[15]; // [rsp+60h] [rbp+60h] BYREF

  v4 = *a4;
  sub_14634E0(a2, vars0.m128i_i32);
  if ( (_WORD)vars10 != 5 )
    goto LABEL_5;
  v5 = _mm_load_si128(&vars0);
  vars30 = vars10;
  vars20 = v5;
  sub_14634E0(a2, vars0.m128i_i32);
  if ( (_WORD)vars10 != 64 )
  {
    if ( (_WORD)vars10 == 2 )
    {
      v6 = sub_15290A0(a2 + 16, 48, 3u);
      v7 = vars30;
      v8 = _mm_load_si128(&vars20);
      *(_DWORD *)v6 = v4;
      *(_DWORD *)(v6 + 4) = v4;
      *(_DWORD *)(v6 + 40) = v7;
      *(_QWORD *)(v6 + 8) = 0;
      *(_DWORD *)(v6 + 16) = 434;
      *(__m128i *)(v6 + 24) = v8;
      sub_14368B0((__int64)a2, (char *)v6, 2, 1u, 0, 0);
      return;
    }
    goto LABEL_10;
  }
  sub_14634E0(a2, vars0.m128i_i32);
  if ( (_WORD)vars10 != 5 )
  {
LABEL_5:
    v9 = a2[6];
    v10 = 2189;
LABEL_6:
    sub_FC70B0((__int64)vars60, v9, vars0.m128i_i32[0], v10);
    sub_1520A40(vars60, (__int64)"weak");
    sub_AEA040((__int64)vars60);
    return;
  }
  v11 = vars0.m128i_i32[0];
  vars40 = _mm_load_si128(&vars0);
  vars50 = vars10;
  sub_14634E0(a2, vars0.m128i_i32);
  if ( (_WORD)vars10 != 2 )
  {
LABEL_10:
    v9 = a2[6];
    v10 = 2202;
    goto LABEL_6;
  }
  v12 = sub_15290A0(a2 + 16, 72, 3u);
  v13 = vars30;
  v14 = _mm_load_si128(&vars20);
  *(_DWORD *)v12 = v4;
  *(_DWORD *)(v12 + 40) = v13;
  v15 = vars50;
  v16 = _mm_load_si128(&vars40);
  *(_DWORD *)(v12 + 4) = v11;
  *(_DWORD *)(v12 + 64) = v15;
  *(_QWORD *)(v12 + 8) = 0;
  *(_DWORD *)(v12 + 16) = 435;
  *(__m128i *)(v12 + 24) = v14;
  *(__m128i *)(v12 + 48) = v16;
  sub_14368B0((__int64)a2, (char *)v12, 3, 1u, 0, 0);
}
