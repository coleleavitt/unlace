__int64 __fastcall sub_A7A460(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  _QWORD *v7; // rbx
  __int64 v8; // rbp
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  _QWORD *v13; // rax

  v7 = sub_704780(
         (__int64 *)(*(_QWORD *)(*(_QWORD *)(a1 + 2264) + 80LL) + 72LL),
         *(_QWORD *)(*(_QWORD *)(a1 + 2264) + 80LL),
         a3,
         a4,
         a5,
         a6);
  if ( v7 )
    v7 += 5;
  v8 = sub_B902D0(72, a1, v7, 0);
  sub_BC2700(v8, a1, v7, a3, a2);
  *(_BYTE *)(v8 + 29) |= 2u;
  v13 = sub_704780(
          (__int64 *)(*(_QWORD *)(*(_QWORD *)(a1 + 2264) + 80LL) + 72LL),
          *(_QWORD *)(*(_QWORD *)(a1 + 2264) + 80LL),
          v9,
          v10,
          v11,
          v12);
  sub_B94AD0(v13 + 5, v8);
  return v8;
}
