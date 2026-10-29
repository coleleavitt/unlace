char *__fastcall sub_DB25D0(__int64 a1, __int64 a2, __int64 a3)
{
  char **exception; // r15
  int v5; // eax
  _OWORD *v6; // rax
  _OWORD *v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  char *result; // rax
  _QWORD *v11; // rdx
  int v12; // r15d
  __int64 v13; // rax
  unsigned int v14; // r12d
  unsigned int v15; // ecx
  unsigned int *v16; // rax
  __int64 v17; // rax
  _QWORD *v18; // rax
  __int64 v19[11]; // [rsp+20h] [rbp-58h] BYREF

  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a3;
  *(_DWORD *)(a1 + 16) = 0;
  sub_180C5A0(v19, "arith");
  v5 = sub_15DA4C0(a2 + 560, v19);
  *(_QWORD *)(a1 + 24) = 0;
  *(_DWORD *)(a1 + 20) = v5;
  v6 = (_OWORD *)sub_186B270(0x40u);
  *(_QWORD *)(a1 + 32) = v6;
  *(_DWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 40) = 8;
  *v6 = 0;
  v6[1] = 0;
  v6[2] = 0;
  v6[3] = 0;
  *(_OWORD *)(a1 + 56) = 0;
  v7 = (_OWORD *)sub_186B270(0xC0u);
  *(_QWORD *)(a1 + 72) = v7;
  *(_OWORD *)((char *)v7 + 8) = 0;
  v7[2] = 0;
  *(_OWORD *)((char *)v7 + 56) = 0;
  v7[5] = 0;
  *(_OWORD *)((char *)v7 + 104) = 0;
  v7[8] = 0;
  *(_OWORD *)((char *)v7 + 152) = 0;
  v7[11] = 0;
  LOWORD(v7) = *(_WORD *)(a3 + 8);
  *(_QWORD *)(a1 + 80) = 8;
  *(_DWORD *)(a1 + 88) = 0;
  *(_BYTE *)(a1 + 112) = 1;
  *(_WORD *)(a1 + 113) = (_WORD)v7;
  v8 = sub_186B270(0xC0u);
  *(_DWORD *)(v8 + 16) = 0;
  *(_DWORD *)(v8 + 40) = 0;
  *(_DWORD *)(v8 + 64) = 0;
  *(_DWORD *)(v8 + 88) = 0;
  *(_DWORD *)(v8 + 112) = 0;
  *(_DWORD *)(v8 + 136) = 0;
  *(_DWORD *)(v8 + 160) = 0;
  *(_DWORD *)(v8 + 184) = 0;
  *(_QWORD *)(a1 + 120) = v8;
  *(_OWORD *)v8 = 0;
  *(_OWORD *)(v8 + 24) = 0;
  *(_OWORD *)(v8 + 48) = 0;
  *(_OWORD *)(v8 + 72) = 0;
  *(_OWORD *)(v8 + 96) = 0;
  *(_OWORD *)(v8 + 120) = 0;
  *(_OWORD *)(v8 + 144) = 0;
  *(_OWORD *)(v8 + 168) = 0;
  *(_QWORD *)(a1 + 128) = 8;
  *(_DWORD *)(a1 + 136) = 0;
  *(_QWORD *)(a1 + 144) = a2;
  *(_QWORD *)(a1 + 152) = 0;
  *(_QWORD *)(a1 + 160) = 0;
  *(_QWORD *)(a1 + 168) = 0;
  *(_QWORD *)(a1 + 176) = 0;
  *(_QWORD *)(a1 + 184) = a1 + 120;
  *(_QWORD *)(a1 + 192) = a2;
  *(_QWORD *)(a1 + 200) = a1;
  sub_180C5A0(v19, "arith");
  *(_DWORD *)(a1 + 208) = sub_15DA4C0(a2 + 560, v19);
  *(_DWORD *)(a1 + 212) = 0;
  v9 = sub_186B270(0x100u);
  *(_QWORD *)(a1 + 224) = 8;
  *(_QWORD *)v9 = 0;
  *(_QWORD *)(v9 + 8) = 0;
  *(_QWORD *)(v9 + 32) = 0;
  *(_QWORD *)(v9 + 40) = 0;
  *(_QWORD *)(v9 + 64) = 0;
  *(_QWORD *)(v9 + 72) = 0;
  *(_QWORD *)(v9 + 96) = 0;
  *(_QWORD *)(v9 + 104) = 0;
  *(_QWORD *)(v9 + 128) = 0;
  *(_QWORD *)(v9 + 136) = 0;
  *(_QWORD *)(v9 + 160) = 0;
  *(_QWORD *)(v9 + 168) = 0;
  *(_QWORD *)(v9 + 192) = 0;
  *(_QWORD *)(v9 + 200) = 0;
  *(_QWORD *)(v9 + 224) = 0;
  *(_QWORD *)(v9 + 232) = 0;
  *(_DWORD *)(v9 + 16) = 0;
  *(_DWORD *)(v9 + 48) = 0;
  *(_DWORD *)(v9 + 80) = 0;
  *(_DWORD *)(v9 + 112) = 0;
  *(_DWORD *)(v9 + 144) = 0;
  *(_DWORD *)(v9 + 176) = 0;
  *(_DWORD *)(v9 + 208) = 0;
  *(_DWORD *)(v9 + 240) = 0;
  *(_QWORD *)(a1 + 216) = v9;
  *(_DWORD *)(a1 + 232) = 0;
  *(_QWORD *)(a1 + 256) = a1;
  *(_DWORD *)(a1 + 264) = 0;
  *(_QWORD *)(a1 + 288) = 0;
  *(_OWORD *)(a1 + 240) = 0;
  *(_OWORD *)(a1 + 272) = 0;
  sub_DBA400(a1 + 296, a2);
  *(_QWORD *)(a1 + 360) = a1 + 376;
  *(_QWORD *)(a1 + 368) = 0x1000000000LL;
  result = (char *)*(unsigned int *)(a3 + 12);
  if ( !(_DWORD)result )
  {
    v11 = *(_QWORD **)(a1 + 24);
    v12 = *(_DWORD *)(a1 + 20);
    if ( v11 )
    {
      v13 = *((unsigned int *)v11 - 1);
      if ( (_DWORD)v13 == *((_DWORD *)v11 - 2) )
      {
        v14 = (unsigned int)(3 * v13 + 1) >> 1;
        v15 = 4 * v14 + 8;
        if ( 4 * (int)v13 + 8 >= v15 || (unsigned int)v13 >= v14 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v19, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v19);
          sub_233E40((__int64)v19);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v16 = (unsigned int *)sub_186B300(v11 - 1, v15);
        v11 = v16 + 2;
        *v16 = v14;
        v17 = v16[1];
        *(_QWORD *)(a1 + 24) = v11;
        result = (char *)v11 + 4 * v17;
      }
      else
      {
        result = (char *)v11 + 4 * v13;
      }
    }
    else
    {
      v18 = (_QWORD *)sub_186B270(0x10u);
      *v18 = 2;
      v11 = v18 + 1;
      *(_QWORD *)(a1 + 24) = v18 + 1;
      result = (char *)(v18 + 1);
    }
    *(_DWORD *)result = v12;
    ++*((_DWORD *)v11 - 1);
  }
  return result;
}

