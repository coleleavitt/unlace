/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A0240
// Address: 0x00000000000A0240

//----- (00000000000A0240) ----------------------------------------------------
char *__fastcall sub_A0240(__int64 a1, char *a2, __int64 a3, double a4, double a5, double a6)
{
  unsigned __int64 v7; // rbx
  const char *v8; // rcx
  char *v9; // r15
  char *v10; // r13
  unsigned int v11; // eax
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  char *v16; // rax
  int v17; // ecx
  const char *v18; // rcx
  char v19; // bl
  int v20; // eax

  v7 = ((unsigned __int64)((unsigned int)sub_A3F40() != 8) << 32) - 1;
  if ( (*(_DWORD *)(a1 + 20) & 0xFFFFFFFu) > 0xE )
    v8 = "???";
  else
    v8 = off_14ECD0[(__int64)((unsigned __int64)*(unsigned int *)(a1 + 20) << 36) >> 36];
  v9 = &a2[a3];
  v10 = &a2[(int)qsnprintf(a2, a3, "%s ea=%a", v8, a4)];
  v11 = *(_DWORD *)(a1 + 20) & 0xFFFFFFF;
  switch ( v11 )
  {
    case 1u:
    case 8u:
    case 0xBu:
      if ( v11 <= 0xB )
      {
        v12 = 2306;
        if ( _bittest(&v12, v11) )
        {
          v13 = 2306;
          if ( _bittest(&v13, v11) )
          {
            v14 = 2306;
            if ( _bittest(&v14, v11) )
            {
              v15 = 2306;
              if ( _bittest(&v15, v11) )
              {
                v20 = qsnprintf(
                        v10,
                        v9 - v10,
                        " base=%a size=%a rebase=%a name=%s",
                        a4,
                        a5,
                        a6,
                        (const char *)(v7 & *(_QWORD *)(a1 + 48)));
LABEL_28:
                v10 += v20;
                goto LABEL_29;
              }
            }
          }
        }
      }
      if ( !(_BYTE)under_debugger )
        interr(3295);
      goto LABEL_38;
    case 2u:
    case 4u:
      v20 = qsnprintf(v10, v9 - v10, " exit_code=%d", *(_DWORD *)(a1 + 24));
      goto LABEL_28;
    case 3u:
    case 9u:
    case 0xAu:
      if ( v10 >= v9 )
      {
        if ( !(_BYTE)under_debugger )
          interr(518);
LABEL_38:
        BUG();
      }
      *v10 = 32;
      v16 = v10 + 1;
      if ( v10 + 1 >= v9 )
      {
        v16 = v9 - 1;
        *(v9 - 1) = 0;
      }
      if ( v16 >= v9 )
      {
        if ( !(_BYTE)under_debugger )
          interr(520);
        goto LABEL_38;
      }
      v17 = *(_DWORD *)(a1 + 20) & 0xFFFFFFF;
      if ( (unsigned int)(v17 - 9) >= 2 && v17 != 3 )
      {
        if ( !(_BYTE)under_debugger )
          interr(3297);
        goto LABEL_38;
      }
      if ( *(_QWORD *)(a1 + 32) )
        v18 = *(const char **)(a1 + 24);
      else
        v18 = s1;
      v10 = v9 - 1;
      if ( v16 == v9 - 1 )
      {
LABEL_24:
        *v10 = 0;
      }
      else
      {
        while ( 1 )
        {
          v19 = *v18;
          *v16 = *v18;
          if ( !v19 )
            break;
          ++v18;
          if ( v9 - 1 == ++v16 )
            goto LABEL_24;
        }
        v10 = v16;
      }
LABEL_29:
      qsnprintf(
        v10,
        v9 - v10,
        " pid=%d tid=%d handled=%d",
        *(_DWORD *)a1,
        *(_DWORD *)(a1 + 4),
        *(unsigned __int8 *)(a1 + 16));
      return a2;
    case 5u:
      v20 = qsnprintf(v10, v9 - v10, " hea=%a kea=%a", a4, a5);
      goto LABEL_28;
    case 7u:
      v20 = qsnprintf(
              v10,
              v9 - v10,
              " code=%x can_cont=%d ea=%a info=%s",
              *(_DWORD *)(a1 + 24),
              *(unsigned __int8 *)(a1 + 28),
              a4,
              (const char *)(*(_QWORD *)(a1 + 32) & v7));
      goto LABEL_28;
    default:
      goto LABEL_29;
  }
}
// A02FF: conditional instruction was optimized away because eax.4<Cu
// A0316: conditional instruction was optimized away because eax.4<Cu
// A032D: conditional instruction was optimized away because eax.4<Cu
// 14ECD0: using guessed type char *off_14ECD0[15];
// 158B40: using guessed type __int64 under_debugger;
