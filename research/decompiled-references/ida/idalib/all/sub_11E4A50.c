__int64 __fastcall sub_11E4A50(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __m128i v4; // rax
  char v5; // al
  _QWORD *v6; // rdx
  __int64 v7; // rax
  __int64 *v8; // rdi
  __int64 v9; // rdx
  __m128i v11; // xmm1
  void *vars0[4]; // [rsp+0h] [rbp+0h] BYREF
  __m128i vars20; // [rsp+20h] [rbp+20h] BYREF
  __m128i vars30; // [rsp+30h] [rbp+30h] BYREF
  __int64 vars40; // [rsp+40h] [rbp+40h]
  _QWORD vars50[4]; // [rsp+50h] [rbp+50h] BYREF
  __int16 vars70; // [rsp+70h] [rbp+70h]
  __m128i vars80; // [rsp+80h] [rbp+80h] BYREF
  __m128i vars90; // [rsp+90h] [rbp+90h]
  __int64 varsA0; // [rsp+A0h] [rbp+A0h]
  void *varsB0[2]; // [rsp+B0h] [rbp+B0h] BYREF
  __int64 _C0; // [rsp+C0h] [rbp+C0h] BYREF

  sub_2257830(vars0, a2 + 3940);
  vars50[0] = vars0;
  vars70 = 260;
  v4.m128i_i64[0] = sub_22B6740(31);
  vars30 = v4;
  v5 = vars70;
  vars20.m128i_i64[0] = (__int64)"arm64-apple-";
  LOWORD(vars40) = 1283;
  if ( (_BYTE)vars70 )
  {
    if ( (_BYTE)vars70 == 1 )
    {
      v11 = _mm_load_si128(&vars30);
      vars80 = _mm_load_si128(&vars20);
      vars90 = v11;
      varsA0 = vars40;
    }
    else
    {
      if ( HIBYTE(vars70) == 1 )
      {
        v2 = vars50[1];
        v6 = (_QWORD *)vars50[0];
      }
      else
      {
        v6 = vars50;
        v5 = 2;
      }
      vars90.m128i_i64[0] = (__int64)v6;
      vars80.m128i_i64[0] = (__int64)&vars20;
      vars90.m128i_i64[1] = v2;
      LOBYTE(varsA0) = 2;
      BYTE1(varsA0) = v5;
    }
  }
  else
  {
    LOWORD(varsA0) = 256;
  }
  sub_22BA1B0(varsB0, &vars80);
  if ( vars0[0] != vars0 )
    operator delete(vars0[0]);
  v7 = sub_22B83A0(varsB0);
  v8 = (__int64 *)varsB0[0];
  *(_DWORD *)a1 = 2;
  *(_QWORD *)(a1 + 4) = v7;
  *(_QWORD *)(a1 + 12) = v9;
  if ( v8 != &_C0 )
    operator delete(v8);
  return a1;
}
