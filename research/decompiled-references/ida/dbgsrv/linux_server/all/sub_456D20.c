/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_456D20
// Address: 0x0000000000456D20

//----- (0000000000456D20) ----------------------------------------------------
char *__fastcall sub_456D20(__int64 a1, char *a2, __int64 a3, double a4, double a5, double a6)
{
  __int64 v6; // r15
  unsigned __int64 v9; // r13
  const char *v10; // rcx
  int v11; // eax
  char *v12; // r14
  char *v13; // rax
  int v14; // edx
  const char *v15; // rdx
  __int64 v16; // rsi
  char v17; // cl
  int v18; // eax

  v6 = 0xFFFFFFFFLL;
  v9 = (unsigned __int64)&a2[a3];
  if ( (unsigned int)sub_45A730() == 8 )
    v6 = -1;
  switch ( *(_DWORD *)(a1 + 20) & 0xFFFFFFF )
  {
    case 0:
      v10 = "NO_EVENT";
      break;
    case 1:
      v10 = "PROCESS_STARTED";
      break;
    case 2:
      v10 = "PROCESS_EXITED";
      break;
    case 3:
      v10 = "THREAD_STARTED";
      break;
    case 4:
      v10 = "THREAD_EXITED";
      break;
    case 5:
      v10 = "BREAKPOINT";
      break;
    case 6:
      v10 = "STEP";
      break;
    case 7:
      v10 = "EXCEPTION";
      break;
    case 8:
      v10 = "LIB_LOADED";
      break;
    case 9:
      v10 = "LIB_UNLOADED";
      break;
    case 0xA:
      v10 = "INFORMATION";
      break;
    case 0xB:
      v10 = "PROCESS_ATTACHED";
      break;
    case 0xC:
      v10 = "PROCESS_DETACHED";
      break;
    case 0xD:
      v10 = "PROCESS_SUSPENDED";
      break;
    case 0xE:
      v10 = "TRACE_FULL";
      break;
    default:
      v10 = "???";
      break;
  }
  v11 = sub_485490(a2, a3, "%s ea=%a", v10, a4);
  v12 = &a2[v11];
  switch ( *(_DWORD *)(a1 + 20) & 0xFFFFFFF )
  {
    case 1:
    case 8:
    case 0xB:
      v18 = sub_485490(
              v12,
              a3 - v11,
              " base=%a size=%a rebase=%a name=%s",
              a4,
              a5,
              a6,
              (const char *)(v6 & *(_QWORD *)(a1 + 48)));
      goto LABEL_19;
    case 2:
    case 4:
      v12 += (int)sub_485490(&a2[v11], a3 - v11, " exit_code=%d", *(_DWORD *)(a1 + 24));
      v16 = v9 - (_QWORD)v12;
      goto LABEL_20;
    case 3:
    case 9:
    case 0xA:
      if ( (unsigned __int64)v12 >= v9 )
      {
        if ( !byte_4C94E1 )
          sub_481AC0(518);
LABEL_46:
        BUG();
      }
      v13 = v12 + 1;
      *v12 = 32;
      if ( (unsigned __int64)(v12 + 1) >= v9 )
      {
        *(_BYTE *)(v9 - 1) = 0;
        v13 = (char *)(v9 - 1);
      }
      v14 = *(_DWORD *)(a1 + 20) & 0xFFFFFFF;
      if ( (unsigned int)(v14 - 9) > 1 && v14 != 3 )
      {
        if ( !byte_4C94E1 )
          sub_481AC0(3297);
        goto LABEL_46;
      }
      v15 = s1;
      if ( *(_QWORD *)(a1 + 32) )
        v15 = *(const char **)(a1 + 24);
      v12 = (char *)(v9 - 1);
      v16 = v9 - (_QWORD)v13;
      if ( (char *)(v9 - 1) != v13 )
      {
        do
        {
          v17 = *v15++;
          *v13 = v17;
          if ( !v17 )
          {
            v12 = v13;
            v16 = v9 - (_QWORD)v13;
            goto LABEL_20;
          }
          ++v13;
        }
        while ( v13 != v12 );
        v16 = 1;
      }
      *(_BYTE *)(v9 - 1) = 0;
LABEL_20:
      sub_485490(
        v12,
        v16,
        " pid=%d tid=%d handled=%d",
        *(_DWORD *)a1,
        *(_DWORD *)(a1 + 4),
        *(unsigned __int8 *)(a1 + 16));
      return a2;
    case 5:
      v12 += (int)sub_485490(&a2[v11], a3 - v11, " hea=%a kea=%a", a4, a5);
      v16 = v9 - (_QWORD)v12;
      goto LABEL_20;
    case 7:
      v18 = sub_485490(
              v12,
              a3 - v11,
              " code=%x can_cont=%d ea=%a info=%s",
              *(_DWORD *)(a1 + 24),
              *(unsigned __int8 *)(a1 + 28),
              a4,
              (const char *)(v6 & *(_QWORD *)(a1 + 32)));
LABEL_19:
      v12 += v18;
      v16 = v9 - (_QWORD)v12;
      goto LABEL_20;
    default:
      v16 = a3 - v11;
      goto LABEL_20;
  }
}
// 4C94E1: using guessed type char byte_4C94E1;
