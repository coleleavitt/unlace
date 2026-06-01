/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140028C20
// Address: 0x0000000140028C20

//----- (0000000140028C20) ----------------------------------------------------
char __fastcall sub_140028C20(_QWORD *a1, char *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  char v6[8]; // [rsp+20h] [rbp-28h] BYREF
  __int128 v7; // [rsp+28h] [rbp-20h]
  __int64 v8; // [rsp+38h] [rbp-10h]

  if ( (unsigned int)sub_14002A460(a2, (char *)(32LL * a1[1] + *a1 - 32LL)) )
    return 0;
  v6[0] = 2;
  v7 = 0;
  v8 = 0;
  sub_140028E70(v6, (char *)(32LL * a1[1] + *a1 - 32LL));
  v4 = a1[1];
  if ( v4 )
  {
    v5 = v4 - 1;
    a1[1] = v5;
    sub_140029390(*a1 + 32 * v5);
  }
  sub_140029390((__int64)v6);
  return 1;
}
