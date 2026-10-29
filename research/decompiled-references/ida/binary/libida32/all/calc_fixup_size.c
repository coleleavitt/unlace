__int64 __fastcall calc_fixup_size(__int16 a1)
{
  __int64 result; // rax
  __int64 v2; // rax
  unsigned int v3; // edi
  __int64 v4; // rax

  if ( a1 >= 0 )
  {
    result = 0xFFFFFFFFLL;
    if ( (unsigned __int16)(a1 - 1) > 0xFu )
      return result;
    v2 = qword_2AFDD60[(unsigned __int16)a1];
    goto LABEL_4;
  }
  v3 = a1 & 0x7FFF;
  if ( v3 )
  {
    v4 = *(_QWORD *)(**(_QWORD **)(qword_2CA1698 + 1480) + 1408LL);
    if ( (unsigned __int64)v3 < *(_QWORD *)(v4 + 24) )
    {
      v2 = *(_QWORD *)(*(_QWORD *)(v4 + 16) + 16LL * v3);
LABEL_4:
      if ( v2 )
        return *(unsigned __int8 *)(v2 + 20);
    }
  }
  return 0xFFFFFFFFLL;
}

