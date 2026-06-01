__int64 __fastcall sub_19C4B30(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 result; // rax
  unsigned __int64 v5; // rdi
  char v8; // al
  unsigned __int64 v9; // rdi
  int v10; // edx
  _BOOL4 v11; // eax

  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 1LL) & 8) == 0 || !*(_DWORD *)(a3 + 16) )
    return 0;
  v5 = *(_QWORD *)((**(_QWORD **)(a3 + 8) & 0xFFFFFFFFFFFFFFF8LL) + 16) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)((**(_QWORD **)(a3 + 8) & 0xFFFFFFFFFFFFFFF8LL) + 16) & 4) != 0 )
    v5 = *(_QWORD *)v5;
  v8 = *(_BYTE *)(v5 + 8) & 0x7F;
  if ( v8 == 62 )
    v8 = *(_BYTE *)(sub_B8EAA0(v5) + 8) & 0x7F;
  if ( ((v8 + 70) & 0x7Fu) > 3 )
    return 0;
  result = 1;
  if ( (_BYTE)a4 )
  {
    if ( *(_DWORD *)a2 && *(_DWORD *)(a2 + 4) || *(_QWORD *)(a2 + 8) || *(_DWORD *)a3 == 3 )
      return 0;
    result = a4;
    if ( *(_DWORD *)a3 != 4 )
    {
      v9 = **(_QWORD **)(a3 + 8) & 0xFFFFFFFFFFFFFFF8LL;
      v10 = *(_BYTE *)(v9 + 28) & 0x7F;
      if ( (unsigned int)(unsigned __int8)v10 - 53 <= 1 || (((_BYTE)v10 + 52) & 0x7Fu) <= 1 )
        v10 = *(_BYTE *)(sub_B72ED0(v9) + 28) & 0x7F;
      v11 = (((_BYTE)v10 + 80) & 0x7Fu) <= 3;
      LOBYTE(v10) = (_BYTE)v10 == 32;
      return v10 | (unsigned int)v11;
    }
  }
  return result;
}
