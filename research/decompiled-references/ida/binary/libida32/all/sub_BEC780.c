__int64 __fastcall sub_BEC780(__int64 a1, __int64 a2, int a3)
{
  __int16 v4; // ax
  unsigned __int8 v5; // cl
  int v6; // eax
  int v7; // edx
  int v8; // ecx
  __int64 result; // rax

  v4 = sub_BDA860(a2, *(_QWORD *)(*(_QWORD *)(a1 + 16) + 2320LL));
  if ( (a3 & 0x10) != 0 )
  {
    if ( (((unsigned __int8)v4 ^ 0x38) & 0x38) == 0 && (v4 & 0x104) != 0 )
    {
      sub_E0FED0(a1, a2, 2410, 0);
      return 0;
    }
  }
  else
  {
    if ( !a3 )
      return 1;
    if ( (((unsigned __int8)v4 ^ 0x38) & 0x38) == 0 && (v4 & 0x104) != 0 )
      goto LABEL_5;
  }
  v5 = v4;
  v6 = v4 & 0x100;
  v7 = v6;
  v8 = v5 >> 6;
  if ( v8 == 3 )
  {
    if ( v6 )
      goto LABEL_5;
    return 1;
  }
  result = 1;
  if ( v7 | v8 )
  {
LABEL_5:
    sub_E0FED0(a1, a2, 2412, 0);
    return 0;
  }
  return result;
}

