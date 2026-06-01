__int64 __fastcall sub_2DFB80(__int64 a1, __int64 a2, __int64 a3, __int64 a4, double a5)
{
  __int64 v5; // rax
  __int64 v6; // rax

  v5 = sub_1EA680(a1 + 384, a2, a3, a4, a5);
  v6 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v5 + 40) + 128LL))(*(_QWORD *)(v5 + 40));
  get_custom_data_type_ids(a2, v6);
  return 1;
}
