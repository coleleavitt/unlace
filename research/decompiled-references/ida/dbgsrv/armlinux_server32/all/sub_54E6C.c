/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_54E6C
// Address: 0x00054E6C

//----- (00054E6C) --------------------------------------------------------
int __fastcall sub_54E6C(int result, int a2, int a3)
{
  const char *v3; // r5
  double v4; // r2
  double v5; // [sp+8h] [bp-Ch]
  int v6; // [sp+10h] [bp-4h]
  int savedregs; // [sp+14h] [bp+0h]

  if ( !a3 || (*(_DWORD *)(a3 + 4) & 8) == 0 )
  {
    if ( (*(_DWORD *)(a2 + 16) & 0xFFFFFFF) != 7 )
    {
      if ( under_debugger )
        __und(0xFFu);
      sub_78C64(3299);
    }
    v3 = *(const char **)(a2 + 28);
    LODWORD(v4) = *(_DWORD *)(a2 + 8);
    HIDWORD(v4) = *(_DWORD *)(a2 + 36);
    if ( v3 == (const char *)-1 )
    {
      if ( HIDWORD(v4) )
        HIDWORD(v4) = *(_DWORD *)(a2 + 32);
      else
        HIDWORD(v4) = &dword_8DB98;
      return sub_17480(
               result,
               "%a: %s (exc.code %x, tid %d)\n",
               v4,
               *(const char **)(a2 + 20),
               *(_DWORD *)(a2 + 4),
               LODWORD(v5));
    }
    else
    {
      if ( HIDWORD(v4) )
        HIDWORD(v4) = *(_DWORD *)(a2 + 32);
      else
        HIDWORD(v4) = &dword_8DB98;
      LODWORD(v5) = *(_DWORD *)(a2 + 4);
      return sub_17480(result, "%a: %s -> %a (exc.code %x, tid %d)\n", v4, v3, v5, v6, savedregs);
    }
  }
  return result;
}
// 54EAE: variable 'v5' is possibly undefined
// 54EAE: variable 'v6' is possibly undefined
// 54EAE: variable 'savedregs' is possibly undefined
// 8DB98: using guessed type int dword_8DB98;
// D6C20: using guessed type char under_debugger;
