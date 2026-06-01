/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_52520
// Address: 0x0000000000052520

//----- (0000000000052520) ----------------------------------------------------
_QWORD *__fastcall sub_52520(_QWORD *a1, _QWORD *a2)
{
  _QWORD *v3; // rdi
  __int64 v4; // rcx
  unsigned __int64 v5; // rdx
  _QWORD *result; // rax
  __int64 v7; // rcx

  v3 = a1 + 72;
  v4 = a1[73];
  v5 = v4 + 1;
  if ( a1[74] >= (unsigned __int64)(v4 + 1) )
  {
    result = (_QWORD *)*v3;
  }
  else
  {
    result = qvector_reserve((__int64)v3, (char *)a1[72], v5, 0x18u);
    a1[72] = result;
    v4 = a1[73];
    v5 = v4 + 1;
  }
  a1[73] = v5;
  v7 = 3 * v4;
  result[v7] = a2[1];
  result[v7 + 1] = a2[4];
  result[v7 + 2] = a2[2];
  return result;
}
