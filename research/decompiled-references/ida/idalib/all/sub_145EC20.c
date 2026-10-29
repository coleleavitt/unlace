void __fastcall sub_145EC20(__int64 a1, __int64 a2)
{
  char *v2; // rsi
  char *v3; // rsi
  __int64 v4; // [rsp+8h] [rbp-10h] BYREF

  v4 = a2;
  v2 = *(char **)(a1 + 720);
  if ( v2 == *(char **)(a1 + 728) )
  {
    sub_145EAD0(a1 + 712, v2, &v4);
  }
  else
  {
    v3 = v2 + 8;
    *((_QWORD *)v3 - 1) = v4;
    *(_QWORD *)(a1 + 720) = v3;
  }
}
