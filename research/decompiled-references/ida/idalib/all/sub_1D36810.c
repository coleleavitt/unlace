bool __fastcall sub_1D36810(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v3; // rbx
  __int64 v4; // rdi

  while ( 1 )
  {
    v2 = a1 + 24 * a2;
    v3 = a1;
    if ( a1 == v2 )
      break;
    while ( (*(_DWORD *)v3 & 0x7FFFFFFF) != 9 )
    {
      v4 = v3;
      v3 += 24;
      if ( sub_F1D570(v4) )
        return v3 != v2;
      if ( v3 == v2 )
        return 0;
    }
    a1 = *(_QWORD *)(v3 + 8);
    a2 = *(unsigned int *)(v3 + 4);
  }
  return 0;
}
