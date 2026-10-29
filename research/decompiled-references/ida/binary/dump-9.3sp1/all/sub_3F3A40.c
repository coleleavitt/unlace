__int64 __fastcall sub_3F3A40(__int64 a1, __m128 a2)
{
  __int64 v2; // rax
  const char *v3; // r9
  int v4; // r8d
  int v5; // esi
  int v6; // ecx
  char *v7; // rdx
  const char *v8; // rax

  v2 = *(_QWORD *)(a1 + 96);
  if ( *(_BYTE *)(v2 + 144) )
  {
    *(_DWORD *)(a1 + 80) = 8;
    v3 = "HEXX64";
    if ( !*(_BYTE *)(v2 + 144) )
      v3 = "HEXX86";
    v4 = 8;
    v5 = 16;
    v6 = 32;
    v7 = "rsp";
    v8 = "rbp";
  }
  else
  {
    *(_DWORD *)(a1 + 80) = 4;
    v3 = "HEXX64";
    if ( !*(_BYTE *)(v2 + 144) )
      v3 = "HEXX86";
    v4 = 4;
    v5 = 8;
    v6 = 16;
    v7 = "esp";
    v8 = "ebp";
  }
  *(_QWORD *)(a1 + 40) = v8;
  *(_QWORD *)(a1 + 24) = v3;
  *(_DWORD *)(a1 + 84) = v4;
  *(_DWORD *)(a1 + 88) = v5;
  *(_DWORD *)(a1 + 92) = v6;
  *(_QWORD *)(a1 + 32) = v7;
  sub_3F2530(a1, a2);
  return 1;
}
