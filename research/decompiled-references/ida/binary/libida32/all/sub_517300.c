__int64 __fastcall sub_517300(__int64 a1, __int64 a2, unsigned int *a3)
{
  unsigned int v4; // r13d
  __int64 *v5; // r14
  unsigned int v6; // eax

  v4 = a3[2];
  v5 = *(__int64 **)(*(_QWORD *)a1 + 1480LL);
  if ( (a3[4] & 2) == 0 )
    v4 -= a3[1];
  sub_3C4F00(*(__int64 **)(*(_QWORD *)a1 + 1480LL), *a3, a3[3], 1);
  a3[4] &= 0xFFFFFFF3;
  v6 = v4;
  a3[3] = 1024;
  if ( (*(_BYTE *)(a2 + 20) & 2) == 0 )
    v6 = a3[1] + v4;
  a3[2] = v6;
  sub_5163F0(v5, a2);
  if ( (*(_BYTE *)(a2 + 20) & 0x40) != 0 )
    sub_69E750(v5, *a3, 0);
  sub_516780(*(_QWORD **)(*(_QWORD *)a1 + 1480LL), *(_QWORD *)(*(_QWORD *)a1 + 1680LL), (unsigned int *)a2, v4);
  return 1;
}

