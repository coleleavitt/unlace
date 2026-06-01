/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5C524
// Address: 0x0005C524

//----- (0005C524) --------------------------------------------------------
int __fastcall sub_5C524(int a1, int a2, signed int a3, int a4)
{
  _BYTE *v7; // r0
  int v8; // r4
  const char *v9; // r5
  size_t v10; // r0
  unsigned int v13; // [sp+14h] [bp-1Ch] BYREF
  int v14; // [sp+18h] [bp-18h] BYREF
  void *v15; // [sp+1Ch] [bp-14h]
  int v16; // [sp+20h] [bp-10h]
  int v17; // [sp+24h] [bp-Ch]
  int v18; // [sp+28h] [bp-8h]
  int v19; // [sp+2Ch] [bp-4h]

  v7 = pack_dd(&v13, (unsigned int)&v14 + 1, a3);
  ((void (__fastcall *)(int, unsigned int *, int))loc_30B84)(a2, &v13, v7 - (_BYTE *)&v13);
  if ( a3 < 1 )
  {
    if ( *(_DWORD *)(a4 + 4) )
      v9 = *(const char **)a4;
    else
      v9 = &byte_B3CBE;
    if ( !v9 )
      v9 = &byte_A0742;
    v10 = strlen(v9);
    ((void (__fastcall *)(int, const char *, size_t))loc_30B84)(a2, v9, v10 + 1);
  }
  else
  {
    v14 = 4;
    v13 = 24;
    v15 = nullptr;
    v16 = 0;
    v17 = 0;
    v18 = -1;
    v8 = a1 + 244;
    (*(void (__fastcall **)(_DWORD, unsigned int *))(**(_DWORD **)(a1 + 244) + 276))(*(_DWORD *)(a1 + 244), &v13);
    sub_69660(a2, &v13);
    if ( *(_BYTE *)(a1 + 96) )
      sub_1BBA0((int)"RPC: append_start_or_attach idaregs.nregs %zu\n", *(_DWORD *)(*(_DWORD *)v8 + 284));
    sub_696DC(a2, (int *)(*(_DWORD *)v8 + 280));
    if ( v15 )
    {
      v16 = 0;
      qfree(v15);
      v17 = 0;
      v15 = nullptr;
    }
  }
  return _stack_chk_guard - v19;
}
// A0742: using guessed type char byte_A0742;
// B3CBE: using guessed type char byte_B3CBE;
