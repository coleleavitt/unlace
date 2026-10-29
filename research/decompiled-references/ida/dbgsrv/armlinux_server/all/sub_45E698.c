/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45E698
// Address: 0x000000000045E698

//----- (000000000045E698) ----------------------------------------------------
__int64 __fastcall sub_45E698(__int64 result, __int64 a2, __int64 a3)
{
  __int64 v3; // x2
  __int64 v4; // x3
  __int64 *v5; // x3
  __int64 *v6; // x3

  if ( !a3 || (*(_DWORD *)(a3 + 4) & 8) == 0 )
  {
    if ( (*(_DWORD *)(a2 + 20) & 0xFFFFFFF) == 7 )
    {
      v3 = *(_QWORD *)(a2 + 8);
      v4 = *(_QWORD *)(a2 + 48);
      if ( *(_QWORD *)(a2 + 32) == -1 )
      {
        if ( v4 )
          v6 = *(__int64 **)(a2 + 40);
        else
          v6 = &qword_4B2D48;
        return sub_40AAF0(result, (__int64)"%a: %s (exc.code %x, tid %d)\n", v3, v6);
      }
      else
      {
        if ( v4 )
          v5 = *(__int64 **)(a2 + 40);
        else
          v5 = &qword_4B2D48;
        return sub_40AAF0(result, (__int64)"%a: %s -> %a (exc.code %x, tid %d)\n", v3, v5);
      }
    }
    else
    {
      result = (unsigned __int8)under_debugger;
      if ( !under_debugger )
        sub_492270(3299);
      __break(0x3E8u);
    }
  }
  return result;
}
// 4B2D48: using guessed type __int64 qword_4B2D48;
// 52451C: using guessed type char under_debugger;
