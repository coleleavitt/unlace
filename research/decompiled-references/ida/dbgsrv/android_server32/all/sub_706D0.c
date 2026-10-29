/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_706D0
// Address: 0x000706D0

//----- (000706D0) --------------------------------------------------------
unsigned int __fastcall sub_706D0(int a1, int a2, int a3, int a4, int a5)
{
  int v5; // r1
  unsigned int v6; // r7
  int v7; // kr04_4
  const char *v8; // r1
  const char *v9; // r4
  char *v10; // r0
  char *v11; // r0
  unsigned int v13; // [sp+8h] [bp-2828h]
  char v14[10244]; // [sp+2Ch] [bp-2804h] BYREF
  char *savedregs[8]; // [sp+2830h] [bp+0h]

  v5 = a1 - 23;
  v6 = 0;
  v7 = a1;
  LOBYTE(a1) = 0;
  switch ( v5 )
  {
    case 0:
      qvprintf(savedregs[5], savedregs[6]);
      LOBYTE(a1) = 0;
      v6 = 0;
      break;
    case 1:
      if ( savedregs[5] == &byte_9[1] )
      {
        LOBYTE(a1) = 0;
      }
      else
      {
        v8 = savedregs[6];
        v13 = (unsigned int)savedregs[5];
        if ( !savedregs[6] )
          v8 = "<null>";
        do
        {
          do
          {
            v9 = v8;
            if ( strncmp(v8, "ICON ", 5u) && strncmp(v9, "AUTOHIDE ", 9u) && strncmp(v9, "@0:", 3u) )
              break;
            v10 = strchr(v9, 10);
            v8 = v10 + 1;
          }
          while ( v10 );
          if ( strncmp(v9, "HELP\n", 5u) )
            break;
          v11 = strstr(v9, "ENDHELP\n");
          v8 = v11 + 8;
        }
        while ( v11 );
        qvsnprintf(v14, 10240, v9, (int)savedregs[7]);
        printf("%s: %s\n", off_DAB40[v13], v14);
        if ( v13 > 8 )
        {
          LOBYTE(a1) = 0;
        }
        else
        {
          LOBYTE(a1) = 0;
          if ( ((1 << v13) & 0x1D9) != 0 )
            qexit(1);
        }
      }
      break;
    case 2:
    case 3:
    case 4:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
    case 13:
    case 14:
    case 15:
    case 16:
    case 17:
    case 18:
    case 19:
    case 20:
    case 21:
    case 22:
    case 23:
    case 24:
    case 25:
    case 26:
    case 27:
    case 28:
      return (unsigned __int8)a1 | v6;
    case 5:
      a1 = a5;
      goto LABEL_6;
    case 29:
      qsnprintf(savedregs[5], (int)savedregs[6], "%d.%d");
      LOBYTE(a1) = 1;
      break;
    default:
      LOBYTE(a1) = 0;
      if ( v7 == 86 )
      {
        a1 = (**(int (__fastcall ***)(char *))savedregs[5])(savedregs[5]);
LABEL_6:
        v6 = a1 & 0xFFFFFF00;
      }
      break;
  }
  return (unsigned __int8)a1 | v6;
}
// DAB40: using guessed type char *off_DAB40[12];
