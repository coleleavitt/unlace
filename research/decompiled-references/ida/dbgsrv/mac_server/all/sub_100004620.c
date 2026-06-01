/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100004620
// Address: 0x0000000100004620

//----- (0000000100004620) ----------------------------------------------------
__int64 __fastcall sub_100004620(__int64 a1, __int64 a2, mach_msg_timeout_t a3, double a4, double a5)
{
  unsigned int v6; // r13d
  int v7; // eax
  const char *v8; // rax
  _BYTE v10[1024]; // [rsp+0h] [rbp-430h] BYREF

  v6 = 0;
  while ( 1 )
  {
    while ( !sub_100004750(a1 + 120, a2) )
    {
      if ( *(_DWORD *)(a1 + 860) != 4 )
      {
        sub_100003380(a1, a3, a4, a5);
        if ( *(_QWORD *)(a1 + 160) )
          continue;
      }
      return v6;
    }
    v7 = *(_DWORD *)(a2 + 20) & 0xFFFFFFF;
    if ( v7 != 5 )
      break;
    if ( !sub_100003950((_QWORD *)a1, a2, a4, a5) && !(unsigned __int8)sub_1000044D0((_QWORD *)a1, a2) )
      goto LABEL_12;
  }
  if ( v7 == 11 )
    *(_BYTE *)(a1 + 1232) = 0;
LABEL_12:
  ((void (__fastcall *)(__int64, __int64))copy_debug_event)(a1 + 168, a2);
  if ( *(_BYTE *)(a1 + 664) == 1 )
  {
    v8 = (const char *)((__int64 (__fastcall *)(__int64, _BYTE *, __int64))loc_100061690)(a2, v10, 1024);
    sub_100060FA0(a1, "GDE1: %s\n", v8);
  }
  return 2 - (unsigned int)(*(_QWORD *)(a1 + 160) == 0);
}
