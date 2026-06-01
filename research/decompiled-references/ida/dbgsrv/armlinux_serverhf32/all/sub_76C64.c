/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_76C64
// Address: 0x00076C64

//----- (00076C64) --------------------------------------------------------
unsigned __int8 *__fastcall sub_76C64(unsigned __int8 *a1, int a2)
{
  unsigned __int8 *v4; // r1
  void *ptr; // [sp+0h] [bp-14h] BYREF
  int v7; // [sp+4h] [bp-10h]
  int v8; // [sp+8h] [bp-Ch]

  ptr = nullptr;
  v7 = 0;
  v8 = 0;
  if ( sub_7A72C("TMPDIR", (int)&ptr) )
  {
    if ( v7 )
      v4 = (unsigned __int8 *)ptr;
    else
      v4 = (unsigned __int8 *)&dword_8DA5C;
    sub_703EC(a1, v4, a2);
  }
  else
  {
    sub_703EC(a1, "/tmp", a2);
  }
  if ( ptr )
  {
    v7 = 0;
    sub_77E08(ptr);
  }
  return a1;
}
// 8DA5C: using guessed type int dword_8DA5C;
