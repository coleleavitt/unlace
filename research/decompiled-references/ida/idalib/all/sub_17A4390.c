__int64 __fastcall sub_17A4390(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 result; // rax
  unsigned __int8 v8; // dl
  int v9; // ecx

  if ( *(_DWORD *)a3 != 2 )
    return 0;
  if ( (unsigned __int8)sub_FD3830(
                          *(_QWORD *)(*(_QWORD *)(a1 + 264) + 32LL),
                          0x1A92u,
                          *(unsigned int *)(a3 + 128),
                          *(_QWORD *)(a1 + 264),
                          a5,
                          a6) == 1 )
    return 0;
  if ( !sub_9B48E0(a2) )
  {
    if ( (*(_BYTE *)(a2 + 96) & 7) != 2 && ((*(_BYTE *)(a2 + 96) & 7) != 0 || ((*(_BYTE *)(a2 + 96) >> 3) & 3) != 2) )
      return 0;
    if ( sub_A5EB90(a2) )
      return 0;
  }
  result = **(_QWORD **)(a3 + 8) & 0xFFFFFFFFFFFFFFF8LL;
  v8 = *(_BYTE *)(result + 28) & 0x7F;
  v9 = v8;
  if ( ((v8 + 52) & 0x7Fu) <= 1 || (unsigned int)v8 - 53 <= 1 )
  {
    result = sub_B72ED0(result);
    v8 = *(_BYTE *)(result + 28) & 0x7F;
    v9 = v8;
  }
  if ( (unsigned int)(v9 - 40) > 6 && ((v8 + 79) & 0x7Fu) > 3 )
    return 0;
  return result;
}
