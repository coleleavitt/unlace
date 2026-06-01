__int64 __fastcall sub_865090(unsigned __int16 *a1, _QWORD *a2, _DWORD *a3)
{
  __int64 v4; // r12
  unsigned int v5; // ebx
  unsigned __int64 v7; // rax

  v4 = sub_25E8DD0("isIntegerConstantExpr", 0x15u);
  if ( (*(_BYTE *)(a2[270] + 1LL) & 0x10) != 0 )
  {
    v5 = sub_862040((__int64)a2, (__int64)a1, 0, a3);
  }
  else
  {
    v5 = 1;
    v7 = sub_864560(a1, a2);
    if ( (_DWORD)v7 )
    {
      if ( a3 )
        *a3 = HIDWORD(v7);
      v5 = 0;
    }
  }
  if ( v4 )
    sub_25EA250(v4);
  return v5;
}

