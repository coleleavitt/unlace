/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7AEFC
// Address: 0x0007AEFC

//----- (0007AEFC) --------------------------------------------------------
int __fastcall sub_7AEFC(int a1, int a2, int a3, int a4)
{
  _DWORD *v5; // r5

  *(_WORD *)(a1 + 32868) = 1;
  *(_BYTE *)(a1 + 100) = 0;
  *(_DWORD *)(a1 + 32) = 0;
  *(_DWORD *)(a1 + 36) = 0;
  *(_DWORD *)(a1 + 40) = a3;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 20) = a4;
  *(_DWORD *)(a1 + 24) = a2;
  *(_DWORD *)a1 = &off_DB138;
  v5 = (_DWORD *)(a1 + 44);
  memset((void *)(a1 + 44), 0, 0x38u);
  *(_DWORD *)(a1 + 44) = a1 + 100;
  if ( sub_88C8C(v5, "1.3.1", 56) )
  {
    if ( !under_debugger )
      interr(192);
    __debugbreak();
  }
  return a1;
}
// DB138: using guessed type _UNKNOWN *off_DB138;
// E0550: using guessed type char under_debugger;
