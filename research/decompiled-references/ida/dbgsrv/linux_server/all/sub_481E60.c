/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_481E60
// Address: 0x0000000000481E60

//----- (0000000000481E60) ----------------------------------------------------
__int64 __fastcall sub_481E60(_BYTE *a1, unsigned __int64 a2, int a3)
{
  time_t timer; // [rsp+8h] [rbp-50h] BYREF
  char buf[40]; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int64 v6; // [rsp+38h] [rbp-20h]

  v6 = __readfsqword(0x28u);
  timer = a3;
  if ( a3 >= 0 && ctime_r(&timer, buf) )
  {
    sub_4821A0(a1, buf, a2);
    if ( a2 > 8 && a1[8] == 32 )
      a1[8] = 48;
    return 1;
  }
  else
  {
    sub_4821A0(a1, "[wrong timestamp]\n", a2);
    return 0;
  }
}
