/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7EEF0
// Address: 0x0007EEF0

//----- (0007EEF0) --------------------------------------------------------
int __fastcall sub_7EEF0(int a1)
{
  FILE *v2; // r0
  bool v3; // r4
  FILE *v4; // r5
  unsigned int v5; // r7
  int v7; // [sp+8h] [bp-414h]
  char s1[10]; // [sp+18h] [bp-404h] BYREF
  char v9[1018]; // [sp+22h] [bp-3FAh] BYREF

  getpid();
  qsnprintf(s1, 1024, "/proc/%d/status");
  v2 = fopen(s1, "r");
  v3 = 0;
  if ( v2 )
  {
    v4 = v2;
    v7 = a1;
    v3 = 0;
    v5 = 0;
    while ( 1 )
    {
      if ( !_fgets_chk(s1, 1024, v4, 1024) )
      {
LABEL_6:
        a1 = v7;
        goto LABEL_7;
      }
      ++v5;
      if ( !memcmp(s1, "TracerPid:", 0xAu) )
        break;
      if ( v5 > 0xF )
        goto LABEL_6;
    }
    a1 = v7;
    v3 = atol(v9) != 0;
LABEL_7:
    fclose(v4);
  }
  under_debugger = v3;
  return a1;
}
// 1988C: using guessed type int __fastcall _fgets_chk(_DWORD, _DWORD, _DWORD, _DWORD);
// E0550: using guessed type char under_debugger;
