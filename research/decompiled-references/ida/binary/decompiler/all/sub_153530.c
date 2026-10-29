char __fastcall sub_153530(int *a1)
{
  int v1; // eax
  __int64 v2; // rdx

  v1 = *a1;
  if ( *a1 == 1 )
  {
    if ( *((_QWORD *)a1 + 4) )
    {
      sub_11A960(*((_QWORD *)a1 + 4));
      LOBYTE(v1) = j__qfree();
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
