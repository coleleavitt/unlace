/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140043220
// Address: 0x0000000140043220

//----- (0000000140043220) ----------------------------------------------------
struct __crt_locale_pointers *__fastcall sub_140043220(
        __int64 a1,
        struct __crt_locale_pointers *a2,
        signed __int64 a3,
        double a4)
{
  struct __crt_locale_pointers *v7; // rbp
  __int64 v8; // r12
  const char *v9; // r9
  int v10; // eax
  int v11; // edx
  struct __crt_locale_pointers *v12; // rbx
  __int64 v13; // rax
  const char *v14; // r14
  double v15; // rsi
  double v16; // rdi
  double v17; // rdi
  __int64 v18; // rax
  const char *v19; // r14
  double v20; // r12
  int v21; // edi
  _DWORD *v22; // rax
  int v23; // eax
  const char *v24; // r14
  char v25; // al

  v7 = (struct __crt_locale_pointers *)((char *)a2 + a3);
  v8 = -1;
  if ( (unsigned int)sub_140040160() != 8 )
    v8 = 0xFFFFFFFFLL;
  switch ( *(_DWORD *)(a1 + 20) & 0xFFFFFFF )
  {
    case 0:
      v9 = "NO_EVENT";
      break;
    case 1:
      v9 = "PROCESS_STARTED";
      break;
    case 2:
      v9 = "PROCESS_EXITED";
      break;
    case 3:
      v9 = "THREAD_STARTED";
      break;
    case 4:
      v9 = "THREAD_EXITED";
      break;
    case 5:
      v9 = "BREAKPOINT";
      break;
    case 6:
      v9 = "STEP";
      break;
    case 7:
      v9 = "EXCEPTION";
      break;
    case 8:
      v9 = "LIB_LOADED";
      break;
    case 9:
      v9 = "LIB_UNLOADED";
      break;
    case 0xA:
      v9 = "INFORMATION";
      break;
    case 0xB:
      v9 = "PROCESS_ATTACHED";
      break;
    case 0xC:
      v9 = "PROCESS_DETACHED";
      break;
    case 0xD:
      v9 = "PROCESS_SUSPENDED";
      break;
    case 0xE:
      v9 = "TRACE_FULL";
      break;
    default:
      v9 = "???";
      break;
  }
  v10 = sub_14005B0A0(a2, a3, "%s ea=%a", v9, COERCE_DOUBLE(v8 & *(_QWORD *)(a1 + 8)));
  v11 = *(_DWORD *)(a1 + 20) & 0xFFFFFFF;
  v12 = (struct __crt_locale_pointers *)((char *)a2 + v10);
  switch ( v11 )
  {
    case 1:
    case 8:
    case 11:
      v13 = sub_1400181A0(a1);
      v14 = Str1;
      if ( *(_QWORD *)(v13 + 8) )
        v14 = *(const char **)v13;
      *(_QWORD *)&v15 = *(_QWORD *)(sub_1400181A0(a1) + 40) & v8;
      v16 = *(double *)(sub_1400181A0(a1) + 32);
      sub_1400181A0(a1);
      v12 = (struct __crt_locale_pointers *)((char *)v12
                                           + (int)sub_14005B0A0(
                                                    v12,
                                                    (char *)v7 - (char *)v12,
                                                    " base=%a size=%a rebase=%a name=%s",
                                                    a4,
                                                    v16,
                                                    v15,
                                                    v14));
      break;
    case 2:
    case 4:
      if ( ((v11 - 2) & 0xFFFFFFFD) != 0 )
      {
        if ( byte_1400CB61C )
          __debugbreak();
        sub_14005A480(3296);
      }
      v12 = (struct __crt_locale_pointers *)((char *)v12
                                           + (int)sub_14005B0A0(
                                                    v12,
                                                    (char *)v7 - (char *)v12,
                                                    " exit_code=%d",
                                                    *(_DWORD *)(a1 + 24)));
      break;
    case 3:
    case 9:
    case 10:
      if ( v12 >= v7 )
      {
        if ( byte_1400CB61C )
          __debugbreak();
        sub_14005A480(518);
      }
      LOBYTE(v12->locinfo) = 32;
      v12 = (struct __crt_locale_pointers *)((char *)v12 + 1);
      if ( v12 >= v7 )
      {
        v12 = (struct __crt_locale_pointers *)((char *)v7 - 1);
        HIBYTE(v7[-1].mbcinfo) = 0;
        if ( !v7 )
        {
          if ( byte_1400CB61C )
            __debugbreak();
          sub_14005A480(520);
        }
      }
      v23 = *(_DWORD *)(a1 + 20) & 0xFFFFFFF;
      if ( v23 != 3 && (unsigned int)(v23 - 9) > 1 )
      {
        if ( byte_1400CB61C )
          __debugbreak();
        sub_14005A480(3297);
      }
      v24 = Str1;
      if ( *(_QWORD *)(a1 + 32) )
        v24 = *(const char **)(a1 + 24);
      if ( v12 == (struct __crt_locale_pointers *)((char *)&v7[-1].mbcinfo + 7) )
      {
LABEL_39:
        LOBYTE(v12->locinfo) = 0;
      }
      else
      {
        while ( 1 )
        {
          v25 = *v24++;
          LOBYTE(v12->locinfo) = v25;
          if ( !v25 )
            break;
          v12 = (struct __crt_locale_pointers *)((char *)v12 + 1);
          if ( v12 == (struct __crt_locale_pointers *)((char *)&v7[-1].mbcinfo + 7) )
            goto LABEL_39;
        }
      }
      break;
    case 5:
      *(_QWORD *)&v17 = *(_QWORD *)(sub_14000E220(a1) + 8) & v8;
      sub_14000E220(a1);
      v12 = (struct __crt_locale_pointers *)((char *)v12
                                           + (int)sub_14005B0A0(
                                                    v12,
                                                    (char *)v7 - (char *)v12,
                                                    " hea=%a kea=%a",
                                                    a4,
                                                    v17));
      break;
    case 7:
      v18 = sub_140012670(a1);
      v19 = Str1;
      if ( *(_QWORD *)(v18 + 24) )
        v19 = *(const char **)(v18 + 16);
      *(_QWORD *)&v20 = *(_QWORD *)(sub_140012670(a1) + 8) & v8;
      v21 = *(unsigned __int8 *)(sub_140012670(a1) + 4);
      v22 = (_DWORD *)sub_140012670(a1);
      v12 = (struct __crt_locale_pointers *)((char *)v12
                                           + (int)sub_14005B0A0(
                                                    v12,
                                                    (char *)v7 - (char *)v12,
                                                    " code=%x can_cont=%d ea=%a info=%s",
                                                    *v22,
                                                    v21,
                                                    v20,
                                                    v19));
      break;
    default:
      break;
  }
  sub_14005B0A0(
    v12,
    (char *)v7 - (char *)v12,
    " pid=%d tid=%d handled=%d",
    *(_DWORD *)a1,
    *(_DWORD *)(a1 + 4),
    *(unsigned __int8 *)(a1 + 16));
  return a2;
}
// 1400CB61C: using guessed type char byte_1400CB61C;
