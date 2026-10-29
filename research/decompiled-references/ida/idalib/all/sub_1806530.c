__int64 __fastcall sub_1806530(__int64 a1, unsigned int a2)
{
  unsigned __int8 v2; // al
  __int64 v3; // rdi

  v2 = *(_BYTE *)(a1 + 28) & 0x7F;
  if ( (unsigned int)v2 - 34 > 5 )
  {
    if ( v2 == 18 )
    {
      v3 = *(_QWORD *)(*(_QWORD *)(a1 + 96) + 8LL * a2);
    }
    else
    {
      if ( v2 != 8 )
        return 0;
      v3 = *(_QWORD *)(*(_QWORD *)(a1 + 72) + 8LL * a2);
    }
  }
  else
  {
    v3 = *(_QWORD *)(*(_QWORD *)(a1 + 120) + 8LL * a2);
  }
  if ( v3 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  return 0;
}
