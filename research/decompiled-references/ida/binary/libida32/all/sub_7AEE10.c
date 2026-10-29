__int64 __fastcall sub_7AEE10(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  int v3; // edx
  int v4; // ecx
  int v5; // r8d
  int v6; // r9d

  v2 = sub_7AE510();
  if ( v2 )
    callui(1144, v2, v3, v4, v5, v6);
  *(_DWORD *)(a2 + 8) = 0;
  *(_BYTE *)a2 = 2;
  return 0;
}

