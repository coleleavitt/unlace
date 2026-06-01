/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_912A8
// Address: 0x000912A8

//----- (000912A8) --------------------------------------------------------
int __fastcall sub_912A8(void *a1, void *lpsrc, _DWORD *a3)
{
  int v5; // r9
  void *v6; // r0
  void *v7; // r5
  _DWORD v9[15]; // [sp+0h] [bp-58h] BYREF

  if ( a1 == lpsrc )
    return 1;
  if ( !lpsrc )
    return 0;
  v5 = 0;
  v6 = _dynamic_cast(
         lpsrc,
         (const struct __class_type_info *)&`typeinfo for'__cxxabiv1::__shim_type_info,
         (const struct __class_type_info *)&`typeinfo for'__cxxabiv1::__class_type_info,
         0);
  if ( v6 )
  {
    v9[0] = v6;
    v9[1] = 0;
    v7 = v6;
    v9[2] = a1;
    v9[3] = -1;
    memset(&v9[4], 0, 0x27u);
    v9[12] = 1;
    (*(void (__fastcall **)(void *, _DWORD *, _DWORD, int))(*(_DWORD *)v7 + 28))(v7, v9, *a3, 1);
    if ( v9[6] == 1 )
    {
      *a3 = v9[4];
      return 1;
    }
  }
  return v5;
}
// DB408: using guessed type _UNKNOWN *`typeinfo for'__cxxabiv1::__shim_type_info;
// DB414: using guessed type _UNKNOWN *`typeinfo for'__cxxabiv1::__class_type_info;
