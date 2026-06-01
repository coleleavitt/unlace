/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qctime
// Address: 0x00000000000C3D20

//----- (00000000000C3D20) ----------------------------------------------------
char __fastcall qctime(_BYTE *a1, unsigned __int64 a2, int a3)
{
  char result; // al
  time_t timer; // [rsp+8h] [rbp-40h] BYREF
  char buf[32]; // [rsp+10h] [rbp-38h] BYREF
  unsigned __int64 v6; // [rsp+30h] [rbp-18h]

  v6 = __readfsqword(0x28u);
  timer = a3;
  if ( a3 >= 0 && ctime_r(&timer, buf) )
  {
    qstrncpy(a1, (__int64)buf, a2);
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
