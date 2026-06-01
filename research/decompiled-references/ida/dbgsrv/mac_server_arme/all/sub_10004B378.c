/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10004B378
// Address: 0x000000010004B378

//----- (000000010004B378) ----------------------------------------------------
const char *__fastcall sub_10004B378(__int64 a1, _QWORD *a2)
{
  const char *result; // x0
  const char *v4; // x20
  size_t v5; // x21
  unsigned __int64 v6; // x22
  _QWORD *v7; // x1

  if ( *(_QWORD *)(a1 + 24) )
  {
    result = qbasename(*(_BYTE **)(a1 + 16));
    if ( !result )
      goto LABEL_9;
  }
  else
  {
    result = qbasename(&byte_10007AE40);
    if ( !result )
    {
LABEL_9:
      a2[1] = 0;
      return result;
    }
  }
  v4 = result;
  result = (const char *)strlen(result);
  if ( !result )
    goto LABEL_9;
  v5 = (size_t)result;
  v6 = (unsigned __int64)(result + 1);
  v7 = (_QWORD *)*a2;
  if ( a2[2] < (unsigned __int64)(result + 1) )
  {
    v7 = qvector_reserve(a2, v7, v6, 1u);
    *a2 = v7;
  }
  a2[1] = v6;
  result = (const char *)memmove(v7, v4, v5);
  *(_BYTE *)(*a2 + v5) = 0;
  return result;
}
// 10007AE40: using guessed type char byte_10007AE40;
