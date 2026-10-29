/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qctime
// Address: 0x000000010007D6A0

//----- (000000010007D6A0) ----------------------------------------------------
char __fastcall qctime(_BYTE *a1, unsigned __int64 a2, int a3)
{
  char result; // al
  time_t v4; // [rsp+8h] [rbp-48h] BYREF
  char v5[40]; // [rsp+10h] [rbp-40h] BYREF

  v4 = a3;
  if ( a3 >= 0 && ctime_r(&v4, v5) )
  {
    qstrncpy(a1, (__int64)v5, a2);
    result = 1;
    if ( a2 >= 9 && a1[8] == 32 )
      a1[8] = 48;
  }
  else
  {
    qstrncpy(a1, (__int64)"[wrong timestamp]\n", a2);
    return 0;
  }
  return result;
}
