__int64 __fastcall sub_523800(__int64 *a1)
{
  _QWORD *v1; // rax
  size_t v2; // r12
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rax
  int *v6; // rax
  __int64 v7; // rdx
  void *v9; // rax
  const void *v10; // rsi

  v1 = (_QWORD *)operator new(0xB8u);
  v2 = a1[2];
  v3 = (__int64)v1;
  *v1 = &off_2B26160;
  v4 = *a1;
  *(_QWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 8) = v4;
  *(_OWORD *)(v3 + 24) = 0;
  if ( v2 )
  {
    v9 = (void *)qalloc_or_throw(v2);
    *(_QWORD *)(v3 + 16) = v9;
    v10 = (const void *)a1[1];
    *(_QWORD *)(v3 + 32) = v2;
    memcpy(v9, v10, v2);
    *(_QWORD *)(v3 + 24) = v2;
  }
  v5 = a1[4];
  *(_QWORD *)(v3 + 120) = -1;
  *(_QWORD *)(v3 + 40) = v5;
  LODWORD(v5) = *((_DWORD *)a1 + 10);
  *(_QWORD *)(v3 + 128) = -1;
  *(_DWORD *)(v3 + 48) = v5;
  *(_QWORD *)(v3 + 136) = -1;
  *(_QWORD *)(v3 + 144) = 0;
  *(_OWORD *)(v3 + 56) = 0;
  *(_OWORD *)(v3 + 72) = 0;
  *(_OWORD *)(v3 + 88) = 0;
  *(_OWORD *)(v3 + 104) = 0;
  merge_handler_ctr(v3, 0);
  *(_QWORD *)v3 = &off_2B2DC08;
  merge_handler_init(v3, (__int64 (__fastcall *)(__int64, __int64, _QWORD))sub_51F540);
  v6 = (int *)&unk_23AE268;
  do
  {
    v7 = *v6++;
    *(_QWORD *)(v3 + 8 * v7 + 152) = *(_QWORD *)(v3 + 8 * v7 + 56);
  }
  while ( jpt_52C075 != (_UNKNOWN *__ptr32 *)v6 );
  *(_QWORD *)(v3 + 176) = *(int *)(*(_QWORD *)(v3 + 8) + 28LL);
  return v3;
}
