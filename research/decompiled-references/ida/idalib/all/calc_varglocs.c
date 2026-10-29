char __fastcall calc_varglocs(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v7; // rax
  char result; // al
  unsigned int v9; // edi
  __int64 v10; // rax
  __int64 v11; // rdi
  __int64 (*v12)(); // r9

  if ( (*(_BYTE *)(a1 + 88) & 0xF0) == 0xC0 )
  {
    v9 = *(_DWORD *)(a1 + 28);
    if ( v9 > 0x10 )
      goto LABEL_7;
  }
  else if ( (*(_BYTE *)(a1 + 88) & 0xF0u) > 0x10 )
  {
LABEL_3:
    v7 = sub_3792E0(0x7DAu, a1, a2, a3, a4);
    if ( v7 )
      return v7 > 0;
    else
      return calc_arglocs(a1);
  }
  v9 = getinf(99);
LABEL_7:
  if ( v9 > 0x1FF )
  {
    get_custom_callcnv(v9);
    v11 = v10;
    if ( v10 )
      goto LABEL_9;
    return 0;
  }
  if ( v9 > 0xFF || (v9 & 0xFFFFFF0F) == 0 )
    goto LABEL_3;
  get_custom_callcnv(v9);
  v11 = v10;
  if ( !v10 )
    return 0;
LABEL_9:
  v12 = *(__int64 (**)())(*(_QWORD *)v10 + 32LL);
  result = 0;
  if ( v12 != sub_3DB870 )
    return ((__int64 (__fastcall *)(__int64, __int64, __int64, __int64, _QWORD))v12)(v11, a1, a2, a3, a4);
  return result;
}
