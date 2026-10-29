__int64 __fastcall sub_224DEC0(__int64 a1, char a2)
{
  __int64 v2; // rax
  __int64 v4; // rax
  __int64 v5; // [rsp+8h] [rbp-20h] BYREF
  __int64 v6; // [rsp+10h] [rbp-18h] BYREF
  int v7[4]; // [rsp+18h] [rbp-10h] BYREF

  *(_OWORD *)a1 = 0;
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 32) = 0;
  v5 = 0;
  if ( a2 )
  {
    if ( !qword_2D0ABB0 )
      sub_2230020(&qword_2D0ABB0, sub_224F5D0, (__int64)sub_22522C0);
    v2 = 0;
    if ( *(_BYTE *)(qword_2D0ABB0 + 368) )
      v2 = sub_22909B0();
    *(_QWORD *)(a1 + 24) = v2;
    sub_22909D0(&v5, &v6, v7);
  }
  else
  {
    sub_22909D0(&v5, &v6, v7);
    if ( !qword_2D0ABB0 )
      sub_2230020(&qword_2D0ABB0, sub_224F5D0, (__int64)sub_22522C0);
    v4 = 0;
    if ( *(_BYTE *)(qword_2D0ABB0 + 368) )
      v4 = sub_22909B0();
    *(_QWORD *)(a1 + 24) = v4;
  }
  *(double *)a1 = (double)(int)v5 / 1000000000.0;
  *(double *)(a1 + 8) = (double)(int)v6 / 1000000000.0;
  *(double *)(a1 + 16) = (double)v7[0] / 1000000000.0;
  return a1;
}
