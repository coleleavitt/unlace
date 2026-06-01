/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140054540
// Address: 0x0000000140054540

//----- (0000000140054540) ----------------------------------------------------
__int64 __fastcall sub_140054540(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rsi
  __int64 v6; // rbx
  __int64 v7; // rax

  v3 = a3;
  v6 = a3;
  if ( a3 )
  {
    while ( 1 )
    {
      v7 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 56LL))(a1, a2, v6);
      if ( v7 <= 0 )
        break;
      a2 += v7;
      v6 -= v7;
      if ( !v6 )
        return v3;
    }
    v3 -= v6;
  }
  return v3;
}
