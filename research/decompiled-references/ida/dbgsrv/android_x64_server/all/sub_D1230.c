/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_D1230
// Address: 0x00000000000D1230

//----- (00000000000D1230) ----------------------------------------------------
__int64 __fastcall sub_D1230(const char **a1, const char **a2)
{
  unsigned int v2; // r15d
  bool v3; // zf
  _BYTE *v5; // rax

  if ( ((_BYTE)a1[2] & 0x18) != 0 )
    goto LABEL_2;
  if ( !a2 )
    return 0;
  v2 = 0;
  v5 = _dynamic_cast(
         a2,
         (const struct __class_type_info *)&`typeinfo for'__cxxabiv1::__shim_type_info,
         (const struct __class_type_info *)&`typeinfo for'__cxxabiv1::__pbase_type_info,
         0);
  if ( v5 )
  {
    if ( (v5[16] & 0x18) == 0 )
    {
      v3 = a1 == a2;
      goto LABEL_3;
    }
LABEL_2:
    v3 = strcmp(a1[1], a2[1]) == 0;
LABEL_3:
    LOBYTE(v2) = v3;
  }
  return v2;
}
// D1254: variable 'v2' is possibly undefined
// 150870: using guessed type void (__fastcall *`typeinfo for'__cxxabiv1::__shim_type_info)(std::type_info *__hidden this);
// 1508B0: using guessed type void (__fastcall *`typeinfo for'__cxxabiv1::__pbase_type_info)(std::type_info *__hidden this);
