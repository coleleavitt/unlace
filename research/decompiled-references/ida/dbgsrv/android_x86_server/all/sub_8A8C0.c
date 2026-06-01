/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8A8C0
// Address: 0x0008A8C0

//----- (0008A8C0) --------------------------------------------------------
_BYTE *__cdecl sub_8A8C0(int *a1, _BYTE *a2, int a3)
{
  const char *v3; // eax
  char *v4; // edi
  unsigned int v5; // eax
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // eax
  char *v11; // eax
  int v12; // ecx
  char *v13; // ecx
  unsigned int v14; // eax
  char v15; // dl
  char *v16; // ecx
  int v18; // [esp-14h] [ebp-40h]
  unsigned int v19; // [esp+Ch] [ebp-20h]

  sub_8E910();
  if ( (a1[4] & 0xFFFFFFFu) > 0xE )
    v3 = "???";
  else
    v3 = *(char **)((char *)off_138690 + ((16 * a1[4]) >> 2));
  v19 = (unsigned int)&a2[a3];
  v4 = &a2[qsnprintf(a2, a3, "%s ea=%a", (int)v3)];
  v5 = a1[4] & 0xFFFFFFF;
  switch ( v5 )
  {
    case 1u:
    case 8u:
    case 0xBu:
      if ( v5 <= 0xB )
      {
        v6 = 2306;
        if ( _bittest(&v6, v5) )
        {
          v7 = 2306;
          if ( _bittest(&v7, v5) )
          {
            v8 = 2306;
            if ( _bittest(&v8, v5) )
            {
              v9 = 2306;
              if ( _bittest(&v9, v5) )
              {
                v10 = v19 - (_DWORD)v4;
                v16 = " base=%a size=%a rebase=%a name=%s";
                v18 = a1[8];
LABEL_26:
                v14 = qsnprintf(v4, v10, v16, v18);
LABEL_29:
                v4 += v14;
                goto LABEL_30;
              }
            }
          }
        }
      }
      if ( !(_BYTE)under_debugger )
        interr(3295);
      goto LABEL_39;
    case 2u:
    case 4u:
      v14 = qsnprintf(v4, v19 - (_DWORD)v4, " exit_code=%d", a1[5]);
      goto LABEL_29;
    case 3u:
    case 9u:
    case 0xAu:
      if ( (unsigned int)v4 >= v19 )
      {
        if ( !(_BYTE)under_debugger )
          interr(518);
LABEL_39:
        BUG();
      }
      *v4 = 32;
      v11 = v4 + 1;
      if ( (unsigned int)(v4 + 1) >= v19 )
      {
        v11 = (char *)(v19 - 1);
        *(_BYTE *)(v19 - 1) = 0;
      }
      if ( (unsigned int)v11 >= v19 )
      {
        if ( !(_BYTE)under_debugger )
          interr(520);
        goto LABEL_39;
      }
      v12 = a1[4] & 0xFFFFFFF;
      if ( (unsigned int)(v12 - 9) >= 2 && v12 != 3 )
      {
        if ( !(_BYTE)under_debugger )
          interr(3297);
        goto LABEL_39;
      }
      if ( a1[6] )
        v13 = (char *)a1[5];
      else
        v13 = byte_EF875;
      v4 = (char *)(v19 - 1);
      if ( v11 == (char *)(v19 - 1) )
      {
LABEL_24:
        *v4 = 0;
      }
      else
      {
        while ( 1 )
        {
          v15 = *v13;
          *v11 = *v13;
          if ( !v15 )
            break;
          ++v13;
          if ( v4 == ++v11 )
            goto LABEL_24;
        }
        v4 = v11;
      }
LABEL_30:
      qsnprintf(v4, v19 - (_DWORD)v4, " pid=%d tid=%d handled=%d", *a1);
      return a2;
    case 5u:
      v10 = v19 - (_DWORD)v4;
      v16 = " hea=%a kea=%a";
      v18 = a1[5];
      goto LABEL_26;
    case 7u:
      v14 = qsnprintf(v4, v19 - (_DWORD)v4, " code=%x can_cont=%d ea=%a info=%s", a1[5]);
      goto LABEL_29;
    default:
      goto LABEL_30;
  }
}
// 8A976: conditional instruction was optimized away because eax.4<Cu
// 8A98D: conditional instruction was optimized away because eax.4<Cu
// 8A9A4: conditional instruction was optimized away because eax.4<Cu
// 138690: using guessed type char *off_138690[15];
// 13E34C: using guessed type int under_debugger;
