__int64 __fastcall sub_7AE5D0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  int v3; // ecx
  int v4; // r8d
  int v5; // r9d

  v2 = sub_7AE510();
  if ( v2 )
    callui(1119, v2 + 32, (int)&callui, v3, v4, v5);
  *(_BYTE *)a2 = 2;
  *(_DWORD *)(a2 + 8) = 0;
  return 0;
}

