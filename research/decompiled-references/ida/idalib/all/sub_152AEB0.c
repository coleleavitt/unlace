void __fastcall sub_152AEB0(__int64 a1, __int64 *a2, __int64 a3, int *a4)
{
  int v4; // r12d
  __int64 v5; // rsi
  int v6; // ecx
  __int32 v7; // r13d
  unsigned __int64 v8; // rax
  int v9; // edx
  __m128i v10; // xmm2
  int v11; // edx
  __m128i v12; // xmm3
  __m128i vars0; // [rsp+0h] [rbp+0h] BYREF
  __int64 vars10; // [rsp+10h] [rbp+10h]
  __m128i vars20; // [rsp+20h] [rbp+20h] BYREF
  __int64 vars30; // [rsp+30h] [rbp+30h]
  __m128i vars40; // [rsp+40h] [rbp+40h] BYREF
  __int64 vars50; // [rsp+50h] [rbp+50h]
  unsigned __int8 *vars60[15]; // [rsp+60h] [rbp+60h] BYREF

  v4 = *a4;
  sub_14634E0(a2, vars0.m128i_i32);
  if ( (_WORD)vars10 != 5
    || (vars20 = _mm_load_si128(&vars0), vars30 = vars10, sub_14634E0(a2, vars0.m128i_i32), (_WORD)vars10 != 5) )
  {
    v5 = a2[6];
    v6 = 2189;
LABEL_4:
    sub_FC70B0((__int64)vars60, v5, vars0.m128i_i32[0], v6);
    sub_1520A40(vars60, (__int64)"redefine_extname");
    sub_AEA040((__int64)vars60);
    return;
  }
  v7 = vars0.m128i_i32[0];
  vars40 = _mm_load_si128(&vars0);
  vars50 = vars10;
  sub_14634E0(a2, vars0.m128i_i32);
  if ( (_WORD)vars10 != 2 )
  {
    v5 = a2[6];
    v6 = 2202;
    goto LABEL_4;
  }
  v8 = sub_15290A0(a2 + 16, 72, 3u);
  v9 = vars30;
  v10 = _mm_load_si128(&vars20);
  *(_DWORD *)v8 = v4;
  *(_DWORD *)(v8 + 40) = v9;
  v11 = vars50;
  v12 = _mm_load_si128(&vars40);
  *(_DWORD *)(v8 + 4) = v7;
  *(_DWORD *)(v8 + 64) = v11;
  *(_QWORD *)(v8 + 8) = 0;
  *(_DWORD *)(v8 + 16) = 436;
  *(__m128i *)(v8 + 24) = v10;
  *(__m128i *)(v8 + 48) = v12;
  sub_14368B0((__int64)a2, (char *)v8, 3, 1u, 0, 0);
}
