/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10004B360
// Address: 0x000000010004B360

//----- (000000010004B360) ----------------------------------------------------
__int64 __fastcall sub_10004B360(__int64 a1, __int64 a2, int a3)
{
  __int16 i; // ax
  __int64 v4; // r13
  char v6[8]; // [rsp+0h] [rbp-50h] BYREF
  __int64 v7; // [rsp+8h] [rbp-48h]
  char v8[8]; // [rsp+10h] [rbp-40h] BYREF
  __int64 v9; // [rsp+18h] [rbp-38h]

  sub_10004B050(a1, a2, a3);
  for ( i = *(_WORD *)(*(_QWORD *)(a1 + 496) + 24LL); i == 124; i = *(_WORD *)(*(_QWORD *)(a1 + 496) + 24LL) )
  {
    v8[0] = 1;
    v9 = 0;
    sub_10004B050(a1, (__int64)v8, 1);
    *(_QWORD *)(a2 + 8) |= v9;
  }
  if ( i == 9766 )
  {
    do
    {
      v6[0] = 1;
      v7 = 0;
      sub_10004B050(a1, (__int64)v6, 1);
      if ( *(_WORD *)(*(_QWORD *)(a1 + 496) + 24LL) == 124 )
      {
        v4 = v7;
        do
        {
          v8[0] = 1;
          v9 = 0;
          sub_10004B050(a1, (__int64)v8, 1);
          v4 |= v9;
        }
        while ( *(_WORD *)(*(_QWORD *)(a1 + 496) + 24LL) == 124 );
        v7 = v4;
      }
      else
      {
        v4 = v7;
      }
      *(_QWORD *)(a2 + 8) = (*(_QWORD *)(a2 + 8) != 0) & (unsigned __int8)(v4 != 0);
      *(_BYTE *)a2 = 0;
    }
    while ( *(_WORD *)(*(_QWORD *)(a1 + 496) + 24LL) == 9766 );
  }
  return __stack_chk_guard;
}
