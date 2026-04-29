__int64 __fastcall sub_18E940(__int64 a1, __int64 *a2)
{
  int v3; // r12d
  __int64 v4; // rbp
  int v5; // edx
  __int64 v6; // rbp
  char v7; // si

  sub_88FC0((__int64)a2, 2, "std_va_collector_t.va_collector");
  sub_89B00(a1, a2);
  sub_88FC0((__int64)a2, 2, "std_va_collector_t.va_offs");
  sub_792E0(a2, *(_DWORD *)(a1 + 72));
  if ( *(_QWORD *)(a1 + 72) )
  {
    v3 = 0;
    v4 = 0;
    do
    {
      v5 = v3++;
      sub_89590((__int64)a2, 4, v5);
      v6 = *(_QWORD *)(a1 + 64) + 40 * v4;
      sub_79740(a2, *(_QWORD *)(v6 + 24));
      sub_79740(a2, *(_QWORD *)(v6 + 16));
      v7 = *(_BYTE *)(v6 + 32);
      v4 = v3;
      sub_790F0(a2, v7);
    }
    while ( (unsigned __int64)v3 < *(_QWORD *)(a1 + 72) );
  }
  sub_88FC0((__int64)a2, 2, "std_va_collector_t.backup_area");
  sub_79740(a2, *(_QWORD *)(a1 + 104) + 1LL);
  sub_88FC0((__int64)a2, 2, "std_va_collector_t.min_nfixed");
  sub_792E0(a2, *(_DWORD *)(a1 + 112) + 1);
  sub_88FC0((__int64)a2, 2, "std_va_collector_t.need_va_list_var");
  return sub_790F0(a2, *(_BYTE *)(a1 + 116));
}
