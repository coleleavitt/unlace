/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10005AB70
// Address: 0x000000010005AB70

//----- (000000010005AB70) ----------------------------------------------------
__int64 __fastcall sub_10005AB70(__int64 a1, unsigned __int64 a2)
{
  int v3; // [rsp+0h] [rbp-30h] BYREF
  __int64 v4; // [rsp+8h] [rbp-28h]
  __int128 v5; // [rsp+10h] [rbp-20h]

  if ( *(_QWORD *)(a1 + 8) != a2 )
  {
    v3 = -2;
    v5 = 0;
    v4 = -1;
    sub_10005F910(a1, a2, (unsigned __int64)&v3);
    if ( v3 >= -1 )
    {
      if ( v4 )
      {
        *(_QWORD *)&v5 = 0;
        qfree((void *)v4);
      }
    }
  }
  return __stack_chk_guard;
}
