__int64 __fastcall sub_216F6A0(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int32 v6; // r12d
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r14
  __int64 v16; // r12
  __int64 vars0[2]; // [rsp+0h] [rbp+0h] BYREF
  char vars10; // [rsp+10h] [rbp+10h]
  __m128i vars20[2]; // [rsp+20h] [rbp+20h] BYREF
  __int16 vars40; // [rsp+40h] [rbp+40h]
  __m128i vars50; // [rsp+50h] [rbp+50h] BYREF
  __int16 vars70; // [rsp+70h] [rbp+70h]
  __m128i vars80[5]; // [rsp+80h] [rbp+80h] BYREF

  v6 = a3;
  sub_216E3E0((__int64)vars0, a2, a3, a4, a5, a6);
  if ( (vars10 & 1) != 0 )
  {
    v10 = vars0[0];
    *(_BYTE *)(a1 + 8) |= 1u;
    vars0[0] = 0;
    *(_QWORD *)a1 = v10;
  }
  else if ( vars0[1] <= (unsigned __int64)v6 )
  {
    vars50.m128i_i32[0] = v6;
    vars70 = 265;
    vars40 = 259;
    vars20[0].m128i_i64[0] = (__int64)"invalid section index: ";
    sub_A41580(vars80, vars20, &vars50, v7, v8, v9);
    v15 = sub_2195B10(vars80, vars20, v13, v14);
    v16 = operator new(0x40u);
    sub_2220590(v16, vars80, 3, v15);
    *(_BYTE *)(a1 + 8) |= 1u;
    *(_QWORD *)a1 = v16;
  }
  else
  {
    v12 = vars0[0];
    *(_BYTE *)(a1 + 8) &= ~1u;
    *(_QWORD *)a1 = v12 + 40LL * v6;
  }
  sub_216F680(vars0);
  return a1;
}
