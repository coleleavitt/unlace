__int64 __fastcall sub_368420(__int64 a1, int a2, __int64 a3, int a4, int a5, int a6)
{
  const char *v6; // rax
  char v8; // [rsp+0h] [rbp-8h]

  v6 = haystack;
  if ( *(_QWORD *)(a1 + 16) )
    v6 = *(const char **)(a1 + 8);
  qsscanf((int)v6, (int)"%x", a2 + 8, a4, a5, a6, v8);
  return 0;
}

