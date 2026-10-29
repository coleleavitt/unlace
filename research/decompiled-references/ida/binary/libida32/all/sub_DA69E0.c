__int64 __fastcall sub_DA69E0(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // ecx
  __int64 result; // rax
  _QWORD *v5; // r12
  __int64 v6; // rbp
  unsigned __int8 **v7; // rax

  v3 = *(_DWORD *)(a3 + 24);
  if ( !v3 || v3 == 2 )
  {
    result = 1;
    if ( *(_QWORD *)(a3 + 32) )
      return result;
  }
  else
  {
    result = 1;
    if ( v3 == 3 || *(_QWORD *)(a3 + 40) || *(_QWORD *)a3 )
      return result;
  }
  v5 = (_QWORD *)sub_DFB220(*(_QWORD *)(a1 + 400));
  if ( (*(_BYTE *)(sub_E0E500(a1) + 1) & 0x10) != 0 )
  {
    LOBYTE(v6) = 0;
    if ( (*(_WORD *)v5 & 0x1FF) == 0x62 )
      v6 = (*v5 >> 19) & 1LL;
    v7 = (unsigned __int8 **)sub_E0FED0(a1, v5, 2488, 0);
    if ( v7 )
      sub_AC60B0(v7, (unsigned __int8)v6, 2u);
    return 0;
  }
  else
  {
    sub_E0FED0(a1, v5, 108, 0);
    return 0;
  }
}

