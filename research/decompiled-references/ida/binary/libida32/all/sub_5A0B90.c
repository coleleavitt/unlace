_QWORD *__fastcall sub_5A0B90(__int64 *a1, const char *a2)
{
  _QWORD *v2; // rax
  size_t v3; // r12
  _QWORD *v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rax
  int *v7; // rax
  __int64 v8; // rdx
  void *v10; // rax
  const void *v11; // rsi

  v2 = (_QWORD *)operator new(0xB8u);
  v3 = a1[2];
  v4 = v2;
  *v2 = &off_2AFD020;
  v5 = *a1;
  v4[2] = 0;
  v4[1] = v5;
  *(_OWORD *)(v4 + 3) = 0;
  if ( v3 )
  {
    v10 = (void *)qalloc_or_throw(v3, a2);
    v4[2] = v10;
    v11 = (const void *)a1[1];
    v4[4] = v3;
    memcpy(v10, v11, v3);
    v4[3] = v3;
  }
  v6 = a1[4];
  v4[15] = -1;
  v4[5] = v6;
  LODWORD(v6) = *((_DWORD *)a1 + 10);
  v4[16] = -1;
  *((_DWORD *)v4 + 12) = v6;
  v4[17] = 0xFFFFFFFFLL;
  *((_DWORD *)v4 + 36) = 0;
  *(_OWORD *)(v4 + 7) = 0;
  *(_OWORD *)(v4 + 9) = 0;
  *(_OWORD *)(v4 + 11) = 0;
  *(_OWORD *)(v4 + 13) = 0;
  merge_handler_ctr();
  *v4 = &off_2B05890;
  merge_handler_init(v4);
  v7 = (int *)&unk_238B8C0;
  do
  {
    v8 = *v7++;
    v4[v8 + 19] = v4[v8 + 7];
  }
  while ( &unk_238B8CC != (_UNKNOWN *)v7 );
  v4[22] = *(int *)(v4[1] + 28LL);
  return v4;
}

