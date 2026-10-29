/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_9B4A0
// Address: 0x0009B4A0

//----- (0009B4A0) --------------------------------------------------------
_DWORD *__userpurge sub_9B4A0@<eax>(_DWORD *a1, int a2, unsigned int a3, void *a4, int a5, int a6)
{
  _DWORD *v6; // esi
  const char *v7; // eax
  char *v8; // edi
  char *v9; // eax
  bool v10; // zf
  char *v11; // eax
  int v12; // eax
  _DWORD *result; // eax
  int v14[2565]; // [esp+18h] [ebp-2814h] BYREF

  v6 = a1;
  v14[2560] = __readgsdword(0x14u);
  *a1 = 0;
  switch ( a2 )
  {
    case 23:
      qvprintf((char *)a3, a4);
      break;
    case 24:
      if ( a3 != 10 )
      {
        v7 = "<null>";
        if ( a4 )
          v7 = (const char *)a4;
        do
        {
          do
          {
            v8 = (char *)v7;
            if ( strncmp(v7, "ICON ", 5u) && strncmp(v8, "AUTOHIDE ", 9u) && strncmp(v8, "@0:", 3u) )
              break;
            v9 = strchr(v8, 10);
            v10 = v9 == nullptr;
            v7 = v9 + 1;
          }
          while ( !v10 );
          if ( strncmp(v8, "HELP\n", 5u) )
            break;
          v11 = strstr(v8, "ENDHELP\n");
          v10 = v11 == nullptr;
          v7 = v11 + 8;
        }
        while ( !v10 );
        qvsnprintf(v14, 10240, v8, a5);
        printf("%s: %s\n", off_138CF4[a3], v14);
        v6 = a1;
        if ( a3 <= 8 )
        {
          v12 = 473;
          if ( _bittest(&v12, a3) )
            qexit(1);
        }
      }
      return result;
    case 25:
    case 26:
    case 27:
    case 29:
    case 30:
    case 31:
    case 32:
    case 33:
    case 34:
    case 35:
    case 36:
    case 37:
    case 38:
    case 39:
    case 40:
    case 41:
    case 42:
    case 43:
    case 44:
    case 45:
    case 46:
    case 47:
    case 48:
    case 49:
    case 50:
    case 51:
      return v6;
    case 28:
      *a1 = a6;
      break;
    case 52:
      qsnprintf((_BYTE *)a3, (int)a4, "%d.%d", 9);
      *(_BYTE *)a1 = 1;
      break;
    default:
      if ( a2 == 86 )
        *a1 = (**(int (__cdecl ***)(unsigned int))a3)(a3);
      break;
  }
  return v6;
}
// 138CF4: using guessed type char *off_138CF4[12];
