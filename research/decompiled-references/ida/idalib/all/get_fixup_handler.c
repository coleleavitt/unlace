__int64 __fastcall get_fixup_handler(__int16 a1)
{
  __int64 result; // rax
  unsigned int v2; // edi
  __int64 v3; // rax

  if ( a1 < 0 )
  {
    v2 = a1 & 0x7FFF;
    if ( v2
      && (v3 = *(_QWORD *)(**(_QWORD **)(qword_2CCB598 + 1672) + 1600LL), (unsigned __int64)v2 < *(_QWORD *)(v3 + 24)) )
    {
      return *(_QWORD *)(*(_QWORD *)(v3 + 16) + 16LL * v2);
    }
    else
    {
      return 0;
    }
  }
  else
  {
    result = 0;
    if ( (unsigned __int16)(a1 - 1) <= 0xFu )
      return qword_2B27D20[(unsigned __int16)a1];
  }
  return result;
}
