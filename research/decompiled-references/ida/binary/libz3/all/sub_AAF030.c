__int64 __fastcall sub_AAF030(__int64 *a1, __int64 a2)
{
  char **exception; // rbx
  __int64 v3; // rax
  int v5; // edx
  __int64 v6; // r12
  unsigned int *v7; // rbp
  char v9; // dl
  int v10; // edx
  __int64 v11; // rsi
  char v12; // bp
  void *v13; // r12
  __int64 v14[2]; // [rsp+10h] [rbp-48h] BYREF
  _QWORD v15[7]; // [rsp+20h] [rbp-38h] BYREF

  if ( *(_BYTE *)(a2 + 518) )
  {
    exception = (char **)__cxa_allocate_exception(0x28u);
    sub_24ABB0(
      v14,
      "Benchmark has real variables but it is marked as QF_UFIDL (uninterpreted functions and difference logic).");
    *exception = (char *)off_1C63128;
    sub_2333C0(exception + 1, v14);
    sub_233E40((__int64)v14);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
  }
  v3 = a1[2];
  *(_DWORD *)(v3 + 476) = 0;
  v5 = *(_DWORD *)(a2 + 508);
  *(_BYTE *)(v3 + 284) = 0;
  *(_BYTE *)(v3 + 58) = 0;
  if ( v5 || (*(_BYTE *)(v3 + 248) = 1, *(_BYTE *)(v3 + 264) = 0, v9 = sub_15BC400(a2), v3 = a1[2], !v9) )
  {
    *(_BYTE *)(v3 + 364) = 1;
    *(_DWORD *)(v3 + 600) = 0;
    v6 = *a1;
    *(_QWORD *)(v3 + 608) = 0x3FF8000000000000LL;
    *(_BYTE *)(v3 + 616) = 0;
    if ( !*(_DWORD *)(a1[1] + 712) )
    {
      v7 = (unsigned int *)sub_186B270(0x608u);
      sub_A51C30((__int64)v7, *a1);
      return sub_8F1E10(v6, v7);
    }
    goto LABEL_4;
  }
  v10 = *(_DWORD *)(a1[1] + 712);
  *(_BYTE *)(v3 + 644) = 1;
  *(_DWORD *)(v3 + 280) = 128;
  *(_DWORD *)(v3 + 600) = 0;
  if ( v10 )
  {
    v6 = *a1;
LABEL_4:
    v7 = (unsigned int *)sub_186B270(0x668u);
    sub_A44350((__int64)v7, *a1);
    return sub_8F1E10(v6, v7);
  }
  v14[0] = 0xFFFFFFF;
  v14[1] = 0;
  v15[0] = 1;
  v15[1] = 0;
  sub_182CBA0(qword_1C7F2C0, v15);
  LODWORD(v15[0]) = 1;
  v11 = a2 + 528;
  BYTE4(v15[0]) &= ~1u;
  if ( (*(_BYTE *)(a2 + 548) & 1) != 0 || *(_DWORD *)(a2 + 544) != 1 )
  {
    v12 = sub_1848D40(qword_1C7F2C0, v11, v14);
  }
  else if ( (*(_BYTE *)(a2 + 532) & 1) != 0 )
  {
    v12 = (int)sub_182C7B0(qword_1C7F2C0, v11, v14) < 0;
  }
  else
  {
    v12 = *(_DWORD *)(a2 + 528) < SLODWORD(v14[0]);
  }
  v13 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v14);
  sub_182CBA0(v13, v15);
  v6 = *a1;
  if ( v12 )
  {
    v7 = (unsigned int *)sub_186B270(0x170u);
    sub_942AD0((unsigned __int64)v7, *a1);
  }
  else
  {
    v7 = (unsigned int *)sub_186B270(0x1A8u);
    sub_941030((unsigned __int64)v7, *a1);
  }
  return sub_8F1E10(v6, v7);
}

