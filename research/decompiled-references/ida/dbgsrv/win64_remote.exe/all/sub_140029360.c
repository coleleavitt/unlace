/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140029360
// Address: 0x0000000140029360

//----- (0000000140029360) ----------------------------------------------------
const char *__fastcall sub_140029360(__int64 a1)
{
  _QWORD *v1; // rcx
  _QWORD *v2; // rax

  if ( !a1 )
    return nullptr;
  if ( *(_BYTE *)a1 != 5 )
    return nullptr;
  v1 = **(_QWORD ***)(a1 + 8);
  v2 = (_QWORD *)*v1;
  if ( (_QWORD *)*v1 == v1 )
    return nullptr;
  if ( v2[5] )
    return (const char *)v2[4];
  return Str1;
}
