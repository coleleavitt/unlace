/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: last_idcv_attr
// Address: 0x0000000000075390

//----- (0000000000075390) ----------------------------------------------------
const char *__fastcall last_idcv_attr(__int64 a1)
{
  _QWORD *v1; // rcx
  _QWORD *v2; // rax
  _QWORD *v3; // rcx
  _QWORD *v4; // rcx

  if ( !a1 )
    return nullptr;
  if ( *(_BYTE *)a1 != 5 )
    return nullptr;
  v1 = *(_QWORD **)(a1 + 8);
  v2 = v1 + 1;
  if ( v1 + 1 == (_QWORD *)*v1 )
    return nullptr;
  v3 = (_QWORD *)*v2;
  if ( *v2 )
  {
    do
    {
      v2 = v3;
      v3 = (_QWORD *)v3[1];
    }
    while ( v3 );
  }
  else
  {
    do
    {
      v4 = v2;
      v2 = (_QWORD *)v2[2];
    }
    while ( (_QWORD *)*v2 == v4 );
  }
  if ( v2[5] )
    return (const char *)v2[4];
  else
    return s1;
}
