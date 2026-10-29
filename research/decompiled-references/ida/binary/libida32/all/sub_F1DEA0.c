__int64 __fastcall sub_F1DEA0(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  unsigned __int64 v7; // rax
  __int64 (__fastcall *v8)(); // rsi
  unsigned __int64 v9; // rax
  __int64 v10; // rsi
  char v11; // al
  __int64 result; // rax

  sub_971800(*(_QWORD *)(a1 + 1096), " ");
  sub_F06990(a1, *(_QWORD *)(a2 + 16));
  v7 = *(_QWORD *)a2;
  if ( (*(_QWORD *)a2 & 0x80000) != 0 )
  {
    v8 = *(__int64 (__fastcall **)())(a2 + 32);
    if ( v8 )
    {
      sub_F1D820(a1, v8, v3, v4, v5, v6);
      v7 = *(_QWORD *)a2;
    }
  }
  v9 = v7 >> 16;
  if ( (v9 & 0x20) != 0 && *(_QWORD *)(a2 + 16) != *(_QWORD *)(a2 + 16LL * ((v9 & 8) != 0) + 32) )
  {
    sub_971800(*(_QWORD *)(a1 + 1096), " (");
    if ( (*(_QWORD *)a2 & 0x200000LL) != 0 )
      v10 = *(_QWORD *)(a2 + 16LL * ((*(_QWORD *)a2 & 0x80000LL) != 0) + 32);
    else
      v10 = *(_QWORD *)(a2 + 16);
    sub_F06990(a1, v10);
    sub_971800(*(_QWORD *)(a1 + 1096), ")");
  }
  v11 = (*(_BYTE *)(a2 + 3) >> 1) & 3;
  if ( v11 == 2 )
  {
    sub_971800(*(_QWORD *)(a1 + 1096), " non_odr_use_constant");
  }
  else if ( ((*(_BYTE *)(a2 + 3) >> 1) & 3) == 3 )
  {
    sub_971800(*(_QWORD *)(a1 + 1096), " non_odr_use_discarded");
  }
  else if ( v11 == 1 )
  {
    sub_971800(*(_QWORD *)(a1 + 1096), " non_odr_use_unevaluated");
  }
  result = *(_QWORD *)a2;
  if ( (*(_QWORD *)a2 & 0x1000000) != 0 )
  {
    sub_971800(*(_QWORD *)(a1 + 1096), " dependent_capture");
    result = *(_QWORD *)a2;
  }
  else if ( (result & 0x800000) != 0 )
  {
    sub_971800(*(_QWORD *)(a1 + 1096), " refers_to_enclosing_variable_or_capture");
    result = *(_QWORD *)a2;
  }
  if ( (result & 0x8000000) != 0 )
    return sub_971800(*(_QWORD *)(a1 + 1096), " immediate-escalating");
  return result;
}

