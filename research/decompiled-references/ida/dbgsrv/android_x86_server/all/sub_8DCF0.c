/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8DCF0
// Address: 0x0008DCF0

//----- (0008DCF0) --------------------------------------------------------
unsigned int __cdecl sub_8DCF0(int a1, _DWORD *a2, unsigned int a3)
{
  unsigned int result; // eax
  int v4; // esi
  char *v5; // ecx
  int v6; // edx
  int v7; // edi
  int v8; // [esp+8h] [ebp-14h]

  result = a3;
  if ( !a3 || (*(_BYTE *)(a3 + 4) & 8) == 0 )
  {
    if ( (a2[4] & 0xFFFFFFF) != 7 )
    {
      if ( !(_BYTE)under_debugger )
        interr(3299);
      BUG();
    }
    v4 = a2[7];
    v8 = a2[2];
    if ( a2[9] )
      v5 = (char *)a2[8];
    else
      v5 = byte_EF875;
    v6 = a2[1];
    v7 = a2[5];
    if ( v4 == -1 )
      return sub_1C9D0(a1, "%a: %s (exc.code %x, tid %d)\n", v8, v5, v7, v6);
    else
      return sub_1C9D0(a1, "%a: %s -> %a (exc.code %x, tid %d)\n", v8, v5, v4, v7, v6);
  }
  return result;
}
// 13E34C: using guessed type int under_debugger;
