/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_D9224
// Address: 0x000D9224

//----- (000D9224) --------------------------------------------------------
int __usercall sub_D9224@<eax>(int a1@<eax>, int a2@<edx>, int a3@<ecx>)
{
  int i; // eax
  _DWORD *v4; // edx
  _DWORD *v5; // esi
  int result; // eax
  _DWORD v9[7]; // [esp+16h] [ebp-1Ch] BYREF

  if ( ((*(_BYTE *)(a2 + 99) & 0x40) == 0 || !*(_BYTE *)(a2 + 112)) && !*(_DWORD *)(a2 + 16) )
    sub_D91AB(a2, *(_DWORD *)(a2 + 72), a3, v9);
  for ( i = 0; i != 17; ++i )
  {
    v4 = *(_DWORD **)(a1 + 4 * i);
    v5 = *(_DWORD **)(a2 + 4 * i);
    if ( *(_BYTE *)(a1 + i + 108) )
LABEL_7:
      abort();
    if ( *(_BYTE *)(a2 + i + 108) && v4 )
    {
      if ( byte_13E5D4[i] != 4 )
        goto LABEL_7;
      *v4 = v5;
    }
    else if ( v4 != nullptr && v5 != nullptr && v5 != v4 )
    {
      qmemcpy(v4, v5, *(&stru_38F0.st_info + (_DWORD)&qword_13ACD8 + i));
    }
  }
  if ( (*(_BYTE *)(a1 + 99) & 0x40) == 0 || (result = 0, !*(_BYTE *)(a1 + 112)) )
  {
    result = 0;
    if ( !*(_DWORD *)(a1 + 16) )
      return *(_DWORD *)(a2 + 104) + Unwind_GetGR(a2, 4) - *(_DWORD *)(a1 + 72);
  }
  return result;
}
// 38F0: using guessed type Elf32_Sym;
// 13ACD8: using guessed type __int64 qword_13ACD8;
