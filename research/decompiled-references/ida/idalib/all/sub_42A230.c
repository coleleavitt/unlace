unsigned __int64 __fastcall sub_42A230(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  int v4; // ebx
  __int64 v5; // rbx

  v2 = a2;
  v3 = sub_505D70(a1 + 203, a2);
  if ( v3 )
  {
    v4 = (2 << *(_BYTE *)(v3 + 43)) - 1;
  }
  else
  {
    v4 = 7;
    if ( (*(_DWORD *)(a1[2] + 8LL) & 0x2000) == 0 )
      v4 = (2 << ((*(_DWORD *)(a1[2] + 8LL) & 2) != 0)) - 1;
  }
  if ( (sub_3BE900(a1, a2, 4) & 0x600) == 0 )
  {
    LODWORD(v5) = a2 & v4;
    if ( (int)v5 > 0 )
    {
      v5 = (int)v5;
      v2 = a2 - (int)v5;
      while ( (sub_3BE900(a1, v5 + v2 - 1, 4) & 0x600) == 0 )
      {
        if ( !--v5 )
          return v2;
      }
      v2 += v5;
    }
  }
  return v2;
}
