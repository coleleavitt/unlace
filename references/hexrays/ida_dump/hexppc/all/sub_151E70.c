char __fastcall sub_151E70(int *a1)
{
  int v1; // eax
  __int64 v2; // rdx
  __int64 v3; // rbp

  v1 = *a1;
  if ( *a1 == 1 )
  {
    v3 = *((_QWORD *)a1 + 4);
    if ( v3 )
    {
      sub_119360(*((_QWORD *)a1 + 4));
      LOBYTE(v1) = j__qfree(v3);
      *a1 = 0;
      return v1;
    }
  }
  else if ( v1 == 2 )
  {
    v2 = *((_QWORD *)a1 + 2);
    v1 = *(_DWORD *)(v2 + 24);
    BYTE1(v1) &= ~2u;
    LOBYTE(v1) = v1 | 0x80;
    *(_DWORD *)(v2 + 24) = v1;
    *a1 = 0;
    return v1;
  }
  *a1 = 0;
  return v1;
}
