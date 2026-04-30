__int64 __fastcall sub_27CDE0(__int64 a1, _QWORD **a2, int *a3)
{
  int v4; // eax

  sub_29C4E0(a1, **a2);
  *(_QWORD *)a1 = disasm_graph_t___vtable;
  *(_OWORD *)(a1 + 256) = 0;
  v4 = *a3;
  *(_BYTE *)(a1 + 288) = 0;
  *(_DWORD *)(a1 + 272) = v4;
  *(_QWORD *)(a1 + 280) = qflow_chart_t___vtable;
  *(_QWORD *)(a1 + 296) = 0;
  *(_QWORD *)(a1 + 336) = 0;
  *(_QWORD *)(a1 + 352) = 0;
  *(_DWORD *)(a1 + 376) = 0;
  *(_DWORD *)(a1 + 344) = 2;
  *(_OWORD *)(a1 + 304) = 0;
  *(_OWORD *)(a1 + 320) = 0;
  *(_OWORD *)(a1 + 360) = 0;
  create_multirange_qflow_chart(a1 + 280, a2);
  return sub_27C280((__m128i *)a1);
}
