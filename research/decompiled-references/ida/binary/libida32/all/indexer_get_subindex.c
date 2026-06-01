__int64 __fastcall indexer_get_subindex(unsigned __int64 a1)
{
  _QWORD *v1; // rax
  _QWORD *v2; // rax

  v1 = *(_QWORD **)(**(_QWORD **)(qword_2CA1698 + 1480) + 1688LL);
  if ( *(_BYTE *)(*(_QWORD *)(*v1 + 1480LL) + 601LL) && (v2 = sub_41F560(v1 + 5, a1)) != nullptr )
    return v2[2];
  else
    return 0;
}

