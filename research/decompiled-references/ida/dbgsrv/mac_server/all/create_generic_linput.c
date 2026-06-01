/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: create_generic_linput
// Address: 0x000000010007A1F0

//----- (000000010007A1F0) ----------------------------------------------------
_QWORD *__fastcall create_generic_linput(__int64 a1)
{
  _QWORD *v1; // rbx

  if ( !a1 )
    return nullptr;
  if ( *(__int64 *)(a1 + 8) < 0 || *(int *)(a1 + 16) < 0 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
    return nullptr;
  }
  else
  {
    v1 = operator new(0x38u);
    *(_DWORD *)v1 = 4;
    v1[1] = a1;
    sub_100079E20((__int64)v1);
    return v1;
  }
}
