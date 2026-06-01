/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4169F0
// Address: 0x004169F0

//----- (004169F0) --------------------------------------------------------
int __userpurge sub_4169F0@<eax>(int a1@<ecx>, int a2@<ebp>, __m128i a3@<xmm0>, int a4)
{
  int result; // eax
  unsigned __int16 Buffer[512]; // [esp+8h] [ebp-404h] BYREF

  if ( *(_BYTE *)(a1 + 332) )
  {
    sub_4104E0(a1, (int)"[%u %d] ", *(_DWORD *)(a4 + 4), *(_DWORD *)(a4 + 8));
    switch ( *(_DWORD *)a4 )
    {
      case 1:
        sub_4104E0(a1, (int)"EXCEPTION: ea=%p first: %d", *(const void **)(a4 + 24), *(_DWORD *)(a4 + 92));
        result = sub_416BE0(a1, a2, a4 + 12, 0);
        break;
      case 2:
        result = sub_4104E0(
                   a1,
                   (int)"CREATE_THREAD: hThread=%X LocalBase=%p Entry=%p\n",
                   *(_DWORD *)(a4 + 12),
                   *(const void **)(a4 + 16),
                   *(const void **)(a4 + 20));
        break;
      case 3:
        if ( *(_DWORD *)(a1 + 452) == -1 )
          *(_DWORD *)(a1 + 452) = *(_DWORD *)(a4 + 16);
        sub_411D20(
          (_DWORD *)a1,
          a3,
          Buffer,
          0x104u,
          *(LPVOID *)(a4 + 44),
          *(_WORD *)(a4 + 48) != 0,
          *(_DWORD *)(a4 + 24));
        result = sub_4104E0(
                   a1,
                   (int)"CREATE_PROCESS: hFile=%X hProcess=%X hThread=%X base=%p\n"
                        " dbgoff=%X dbgsiz=%X tlbase=%p start=%p name=%p '%s' \n",
                   *(_DWORD *)(a4 + 12),
                   *(_DWORD *)(a4 + 16),
                   *(_DWORD *)(a4 + 20),
                   *(const void **)(a4 + 24),
                   *(_DWORD *)(a4 + 28),
                   *(_DWORD *)(a4 + 32),
                   *(const void **)(a4 + 36),
                   *(const void **)(a4 + 40),
                   *(const void **)(a4 + 44),
                   (const char *)Buffer);
        break;
      case 4:
        result = sub_4104E0(a1, (int)"EXIT_THREAD: code=%d\n", *(_DWORD *)(a4 + 12));
        break;
      case 5:
        result = sub_4104E0(a1, (int)"EXIT_PROCESS: code=%d\n", *(_DWORD *)(a4 + 12));
        break;
      case 6:
        sub_411D20(
          (_DWORD *)a1,
          a3,
          Buffer,
          0x104u,
          *(LPVOID *)(a4 + 28),
          *(_WORD *)(a4 + 32) != 0,
          *(_DWORD *)(a4 + 16));
        result = sub_4104E0(
                   a1,
                   (int)"LOAD_DLL: h=%X base=%p dbgoff=%X dbgsiz=%X name=%X '%s'\n",
                   *(_DWORD *)(a4 + 12),
                   *(const void **)(a4 + 16),
                   *(_DWORD *)(a4 + 20),
                   *(_DWORD *)(a4 + 24),
                   *(_DWORD *)(a4 + 28),
                   (const char *)Buffer);
        break;
      case 7:
        result = sub_4104E0(a1, (int)"UNLOAD_DLL: base=%p\n", *(_DWORD *)(a4 + 12));
        break;
      case 8:
        sub_411B50(a1, a3, a4, (char *)Buffer, 0x400u);
        result = sub_4104E0(a1, (int)"OUTPUT_DEBUG_STRING: str=\"%s\"\n", Buffer);
        break;
      case 9:
        result = sub_4104E0(a1, (int)"RIP_EVENT (system debugging error)\n");
        break;
      default:
        result = sub_4104E0(a1, (int)"UNKNOWN_DEBUG_EVENT %d\n", *(_DWORD *)a4);
        break;
    }
  }
  return result;
}
