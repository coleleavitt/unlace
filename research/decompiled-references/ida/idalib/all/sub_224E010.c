__int64 __fastcall sub_224E010(__int64 a1)
{
  __int64 v1; // rbp
  __int64 result; // rax
  double v3; // xmm2_8
  double v4; // xmm1_8
  double v5; // xmm0_8
  __int64 v6; // [rsp+8h] [rbp-30h] BYREF
  __int64 v7; // [rsp+10h] [rbp-28h] BYREF
  _QWORD v8[4]; // [rsp+18h] [rbp-20h] BYREF

  *(_WORD *)(a1 + 144) = 257;
  v6 = 0;
  if ( !qword_2D0ABB0 )
    sub_2230020(&qword_2D0ABB0, sub_224F5D0, (__int64)sub_22522C0);
  v1 = 0;
  if ( *(_BYTE *)(qword_2D0ABB0 + 368) )
    v1 = sub_22909B0();
  result = sub_22909D0(&v6, &v7, v8);
  v3 = (double)(int)v6;
  *(_QWORD *)(a1 + 64) = v1;
  v4 = (double)(int)v7;
  *(_QWORD *)(a1 + 72) = 0;
  v5 = (double)SLODWORD(v8[0]);
  *(double *)(a1 + 40) = v3 / 1000000000.0;
  *(double *)(a1 + 48) = v4 / 1000000000.0;
  *(double *)(a1 + 56) = v5 / 1000000000.0;
  return result;
}
