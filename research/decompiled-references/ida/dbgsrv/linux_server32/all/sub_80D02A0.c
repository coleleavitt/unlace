/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80D02A0
// Address: 0x080D02A0

//----- (080D02A0) --------------------------------------------------------
__int64 sub_80D02A0()
{
  __int64 result; // rax
  int v1; // [esp-10h] [ebp-28h]
  int v2; // [esp-Ch] [ebp-24h]
  int v3; // [esp-8h] [ebp-20h]
  struct timespec tp; // [esp+0h] [ebp-18h] BYREF
  unsigned int v5; // [esp+8h] [ebp-10h]

  v5 = __readgsdword(0x14u);
  if ( clock_gettime(0, &tp) == -1 )
  {
    if ( !byte_811F8A1 )
    {
      if ( v5 == __readgsdword(0x14u) )
        sub_80CFF40(10, v1, v2, v3);
      sub_80D7AB0();
    }
    BUG();
  }
  result = tp.tv_nsec + 1000000000LL * tp.tv_sec;
  if ( v5 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return result;
}
// 80D0319: variable 'v1' is possibly undefined
// 80D0319: variable 'v2' is possibly undefined
// 80D0319: variable 'v3' is possibly undefined
// 811F8A1: using guessed type char byte_811F8A1;
