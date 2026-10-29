__int64 __fastcall sub_4167F0(__int64 a1, __int64 a2)
{
  unsigned int v2; // r12d
  __int64 v3; // rax
  int v4; // ebx
  int v5; // ebx
  int v6; // r13d

  v2 = a2;
  v3 = sub_4EE820(a1 + 1552, a2);
  if ( v3 )
  {
    v4 = (2 << *(_BYTE *)(v3 + 23)) - 1;
  }
  else
  {
    v4 = 7;
    if ( (*(_DWORD *)(*(_QWORD *)(a1 + 16) + 8LL) & 0x2000) == 0 )
      v4 = (2 << ((*(_DWORD *)(*(_QWORD *)(a1 + 16) + 8LL) & 2) != 0)) - 1;
  }
  if ( (sub_3B9AA0(a1, a2, 4) & 0x600) == 0 )
  {
    v5 = a2 & v4;
    if ( v5 > 0 )
    {
      v2 = a2 - v5;
      v6 = a2 - v5 - 1;
      while ( (sub_3B9AA0(a1, v5 + v6, 4) & 0x600) == 0 )
      {
        if ( !--v5 )
          return v2;
      }
      v2 += v5;
    }
  }
  return v2;
}

