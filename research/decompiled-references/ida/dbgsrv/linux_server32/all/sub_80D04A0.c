/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80D04A0
// Address: 0x080D04A0

//----- (080D04A0) --------------------------------------------------------
int __cdecl sub_80D04A0(struct tm *tp, time_t a2)
{
  int v2; // edx
  time_t timer; // [esp+0h] [ebp-14h] BYREF
  unsigned int v5; // [esp+4h] [ebp-10h]

  v5 = __readgsdword(0x14u);
  v2 = 0;
  timer = a2;
  if ( a2 >= 0 )
    LOBYTE(v2) = gmtime_r(&timer, tp) != nullptr;
  if ( v5 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return v2;
}
// 80D04F2: variable 'v2' is possibly undefined
