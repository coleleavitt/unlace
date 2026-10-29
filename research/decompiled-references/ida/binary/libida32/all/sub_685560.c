__int64 __fastcall sub_685560(_DWORD *a1, unsigned int a2)
{
  unsigned int v2; // ecx
  __int64 v4; // rdx
  _DWORD *v5; // rax
  __int64 v6; // rdx

  if ( *a1 == 1 )
  {
    v2 = a2;
    if ( (_BYTE)a2 )
      return v2;
    LOBYTE(v2) = a1[2] != 0;
    return v2;
  }
  else
  {
    v2 = 0;
    if ( *a1 != 2 )
      return v2;
    v4 = *((_QWORD *)a1 + 1);
    v5 = *(_DWORD **)v4;
    v6 = *(_QWORD *)v4 + 24LL * *(_QWORD *)(v4 + 8);
    if ( (_DWORD *)v6 == v5 )
      return v2;
    do
    {
      if ( *v5 == 1 && v5[2] )
        return 1;
      v5 += 6;
    }
    while ( (_DWORD *)v6 != v5 );
    return 0;
  }
}

