__int64 __fastcall sub_4B74C0(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, double a5)
{
  __int64 v5; // r12
  __int64 v6; // rbx
  __int64 v7; // rbp

  if ( *(_DWORD *)a1 )
  {
    if ( under_debugger )
      BUG();
    interr(40613, a2, a3, a4, a5);
    return sub_4B7580(40613);
  }
  else
  {
    *(_DWORD *)a1 = 3;
    *(_QWORD *)(a1 + 8) = a2;
    v5 = a2[1];
    if ( v5 )
    {
      v6 = *a2;
      v7 = 0;
      while ( !*(_QWORD *)(v6 + 8) || strcmp(*(const char **)v6, "layout") )
      {
        ++v7;
        v6 += 40;
        if ( v5 == v7 )
          goto LABEL_8;
      }
      *(_BYTE *)(a1 + 16) = 1;
      return 1;
    }
    else
    {
LABEL_8:
      *(_BYTE *)(a1 + 16) = 0;
      return 0;
    }
  }
}
