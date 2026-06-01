/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_17A34
// Address: 0x00017A34

//----- (00017A34) --------------------------------------------------------
int __fastcall sub_17A34(int result)
{
  int v1; // r5
  int v2; // r4
  int v3; // r6
  int v4; // r0
  int v5; // [sp+0h] [bp-8h] BYREF

  v1 = result + 1004;
  v2 = *(_DWORD *)(result + 1012);
  if ( v2 != result + 1004 )
  {
    v3 = result;
    do
    {
      while ( !*(_BYTE *)(v2 + 44) )
      {
LABEL_6:
        result = sub_81290(v2);
        v2 = result;
        if ( result == v1 )
          return result;
      }
      if ( !*(_BYTE *)(v3 + 1078) )
      {
        if ( *(_DWORD *)(v2 + 40) != 1 )
        {
          if ( under_debugger )
            __und(0xFFu);
          sub_78AFC(30181);
        }
        ptrace(PTRACE_CONT, *(_DWORD *)(v2 + 20), *(unsigned __int8 *)(v3 + 1078));
        v4 = sub_20280(v3, &v5, *(_DWORD *)(v2 + 20), -1);
        if ( *(_DWORD *)(v2 + 20) != v4 )
          sub_1700C((int)"%d: failed to clean up pending SIGSTOP\n", v4);
        goto LABEL_6;
      }
      *(_BYTE *)(v2 + 44) = 0;
      result = sub_81290(v2);
      v2 = result;
    }
    while ( result != v1 );
  }
  return result;
}
// D5C00: using guessed type char under_debugger;
