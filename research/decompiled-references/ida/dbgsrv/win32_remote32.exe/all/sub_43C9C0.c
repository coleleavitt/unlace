/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_43C9C0
// Address: 0x0043C9C0

//----- (0043C9C0) --------------------------------------------------------
_DWORD *__usercall sub_43C9C0@<eax>(__m128i a1@<xmm0>, _DWORD *a2, _DWORD *a3, int a4)
{
  char *v5; // edi
  const char *v6; // eax
  char *v7; // ebx
  int v8; // ecx
  const CHAR **v9; // eax
  _DWORD *v10; // eax
  unsigned int v11; // edi
  int v12; // esi
  _DWORD *v13; // eax
  int v14; // eax
  const CHAR *v15; // ecx
  char v16; // al
  double v18; // [esp-10h] [ebp-20h]
  __int128 v19; // [esp-8h] [ebp-18h]
  const char *v20; // [esp+8h] [ebp-8h]
  const CHAR *v21; // [esp+14h] [ebp+4h]
  const CHAR *v22; // [esp+14h] [ebp+4h]

  sub_439DA0();
  v5 = (char *)a3 + a4;
  switch ( a2[4] & 0xFFFFFFF )
  {
    case 0:
      v6 = "NO_EVENT";
      break;
    case 1:
      v6 = "PROCESS_STARTED";
      break;
    case 2:
      v6 = "PROCESS_EXITED";
      break;
    case 3:
      v6 = "THREAD_STARTED";
      break;
    case 4:
      v6 = "THREAD_EXITED";
      break;
    case 5:
      v6 = "BREAKPOINT";
      break;
    case 6:
      v6 = "STEP";
      break;
    case 7:
      v6 = "EXCEPTION";
      break;
    case 8:
      v6 = "LIB_LOADED";
      break;
    case 9:
      v6 = "LIB_UNLOADED";
      break;
    case 0xA:
      v6 = "INFORMATION";
      break;
    case 0xB:
      v6 = "PROCESS_ATTACHED";
      break;
    case 0xC:
      v6 = "PROCESS_DETACHED";
      break;
    case 0xD:
      v6 = "PROCESS_SUSPENDED";
      break;
    case 0xE:
      v6 = "TRACE_FULL";
      break;
    default:
      v6 = "???";
      break;
  }
  DWORD1(v19) = a2[2];
  v7 = (char *)a3 + sub_453D50(a1, a3, a4, "%s ea=%a", v6, *(double *)((char *)&v19 + 4));
  v8 = a2[4] & 0xFFFFFFF;
  switch ( v8 )
  {
    case 1:
    case 8:
    case 11:
      v9 = (const CHAR **)sub_4145A0(a2);
      if ( v9[1] )
        v21 = *v9;
      else
        v21 = MultiByteStr;
      *(_QWORD *)&v19 = __PAIR64__((unsigned int)v21, sub_4145A0(a2)[5]);
      v5 = (char *)a3 + a4;
      v18 = *(double *)(sub_4145A0(a2) + 3);
      v7 += sub_453D50(
              a1,
              v7,
              (char *)a3 + a4 - v7,
              " base=%a size=%a rebase=%a name=%s",
              v18,
              *(double *)&v19,
              *((double *)&v19 + 1),
              v20);
      break;
    case 2:
    case 4:
      if ( v8 != 2 && v8 != 4 )
      {
        if ( byte_4B70F0 )
          __debugbreak();
        sub_4533F0(3296);
      }
      v7 += sub_453D50(a1, v7, v5 - v7, " exit_code=%d", a2[5]);
      break;
    case 3:
    case 9:
    case 10:
      if ( v7 >= v5 )
      {
        if ( byte_4B70F0 )
          __debugbreak();
        sub_4533F0(518);
      }
      *v7++ = 32;
      if ( v7 >= v5 )
      {
        v7 = v5 - 1;
        *(v5 - 1) = 0;
        if ( !v5 )
        {
          if ( byte_4B70F0 )
            __debugbreak();
          sub_4533F0(520);
        }
      }
      v14 = a2[4] & 0xFFFFFFF;
      if ( v14 != 3 && v14 != 9 && v14 != 10 )
      {
        if ( byte_4B70F0 )
          __debugbreak();
        sub_4533F0(3297);
      }
      v15 = MultiByteStr;
      if ( a2[6] )
        v15 = (const CHAR *)a2[5];
      if ( v7 == v5 - 1 )
      {
LABEL_42:
        *v7 = 0;
      }
      else
      {
        while ( 1 )
        {
          v16 = *v15++;
          *v7 = v16;
          if ( !v16 )
            break;
          if ( ++v7 == v5 - 1 )
            goto LABEL_42;
        }
      }
      break;
    case 5:
      *(_QWORD *)&v19 = *(_QWORD *)sub_40CCF0(a2);
      v7 += sub_453D50(a1, v7, v5 - v7, " hea=%a kea=%a", *(double *)&v19, *((double *)&v19 + 1));
      break;
    case 7:
      v10 = sub_410C10(a2);
      if ( v10[4] )
        v22 = (const CHAR *)v10[3];
      else
        v22 = MultiByteStr;
      v11 = sub_410C10(a2)[2];
      v12 = *((unsigned __int8 *)sub_410C10(a2) + 4);
      v13 = sub_410C10(a2);
      *(_QWORD *)&v19 = __PAIR64__((unsigned int)v22, v11);
      v5 = (char *)a3 + a4;
      v7 += sub_453D50(
              a1,
              v7,
              (char *)a3 + a4 - v7,
              " code=%x can_cont=%d ea=%a info=%s",
              *v13,
              v12,
              *(double *)&v19,
              (const char *)DWORD2(v19));
      break;
    default:
      break;
  }
  sub_453D50(a1, v7, v5 - v7, " pid=%d tid=%d handled=%d", *a2, a2[1], *((unsigned __int8 *)a2 + 12));
  return a3;
}
// 43CA65: variable 'v19' is possibly undefined
// 43CAEB: variable 'v20' is possibly undefined
// 4B70F0: using guessed type char byte_4B70F0;
