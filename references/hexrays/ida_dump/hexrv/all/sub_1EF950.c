__int64 __fastcall sub_1EF950(__int64 a1, _DWORD *a2, __int64 *a3, char a4)
{
  const char *v5; // rdx

  sub_1C3500(a1, a2, a3, *(_DWORD *)(a1 + 88), a4);
  if ( (*(_BYTE *)(a1 + 24) & 0x24) != 0 )
  {
    v5 = s1;
    if ( *(_QWORD *)(a1 + 40) )
      v5 = *(const char **)(a1 + 32);
    sub_F6610(a3, (__int64)"(%s)", v5);
  }
  return *a3;
}
