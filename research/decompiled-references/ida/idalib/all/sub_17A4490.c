unsigned __int64 __fastcall sub_17A4490(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rax
  unsigned __int64 result; // rax
  unsigned __int8 v9; // dl
  int v10; // ecx

  v6 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
    v6 = *(_QWORD *)v6;
  if ( ((*(_BYTE *)(v6 + 8) + 70) & 0x7Fu) <= 3 || *(_DWORD *)a3 != 2 )
    return 0;
  if ( (unsigned __int8)sub_FD3830(
                          *(_QWORD *)(*(_QWORD *)(a1 + 264) + 32LL),
                          0x1A92u,
                          *(unsigned int *)(a3 + 128),
                          *(_QWORD *)(a1 + 264),
                          a5,
                          a6) == 1 )
    return 0;
  result = **(_QWORD **)(a3 + 8) & 0xFFFFFFFFFFFFFFF8LL;
  v9 = *(_BYTE *)(result + 28) & 0x7F;
  v10 = v9;
  if ( ((v9 + 52) & 0x7Fu) <= 1 || (unsigned int)v9 - 53 <= 1 )
  {
    result = sub_B72ED0(**(_QWORD **)(a3 + 8) & 0xFFFFFFFFFFFFFFF8LL);
    v10 = *(_BYTE *)(result + 28) & 0x7F;
  }
  if ( (unsigned int)(v10 - 64) > 2 )
    return 0;
  return result;
}
