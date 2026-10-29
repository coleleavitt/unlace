__int64 __fastcall sub_183E310(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v5; // rax
  __int64 v6; // rax

  if ( a4 )
  {
    *(_BYTE *)(a3 + 50) |= 1u;
    *(_DWORD *)(a3 + 76) = a4;
  }
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 21LL) & 4) != 0 )
  {
    v5 = *(unsigned int *)(a1 + 10152);
    if ( (_DWORD)v5 )
    {
      v6 = *(_QWORD *)(*(_QWORD *)(a1 + 10144) + 48 * v5 - 40);
      if ( v6 )
      {
        if ( *(_DWORD *)(v6 + 36) == 8 && *(_QWORD *)(v6 + 40) )
          sub_1A7BFD0(a1);
      }
    }
  }
  sub_17A2E10(a1);
  return a3;
}
