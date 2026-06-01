__int64 __fastcall sub_736480(__int64 a1)
{
  bool v1; // zf
  __int64 v2; // rdx

  if ( !*(_BYTE *)(a1 + 5800) )
    return 0;
  v1 = *(_WORD *)(a1 + 24) == 0;
  *(_BYTE *)(a1 + 5800) = 0;
  if ( v1 )
  {
    *(_BYTE *)(a1 + 5800) = 1;
    return 0;
  }
  else
  {
    v2 = *(unsigned __int16 *)(a1 + 34);
    *(_WORD *)(a1 + 1634) = 1;
    *(_QWORD *)(a1 + 2664) = a1 + 1640;
    sub_737D90(a1, a1 + 1640, v2);
    sub_736290(a1, 0xFFFFFFFFLL);
    *(_BYTE *)(a1 + 4220) = 1;
    *(_BYTE *)(a1 + 5800) = 1;
    return a1 + 2672;
  }
}
