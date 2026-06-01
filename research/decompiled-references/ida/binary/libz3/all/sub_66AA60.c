__int64 __fastcall sub_66AA60(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _OWORD *v6; // rax
  _OWORD *v7; // rax
  __int64 v8; // rax
  _OWORD *v9; // rax
  __int64 v10; // r12
  _QWORD *v11; // rdx
  unsigned int v12; // eax
  __int64 v13; // rcx
  __int64 result; // rax
  __int64 *v15; // rcx
  unsigned int v16; // ebp
  size_t v17; // rsi
  unsigned int *v18; // rax
  __int64 v19; // rcx
  _QWORD *v20; // rax
  char **exception; // r12
  __int64 v22; // rdx
  __int64 v23[11]; // [rsp+10h] [rbp-58h] BYREF

  sub_E1F060();
  *(_QWORD *)(a1 + 120) = a2;
  *(_QWORD *)a1 = &off_1C68C90;
  *(_QWORD *)(a1 + 72) = off_1C68E48;
  sub_16744A0(a1 + 128, a2);
  sub_16669D0(a1 + 152, a2);
  *(_QWORD *)(a1 + 168) = a2;
  *(_QWORD *)(a1 + 176) = 0;
  *(_QWORD *)(a1 + 184) = a4;
  if ( a4 )
    ++*(_DWORD *)(a4 + 48);
  *(_QWORD *)(a1 + 192) = 0;
  *(_QWORD *)(a1 + 200) = a2;
  *(_QWORD *)(a1 + 208) = 0;
  *(_QWORD *)(a1 + 216) = a2;
  *(_QWORD *)(a1 + 224) = 0;
  *(_QWORD *)(a1 + 232) = 0;
  v6 = (_OWORD *)sub_186B270(0x80u);
  *(_QWORD *)(a1 + 240) = v6;
  *(_DWORD *)(a1 + 256) = 0;
  *(_QWORD *)(a1 + 248) = 8;
  *v6 = 0;
  v6[1] = 0;
  v6[2] = 0;
  v6[3] = 0;
  v6[4] = 0;
  v6[5] = 0;
  v6[6] = 0;
  v6[7] = 0;
  v7 = (_OWORD *)sub_186B270(0x80u);
  *(_QWORD *)(a1 + 264) = v7;
  *(_QWORD *)(a1 + 272) = 8;
  *(_DWORD *)(a1 + 280) = 0;
  *v7 = 0;
  v7[1] = 0;
  v7[2] = 0;
  v7[3] = 0;
  v7[4] = 0;
  v7[5] = 0;
  v7[6] = 0;
  v7[7] = 0;
  v8 = sub_186B270(0x140u);
  *(_QWORD *)v8 = 0;
  *(_QWORD *)(v8 + 224) = 1;
  *(_QWORD *)(v8 + 8) = 0;
  *(_QWORD *)(v8 + 16) = 0;
  *(_QWORD *)(v8 + 24) = 1;
  *(_QWORD *)(v8 + 32) = 0;
  *(_QWORD *)(v8 + 40) = 0;
  *(_QWORD *)(v8 + 48) = 0;
  *(_QWORD *)(v8 + 56) = 0;
  *(_QWORD *)(v8 + 64) = 1;
  *(_QWORD *)(v8 + 72) = 0;
  *(_QWORD *)(v8 + 80) = 0;
  *(_QWORD *)(v8 + 88) = 0;
  *(_QWORD *)(v8 + 96) = 0;
  *(_QWORD *)(v8 + 104) = 1;
  *(_QWORD *)(v8 + 112) = 0;
  *(_QWORD *)(v8 + 120) = 0;
  *(_QWORD *)(v8 + 128) = 0;
  *(_QWORD *)(v8 + 136) = 0;
  *(_QWORD *)(v8 + 144) = 1;
  *(_QWORD *)(v8 + 152) = 0;
  *(_QWORD *)(v8 + 160) = 0;
  *(_QWORD *)(v8 + 168) = 0;
  *(_QWORD *)(v8 + 176) = 0;
  *(_QWORD *)(v8 + 184) = 1;
  *(_QWORD *)(v8 + 192) = 0;
  *(_QWORD *)(v8 + 200) = 0;
  *(_QWORD *)(v8 + 208) = 0;
  *(_QWORD *)(v8 + 216) = 0;
  *(_BYTE *)(v8 + 228) = 0;
  *(_QWORD *)(v8 + 248) = 0;
  *(_OWORD *)(v8 + 232) = 0;
  *(_QWORD *)(v8 + 256) = 0;
  *(_QWORD *)(v8 + 264) = 1;
  *(_QWORD *)(v8 + 272) = 0;
  *(_QWORD *)(v8 + 280) = 0;
  *(_QWORD *)(v8 + 288) = 0;
  *(_QWORD *)(v8 + 296) = 0;
  *(_QWORD *)(v8 + 304) = 1;
  *(_QWORD *)(v8 + 312) = 0;
  *(_QWORD *)(a1 + 288) = v8;
  *(_QWORD *)(a1 + 296) = 8;
  *(_DWORD *)(a1 + 304) = 0;
  *(_DWORD *)(a1 + 312) = sub_1859960(a3, "max_bv_size", 0xFFFFFFFFLL);
  *(_QWORD *)(a1 + 320) = a2;
  *(_QWORD *)(a1 + 328) = 0;
  v9 = (_OWORD *)sub_186B270(0x80u);
  *(_QWORD *)(a1 + 336) = v9;
  *(_QWORD *)(a1 + 344) = 8;
  *(_DWORD *)(a1 + 352) = 0;
  *(_QWORD *)(a1 + 360) = a2;
  *(_QWORD *)(a1 + 368) = 0;
  *v9 = 0;
  v9[1] = 0;
  v9[2] = 0;
  v9[3] = 0;
  v9[4] = 0;
  v9[5] = 0;
  v9[6] = 0;
  v9[7] = 0;
  sub_CB1CC0(a1 + 312, a3);
  sub_CB8D40(a1 + 376, a2, 0, a1 + 912);
  *(_QWORD *)(a1 + 376) = &off_1C52B78;
  sub_CB1D80(a1 + 912, a2, a1 + 312);
  *(_BYTE *)(a1 + 968) = 0;
  sub_E5E9C0(a1, a3);
  v10 = sub_186B270(0x80u);
  sub_F735C0(v10, a2);
  v11 = *(_QWORD **)(a1 + 192);
  if ( v11 )
  {
    v12 = *((_DWORD *)v11 - 1);
    if ( v12 == *((_DWORD *)v11 - 2) )
    {
      v16 = (3 * v12 + 1) >> 1;
      v17 = 8 * v16 + 8;
      if ( 8 * v12 + 8 >= (unsigned int)v17 || v12 >= v16 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_107D5E(v23, "Overflow encountered when expanding vector", v22);
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v23);
        sub_233E40((__int64)v23);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v18 = (unsigned int *)sub_186B300(v11 - 1, v17);
      v19 = v18[1];
      v11 = v18 + 2;
      *v18 = v16;
      *(_QWORD *)(a1 + 192) = v18 + 2;
      LODWORD(v18) = v19;
      v15 = &v11[v19];
      result = (unsigned int)((_DWORD)v18 + 1);
    }
    else
    {
      v13 = v12;
      result = v12 + 1;
      v15 = &v11[v13];
    }
  }
  else
  {
    v20 = (_QWORD *)sub_186B270(0x18u);
    v11 = v20 + 1;
    *v20 = 2;
    result = 1;
    *(_QWORD *)(a1 + 192) = v11;
    v15 = v11;
  }
  *v15 = v10;
  *((_DWORD *)v11 - 1) = result;
  return result;
}

