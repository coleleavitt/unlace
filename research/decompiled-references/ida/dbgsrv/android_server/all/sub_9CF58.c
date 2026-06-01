/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_9CF58
// Address: 0x000000000009CF58

//----- (000000000009CF58) ----------------------------------------------------
__int64 __fastcall sub_9CF58(__int64 result, __int64 a2, __int64 a3)
{
  __int64 v3; // x2
  char *v4; // x3
  __int64 v5; // x19

  if ( !a3 || (*(_BYTE *)(a3 + 4) & 8) == 0 )
  {
    if ( (*(_DWORD *)(a2 + 20) & 0xFFFFFFF) == 7 )
    {
      v3 = *(_QWORD *)(a2 + 8);
      if ( *(_QWORD *)(a2 + 48) )
        v4 = *(char **)(a2 + 40);
      else
        v4 = &byte_F154B;
      if ( *(_QWORD *)(a2 + 32) == -1 )
        return sub_3A0D8(result, "%a: %s (exc.code %x, tid %d)\n", v3, v4);
      else
        return sub_3A0D8(result, "%a: %s -> %a (exc.code %x, tid %d)\n", v3, v4);
    }
    else
    {
      if ( !under_debugger )
        interr(3299);
      __break(1u);
      v5 = a2;
      sub_39FA0((__int64)"REXEC: %s\n", (const char *)a2);
      return call_system(v5);
    }
  }
  return result;
}
// 9CFF4: variable 'a2' is possibly undefined
// F154B: using guessed type char byte_F154B;
// 168DF0: using guessed type char under_debugger;
