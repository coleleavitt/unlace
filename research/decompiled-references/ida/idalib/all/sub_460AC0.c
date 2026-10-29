_QWORD *__fastcall sub_460AC0(__int64 *a1, __int64 a2, int a3)
{
  _QWORD *v5; // rax
  size_t v6; // r14
  _QWORD *v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rax
  int v10; // eax
  int v11; // edx
  int v12; // eax
  int v13; // edx
  void *v15; // rax
  const void *v16; // rsi

  if ( ((a3 & 0xC0) != 0) != (a1[5] & 1) )
  {
    if ( !under_debugger )
      interr(2031);
    BUG();
  }
  v5 = (_QWORD *)operator new(0xD8u);
  v6 = a1[2];
  v7 = v5;
  *v5 = &off_2B26160;
  v8 = *a1;
  v7[2] = 0;
  v7[1] = v8;
  *(_OWORD *)(v7 + 3) = 0;
  if ( v6 )
  {
    v15 = (void *)qalloc_or_throw(v6);
    v7[2] = v15;
    v16 = (const void *)a1[1];
    v7[4] = v6;
    memcpy(v15, v16, v6);
    v7[3] = v6;
  }
  v9 = a1[4];
  v7[15] = -1;
  v7[5] = v9;
  LODWORD(v9) = *((_DWORD *)a1 + 10);
  v7[16] = -1;
  *((_DWORD *)v7 + 12) = v9;
  v7[17] = -1;
  v7[18] = 0;
  *(_OWORD *)(v7 + 7) = 0;
  *(_OWORD *)(v7 + 9) = 0;
  *(_OWORD *)(v7 + 11) = 0;
  *(_OWORD *)(v7 + 13) = 0;
  merge_handler_ctr(v7, a2);
  *((_DWORD *)v7 + 52) = a3;
  *v7 = &off_2B28BE0;
  v10 = *((_DWORD *)v7 + 12);
  v7[21] = 0;
  v11 = v10;
  v12 = v10 | 0x40000100;
  v7[24] = 0;
  v13 = v11 | 0x40000000;
  *((_DWORD *)v7 + 50) = -1;
  if ( (a3 & 0x4000) == 0 )
    v12 = v13;
  *(_OWORD *)(v7 + 19) = 0;
  *((_OWORD *)v7 + 11) = 0;
  *((_DWORD *)v7 + 12) = v12;
  return v7;
}
