/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_452DF8
// Address: 0x0000000000452DF8

//----- (0000000000452DF8) ----------------------------------------------------
unsigned __int64 __fastcall sub_452DF8(unsigned __int64 *a1, __int64 a2)
{
  unsigned __int64 result; // x0
  __int64 v5; // x19
  _QWORD *v6; // x21
  _QWORD *i; // x19
  unsigned __int64 v8; // x2
  unsigned __int64 v9; // x1

  result = *a1;
  if ( !result )
  {
    result = a1[1];
    if ( result == 1 )
    {
      a1[6] = 0;
      *a1 = (unsigned __int64)(a1 + 6);
    }
    else
    {
      result = (unsigned __int64)sub_4508C0(result);
      *a1 = result;
    }
  }
  v5 = *(_QWORD *)(a2 + 16);
  if ( v5 )
  {
    v6 = sub_4508F8(v5 + 8);
    v6[6] = *(_QWORD *)(v5 + 48);
    a1[2] = (unsigned __int64)v6;
    result = v6[6] % a1[1];
    *(_QWORD *)(*a1 + 8 * result) = a1 + 2;
    for ( i = *(_QWORD **)v5; i; v6 = (_QWORD *)result )
    {
      result = (unsigned __int64)sub_4508F8((__int64)(i + 1));
      *v6 = result;
      v8 = i[6];
      *(_QWORD *)(result + 48) = v8;
      v9 = v8 % a1[1];
      if ( !*(_QWORD *)(*a1 + 8 * v9) )
        *(_QWORD *)(*a1 + 8 * v9) = v6;
      i = (_QWORD *)*i;
    }
  }
  return result;
}
