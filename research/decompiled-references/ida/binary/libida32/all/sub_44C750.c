_QWORD *__fastcall sub_44C750(__int64 *a1, const char *a2, int a3)
{
  _QWORD *v4; // rax
  size_t v5; // r14
  _QWORD *v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rax
  int v9; // eax
  int v10; // edx
  int v11; // eax
  int v12; // edx
  void *v14; // rax
  const void *v15; // rsi

  if ( ((a3 & 0xC0) != 0) != (a1[5] & 1) )
  {
    if ( !under_debugger )
      interr(2031);
    BUG();
  }
  v4 = (_QWORD *)operator new(0xD0u);
  v5 = a1[2];
  v6 = v4;
  *v4 = &off_2AFD020;
  v7 = *a1;
  v6[2] = 0;
  v6[1] = v7;
  *(_OWORD *)(v6 + 3) = 0;
  if ( v5 )
  {
    v14 = (void *)qalloc_or_throw(v5, a2);
    v6[2] = v14;
    v15 = (const void *)a1[1];
    v6[4] = v5;
    memcpy(v14, v15, v5);
    v6[3] = v5;
  }
  v8 = a1[4];
  v6[15] = -1;
  v6[5] = v8;
  LODWORD(v8) = *((_DWORD *)a1 + 10);
  v6[16] = -1;
  *((_DWORD *)v6 + 12) = v8;
  v6[17] = 0xFFFFFFFFLL;
  *((_DWORD *)v6 + 36) = 0;
  *(_OWORD *)(v6 + 7) = 0;
  *(_OWORD *)(v6 + 9) = 0;
  *(_OWORD *)(v6 + 11) = 0;
  *(_OWORD *)(v6 + 13) = 0;
  merge_handler_ctr();
  *((_DWORD *)v6 + 50) = a3;
  *v6 = &off_2AFEC20;
  v9 = *((_DWORD *)v6 + 12);
  *(_QWORD *)((char *)v6 + 148) = 0;
  v10 = v9;
  v11 = v9 | 0x40000100;
  v6[20] = 0;
  v12 = v10 | 0x40000000;
  v6[23] = 0;
  if ( (a3 & 0x4000) == 0 )
    v11 = v12;
  *(_OWORD *)(v6 + 21) = 0;
  *((_DWORD *)v6 + 48) = -1;
  *((_DWORD *)v6 + 12) = v11;
  return v6;
}

