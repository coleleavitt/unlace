__int64 __fastcall sub_83D3B0(__int64 a1, char *a2, int a3)
{
  char *v4; // rbp
  char *v5; // rax
  __int64 result; // rax

  v4 = a2;
  qustrncpy((_BYTE *)(a1 + 4128), a2, 4096);
  v5 = strrchr((const char *)(a1 + 4128), 47);
  if ( v5 )
  {
    *v5 = 0;
    v4 = v5 + 1;
  }
  else
  {
    qustrncpy((_BYTE *)(a1 + 4128), ".", 4096);
  }
  *(_QWORD *)(a1 + 4112) = 0;
  *(_DWORD *)(a1 + 4120) = 0;
  result = qustrncpy((_BYTE *)(a1 + 8224), v4, 4096);
  *(_DWORD *)(a1 + 12320) = a3;
  return result;
}
