__int64 __fastcall sub_AB1780(__int64 *a1, __int64 a2)
{
  char **exception; // rbx
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rdx
  bool v7; // zf
  __int64 v8; // r12
  unsigned int *v9; // rbx
  __int64 v11; // rsi
  char v12; // bl
  void *v13; // r12
  __int64 v14[2]; // [rsp+10h] [rbp-48h] BYREF
  _QWORD v15[7]; // [rsp+20h] [rbp-38h] BYREF

  if ( *(_DWORD *)(a2 + 564) != *(_DWORD *)(a2 + 576)
    || *(_DWORD *)(a2 + 560) != *(_DWORD *)(a2 + 572)
    || *(_DWORD *)(a2 + 568) != *(_DWORD *)(a2 + 580) )
  {
    exception = (char **)__cxa_allocate_exception(0x28u);
    sub_24ABB0(v14, "Benchmark is not in QF_RDL (real difference logic).");
    goto LABEL_27;
  }
  if ( *(_BYTE *)(a2 + 517) )
  {
    exception = (char **)__cxa_allocate_exception(0x28u);
    sub_24ABB0(v14, "Benchmark has integer variables but it is marked as QF_RDL (real difference logic).");
    goto LABEL_27;
  }
  if ( *(_DWORD *)(a2 + 508) )
  {
    exception = (char **)__cxa_allocate_exception(0x28u);
    sub_24ABB0(v14, "Benchmark contains uninterpreted function symbols, but specified logic does not support them.");
LABEL_27:
    *exception = (char *)off_1C63128;
    sub_2333C0(exception + 1, v14);
    sub_233E40((__int64)v14);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
  }
  v4 = a1[2];
  *(_DWORD *)(v4 + 476) = 0;
  *(_BYTE *)(v4 + 248) = 1;
  *(_BYTE *)(v4 + 284) = 0;
  *(_BYTE *)(v4 + 264) = 0;
  *(_BYTE *)(v4 + 58) = 0;
  if ( (unsigned __int8)sub_15BC400(a2) )
  {
    v5 = a1[2];
    *(_DWORD *)(v5 + 600) = 0;
    *(_BYTE *)(v5 + 616) = 0;
    *(_DWORD *)(v5 + 512) = 2;
  }
  if ( *(_DWORD *)(a1[1] + 712)
    || (v6 = a1[2], *(_BYTE *)(v6 + 256))
    || (unsigned int)(4 * *(_DWORD *)(a2 + 452)) < *(_DWORD *)(a2 + 504)
    || *(_DWORD *)(a2 + 484) )
  {
    v8 = *a1;
    v9 = (unsigned int *)sub_186B270(0x668u);
    sub_A44350((__int64)v9, *a1);
  }
  else
  {
    *(_BYTE *)(v6 + 356) = 1;
    v7 = *(_BYTE *)(a2 + 516) == 0;
    *(_DWORD *)(v6 + 268) = 0;
    *(_DWORD *)(v6 + 360) = 0;
    if ( v7
      && !*(_BYTE *)(v6 + 715)
      && ((v14[0] = 0xFFFFFFF,
           v14[1] = 0,
           v15[0] = 1,
           v15[1] = 0,
           sub_182CBA0(qword_1C7F2C0, v15),
           LODWORD(v15[0]) = 1,
           v11 = a2 + 528,
           BYTE4(v15[0]) &= ~1u,
           (*(_BYTE *)(a2 + 548) & 1) == 0)
       && *(_DWORD *)(a2 + 544) == 1
        ? ((*(_BYTE *)(a2 + 532) & 1) != 0
         ? (v12 = (int)sub_182C7B0(qword_1C7F2C0, v11, v14) < 0)
         : (v12 = *(_DWORD *)(a2 + 528) < SLODWORD(v14[0])))
        : (v12 = sub_1848D40(qword_1C7F2C0, v11, v14)),
          v13 = qword_1C7F2C0,
          sub_182CBA0(qword_1C7F2C0, v14),
          sub_182CBA0(v13, v15),
          v12) )
    {
      v8 = *a1;
      v9 = (unsigned int *)sub_186B270(0x9C8u);
      sub_8C8730((__int64)v9, *a1);
    }
    else
    {
      v8 = *a1;
      v9 = (unsigned int *)sub_186B270(0x9C8u);
      sub_8C7C60((__int64)v9, *a1);
    }
  }
  return sub_8F1E10(v8, v9);
}

