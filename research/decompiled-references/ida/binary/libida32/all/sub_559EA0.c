__int64 __fastcall sub_559EA0(_QWORD *a1, __int64 a2, __int64 a3)
{
  char v3; // al
  __int64 result; // rax
  char v6; // al

  v3 = *(_BYTE *)(a3 + 1);
  if ( *(_BYTE *)(a3 + 5) > 2u )
    return 0;
  if ( v3 != 4 )
  {
    if ( v3 != 5 )
      return 0;
    return sub_559CB0(a1, a2, *(_DWORD *)(a3 + 8));
  }
  v6 = *(_BYTE *)(a3 + 4);
  if ( v6 < 0 )
  {
LABEL_5:
    if ( (v6 & 0x40) == 0 )
      return 0;
    return sub_559CB0(a1, a2, *(_DWORD *)(a3 + 8));
  }
  result = sub_559CB0(a1, a2, *(_DWORD *)(a3 + 12));
  if ( !(_BYTE)result )
  {
    v6 = *(_BYTE *)(a3 + 4);
    goto LABEL_5;
  }
  return result;
}

