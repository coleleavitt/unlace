__int64 __fastcall sub_12C97E(_QWORD **a1)
{
  _QWORD *v2; // rbx
  int i; // r12d
  __int64 v4; // rsi
  __int64 v5; // rdi

  v2 = *a1;
  if ( *a1 )
  {
    for ( i = *((_DWORD *)v2 - 1); i; --i )
    {
      v4 = *v2;
      if ( *v2 )
      {
        v5 = v2[1];
        if ( (*(_DWORD *)(v4 + 8))-- == 1 )
          sub_15D7BC0(v5, v4);
      }
      v2 += 3;
    }
  }
  return sub_186B220(*a1 - 1);
}

