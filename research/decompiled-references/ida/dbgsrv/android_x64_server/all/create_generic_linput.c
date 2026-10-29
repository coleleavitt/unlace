/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: create_generic_linput
// Address: 0x00000000000BE6B0

//----- (00000000000BE6B0) ----------------------------------------------------
_QWORD *__fastcall create_generic_linput(__int64 a1)
{
  _QWORD *v1; // r14

  if ( !a1 )
    return nullptr;
  if ( *(__int64 *)(a1 + 8) < 0 || *(int *)(a1 + 16) < 0 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
    return nullptr;
  }
  v1 = operator new(0x38u);
  *(_DWORD *)v1 = 4;
  v1[1] = a1;
  sub_BE330((__int64)v1);
  return v1;
}
