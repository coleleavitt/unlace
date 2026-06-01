/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: close_linput
// Address: 0x00000001000715B0

//----- (00000001000715B0) ----------------------------------------------------
void __fastcall close_linput(void *a1)
{
  int v2; // w8
  FILE *v3; // x0
  __int64 _18; // [xsp+18h] [xbp+8h]

  if ( a1 )
  {
    v2 = *(_DWORD *)a1;
    v3 = *((FILE **)a1 + 1);
    if ( v2 < 2 )
    {
      qfclose(v3);
    }
    else
    {
      if ( v3 )
        (*((void (__fastcall **)(FILE *))v3->_p + 2))(v3);
      qfree(*((void **)a1 + 5));
      qfree(*((void **)a1 + 4));
    }
    if ( ((_18 ^ (2 * _18)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    operator delete(a1);
  }
}
// 10007162C: variable '_18' is possibly undefined
