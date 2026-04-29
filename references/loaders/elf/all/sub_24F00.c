__int64 __fastcall sub_24F00(__int64 a1, __int64 a2, unsigned __int64 *a3, unsigned __int64 a4)
{
  char v5; // r8
  int v6; // ecx
  int v7; // ecx
  unsigned __int64 v8; // rax

  if ( !*(_DWORD *)(a1 + 4) )
    *(_QWORD *)(a1 + 8) = 0;
  while ( 1 )
  {
    v8 = *a3;
    if ( *a3 >= a4 )
      return 0;
    v5 = *(_BYTE *)(a2 + v8);
    *a3 = v8 + 1;
    v6 = *(_DWORD *)(a1 + 4);
    *(_QWORD *)(a1 + 8) |= (unsigned __int64)(v5 & 0x7F) << v6;
    if ( v5 >= 0 )
      break;
    v7 = v6 + 7;
    *(_DWORD *)(a1 + 4) = v7;
    if ( v7 == 63 )
      return 7;
  }
  if ( !v5 && v6 )
    return 7;
  *(_DWORD *)(a1 + 4) = 0;
  return 1;
}
