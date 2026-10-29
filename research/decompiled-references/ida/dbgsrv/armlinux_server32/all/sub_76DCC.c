/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_76DCC
// Address: 0x00076DCC

//----- (00076DCC) --------------------------------------------------------
unsigned __int8 *__fastcall sub_76DCC(unsigned __int8 *a1, int a2)
{
  unsigned __int8 *v4; // r1
  void *ptr; // [sp+0h] [bp-14h] BYREF
  int v7; // [sp+4h] [bp-10h]
  int v8; // [sp+8h] [bp-Ch]

  ptr = nullptr;
  v7 = 0;
  v8 = 0;
  if ( sub_7A894("TMPDIR", (int)&ptr) )
  {
    if ( v7 )
      v4 = (unsigned __int8 *)ptr;
    else
      v4 = (unsigned __int8 *)&dword_8DB98;
    sub_70558(a1, v4, a2);
  }
  else
  {
    sub_70558(a1, "/tmp", a2);
  }
  if ( ptr )
  {
    v7 = 0;
    sub_77F70(ptr);
  }
  return a1;
}
// 8DB98: using guessed type int dword_8DB98;
