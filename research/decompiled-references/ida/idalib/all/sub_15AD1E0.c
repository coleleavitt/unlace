bool __fastcall sub_15AD1E0(char *a1, int a2, int a3, const char **a4, int *a5)
{
  unsigned __int8 v5; // r9
  char v6; // al
  bool result; // al
  const char *v8; // rdx
  int v9; // edx

  v5 = (unsigned __int8)*a1 >> 6;
  if ( !v5 )
  {
    *((_DWORD *)a1 + 44) = a3;
LABEL_3:
    v6 = *a1;
    *((_DWORD *)a1 + 45) = a3;
    *a1 = v6 & 0x3F | ((_BYTE)a2 << 6);
    return 0;
  }
  result = v5 != 2 || a2 != 3;
  if ( !result )
    goto LABEL_3;
  v8 = "short";
  if ( v5 != 1 )
  {
    v8 = "long";
    if ( v5 != 2 )
      v8 = "long long";
  }
  *a4 = v8;
  v9 = 97;
  if ( a2 != v5 )
    v9 = 4033;
  *a5 = v9;
  return result;
}
