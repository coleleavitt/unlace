_QWORD *__fastcall sub_3D2050(__int64 a1, __int64 *a2, void *a3)
{
  __int64 v4; // r13
  unsigned __int64 v5; // rax
  bool v6; // cc
  __int64 v7; // rax
  _QWORD v9[7]; // [rsp+0h] [rbp-38h] BYREF

  v9[1] = __readfsqword(0x28u);
  v4 = qword_2CCB598;
  v5 = -1;
  if ( a3 != (void *)-1LL )
    v5 = sub_3B9DC0(*(_QWORD **)(qword_2CCB598 + 1672), (__int64)a3);
  v6 = *(_QWORD *)(a1 + 8) <= 1u;
  v9[0] = v5;
  if ( v6 )
    sub_7BE850(v9, v4, 0, 83);
  else
    sub_7BE7C0(v9, v4, 0, *(_QWORD *)a1, 0, 83);
  if ( *(_QWORD *)(a1 + 32) <= 1u )
    sub_7BE850(v9, v4, 1, 83);
  else
    sub_7BE7C0(v9, v4, 1, *(_QWORD *)(a1 + 24), 0, 83);
  v7 = *a2;
  if ( *(_QWORD *)(a1 + 8) > 1u || *(_QWORD *)(a1 + 32) > 1u )
    BYTE1(v7) |= 8u;
  else
    BYTE1(v7) &= ~8u;
  *a2 = v7;
  if ( *(_BYTE *)(a1 + 48) )
    return (_QWORD *)set_abits(a3, 0x8000);
  else
    return clr_abits(a3, 0x8000);
}
