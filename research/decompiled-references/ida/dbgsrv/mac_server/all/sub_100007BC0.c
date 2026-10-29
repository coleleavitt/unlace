/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100007BC0
// Address: 0x0000000100007BC0

//----- (0000000100007BC0) ----------------------------------------------------
char __fastcall sub_100007BC0(_QWORD *a1, __int64 a2, double a3, double a4)
{
  double v6; // xmm0_8
  const char *v7; // rax
  int v8; // eax
  int v10; // r15d
  __int64 v11; // rcx
  __int64 v12; // rdi
  unsigned __int64 v13; // rsi
  unsigned __int64 v14; // rdi
  _BYTE v15[1024]; // [rsp+0h] [rbp-430h] BYREF

  if ( !a1[20] )
  {
    v10 = *((_DWORD *)a1 + 47) & 0xFFFFFFF;
    if ( v10 == 11 || !v10 )
    {
      sub_100060FA0((__int64)a1, "do_sigstop: process is already suspended\n");
      return 1;
    }
  }
  sub_100060FA0((__int64)a1, "do_sigstop: resuming...\n");
  (*(void (__fastcall **)(_QWORD *, _QWORD *))(*a1 + 168LL))(a1, a1 + 21);
  while ( sub_100004750((__int64)(a1 + 15), a2) )
    (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 704LL))(a1, a2);
  sub_100060FA0((__int64)a1, "do_sigstop: sending SIGSTOP\n");
  v6 = (*(double (__fastcall **)(_QWORD *, _QWORD))(*a1 + 152LL))(a1, 0);
  sub_100003380((__int64)a1, 0x3E8u, v6, a4);
  if ( !sub_100004750((__int64)(a1 + 15), a2) )
  {
LABEL_8:
    sub_100060FA0((__int64)a1, "do_sigstop: failed to stop process\n");
    return 0;
  }
  while ( 1 )
  {
    v7 = (const char *)((__int64 (__fastcall *)(__int64, _BYTE *, __int64))loc_100061690)(a2, v15, 1024);
    sub_100060FA0((__int64)a1, "do_sigstop: got event: %s\n", v7);
    v8 = *(_DWORD *)(a2 + 20) & 0xFFFFFFF;
    if ( (unsigned int)(v8 - 3) >= 2 )
      break;
    if ( !sub_100004750((__int64)(a1 + 15), a2) )
      goto LABEL_8;
  }
  if ( v8 )
  {
    v11 = a1[16];
    v12 = 0;
    if ( a1[17] != v11 )
      v12 = 56 * ((unsigned __int64)(a1[17] - v11) >> 3) - 1;
    v13 = a1[19] + a1[20];
    if ( v12 == v13 )
    {
      sub_10000AF80((__int64)(a1 + 15));
      v11 = a1[16];
      v13 = a1[20] + a1[19];
    }
    v14 = *(_QWORD *)(v11 + 8 * (v13 / 0x38)) + 72 * (v13 % 0x38);
    *(_QWORD *)v14 = 0xFFFFFFFFLL;
    *(_QWORD *)(v14 + 8) = -1;
    *(_BYTE *)(v14 + 16) = 0;
    *(_DWORD *)(v14 + 20) = 0;
    ((void (__fastcall *)(unsigned __int64, __int64))copy_debug_event)(v14, a2);
    ++a1[20];
    return 0;
  }
  return 1;
}
// 100007D47: conditional instruction was optimized away because r15d.4==B
