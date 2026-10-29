/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: create_generic_linput
// Address: 0x00000000000B9AAC

//----- (00000000000B9AAC) ----------------------------------------------------
_QWORD *__fastcall create_generic_linput(__int64 a1)
{
  _QWORD *v2; // x20

  if ( !a1 )
    return nullptr;
  if ( (*(_QWORD *)(a1 + 8) & 0x8000000000000000LL) != 0 || (*(_DWORD *)(a1 + 16) & 0x80000000) != 0 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
    return nullptr;
  }
  v2 = operator new(0x38u);
  *(_DWORD *)v2 = 4;
  v2[1] = a1;
  sub_B9778(v2);
  return v2;
}
