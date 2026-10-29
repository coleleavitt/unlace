__int64 __fastcall sub_5A0E00(__int64 a1, __int64 a2)
{
  _DWORD *v2; // rax
  unsigned int v3; // edx
  int v5; // ecx
  __int64 v6; // rdi

  v2 = *(_DWORD **)a1;
  if ( **(_DWORD **)a1 != **(_DWORD **)a2 || (v3 = *(_DWORD *)(a1 + 8), v3 != *(_DWORD *)(a2 + 8)) )
  {
    if ( !under_debugger )
      interr(1922);
LABEL_11:
    BUG();
  }
  v5 = *(_DWORD *)(a2 + 12);
  *(_DWORD *)(a1 + 12) = v5;
  *(_BYTE *)(a1 + 16) = *(_BYTE *)(a2 + 16);
  if ( !(unsigned __int8)sub_59FDE0(*(_QWORD **)(qword_2CA1698 + 1480), (__int64)v2, v3, v5) )
  {
    if ( !under_debugger )
      interr(1923);
    goto LABEL_11;
  }
  v6 = *(unsigned int *)(a1 + 8);
  if ( *(_BYTE *)(a1 + 16) )
    return set_abits(v6, 2);
  else
    return clr_abits(v6, 2);
}

