__int64 __fastcall sub_692FE0(char **a1)
{
  char *v1; // rdx
  int v2; // eax
  char v3; // cl
  __int64 result; // rax
  int v5; // esi

  if ( !a1 )
    return 0xFFFFFFFFLL;
  v1 = *a1;
  v2 = **a1;
  v3 = **a1;
  if ( !v3 )
    return 0xFFFFFFFFLL;
  if ( v2 >= 0 )
  {
    result = (unsigned int)(v2 - 1);
LABEL_5:
    *a1 = v1 + 1;
    return result;
  }
  v5 = (unsigned __int8)v1[1];
  result = 0xFFFFFFFFLL;
  if ( !(_BYTE)v5 )
    goto LABEL_5;
  *a1 = v1 + 2;
  return (v3 & 0x7F | (unsigned int)(v5 << 7)) - 1;
}

