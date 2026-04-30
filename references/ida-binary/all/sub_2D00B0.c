__int64 __fastcall sub_2D00B0(__int64 a1, unsigned int *a2, __int64 a3, unsigned int *a4, double a5)
{
  unsigned __int8 v5; // al
  unsigned __int8 v7; // [rsp+1h] [rbp-9h]

  v5 = *(_BYTE *)(a1 + 1080);
  if ( !v5 || *(_QWORD *)(a1 + 1064) == -1 )
    return sub_1F9350(a1, a2, a3, a4, a5);
  if ( *a2 != 0x1000000 )
    return 0;
  *a2 = 0;
  v7 = v5;
  sub_2C9B00((__int64 *)a1);
  return v7;
}
