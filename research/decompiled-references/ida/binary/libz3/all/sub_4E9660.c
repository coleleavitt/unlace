__int64 __fastcall sub_4E9660(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, __int64 a6)
{
  __int64 v6; // r13
  int v7; // r12d

  v6 = 0;
  if ( a1 == *(_QWORD *)(a2 + 8) )
  {
    v7 = a3;
    if ( a1 == *(_QWORD *)(a3 + 8) )
    {
      v6 = sub_186B270(0x58u);
      sub_4EB280(v6, a1, a2, v7, a4, a5, a6);
    }
  }
  return v6;
}

