/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80C33C0
// Address: 0x080C33C0

//----- (080C33C0) --------------------------------------------------------
_DWORD *__userpurge sub_80C33C0@<eax>(_DWORD *a1, unsigned int a2, unsigned int s, int a4, int a5, int a6)
{
  char *v7; // edi
  char *v8; // eax
  char *v9; // eax
  int v10; // eax
  _BYTE v11[10240]; // [esp+1Ch] [ebp-2820h] BYREF
  unsigned int v12; // [esp+281Ch] [ebp-20h]

  v12 = __readgsdword(0x14u);
  *a1 = 0;
  if ( a2 == 28 )
  {
    *a1 = a6;
  }
  else if ( a2 <= 0x1C )
  {
    if ( a2 == 23 )
    {
      sub_80D3B00((char *)s, a4);
    }
    else if ( a2 == 24 && s != 10 )
    {
      v7 = (char *)a4;
      if ( !a4 )
        v7 = "<null>";
      while ( 1 )
      {
        while ( !strncmp(v7, "ICON ", 5u) || !strncmp(v7, "AUTOHIDE ", 9u) || *v7 == 64 && v7[1] == 48 && v7[2] == 58 )
        {
          v9 = strchr(v7, 10);
          if ( !v9 )
            break;
          v7 = v9 + 1;
        }
        if ( strncmp(v7, "HELP\n", 5u) )
          break;
        v8 = strstr(v7, "ENDHELP\n");
        if ( !v8 )
          break;
        v7 = v8 + 8;
      }
      sub_80D37B0(v11, 10240, v7, a5);
      __printf_chk(1, "%s: %s\n", off_811C8A0[s], v11);
      if ( s <= 8 )
      {
        v10 = 473;
        if ( _bittest(&v10, s) )
        {
          if ( v12 == __readgsdword(0x14u) )
            sub_80CFF70(1);
LABEL_30:
          sub_80D7AB0();
        }
      }
    }
  }
  else if ( a2 == 52 )
  {
    sub_80D3B60((_BYTE *)s, a4, "%d.%d", 9);
    *(_BYTE *)a1 = 1;
  }
  else if ( a2 == 86 )
  {
    *a1 = (**(int (__cdecl ***)(unsigned int))s)(s);
  }
  if ( v12 != __readgsdword(0x14u) )
    goto LABEL_30;
  return a1;
}
// 804B040: using guessed type int __cdecl __printf_chk(_DWORD, _DWORD, _DWORD, _DWORD);
// 811C8A0: using guessed type char *off_811C8A0[12];
