/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4741C
// Address: 0x000000000004741C

//----- (000000000004741C) ----------------------------------------------------
__int64 __fastcall sub_4741C(__int64 a1, unsigned int a2)
{
  _QWORD *v4; // x1
  char v5; // w8
  __int64 result; // x0

  if ( *(_QWORD *)(a1 + 376) )
  {
    sub_3967C((__int64 *)(a1 + 376), 0);
    qfree(*(void **)(a1 + 376));
    *(_QWORD *)(a1 + 376) = 0;
    *(_QWORD *)(a1 + 392) = 0;
  }
  v4 = *(_QWORD **)(a1 + 1720);
  *(_BYTE *)(a1 + 1934) = 0;
  sub_47678(a1 + 1712, v4);
  *(_QWORD *)(a1 + 1712) = a1 + 1720;
  *(_QWORD *)(a1 + 1728) = 0;
  *(_QWORD *)(a1 + 1720) = 0;
  v5 = sub_9CE6C((_QWORD *)a1);
  result = 0;
  if ( (v5 & 1) != 0 )
  {
    if ( (((__int64 (__fastcall *)(__int64, _QWORD, __int64))loc_4330C)(a1, a2, 2) & 1) != 0 )
    {
      sub_3EB28((_QWORD *)a1);
      return 1;
    }
    else
    {
      return 0;
    }
  }
  return result;
}
