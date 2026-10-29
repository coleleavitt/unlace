__int64 __fastcall sub_5CE50(__int64 a1, char a2)
{
  int v2; // edx
  __int64 v4; // rdi
  const char *v5; // rsi
  __int128 v7; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v8; // [rsp+18h] [rbp-20h]

  v2 = *(_DWORD *)(a1 + 136);
  v8 = __readfsqword(0x28u);
  if ( (v2 & 0x100) != 0 )
  {
    v4 = *(_QWORD *)(a1 + 8);
    v5 = haystack;
    if ( *(_QWORD *)(a1 + 32) )
      v5 = *(const char **)(a1 + 24);
    (*(void (__fastcall **)(__int64, const char *))(*(_QWORD *)v4 + 40LL))(v4, v5);
  }
  else if ( a2 && (v2 & 4) != 0 )
  {
    v7 = 0;
    sub_93510(&v7, a1 + 48);
    sub_5CAA0(*(__int64 **)(a1 + 8), a1 + 24, (__int64)&v7);
  }
  if ( a1 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
  return 0;
}

