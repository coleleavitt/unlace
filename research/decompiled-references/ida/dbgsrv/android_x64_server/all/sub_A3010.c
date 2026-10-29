/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A3010
// Address: 0x00000000000A3010

//----- (00000000000A3010) ----------------------------------------------------
_QWORD *__fastcall sub_A3010(_QWORD *a1, unsigned __int8 a2)
{
  _QWORD *result; // rax
  _QWORD *v3; // rbp
  _QWORD *v4; // rcx
  __int64 v5; // rbp
  bool v6; // zf

  v3 = (_QWORD *)a1[63];
  if ( v3 != a1 + 64 )
  {
    do
    {
      (*(void (__fastcall **)(_QWORD *, _QWORD *, _QWORD))(*a1 + 344LL))(a1, v3, a2);
      v4 = (_QWORD *)v3[1];
      if ( v4 )
      {
        do
        {
          result = v4;
          v4 = (_QWORD *)*v4;
        }
        while ( v4 );
      }
      else
      {
        result = (_QWORD *)v3[2];
        if ( (_QWORD *)*result != v3 )
        {
          v5 = (__int64)(v3 + 2);
          do
          {
            result = *(_QWORD **)(*(_QWORD *)v5 + 16LL);
            v6 = *result == *(_QWORD *)v5;
            v5 = *(_QWORD *)v5 + 16LL;
          }
          while ( !v6 );
        }
      }
      v3 = result;
    }
    while ( result != a1 + 64 );
  }
  return result;
}
