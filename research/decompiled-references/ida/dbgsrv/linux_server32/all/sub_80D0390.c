/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80D0390
// Address: 0x080D0390

//----- (080D0390) --------------------------------------------------------
int __cdecl sub_80D0390(unsigned int a1, unsigned int a2, time_t a3)
{
  int result; // eax
  time_t timer; // [esp+0h] [ebp-44h] BYREF
  char buf[30]; // [esp+6h] [ebp-3Eh] BYREF
  unsigned int v6; // [esp+24h] [ebp-20h]

  v6 = __readgsdword(0x14u);
  timer = a3;
  if ( a3 >= 0 && ctime_r(&timer, buf) )
  {
    sub_80D0740(a1, buf, a2);
    if ( a2 > 8 && *(_BYTE *)(a1 + 8) == 32 )
      *(_BYTE *)(a1 + 8) = 48;
    result = 1;
  }
  else
  {
    sub_80D0740(a1, "[wrong timestamp]\n", a2);
    result = 0;
  }
  if ( v6 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return result;
}
