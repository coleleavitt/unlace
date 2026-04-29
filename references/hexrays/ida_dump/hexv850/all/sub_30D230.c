__int64 __fastcall sub_30D230(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // edx
  _QWORD *v4; // rax

  v2 = 0;
  if ( (*(_DWORD *)a1 & 0xF) == 2 && *(_QWORD *)(a1 + 16) == 1 )
  {
    v4 = *(_QWORD **)(a1 + 8);
    if ( v4[1] == 1 )
    {
      if ( a2 )
        *a2 = *v4;
      return 1;
    }
  }
  return v2;
}
