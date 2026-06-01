/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_54268
// Address: 0x00054268

//----- (00054268) --------------------------------------------------------
_BYTE *__fastcall sub_54268(int a1, _BYTE *a2, int a3)
{
  _BYTE *v6; // r9
  const char *v7; // r3
  int v8; // r0
  _BYTE *v9; // r7
  int v10; // r3
  int *v11; // r2
  bool v13; // zf
  int *v14; // r3
  unsigned int v15; // r3
  bool v16; // cc
  _BYTE *v17; // r0
  unsigned __int8 *v18; // r1
  int v19; // r3
  _BYTE *v20; // r3
  int v21; // t1
  double v22; // [sp+0h] [bp-14h]
  double v23; // [sp+0h] [bp-14h]
  double v24; // [sp+8h] [bp-Ch]
  double _10; // [sp+10h] [bp-4h]
  const char *savedregs_4; // [sp+18h] [bp+4h]

  sub_57164();
  v6 = &a2[a3];
  switch ( *(_DWORD *)(a1 + 16) & 0xFFFFFFF )
  {
    case 0:
      v7 = "NO_EVENT";
      break;
    case 1:
      v7 = "PROCESS_STARTED";
      break;
    case 2:
      v7 = "PROCESS_EXITED";
      break;
    case 3:
      v7 = "THREAD_STARTED";
      break;
    case 4:
      v7 = "THREAD_EXITED";
      break;
    case 5:
      v7 = "BREAKPOINT";
      break;
    case 6:
      v7 = "STEP";
      break;
    case 7:
      v7 = "EXCEPTION";
      break;
    case 8:
      v7 = "LIB_LOADED";
      break;
    case 9:
      v7 = "LIB_UNLOADED";
      break;
    case 0xA:
      v7 = "INFORMATION";
      break;
    case 0xB:
      v7 = "PROCESS_ATTACHED";
      break;
    case 0xC:
      v7 = "PROCESS_DETACHED";
      break;
    case 0xD:
      v7 = "PROCESS_SUSPENDED";
      break;
    case 0xE:
      v7 = "TRACE_FULL";
      break;
    default:
      v7 = "???";
      break;
  }
  LODWORD(v22) = *(_DWORD *)(a1 + 8);
  v8 = sub_7EBB4(a2, a3, "%s ea=%a", v7, v22);
  v9 = &a2[v8];
  v10 = *(_DWORD *)(a1 + 16) & 0xFFFFFFF;
  switch ( v10 )
  {
    case 1:
    case 8:
    case 11:
      if ( v10 != 1 )
      {
        v13 = v10 == 11;
        if ( v10 != 11 )
          v13 = v10 == 8;
        if ( !v13 )
        {
          if ( !under_debugger )
            sub_78C64(3295);
          goto LABEL_11;
        }
      }
      if ( *(_DWORD *)(a1 + 24) )
        v14 = *(int **)(a1 + 20);
      else
        v14 = &dword_8DB98;
      LODWORD(v24) = v14;
      v9 += sub_7EBB4(
              &a2[v8],
              a3 - v8,
              " base=%a size=%a rebase=%a name=%s",
              *(double *)(a1 + 36),
              v24,
              _10,
              savedregs_4);
      goto LABEL_8;
    case 2:
    case 4:
      if ( ((v10 - 2) & 0xFFFFFFFD) != 0 )
      {
        if ( !under_debugger )
          sub_78C64(3296);
        goto LABEL_11;
      }
      v9 += sub_7EBB4(&a2[v8], a3 - v8, " exit_code=%d", *(_DWORD *)(a1 + 20));
      goto LABEL_8;
    case 3:
    case 9:
    case 10:
      if ( v6 <= v9 )
      {
        if ( !under_debugger )
          sub_78C64(518);
        goto LABEL_11;
      }
      ++v9;
      a2[v8] = 32;
      if ( v6 <= v9 )
      {
        v9 = v6 - 1;
        *(v6 - 1) = 0;
      }
      v15 = *(_DWORD *)(a1 + 16) & 0xFFFFFFF;
      v16 = v15 > 3;
      if ( v15 != 3 )
        v16 = v15 - 9 > 1;
      if ( v16 )
      {
        if ( !under_debugger )
          sub_78C64(3297);
LABEL_11:
        __und(0xFFu);
      }
      v17 = v6 - 1;
      if ( *(_DWORD *)(a1 + 24) )
      {
        v18 = *(unsigned __int8 **)(a1 + 20);
        if ( v17 != v9 )
        {
          v19 = *v18;
          *v9 = v19;
          if ( !v19 )
            goto LABEL_8;
          v20 = v9 + 1;
          while ( 1 )
          {
            v9 = v20;
            if ( v17 == v20 )
              goto LABEL_49;
            v21 = *++v18;
            *v20++ = v21;
            if ( !v21 )
              goto LABEL_8;
          }
        }
LABEL_56:
        v17 = v9;
LABEL_49:
        v9 = v17;
        *v17 = 0;
        goto LABEL_8;
      }
      if ( v17 == v9 )
        goto LABEL_56;
      *v9 = 0;
LABEL_8:
      sub_7EBB4(
        v9,
        v6 - v9,
        " pid=%d tid=%d handled=%d",
        *(_DWORD *)a1,
        *(_DWORD *)(a1 + 4),
        *(unsigned __int8 *)(a1 + 12));
      return a2;
    case 5:
      LODWORD(v23) = *(_DWORD *)(a1 + 24);
      v9 += sub_7EBB4(&a2[v8], a3 - v8, " hea=%a kea=%a", v23, v24);
      goto LABEL_8;
    case 7:
      if ( *(_DWORD *)(a1 + 36) )
        v11 = *(int **)(a1 + 32);
      else
        v11 = &dword_8DB98;
      LODWORD(v24) = v11;
      v9 += sub_7EBB4(
              &a2[v8],
              a3 - v8,
              " code=%x can_cont=%d ea=%a info=%s",
              *(_DWORD *)(a1 + 20),
              *(unsigned __int8 *)(a1 + 24),
              v24,
              (const char *)LODWORD(_10));
      goto LABEL_8;
    default:
      goto LABEL_8;
  }
}
// 542B2: variable 'v22' is possibly undefined
// 542F4: variable 'v24' is possibly undefined
// 542F4: variable '_10' is possibly undefined
// 5430A: variable 'v23' is possibly undefined
// 5447C: variable 'savedregs_4' is possibly undefined
// 8DB98: using guessed type int dword_8DB98;
// D6C20: using guessed type char under_debugger;
