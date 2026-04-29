__int64 __fastcall sub_8B3C0(__int64 a1, __int64 *a2)
{
  unsigned int v3; // esi
  __int64 v4; // rax
  __int128 v5; // rt0
  __int64 v6; // rax
  __int128 v7; // rt0
  __int64 v8; // rax
  __int128 v9; // rt0
  __int64 result; // rax

  sub_8AAC0((__int64)a2, 4, "gva_attrs.block");
  v3 = 0;
  if ( *(_QWORD *)a1 )
    v3 = *(_DWORD *)(*(_QWORD *)a1 + 72LL) + 1;
  sub_7ADE0(a2, v3);
  sub_8AAC0((__int64)a2, 4, "gva_attrs.flags");
  sub_7ADE0(a2, *(_DWORD *)(a1 + 8));
  sub_8AAC0((__int64)a2, 4, "gva_attrs.ra");
  sub_8B2F0(a1 + 16, a2);
  sub_8AAC0((__int64)a2, 4, "gva_attrs.va_addr");
  v4 = -*(_QWORD *)(a1 + 72);
  if ( *(__int64 *)(a1 + 72) > 0 )
    v4 = *(_QWORD *)(a1 + 72);
  *(_QWORD *)&v5 = *(_QWORD *)(a1 + 72);
  *((_QWORD *)&v5 + 1) = v4;
  sub_7AE40(a2, v5 >> 63);
  sub_8AAC0((__int64)a2, 4, "gva_attrs.ovl_off");
  v6 = -*(_QWORD *)(a1 + 80);
  if ( *(__int64 *)(a1 + 80) > 0 )
    v6 = *(_QWORD *)(a1 + 80);
  *(_QWORD *)&v7 = *(_QWORD *)(a1 + 80);
  *((_QWORD *)&v7 + 1) = v6;
  sub_7AE40(a2, v7 >> 63);
  sub_8AAC0((__int64)a2, 4, "gva_attrs.orig");
  v8 = -*(_QWORD *)(a1 + 88);
  if ( *(__int64 *)(a1 + 88) > 0 )
    v8 = *(_QWORD *)(a1 + 88);
  *(_QWORD *)&v9 = *(_QWORD *)(a1 + 88);
  *((_QWORD *)&v9 + 1) = v8;
  result = sub_7AE40(a2, v9 >> 63);
  if ( *(_QWORD *)(a1 + 104) )
  {
    if ( !under_debugger )
      sub_37CFE0(52165);
LABEL_16:
    BUG();
  }
  if ( *(_QWORD *)(a1 + 120) )
  {
    if ( !under_debugger )
      sub_37CFE0(52166);
    goto LABEL_16;
  }
  return result;
}
