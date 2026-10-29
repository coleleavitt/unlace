__int64 __fastcall sub_AB12F0(__int64 *a1, __int64 a2)
{
  char **exception; // rbx
  __int64 v4; // rax
  bool v5; // cc
  __int64 v6; // r12
  unsigned int *v7; // rbx
  void *v9; // r12
  __int64 v10; // rsi
  char v11; // al
  bool v12; // bl
  __int64 v13; // rax
  char v14; // dl
  int v15; // eax
  __int64 v16[2]; // [rsp+10h] [rbp-58h] BYREF
  _QWORD v17[9]; // [rsp+20h] [rbp-48h] BYREF

  if ( *(_DWORD *)(a2 + 564) != *(_DWORD *)(a2 + 576)
    || *(_DWORD *)(a2 + 560) != *(_DWORD *)(a2 + 572)
    || *(_DWORD *)(a2 + 568) != *(_DWORD *)(a2 + 580) )
  {
    exception = (char **)__cxa_allocate_exception(0x28u);
    sub_24ABB0(v16, "Benchmark is not in QF_IDL (integer difference logic).");
LABEL_35:
    *exception = (char *)off_1C63128;
    sub_2333C0(exception + 1, v16);
    sub_233E40((__int64)v16);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
  }
  if ( *(_BYTE *)(a2 + 518) )
  {
    exception = (char **)__cxa_allocate_exception(0x28u);
    sub_24ABB0(v16, "Benchmark has real variables but it is marked as QF_IDL (integer difference logic).");
    goto LABEL_35;
  }
  if ( *(_DWORD *)(a2 + 508) )
  {
    exception = (char **)__cxa_allocate_exception(0x28u);
    sub_24ABB0(v16, "Benchmark contains uninterpreted function symbols, but specified logic does not support them.");
    goto LABEL_35;
  }
  v4 = a1[2];
  *(_DWORD *)(v4 + 476) = 0;
  *(_DWORD *)(v4 + 280) = 30;
  v5 = *(_DWORD *)(a2 + 504) <= 0x1388u;
  *(_BYTE *)(v4 + 248) = 1;
  *(_BYTE *)(v4 + 284) = 0;
  *(_BYTE *)(v4 + 264) = 0;
  *(_BYTE *)(v4 + 58) = 0;
  if ( v5 )
  {
    if ( !*(_BYTE *)(a2 + 400) || (v14 = sub_15BC400(a2), v4 = a1[2], v14) )
      *(_DWORD *)(v4 + 512) = 2;
    else
      *(_DWORD *)(v4 + 512) = 4;
  }
  else
  {
    *(_DWORD *)(v4 + 476) = 2;
  }
  if ( (unsigned __int8)sub_15BC400(a2) && *(_DWORD *)(a2 + 432) + *(_DWORD *)(a2 + 436) == *(_DWORD *)(a2 + 428) )
  {
    v13 = a1[2];
    *(_BYTE *)(v13 + 616) = 0;
    *(_DWORD *)(v13 + 600) = 0;
  }
  if ( *(_BYTE *)(a2 + 400) && *(_DWORD *)(a2 + 436) == *(_DWORD *)(a2 + 428) )
    *(_DWORD *)(a1[2] + 508) = 2;
  if ( *(_DWORD *)(a1[1] + 712) )
  {
    v6 = *a1;
    v7 = (unsigned int *)sub_186B270(0x668u);
    sub_A44350((__int64)v7, *a1);
  }
  else if ( *(_BYTE *)(a1[2] + 256) || !(unsigned __int8)sub_15BC400(a2) )
  {
    v6 = *a1;
    v7 = (unsigned int *)sub_186B270(0x608u);
    sub_A51C30((__int64)v7, *a1);
  }
  else
  {
    *(_DWORD *)(a1[2] + 512) = 3;
    v16[0] = 0xFFFFFFF;
    v16[1] = 0;
    v17[0] = 1;
    v17[1] = 0;
    sub_182CBA0(qword_1C7F2C0, v17);
    v9 = qword_1C7F2C0;
    LODWORD(v17[0]) = 1;
    v10 = a2 + 528;
    BYTE4(v17[0]) &= ~1u;
    if ( (*(_BYTE *)(a2 + 548) & 1) == 0 && *(_DWORD *)(a2 + 544) == 1 )
    {
      if ( (*(_BYTE *)(a2 + 532) & 1) != 0 )
      {
        v15 = sub_182C7B0(qword_1C7F2C0, v10, v16);
        v9 = qword_1C7F2C0;
        v12 = v15 < 0;
      }
      else
      {
        v12 = *(_DWORD *)(a2 + 528) < SLODWORD(v16[0]);
      }
    }
    else
    {
      v11 = sub_1848D40(qword_1C7F2C0, v10, v16);
      v9 = qword_1C7F2C0;
      v12 = v11;
    }
    sub_182CBA0(v9, v16);
    sub_182CBA0(v9, v17);
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
  }
  return sub_8F1E10(v6, v7);
}

