__int64 __fastcall sub_E4DFE0(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  __int64 (__fastcall *v3)(); // rax
  __int64 v4; // rsi
  __int64 (__fastcall *v5)(); // rcx

  if ( *(_BYTE *)(a2 + 98) )
    v2 = *(_QWORD *)(a2 + 104);
  else
    v2 = *(_QWORD *)(a2 + 112);
  v3 = *(__int64 (__fastcall **)())(*(_QWORD *)v2 + 352LL);
  if ( v3 != sub_E4DFE0 )
  {
    ((void (__fastcall *)(__int64))v3)(a1);
    return a1;
  }
  if ( *(_BYTE *)(v2 + 98) )
  {
    v4 = *(_QWORD *)(v2 + 104);
    v5 = *(__int64 (__fastcall **)())(*(_QWORD *)v4 + 352LL);
    if ( v5 == v3 )
      goto LABEL_6;
LABEL_11:
    ((void (__fastcall *)(__int64))v5)(a1);
    return a1;
  }
  v4 = *(_QWORD *)(v2 + 112);
  v5 = *(__int64 (__fastcall **)())(*(_QWORD *)v4 + 352LL);
  if ( v5 != v3 )
    goto LABEL_11;
LABEL_6:
  if ( *(_BYTE *)(v4 + 98) )
    (*(void (__fastcall **)(__int64))(**(_QWORD **)(v4 + 104) + 352LL))(a1);
  else
    (*(void (__fastcall **)(__int64))(**(_QWORD **)(v4 + 112) + 352LL))(a1);
  return a1;
}

