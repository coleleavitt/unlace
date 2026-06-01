/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6B1B0
// Address: 0x0006B1B0

//----- (0006B1B0) --------------------------------------------------------
_BYTE *__fastcall sub_6B1B0(_BYTE *a1, char *a2, int a3)
{
  unsigned __int8 *v6; // r1
  void *ptr; // [sp+0h] [bp-14h] BYREF
  int v8; // [sp+4h] [bp-10h]
  int v9; // [sp+8h] [bp-Ch]

  if ( a3 < 0 )
  {
    if ( under_debugger )
      __und(0xFFu);
    sub_78C64(1225);
  }
  if ( a3 )
  {
    ptr = nullptr;
    v8 = 0;
    v9 = 0;
    sub_6AFB0((unsigned int)&ptr, a2, -1, a3);
    v6 = (unsigned __int8 *)(v8 ? ptr : &dword_8DB98);
    a1 = sub_7968C(a1, v6, a3);
    if ( ptr )
    {
      v8 = 0;
      sub_77F70(ptr);
    }
  }
  return a1;
}
// 8DB98: using guessed type int dword_8DB98;
// D6C20: using guessed type char under_debugger;
