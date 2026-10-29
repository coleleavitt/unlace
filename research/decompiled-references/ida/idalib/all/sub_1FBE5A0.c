unsigned __int64 __fastcall sub_1FBE5A0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned int v8; // eax
  unsigned int v9; // eax
  char v10; // cl
  int v11; // edi
  int v12; // edx
  int v13; // esi
  __int64 v14; // rax
  unsigned __int64 result; // rax
  unsigned __int64 v16; // rax

  sub_1FBDCF0(a1, a2, a3, a4, a5, a6);
  v8 = (unsigned __int8)(*(_WORD *)(a2 + 98) >> 4);
  if ( v8 == 255 )
    v8 = sub_B74880(a2);
  sub_9B9C90(*(_QWORD *)(a1 + 24), v8);
  v9 = *(_DWORD *)(a2 + 96);
  v10 = *(_BYTE *)(a2 + 97);
  v11 = (v9 & 0x1000) != 0;
  if ( (v10 & 0x10) != 0 )
  {
    v12 = (v9 >> 5) & 0x7F00;
  }
  else
  {
    v12 = 0;
    v11 |= (v9 >> 12) & 0xFE;
  }
  sub_9B9C90(
    *(_QWORD *)(a1 + 24),
    v11
  | v12
  | (((v10 & 6) == 4) << 17)
  | ((v10 & 1) << 16)
  | ((*(_DWORD *)(a2 + 100) != 0) << 18)
  | ((unsigned __int8)((v10 & 8) != 0) << 15));
  if ( (*(_BYTE *)(a2 + 97) & 6) == 4 )
  {
    v16 = sub_B74810(a2);
    sub_183F100(a1 + 32, v16);
  }
  v13 = *(_DWORD *)(a2 + 100);
  if ( v13 )
    sub_1F6F570(*(_QWORD **)(a1 + 16), v13, *(_QWORD *)(a1 + 24));
  *(_DWORD *)(a1 + 224) = 74;
  v14 = *(_QWORD *)(a2 + 16);
  if ( (v14 & 4) == 0 || (result = v14 & 0xFFFFFFFFFFFFFFF8LL, *(_QWORD *)(result + 8) == *(_QWORD *)result) )
  {
    result = *(unsigned __int8 *)(a2 + 29);
    if ( (result & 1) == 0
      && (*(_BYTE *)(a2 + 56) & 4) == 0
      && (*(_BYTE *)(a2 + 96) & 7) == 0
      && *(char *)(a2 + 28) >= 0
      && (result & 0x10) == 0
      && (*(_BYTE *)(a2 + 96) & 0x60) == 0 )
    {
      result = sub_B73640(a2);
      if ( !result )
      {
        result = *(unsigned int *)(*(_QWORD *)a1 + 3452LL);
        *(_DWORD *)(a1 + 228) = result;
      }
    }
  }
  return result;
}
