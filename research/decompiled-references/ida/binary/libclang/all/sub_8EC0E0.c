__int64 __fastcall sub_8EC0E0(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v4; // rbp
  unsigned int v5; // eax

  if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
    return 1;
  *(_QWORD *)(a1 + 800) = *a3;
  v4 = sub_A1A4E0(*(_QWORD *)(a1 + 568), 24);
  v5 = *(_DWORD *)(a2 + 8);
  *(_DWORD *)(v4 + 8) = v5;
  if ( v5 > 0x40 )
    sub_2585B30(v4);
  else
    *(_QWORD *)v4 = *(_QWORD *)a2;
  *(_BYTE *)(v4 + 12) = *(_BYTE *)(a2 + 12);
  *(_DWORD *)(v4 + 16) = *(_DWORD *)(a2 + 16);
  return 1;
}

