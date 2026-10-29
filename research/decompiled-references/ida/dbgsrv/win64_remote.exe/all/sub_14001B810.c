/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14001B810
// Address: 0x000000014001B810

//----- (000000014001B810) ----------------------------------------------------
__int64 __fastcall sub_14001B810(__int64 a1, unsigned int *a2)
{
  __int64 v4; // r8
  __int64 result; // rax
  unsigned __int8 v6[1024]; // [rsp+60h] [rbp-418h] BYREF

  if ( *(_BYTE *)(a1 + 624) )
  {
    sub_140012410(a1, (struct __crt_locale_pointers *)"[%u %d] ", a2[1], a2[2]);
    v4 = *a2;
    switch ( (int)v4 )
    {
      case 1:
        sub_140012410(
          a1,
          (struct __crt_locale_pointers *)"EXCEPTION: ea=%p first: %d",
          *((const void **)a2 + 4),
          a2[42]);
        result = sub_14001BAB0((_QWORD *)a1, a2 + 4, 0);
        break;
      case 2:
        result = sub_140012410(
                   a1,
                   (struct __crt_locale_pointers *)"CREATE_THREAD: hThread=%X LocalBase=%p Entry=%p\n",
                   *((_QWORD *)a2 + 2),
                   *((const void **)a2 + 3),
                   *((const void **)a2 + 4));
        break;
      case 3:
        if ( *(_QWORD *)(a1 + 792) == -1 )
          *(_QWORD *)(a1 + 792) = *((_QWORD *)a2 + 3);
        sub_140013BB0((_QWORD *)a1, v6, 0x104u, *((void **)a2 + 9), *((_WORD *)a2 + 40) != 0, *((_QWORD *)a2 + 5));
        result = sub_140012410(
                   a1,
                   (struct __crt_locale_pointers *)"CREATE_PROCESS: hFile=%X hProcess=%X hThread=%X base=%p\n"
                                                   " dbgoff=%X dbgsiz=%X tlbase=%p start=%p name=%p '%s' \n",
                   *((_QWORD *)a2 + 2),
                   *((_QWORD *)a2 + 3),
                   *((_QWORD *)a2 + 4),
                   *((const void **)a2 + 5),
                   a2[12],
                   a2[13],
                   *((const void **)a2 + 7),
                   *((const void **)a2 + 8),
                   *((const void **)a2 + 9),
                   (const char *)v6);
        break;
      case 4:
        result = sub_140012410(a1, (struct __crt_locale_pointers *)"EXIT_THREAD: code=%d\n", a2[4]);
        break;
      case 5:
        result = sub_140012410(a1, (struct __crt_locale_pointers *)"EXIT_PROCESS: code=%d\n", a2[4]);
        break;
      case 6:
        sub_140013BB0((_QWORD *)a1, v6, 0x104u, *((void **)a2 + 5), *((_WORD *)a2 + 24) != 0, *((_QWORD *)a2 + 3));
        result = sub_140012410(
                   a1,
                   (struct __crt_locale_pointers *)"LOAD_DLL: h=%X base=%p dbgoff=%X dbgsiz=%X name=%X '%s'\n",
                   *((_QWORD *)a2 + 2),
                   *((const void **)a2 + 3),
                   a2[8],
                   a2[9],
                   *((_QWORD *)a2 + 5),
                   (const char *)v6);
        break;
      case 7:
        result = sub_140012410(a1, (struct __crt_locale_pointers *)"UNLOAD_DLL: base=%p\n", *((const void **)a2 + 2));
        break;
      case 8:
        sub_140013560(a1, (__int64)a2, v6, 0x400u);
        result = sub_140012410(
                   a1,
                   (struct __crt_locale_pointers *)"OUTPUT_DEBUG_STRING: str=\"%s\"\n",
                   (const char *)v6);
        break;
      case 9:
        result = sub_140012410(a1, (struct __crt_locale_pointers *)"RIP_EVENT (system debugging error)\n");
        break;
      default:
        result = sub_140012410(a1, (struct __crt_locale_pointers *)"UNKNOWN_DEBUG_EVENT %d\n", v4);
        break;
    }
  }
  return result;
}
