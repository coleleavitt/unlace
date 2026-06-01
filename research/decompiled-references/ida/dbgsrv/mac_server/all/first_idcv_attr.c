/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: first_idcv_attr
// Address: 0x000000010003AF20

//----- (000000010003AF20) ----------------------------------------------------
const char *__fastcall first_idcv_attr(__int64 a1)
{
  _QWORD *v1; // rcx
  _QWORD *v2; // rax

  if ( !a1 || *(_BYTE *)a1 != 5 )
    return nullptr;
  v1 = *(_QWORD **)(a1 + 8);
  v2 = (_QWORD *)*v1;
  if ( (_QWORD *)*v1 == v1 + 1 )
    return nullptr;
  if ( v2[5] )
    return (const char *)v2[4];
  return _s1;
}
