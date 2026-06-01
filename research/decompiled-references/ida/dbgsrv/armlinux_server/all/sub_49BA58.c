/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_49BA58
// Address: 0x000000000049BA58

//----- (000000000049BA58) ----------------------------------------------------
__int64 __fastcall sub_49BA58(__int64 a1)
{
  char *v1; // x2
  void *v2; // x0
  char *v3; // x2
  unsigned int v5; // [xsp+14h] [xbp-5Ch] BYREF
  _QWORD v6[10]; // [xsp+18h] [xbp-58h] BYREF

  v5 = -1;
  v6[0] = *(_QWORD *)"P";
  v6[1] = 136;
  v6[2] = 0;
  v6[3] = a1;
  memset(&v6[4], 255, 24);
  memset(&v6[7], 0, 24);
  if ( sub_494500() )
    callui(5, (int)callui, v1);
  v2 = sub_4951E0((__int64)v6, nullptr);
  if ( v2 )
    sub_494C98((__pid_t)v2, (int *)&v5, -1);
  if ( sub_494500() )
    callui(6, (int)callui, v3);
  return v5;
}
// 49BAD0: variable 'v1' is possibly undefined
// 49BB0C: variable 'v3' is possibly undefined
// 522018: using guessed type __int64 (__fastcall *callui)(int, int, char *s1);
