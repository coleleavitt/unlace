/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140043750
// Address: 0x0000000140043750

//----- (0000000140043750) ----------------------------------------------------
__int64 __fastcall sub_140043750(_QWORD *a1, unsigned __int8 a2)
{
  __int64 result; // rax
  __int64 v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // rcx

  result = a1[59];
  v5 = *(_QWORD *)result;
  if ( *(_QWORD *)result != result )
  {
    do
    {
      result = (*(__int64 (__fastcall **)(_QWORD *, __int64, _QWORD))(*a1 + 336LL))(a1, v5, a2);
      v6 = *(_QWORD *)(v5 + 16);
      if ( *(_BYTE *)(v6 + 25) )
      {
        for ( result = *(_QWORD *)(v5 + 8); !*(_BYTE *)(result + 25); result = *(_QWORD *)(result + 8) )
        {
          if ( v5 != *(_QWORD *)(result + 16) )
            break;
          v5 = result;
        }
        v5 = result;
      }
      else
      {
        v5 = *(_QWORD *)(v5 + 16);
        v7 = *(_QWORD *)v6;
        if ( !*(_BYTE *)(v7 + 25) )
        {
          do
          {
            result = *(_QWORD *)v7;
            v5 = v7;
            v7 = result;
          }
          while ( !*(_BYTE *)(result + 25) );
        }
      }
    }
    while ( v5 != a1[59] );
  }
  return result;
}
