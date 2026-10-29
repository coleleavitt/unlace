/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: last_idcv_attr
// Address: 0x000000010003AF60

//----- (000000010003AF60) ----------------------------------------------------
const char *__fastcall last_idcv_attr(__int64 a1)
{
  _QWORD *v1; // rax
  _QWORD *v2; // rcx
  _QWORD *v3; // rdx
  _QWORD *v4; // rax
  bool v5; // zf

  if ( !a1 || *(_BYTE *)a1 != 5 )
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
      v4 = v3;
      v3 = (_QWORD *)v3[1];
    }
    while ( v3 );
  }
  else
  {
    do
    {
      v4 = (_QWORD *)v2[2];
      v5 = *v4 == (_QWORD)v2;
      v2 = v4;
    }
    while ( v5 );
  }
  if ( v4[5] )
    return (const char *)v4[4];
  else
    return _s1;
}
