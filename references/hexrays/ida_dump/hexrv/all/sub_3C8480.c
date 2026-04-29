__int64 __fastcall sub_3C8480(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v5; // rax
  size_t v6; // r13
  int v7; // eax
  __int64 result; // rax
  void *v9; // rax
  const void *v10; // rsi

  *(_QWORD *)a1 = &off_4B3950;
  v5 = *a2;
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 8) = v5;
  *(_OWORD *)(a1 + 24) = 0;
  v6 = a2[2];
  if ( v6 )
  {
    v9 = (void *)qalloc_or_throw(a2[2]);
    *(_QWORD *)(a1 + 32) = v6;
    v10 = (const void *)a2[1];
    *(_QWORD *)(a1 + 16) = v9;
    memcpy(v9, v10, v6);
    *(_QWORD *)(a1 + 24) = v6;
  }
  *(_QWORD *)(a1 + 40) = a2[4];
  v7 = *((_DWORD *)a2 + 10);
  *(_QWORD *)(a1 + 120) = -1;
  *(_DWORD *)(a1 + 48) = v7;
  *(_QWORD *)(a1 + 128) = -1;
  *(_QWORD *)(a1 + 136) = -1;
  *(_QWORD *)(a1 + 144) = 0;
  *(_OWORD *)(a1 + 56) = 0;
  *(_OWORD *)(a1 + 72) = 0;
  *(_OWORD *)(a1 + 88) = 0;
  *(_OWORD *)(a1 + 104) = 0;
  merge_handler_ctr(a1, a3);
  *(_DWORD *)(a1 + 48) |= 0x40000000u;
  *(_QWORD *)a1 = &off_4B39A0;
  result = (unsigned int)dword_4C1BB8;
  *(_DWORD *)(a1 + 144) = dword_4C1BB8;
  return result;
}
