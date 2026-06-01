_BOOL8 __fastcall sub_141A500(__int64 *a1, __int64 a2, _WORD *a3, size_t a4)
{
  _BOOL4 v4; // ebx
  char *v8; // r13
  size_t v9; // rax
  char *s; // [rsp+0h] [rbp-48h] BYREF

  v4 = (*(_BYTE *)(a2 + 36) & 0x10) != 0;
  if ( (*(_BYTE *)(a2 + 36) & 0x10) != 0 )
    return 1;
  sub_1022900((__int64)&s, a1, *(_DWORD *)a2, 1);
  v8 = s;
  if ( !s || strlen(s) != 10 || *(_QWORD *)v8 != 0x692D746C6975623CLL || *((_WORD *)v8 + 4) != 15982 )
    return v4;
  if ( a4 <= 5 )
  {
    if ( j__strlen("__cplusplus") != a4 )
      goto LABEL_12;
    if ( !a4 )
      return 1;
    goto LABEL_11;
  }
  if ( *(_DWORD *)a3 == 1414750047 && a3[2] == 17220 )
    return 1;
  if ( a4 == j__strlen("__cplusplus") )
  {
LABEL_11:
    if ( memcmp(a3, "__cplusplus", a4) )
      goto LABEL_12;
    return 1;
  }
LABEL_12:
  v9 = j__strlen("__cpp");
  if ( v9 <= a4 && (!v9 || !memcmp(a3, "__cpp", v9)) )
    return 1;
  return v4;
}
