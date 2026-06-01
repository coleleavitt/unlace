__int64 __fastcall sub_1AF00E0(__int64 a1, unsigned int a2)
{
  unsigned __int64 v2; // rdx

  *(_DWORD *)(a1 + 8) = a2;
  if ( a2 > 0x40 )
  {
    sub_2205470(a1, -1, 1);
    return a1;
  }
  else
  {
    v2 = 0xFFFFFFFFFFFFFFFFLL >> -(char)a2;
    if ( !a2 )
      v2 = 0;
    *(_QWORD *)a1 = v2;
    return a1;
  }
}
