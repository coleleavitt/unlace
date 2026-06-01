/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_48C048
// Address: 0x000000000048C048

//----- (000000000048C048) ----------------------------------------------------
_QWORD *__fastcall sub_48C048(__int64 a1)
{
  _QWORD *v2; // x0
  _QWORD *v3; // x20

  if ( !a1 )
    return nullptr;
  if ( (*(_QWORD *)(a1 + 8) & 0x8000000000000000LL) == 0 && (*(_DWORD *)(a1 + 16) & 0x80000000) == 0 )
  {
    v2 = sub_49E050(0x38u);
    *(_DWORD *)v2 = 4;
    v2[1] = a1;
    v3 = v2;
    sub_48BC58(v2);
    return v3;
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
  return nullptr;
}
