/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_463C22
// Address: 0x00463C22

//----- (00463C22) --------------------------------------------------------
void sub_463C22()
{
  uintptr_t v0; // ecx
  unsigned int v1; // eax

  v0 = __security_cookie;
  if ( __security_cookie == -1153374642 || (__security_cookie & 0xFFFF0000) == 0 )
  {
    v1 = sub_463BD5();
    v0 = v1;
    if ( v1 == -1153374642 )
    {
      v0 = -1153374641;
    }
    else if ( (v1 & 0xFFFF0000) == 0 )
    {
      v0 = ((v1 | 0x4711) << 16) | v1;
    }
    __security_cookie = v0;
  }
  dword_4B5E00 = ~v0;
}
// 4B5E00: using guessed type int dword_4B5E00;
