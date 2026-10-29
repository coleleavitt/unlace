__int64 __fastcall indexer_get_subindex(unsigned __int64 a1)
{
  _QWORD *v1; // rax
  _QWORD *v2; // rax

  v1 = *(_QWORD **)(**(_QWORD **)(qword_2CCB598 + 1672) + 1880LL);
  if ( *(_BYTE *)(*(_QWORD *)(*v1 + 1672LL) + 609LL) && (v2 = sub_433430(v1 + 5, a1)) != nullptr )
    return v2[2];
  else
    return 0;
}
