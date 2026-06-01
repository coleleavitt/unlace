/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_B15F0
// Address: 0x000B15F0

//----- (000B15F0) --------------------------------------------------------
unsigned int sub_B15F0()
{
  __pid_t v0; // eax
  FILE *v1; // eax
  int v2; // ecx
  int v3; // esi
  bool v4; // si
  FILE *v6; // [esp+0h] [ebp-41Ch]
  char filename[10]; // [esp+8h] [ebp-414h] BYREF
  char nptr[1014]; // [esp+12h] [ebp-40Ah] BYREF
  unsigned int v9; // [esp+408h] [ebp-14h]

  v9 = __readgsdword(0x14u);
  v0 = getpid();
  qsnprintf(filename, 1024, "/proc/%d/status", v0);
  v1 = fopen(filename, "r");
  v2 = 0;
  v6 = v1;
  if ( v1 )
  {
    while ( 1 )
    {
      v3 = v2;
      if ( !__fgets_chk(filename, 1024, v6, 1024) )
      {
LABEL_5:
        v4 = 0;
        goto LABEL_7;
      }
      if ( !memcmp(filename, "TracerPid:", 0xAu) )
        break;
      v2 = v3 + 1;
      if ( (unsigned int)(v3 + 1) > 0xF )
        goto LABEL_5;
    }
    v4 = atol(nptr) != 0;
LABEL_7:
    fclose(v6);
    LOBYTE(v2) = v4;
  }
  LOBYTE(under_debugger) = v2;
  return __readgsdword(0x14u);
}
// 181E0: using guessed type int __cdecl __fgets_chk(_DWORD, _DWORD, _DWORD, _DWORD);
// 13E34C: using guessed type int under_debugger;
