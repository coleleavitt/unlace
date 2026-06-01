__int64 __fastcall sub_461F60(__int64 a1)
{
  __int64 v1; // rbp
  size_t v2; // r12
  __int64 v3; // rax
  __int64 i; // r12
  int v5; // r14d
  __int64 v6; // rbx
  __int64 v7; // rax
  __m128i si128; // xmm1
  int v9; // r13d
  void *v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rdi
  __int64 (*v13)(); // rax
  const char *v14; // rsi
  __int64 v15; // rax
  __int64 v17; // rax
  void *v18; // rax
  const void *v19; // rsi
  _QWORD v20[9]; // [rsp+0h] [rbp-48h] BYREF

  v20[1] = __readfsqword(0x28u);
  v1 = operator new(0x98u);
  *(_QWORD *)v1 = &off_2B26160;
  *(_QWORD *)(v1 + 16) = 0;
  *(_OWORD *)(v1 + 24) = 0;
  v2 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(v1 + 8) = *(_QWORD *)a1;
  if ( v2 )
  {
    v18 = (void *)qalloc_or_throw(v2);
    *(_QWORD *)(v1 + 16) = v18;
    v19 = *(const void **)(a1 + 8);
    *(_QWORD *)(v1 + 32) = v2;
    memcpy(v18, v19, v2);
    *(_QWORD *)(v1 + 24) = v2;
  }
  v3 = *(_QWORD *)(a1 + 32);
  *(_QWORD *)(v1 + 120) = -1;
  *(_QWORD *)(v1 + 40) = v3;
  LODWORD(v3) = *(_DWORD *)(a1 + 40);
  *(_QWORD *)(v1 + 128) = -1;
  *(_DWORD *)(v1 + 48) = v3;
  *(_QWORD *)(v1 + 136) = -1;
  *(_QWORD *)(v1 + 144) = 0;
  *(_OWORD *)(v1 + 56) = 0;
  *(_OWORD *)(v1 + 72) = 0;
  *(_OWORD *)(v1 + 88) = 0;
  *(_OWORD *)(v1 + 104) = 0;
  merge_handler_ctr(v1, 0);
  *(_QWORD *)(v1 + 72) = 0;
  *(_QWORD *)v1 = &off_2B28CE8;
  if ( *(int *)(*(_QWORD *)(v1 + 8) + 28LL) > 0 )
  {
    for ( i = 0; *(_DWORD *)(v15 + 28) > (int)i; ++i )
    {
      v5 = i;
      v6 = operator new(0x68u);
      v7 = *(_QWORD *)(v1 + 8);
      si128 = _mm_load_si128((const __m128i *)&xmmword_23A76C0);
      v9 = *(_DWORD *)(v7 + 4LL * (int)i + 16);
      *(_QWORD *)(v6 + 32) = v7;
      *(_DWORD *)(v6 + 12) = -1;
      *(_DWORD *)(v6 + 8) = v9;
      *(_QWORD *)v6 = &off_2B28A70;
      *(_QWORD *)(v6 + 40) = 0;
      *(__m128i *)(v6 + 16) = si128;
      *(_OWORD *)(v6 + 48) = 0;
      v10 = (void *)qvector_reserve(v6 + 40, 0, 15, 1);
      *(_QWORD *)(v6 + 40) = v10;
      *(_QWORD *)(v6 + 48) = 15;
      qmemcpy(v10, "$ ignore micro", 14);
      *(_BYTE *)(*(_QWORD *)(v6 + 40) + 14LL) = 0;
      v11 = *(int *)(v6 + 8);
      *(_QWORD *)(v6 + 64) = 0;
      *(_QWORD *)(v6 + 72) = -1;
      *(_QWORD *)(v6 + 80) = 0;
      *(_DWORD *)(v6 + 88) = 4352;
      *(_BYTE *)(v6 + 92) = 0;
      *(_WORD *)(v6 + 93) = 1;
      switch_dbctx(v11);
      v12 = *(_QWORD *)(v6 + 80);
      *(_BYTE *)(v6 + 93) = 0;
      if ( v12 )
      {
        v13 = *(__int64 (**)())(*(_QWORD *)v12 + 48LL);
        if ( v13 == sub_4541E0 )
        {
          *(_QWORD *)(v6 + 72) = -1;
LABEL_8:
          v14 = haystack;
          if ( *(_QWORD *)(v6 + 48) )
            v14 = *(const char **)(v6 + 40);
          netnode_check(v20, v14, 0, 0);
          *(_QWORD *)(v6 + 72) = v20[0];
          goto LABEL_11;
        }
        v17 = v13();
        *(_QWORD *)(v6 + 72) = v17;
      }
      else
      {
        v17 = *(_QWORD *)(v6 + 72);
      }
      if ( v17 == -1 )
        goto LABEL_8;
LABEL_11:
      *(_QWORD *)(v6 + 96) = -1;
      *(_QWORD *)v6 = &off_2B28C30;
      switch_dbctx(v9);
      netnode_check(v6 + 96, "$ ignore micro", 0, 1);
      *(_QWORD *)(v1 + 8 * i + 56) = v6;
      v15 = *(_QWORD *)(v1 + 8);
      *(_DWORD *)(v6 + 12) = v5;
    }
  }
  return v1;
}
