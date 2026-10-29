__int64 __fastcall sub_5586A0(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // eax
  unsigned int v5; // r14d
  int v6; // eax
  __int64 v7; // rbx

  v4 = sub_182A660(a1, *(_QWORD *)a2, *(_QWORD *)a3);
  if ( (_BYTE)v4 )
  {
    v5 = v4;
    v6 = *(_DWORD *)(a2 + 16);
    if ( v6 == *(_DWORD *)(a3 + 16) )
    {
      v7 = 0;
      if ( !v6 )
        return v5;
      while ( (unsigned __int8)sub_182A660(
                                 a1,
                                 *(_QWORD *)(*(_QWORD *)(a2 + 8) + 8 * v7),
                                 *(_QWORD *)(*(_QWORD *)(a3 + 8) + 8 * v7)) )
      {
        if ( (unsigned int)++v7 >= *(_DWORD *)(a2 + 16) )
          return v5;
      }
    }
  }
  return 0;
}

