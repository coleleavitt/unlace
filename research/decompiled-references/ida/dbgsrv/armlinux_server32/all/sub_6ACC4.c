/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6ACC4
// Address: 0x0006ACC4

//----- (0006ACC4) --------------------------------------------------------
int __fastcall sub_6ACC4(unsigned int a1, char *a2, int a3, int a4, int a5)
{
  int v5; // r6
  char *v6; // r8
  char *v7; // r7
  char *v8; // r0
  char *v9; // r0
  bool v11; // cc
  char v12[4]; // [sp+24h] [bp-281Ch] BYREF
  unsigned int varg_r0; // [sp+2850h] [bp+10h]
  char *varg_r1; // [sp+2854h] [bp+14h]
  char *varg_r2; // [sp+2858h] [bp+18h]
  int varg_r3; // [sp+285Ch] [bp+1Ch]

  varg_r0 = a1;
  varg_r1 = a2;
  varg_r2 = (char *)a3;
  varg_r3 = a4;
  if ( a1 == 28 )
    return a5;
  v5 = 0;
  if ( a1 > 0x1C )
  {
    if ( a1 == 52 )
    {
      sub_7EBB4(varg_r1, (int)varg_r2, "%d.%d", 9, 30);
      return 1;
    }
    else if ( a1 == 86 )
    {
      return (**(int (__fastcall ***)(char *))varg_r1)(varg_r1);
    }
  }
  else
  {
    if ( a1 == 23 )
    {
      sub_7EB74(varg_r1, (int)varg_r2);
      return v5;
    }
    if ( a1 == 24 )
    {
      v6 = varg_r1;
      if ( varg_r1 != (char *)10 )
      {
        v7 = varg_r2;
        if ( !varg_r2 )
          v7 = "<null>";
        while ( 1 )
        {
          if ( !strncmp(v7, "ICON ", 5u) )
            goto LABEL_14;
LABEL_9:
          if ( !strncmp(v7, "AUTOHIDE ", 9u) || !strncmp(v7, "@0:", 3u) )
            goto LABEL_14;
          do
          {
            if ( strncmp(v7, "HELP\n", 5u) || (v8 = strstr(v7, "ENDHELP\n")) == nullptr )
            {
              sub_7E92C(v12, 10240, v7, varg_r3);
              _printf_chk(1, "%s: %s\n", off_D1698[(_DWORD)v6], v12);
              v11 = v6 != nullptr;
              if ( v6 )
                v11 = (unsigned int)(v6 - 3) > 1;
              if ( !v11 || (unsigned int)(v6 - 6) <= 2 )
                sub_78CAC(1);
              return v5;
            }
            v7 = v8 + 8;
            if ( strncmp(v8 + 8, "ICON ", 5u) )
              goto LABEL_9;
LABEL_14:
            v9 = strchr(v7, 10);
          }
          while ( !v9 );
          v7 = v9 + 1;
        }
      }
    }
  }
  return v5;
}
// 13FB8: using guessed type int _printf_chk(_DWORD, const char *, ...);
// D1698: using guessed type char *off_D1698[14];
