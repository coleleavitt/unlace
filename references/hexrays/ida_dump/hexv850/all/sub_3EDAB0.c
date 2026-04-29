unsigned __int64 __fastcall sub_3EDAB0(__int64 a1, __int64 a2, double a3)
{
  __int64 v3; // rax

  if ( *(_BYTE *)(a1 + 65) != 10 )
  {
    if ( !under_debugger )
      sub_37CFE0(0xCEE7u, a2, a3);
LABEL_8:
    BUG();
  }
  v3 = *(_QWORD *)(a1 + 72);
  if ( (unsigned int)v3 > 0xF )
  {
    if ( !under_debugger )
      sub_37CFE0(0xCEE8u, (unsigned int)v3, a3);
    goto LABEL_8;
  }
  sub_3ED6D0(a1, (unsigned int)v3, a2, a3);
  return sub_3EC660(a1, 1, *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL), a2, a2, 0, a3);
}
