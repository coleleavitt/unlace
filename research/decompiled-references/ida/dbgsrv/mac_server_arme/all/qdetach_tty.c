/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qdetach_tty
// Address: 0x00000001000766DC

//----- (00000001000766DC) ----------------------------------------------------
__int64 qdetach_tty()
{
  __int64 result; // x0
  int v1; // w19
  pid_t v2; // w0
  __int64 _28; // [xsp+28h] [xbp+8h]

  result = open("/dev/tty", 2);
  if ( (int)result >= 1 )
  {
    v1 = result;
    v2 = getsid(0);
    if ( v2 != -1 && v2 == tcgetsid(v1) )
    {
      signal(22, (void (__cdecl *)(int))1);
      signal(21, (void (__cdecl *)(int))1);
      ioctl(v1, 0x20007471u, 0);
    }
    if ( ((_28 ^ (2 * _28)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return close(v1);
  }
  return result;
}
// 100076770: variable '_28' is possibly undefined
