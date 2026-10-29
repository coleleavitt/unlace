__int64 __fastcall sub_3E8E70(__int64 a1)
{
  __int64 v1; // rax
  const char *v2; // r9
  int v3; // r8d
  int v4; // esi
  int v5; // ecx
  char *v6; // rdx
  const char *v7; // rax

  v1 = *(_QWORD *)(a1 + 96);
  if ( *(_BYTE *)(v1 + 144) )
  {
    *(_DWORD *)(a1 + 80) = 8;
    v2 = "HEXX64";
    if ( !*(_BYTE *)(v1 + 144) )
      v2 = "HEXX86";
    v3 = 8;
    v4 = 16;
    v5 = 32;
    v6 = "rsp";
    v7 = "rbp";
  }
  else
  {
    *(_DWORD *)(a1 + 80) = 4;
    v2 = "HEXX64";
    if ( !*(_BYTE *)(v1 + 144) )
      v2 = "HEXX86";
    v3 = 4;
    v4 = 8;
    v5 = 16;
    v6 = "esp";
    v7 = "ebp";
  }
  *(_QWORD *)(a1 + 40) = v7;
  *(_QWORD *)(a1 + 24) = v2;
  *(_DWORD *)(a1 + 84) = v3;
  *(_DWORD *)(a1 + 88) = v4;
  *(_DWORD *)(a1 + 92) = v5;
  *(_QWORD *)(a1 + 32) = v6;
  sub_3E7930(a1);
  return 1;
}
