__int64 __fastcall sub_7D1A80(__int64 a1, __int64 a2)
{
  int v3; // ecx
  __int64 v4; // rsi
  int v5; // r8d
  int v6; // r9d

  v4 = sub_7D1970(a1);
  if ( v4 )
    callui(1146, v4, (int)&callui, v3, v5, v6);
  *(_QWORD *)(a2 + 8) = 0;
  *(_BYTE *)a2 = 2;
  return 0;
}
