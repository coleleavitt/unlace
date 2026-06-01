void __fastcall sub_698D70(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  _OWORD *v6; // rax
  __int64 v7; // rax
  _QWORD *v8; // rdx
  char v9; // r14
  unsigned int v10; // eax
  __int64 v11; // rcx
  int v12; // eax
  _QWORD *v13; // rcx
  unsigned int v14; // r13d
  size_t v15; // rsi
  unsigned int *v16; // rax
  __int64 v17; // rcx
  char v18; // r14
  _QWORD *v19; // rax
  char **exception; // r12
  __int64 v21; // [rsp+30h] [rbp-58h] BYREF
  _BYTE v22[80]; // [rsp+38h] [rbp-50h] BYREF

  *(_QWORD *)a1 = &off_1C69728;
  *(_QWORD *)(a1 + 8) = a2;
  *(_QWORD *)(a1 + 16) = a2;
  *(_QWORD *)(a1 + 40) = a2;
  *(_QWORD *)(a1 + 72) = off_1C69908;
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 56) = 0;
  *(_QWORD *)(a1 + 64) = 0;
  *(_QWORD *)(a1 + 80) = 0;
  *(_QWORD *)(a1 + 88) = 0;
  sub_11CB0C0(a1 + 96, a3, a2);
  *(_QWORD *)(a1 + 4360) = 0;
  *(_QWORD *)(a1 + 4368) = 0;
  sub_786730(a1 + 4376);
  *(_QWORD *)(a1 + 4392) = 0;
  *(_QWORD *)(a1 + 4400) = a2;
  *(_QWORD *)(a1 + 4408) = 0;
  *(_QWORD *)(a1 + 4416) = a2;
  *(_QWORD *)(a1 + 4424) = 0;
  *(_QWORD *)(a1 + 4432) = 0;
  *(_QWORD *)(a1 + 4440) = 0;
  *(_QWORD *)(a1 + 4448) = 0;
  *(_DWORD *)(a1 + 4456) = 0;
  *(_QWORD *)(a1 + 4464) = a2;
  *(_QWORD *)(a1 + 4472) = 0;
  sub_16234C0(a1 + 4480, a2);
  *(_BYTE *)(a1 + 4544) = 1;
  *(_QWORD *)(a1 + 4560) = a1 + 4576;
  *(_DWORD *)(a1 + 4548) = 0;
  *(_QWORD *)(a1 + 4552) = 0;
  *(_QWORD *)(a1 + 4568) = 0x1000000000LL;
  *(_QWORD *)(a1 + 4720) = 0;
  *(_OWORD *)(a1 + 4528) = 0;
  *(_OWORD *)(a1 + 4704) = 0;
  v6 = (_OWORD *)sub_186B270(0x40u);
  *(_QWORD *)(a1 + 4728) = v6;
  *(_DWORD *)(a1 + 4744) = 0;
  *(_QWORD *)(a1 + 4736) = 8;
  *(_QWORD *)(a1 + 4768) = 0;
  *v6 = 0;
  v6[1] = 0;
  v6[2] = 0;
  v6[3] = 0;
  *(_OWORD *)(a1 + 4752) = 0;
  sub_68CF80((__int64 *)(a1 + 4776), "no reason given");
  *(_BYTE *)(a1 + 4808) = 0;
  *(_QWORD *)(a1 + 4816) = a2;
  *(_QWORD *)(a1 + 4824) = 0;
  *(_QWORD *)(a1 + 4832) = 0;
  v7 = sub_186B270(0x80u);
  *(_QWORD *)v7 = 0;
  *(_DWORD *)(v7 + 8) = -2;
  *(_QWORD *)(v7 + 16) = 0;
  *(_DWORD *)(v7 + 24) = -2;
  *(_QWORD *)(v7 + 32) = 0;
  *(_DWORD *)(v7 + 40) = -2;
  *(_QWORD *)(v7 + 48) = 0;
  *(_DWORD *)(v7 + 56) = -2;
  *(_QWORD *)(v7 + 64) = 0;
  *(_DWORD *)(v7 + 72) = -2;
  *(_QWORD *)(v7 + 80) = 0;
  *(_DWORD *)(v7 + 88) = -2;
  *(_QWORD *)(v7 + 96) = 0;
  *(_DWORD *)(v7 + 104) = -2;
  *(_QWORD *)(v7 + 112) = 0;
  *(_DWORD *)(v7 + 120) = -2;
  *(_QWORD *)(a1 + 4840) = v7;
  *(_QWORD *)(a1 + 4848) = 8;
  *(_DWORD *)(a1 + 4856) = 0;
  *(_QWORD *)(a1 + 4864) = 0;
  sub_68DA40(a1, a3);
  v8 = *(_QWORD **)(a1 + 4712);
  v9 = a4;
  if ( v8 )
  {
    v10 = *((_DWORD *)v8 - 1);
    if ( v10 == *((_DWORD *)v8 - 2) )
    {
      v14 = (3 * v10 + 1) >> 1;
      v15 = 8 * v14 + 8;
      if ( 8 * v10 + 8 >= (unsigned int)v15 || v10 >= v14 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_68CF80(&v21, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, &v21);
        sub_233E40((__int64)&v21);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v16 = (unsigned int *)sub_186B300(v8 - 1, v15);
      v17 = v16[1];
      v8 = v16 + 2;
      *v16 = v14;
      *(_QWORD *)(a1 + 4712) = v16 + 2;
      LODWORD(v16) = v17;
      v13 = &v8[v17];
      v12 = (_DWORD)v16 + 1;
    }
    else
    {
      v11 = v10;
      v12 = v10 + 1;
      v13 = &v8[v11];
    }
  }
  else
  {
    v19 = (_QWORD *)sub_186B270(0x18u);
    v8 = v19 + 1;
    *v19 = 2;
    v12 = 1;
    *(_QWORD *)(a1 + 4712) = v8;
    v13 = v8;
  }
  *v13 = 0;
  *((_DWORD *)v8 - 1) = v12;
  sub_68ED00(a1);
  if ( a4 )
  {
    sub_17F9A60(v22, "sat");
    v18 = sub_1859630(a1 + 4392, "override_incremental", v22, 0);
    sub_18572D0(v22);
    v9 = v18 ^ 1;
  }
  *(_BYTE *)(a1 + 385) = v9;
}

