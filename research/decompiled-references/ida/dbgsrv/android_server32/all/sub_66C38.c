/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_66C38
// Address: 0x00066C38

//----- (00066C38) --------------------------------------------------------
_DWORD *__fastcall sub_66C38(_DWORD *a1, int a2)
{
  _DWORD *v3; // r7
  _DWORD *result; // r0
  _DWORD *v5; // r6
  bool v7; // zf
  _DWORD *v8; // r1

  v3 = a1 + 66;
  result = &dword_104;
  v5 = (_DWORD *)a1[65];
  while ( v3 != v5 )
  {
    (*(void (__fastcall **)(_DWORD *, _DWORD *, int))(*a1 + 172))(a1, v5, a2);
    result = (_DWORD *)v5[1];
    if ( result )
    {
      do
      {
        v5 = result;
        result = (_DWORD *)*result;
      }
      while ( result );
    }
    else
    {
      result = v5 + 2;
      v7 = *(_DWORD *)v5[2] == (_DWORD)v5;
      v5 = (_DWORD *)v5[2];
      if ( !v7 )
      {
        do
        {
          v8 = (_DWORD *)*result;
          result = (_DWORD *)(*result + 8);
          v5 = (_DWORD *)v8[2];
        }
        while ( (_DWORD *)*v5 != v8 );
      }
    }
  }
  return result;
}
// 104: using guessed type int;
