__int64 __fastcall sub_3CC660(__int64 a1, __int64 *a2, unsigned int a3)
{
  __int64 v4; // r13
  int v5; // eax
  bool v6; // cc
  __int64 v7; // rax
  int v9; // [rsp+4h] [rbp-34h] BYREF
  unsigned __int64 v10; // [rsp+8h] [rbp-30h]

  v10 = __readfsqword(0x28u);
  v4 = qword_2CA1698;
  v5 = -1;
  if ( a3 != -1 )
    v5 = a3 + sub_614FB0(**(_QWORD **)(qword_2CA1698 + 1480), 29);
  v6 = *(_QWORD *)(a1 + 8) <= 1u;
  v9 = v5;
  if ( v6 )
    sub_79B4D0(&v9, v4, 0, 83);
  else
    sub_79B440(&v9, v4, 0, *(_QWORD *)a1, 0, 83);
  if ( *(_QWORD *)(a1 + 32) <= 1u )
    sub_79B4D0(&v9, v4, 1, 83);
  else
    sub_79B440(&v9, v4, 1, *(_QWORD *)(a1 + 24), 0, 83);
  v7 = *a2;
  if ( *(_QWORD *)(a1 + 8) > 1u || *(_QWORD *)(a1 + 32) > 1u )
    BYTE1(v7) |= 8u;
  else
    BYTE1(v7) &= ~8u;
  *a2 = v7;
  if ( *(_BYTE *)(a1 + 48) )
    return set_abits(a3, 0x8000);
  else
    return clr_abits(a3, 0x8000);
}

