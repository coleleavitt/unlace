__int64 __fastcall sub_6A5CB0(__int64 a1, unsigned int a2)
{
  unsigned int v2; // ecx
  __int64 *v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rdx

  if ( *(_DWORD *)a1 == 1 )
  {
    v2 = a2;
    if ( (_BYTE)a2 )
      return v2;
    LOBYTE(v2) = *(_QWORD *)(a1 + 8) != 0;
    return v2;
  }
  else
  {
    v2 = 0;
    if ( *(_DWORD *)a1 != 2 )
      return v2;
    v4 = *(__int64 **)(a1 + 8);
    v5 = *v4;
    v6 = *v4 + 24 * v4[1];
    if ( v6 == v5 )
      return v2;
    do
    {
      if ( *(_DWORD *)v5 == 1 && *(_QWORD *)(v5 + 8) )
        return 1;
      v5 += 24;
    }
    while ( v6 != v5 );
    return 0;
  }
}
