void __fastcall sub_C0E6B0(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v3; // rbp
  __int64 v5; // rsi
  __int64 v6; // rdi

  v3 = *(_QWORD *)(a2 + 8);
  if ( *(_WORD *)(v3 + 4) != 2 )
    goto LABEL_2;
  if ( (unsigned __int8)sub_1537200(*(_QWORD *)(a1 + 16)) )
    return;
  v3 = *(_QWORD *)(a2 + 8);
  if ( v3 )
LABEL_2:
    ++*(_DWORD *)(v3 + 8);
  v5 = *a3;
  if ( *a3 )
  {
    v6 = a3[1];
    if ( (*(_DWORD *)(v5 + 8))-- == 1 )
      sub_15D7BC0(v6, v5);
  }
  *a3 = v3;
}

