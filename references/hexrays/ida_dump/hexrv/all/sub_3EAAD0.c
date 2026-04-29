void __fastcall sub_3EAAD0(__int64 a1, __int64 a2, int a3, double a4)
{
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v8; // r14

  v5 = *(_QWORD *)(a1 + 832);
  v6 = *(_QWORD *)(v5 + 712);
  if ( !v6 )
    sub_3E4E50(a4, a1, a2);
  v8 = *(int *)(*(_QWORD *)(v5 + 704) + 4 * v6 - 4);
  *(_QWORD *)(v5 + 712) = v6 - 1;
  sub_3E9B00(a1, 1LL << *(_QWORD *)(a1 + 152), *(unsigned __int8 *)(a1 + 104), v8, *(unsigned __int16 *)(a1 + 842));
  sub_3E8D60(a1, 0x14u, *(unsigned __int16 *)(a1 + 842), a3, v8, v8, 0);
  sub_3E8D60(a1, 0x20u, *(unsigned __int16 *)(a1 + 842), v8, **(int **)(*(_QWORD *)(a1 + 832) + 632LL), (int)a2, 0);
  sub_3EA150(a1, 1, *(unsigned __int16 *)(a1 + 842), a2, a2, 0, a4);
  sub_3E6F70(*(_QWORD *)(a1 + 832), v8);
}
