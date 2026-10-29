__int64 __fastcall sub_412950(__int64 a1, __int64 a2, __int64 (__fastcall *a3)(__int64, __int64, __int64), __int64 a4)
{
  int v6; // eax
  unsigned int v7; // edx
  int v9; // eax
  int v10; // eax
  __int64 v11; // rdx
  int v12; // ebp

  v6 = sub_4806F0(a1, a2);
  v7 = 1;
  if ( !v6 )
  {
    v9 = a3(a2, a4, 1);
    v7 = 0;
    if ( v9 < 0 )
    {
      if ( a1 )
      {
        v10 = sub_46BB60(a1);
        v11 = *(_QWORD *)(a2 + 8);
        v12 = v10;
        if ( !v11 )
          LODWORD(v11) = sub_47B3B0(a2);
        sub_48B710(a1, (unsigned int)"could not read \"", v11, (unsigned int)"\": ", v12, 0);
      }
      return 1;
    }
  }
  return v7;
}

