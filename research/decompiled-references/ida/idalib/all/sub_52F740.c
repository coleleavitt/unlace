__int64 __fastcall sub_52F740(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v4; // r13
  __int64 *v5; // r14
  __int64 v6; // rax

  v4 = a3[2];
  v5 = *(__int64 **)(*(_QWORD *)a1 + 1672LL);
  if ( (*((_BYTE *)a3 + 28) & 2) == 0 )
    v4 -= a3[1];
  sub_3CA1F0(*(__int64 **)(*(_QWORD *)a1 + 1672LL), *a3, *((_DWORD *)a3 + 6), 1);
  *((_DWORD *)a3 + 7) &= 0xFFFFFFF3;
  v6 = v4;
  *((_DWORD *)a3 + 6) = 1024;
  if ( (*(_BYTE *)(a2 + 28) & 2) == 0 )
    v6 = a3[1] + v4;
  a3[2] = v6;
  sub_52E840(v5, a2);
  if ( (*(_BYTE *)(a2 + 28) & 0x40) != 0 )
    sub_6BF220(v5, *a3, 0);
  sub_52EBC0(*(_QWORD **)(*(_QWORD *)a1 + 1672LL), *(_QWORD *)(*(_QWORD *)a1 + 1872LL), a2, v4);
  return 1;
}
