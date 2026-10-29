__int64 __fastcall sub_A2190(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, _BYTE *a7, int a8)
{
  bool v8; // zf

  if ( !a7 || *a7 != 49 || a8 != 112 )
    return 4294967290LL;
  if ( a1 )
  {
    v8 = a1[8] == 0;
    a1[6] = 0;
    if ( v8 )
    {
      a1[10] = 0;
      a1[8] = sub_A6A10;
    }
    if ( !a1[9] )
      a1[9] = &sub_A6A20;
  }
  return 4294967294LL;
}

