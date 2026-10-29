/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_64DAC
// Address: 0x00064DAC

//----- (00064DAC) --------------------------------------------------------
_BYTE *__fastcall sub_64DAC(_DWORD *a1, _BYTE *a2, int a3)
{
  _BYTE *v6; // r6
  unsigned int v7; // r0
  _BYTE *v8; // r0
  char *v9; // r2
  int v10; // r1
  int v11; // r1
  const char *v12; // r2
  _BYTE *v13; // r0
  int v15; // [sp+10h] [bp-8h]
  unsigned int v16; // [sp+14h] [bp-4h]

  v16 = (unsigned int)&a2[a3];
  sub_67514();
  v6 = &a2[qsnprintf(a2, a3, "%s ea=%a")];
  v7 = a1[4] & 0xFFFFFFF;
  switch ( v7 )
  {
    case 1u:
    case 8u:
    case 0xBu:
      if ( v7 <= 0xB && ((1 << *((_BYTE *)a1 + 16)) & 0x902) != 0 )
      {
        v15 = v16 - (_DWORD)v6;
        v12 = " base=%a size=%a rebase=%a name=%s";
LABEL_23:
        v13 = v6;
        v10 = v15;
LABEL_24:
        v6 += qsnprintf(v13, v10, v12);
        goto LABEL_25;
      }
      if ( !under_debugger )
        interr(3295);
      goto LABEL_34;
    case 2u:
    case 4u:
      v10 = v16 - (_DWORD)v6;
      v12 = " exit_code=%d";
      goto LABEL_21;
    case 3u:
    case 9u:
    case 0xAu:
      if ( (unsigned int)v6 >= v16 )
      {
        if ( !under_debugger )
          interr(518);
LABEL_34:
        __debugbreak();
      }
      *v6 = 32;
      v8 = v6 + 1;
      if ( (unsigned int)(v6 + 1) >= v16 )
      {
        *(_BYTE *)(v16 - 1) = 0;
        v8 = (_BYTE *)(v16 - 1);
      }
      if ( (unsigned int)v8 >= v16 )
      {
        if ( !under_debugger )
          interr(520);
        goto LABEL_34;
      }
      if ( (a1[4] & 0xFFFFFFFu) - 9 >= 2 && (a1[4] & 0xFFFFFFF) != 3 )
      {
        if ( !under_debugger )
          interr(3297);
        goto LABEL_34;
      }
      if ( a1[6] )
        v9 = (char *)a1[5];
      else
        v9 = &byte_B3CBE;
      v6 = (_BYTE *)(v16 - 1);
      if ( v8 == (_BYTE *)(v16 - 1) )
      {
LABEL_18:
        *v6 = 0;
      }
      else
      {
        while ( 1 )
        {
          v11 = (unsigned __int8)*v9;
          *v8 = v11;
          if ( !v11 )
            break;
          ++v8;
          ++v9;
          if ( v6 == v8 )
            goto LABEL_18;
        }
        v6 = v8;
      }
LABEL_25:
      qsnprintf(v6, v16 - (_DWORD)v6, " pid=%d tid=%d handled=%d");
      return a2;
    case 5u:
      v10 = v16 - (_DWORD)v6;
      v12 = " hea=%a kea=%a";
LABEL_21:
      v13 = v6;
      goto LABEL_24;
    case 7u:
      v15 = v16 - (_DWORD)v6;
      v12 = " code=%x can_cont=%d ea=%a info=%s";
      goto LABEL_23;
    default:
      goto LABEL_25;
  }
}
// 64E30: conditional instruction was optimized away because r0.4<Cu
// 64E38: conditional instruction was optimized away because r0.4<Cu
// 64E42: conditional instruction was optimized away because r0.4<Cu
// B3CBE: using guessed type char byte_B3CBE;
// E0550: using guessed type char under_debugger;
