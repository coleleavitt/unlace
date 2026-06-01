__int64 __fastcall lsl::BTree<lsl::UniquePtr<dyld4::Atlas::Image>,std::less<lsl::UniquePtr<dyld4::Atlas::Image>>,false>::NodeCore<31u,15u>::lower_bound_index(
        __int64 a1,
        __int64 a2)
{
  unsigned __int64 v2; // x8
  _QWORD *v3; // x9
  unsigned __int64 v4; // x12
  __int64 *v5; // x13
  _QWORD *v6; // x13
  __int64 v7; // t1

  v2 = *(_BYTE *)(a1 + 248) & 0x7F;
  if ( (*(_BYTE *)(a1 + 248) & 0x7F) != 0 )
  {
    v3 = (_QWORD *)a1;
    do
    {
      v4 = v2 >> 1;
      v5 = &v3[v2 >> 1];
      v7 = *v5;
      v6 = v5 + 1;
      v2 += ~(v2 >> 1);
      if ( *(_QWORD *)(v7 + 160) < *(_QWORD *)(*(_QWORD *)a2 + 160LL) )
        v3 = v6;
      else
        v2 = v4;
    }
    while ( v2 );
  }
  else
  {
    LODWORD(v3) = a1;
  }
  return (unsigned __int8)((unsigned int)((_DWORD)v3 - a1) >> 3);
}
