/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_97D58
// Address: 0x00097D58

//----- (00097D58) --------------------------------------------------------
unsigned int __fastcall sub_97D58(int a1, int a2)
{
  _BYTE *v5[3]; // [sp+4h] [bp-1Ch] BYREF

  if ( *(_BYTE *)(a1 + 12) )
    sub_93B8C(a2, "~", "");
  (*(void (__fastcall **)(_BYTE **))(**(_DWORD **)(a1 + 8) + 20))(v5);
  sub_93B8C(a2, v5[0], v5[1]);
  return _stack_chk_guard - (unsigned int)v5[2];
}
