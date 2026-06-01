unsigned __int64 __fastcall sub_42C020(__int64 a1, __int64 a2, unsigned __int64 *a3, __int64 a4)
{
  _QWORD *v5; // rax
  __int64 v6; // r12
  unsigned __int64 v8; // rax
  __int64 v9; // r12
  unsigned __int64 v10; // rax
  __int64 v12; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v13; // [rsp+8h] [rbp-30h]

  v5 = *(_QWORD **)(a2 + 1672);
  v6 = *(_QWORD *)(a2 + 1520);
  v13 = __readfsqword(0x28u);
  v8 = v6 - sub_631AD0(*v5, 29);
  if ( v8 >= *a3 && v8 < a3[1] )
    v6 = sub_631AD0(**(_QWORD **)(a2 + 1672), 29) + a4 + v8;
  *(_QWORD *)(a2 + 1520) = v6;
  v9 = sub_631AD0(a2, 94);
  v10 = v9 - sub_631AD0(**(_QWORD **)(a2 + 1672), 29);
  if ( v10 >= *a3 && v10 < a3[1] )
    v9 = v10 + a4 + sub_631AD0(**(_QWORD **)(a2 + 1672), 29);
  sub_632610(a2, 94, v9);
  sub_7BEFF0(&v12, a2, "$ nmSerN", 0, 0);
  *(_QWORD *)(*(_QWORD *)(a2 + 1672) + 2424LL) = v12;
  sub_7BEFF0(&v12, a2, "$ nmSerEA", 0, 0);
  *(_QWORD *)(*(_QWORD *)(a2 + 1672) + 2416LL) = v12;
  return v13 - __readfsqword(0x28u);
}
