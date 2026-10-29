/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7DCA8
// Address: 0x000000000007DCA8

//----- (000000000007DCA8) ----------------------------------------------------
__int64 __fastcall sub_7DCA8(
        __int64 a1,
        __int64 (__fastcall *a2)(__int64, char *, _QWORD, _QWORD, __int64),
        __int64 a3)
{
  __int64 **i; // x21
  __int64 *v6; // x0
  char *v7; // x1
  __int64 result; // x0

  for ( i = *(__int64 ***)(*(_QWORD *)(a1 + 624) + 16LL); i; i = (__int64 **)*i )
  {
    if ( ((_BYTE)i[2] & 1) != 0 )
    {
      v6 = i[4];
      if ( !i[6] )
      {
LABEL_6:
        v7 = &byte_F154B;
        goto LABEL_7;
      }
    }
    else
    {
      v6 = (__int64 *)((char *)i + 17);
      if ( !i[6] )
        goto LABEL_6;
    }
    v7 = (char *)i[5];
LABEL_7:
    result = a2((__int64)v6, v7, *((unsigned __int8 *)i + 64), *((unsigned __int8 *)i + 65), a3);
    if ( (_DWORD)result )
      return result;
  }
  return 0;
}
// F154B: using guessed type char byte_F154B;
