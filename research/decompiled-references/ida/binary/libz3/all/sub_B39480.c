char *__fastcall sub_B39480(__int64 a1, int a2)
{
  char *result; // rax
  char *v3; // rdi
  __int64 v4; // rdx
  int v5; // ecx
  char v6; // dl

  result = *(char **)(a1 + 72);
  if ( a2 == *(char *)(a1 + 64) )
  {
    if ( result )
    {
      v5 = *(_DWORD *)result;
      LOBYTE(v5) = 0;
      *(_DWORD *)(a1 + 64) = v5 | *(unsigned __int8 *)(a1 + 64);
      v6 = *result;
      result = *((char **)result + 1);
      *(_BYTE *)(a1 + 64) = v6;
      *(_QWORD *)(a1 + 72) = result;
    }
    else
    {
      *(_DWORD *)(a1 + 64) = -1;
    }
  }
  else
  {
    if ( !result )
    {
LABEL_10:
      sub_1872CE0("");
      sub_1873130(114, 150);
    }
    v3 = (char *)(a1 + 64);
    while ( 1 )
    {
      v4 = *((_QWORD *)result + 1);
      if ( a2 == *result )
        break;
      v3 = result;
      if ( !v4 )
        goto LABEL_10;
      result = *((char **)result + 1);
    }
    *((_QWORD *)v3 + 1) = v4;
  }
  return result;
}

