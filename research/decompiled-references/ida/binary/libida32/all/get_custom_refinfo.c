__int64 __fastcall get_custom_refinfo(int a1)
{
  __int64 v1; // rax
  signed int v2; // edi

  v1 = *(_QWORD *)(**(_QWORD **)(qword_2CA1698 + 1480) + 1408LL);
  v2 = a1 & 0xFFFFFFBF;
  if ( v2 < 0 || (unsigned __int64)v2 >= *(_QWORD *)(v1 + 136) )
    return 0;
  else
    return *(_QWORD *)(*(_QWORD *)(v1 + 128) + 16LL * v2);
}

