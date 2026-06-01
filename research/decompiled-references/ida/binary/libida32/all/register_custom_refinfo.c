__int64 __fastcall register_custom_refinfo(__int64 a1)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)(**(_QWORD **)(qword_2CA1698 + 1480) + 1408LL);
  if ( *(_QWORD *)(v1 + 136) > 0xFu )
    return 0xFFFFFFFFLL;
  else
    return sub_40C9E0(v1 + 128, a1, nullptr);
}

