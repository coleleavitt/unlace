void __fastcall sub_3E91E0(__int64 a1, __int64 a2, __int64 a3, double a4)
{
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // r13

  v5 = *(_QWORD *)(a1 + 832);
  v6 = *(_QWORD *)(v5 + 712);
  if ( !v6 )
    sub_3E4E50(a4, a1, a2);
  v7 = *(int *)(*(_QWORD *)(v5 + 704) + 4 * v6 - 4);
  *(_QWORD *)(v5 + 712) = v6 - 1;
  sub_3E8D60(
    a1,
    3u,
    *(_DWORD *)(*(_QWORD *)(a1 + 832) + 84LL),
    a3,
    0x3BEA45E214ADDC55LL,
    v7,
    *(unsigned __int8 *)(a1 + 104));
  sub_3E8D60(a1, 0xCu, *(_DWORD *)(*(_QWORD *)(a1 + 832) + 84LL), (int)a2, v7, (int)a2, 0);
  sub_3E6F70(*(_QWORD *)(a1 + 832), v7);
}
