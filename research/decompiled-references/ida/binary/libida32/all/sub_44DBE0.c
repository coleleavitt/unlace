__int64 __fastcall sub_44DBE0(__int64 a1, const char *a2)
{
  __int64 v2; // rbp
  size_t v3; // r12
  __int64 v4; // rax
  __int64 i; // r12
  int v6; // r14d
  __int64 v7; // rbx
  __int64 v8; // rax
  __m128i si128; // xmm1
  int v10; // r13d
  void *v11; // rax
  __int64 v12; // rdi
  __int64 v13; // rdi
  __int64 (*v14)(); // rax
  const char *v15; // rsi
  __int64 v16; // rax
  int v18; // eax
  void *v19; // rax
  const void *v20; // rsi
  int v21; // [rsp+4h] [rbp-44h] BYREF
  unsigned __int64 v22; // [rsp+8h] [rbp-40h]

  v22 = __readfsqword(0x28u);
  v2 = operator new(0x98u);
  *(_QWORD *)v2 = &off_2AFD020;
  *(_QWORD *)(v2 + 16) = 0;
  *(_OWORD *)(v2 + 24) = 0;
  v3 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(v2 + 8) = *(_QWORD *)a1;
  if ( v3 )
  {
    v19 = (void *)qalloc_or_throw(v3, a2);
    *(_QWORD *)(v2 + 16) = v19;
    v20 = *(const void **)(a1 + 8);
    *(_QWORD *)(v2 + 32) = v3;
    memcpy(v19, v20, v3);
    *(_QWORD *)(v2 + 24) = v3;
  }
  v4 = *(_QWORD *)(a1 + 32);
  *(_QWORD *)(v2 + 120) = -1;
  *(_QWORD *)(v2 + 40) = v4;
  LODWORD(v4) = *(_DWORD *)(a1 + 40);
  *(_QWORD *)(v2 + 128) = -1;
  *(_DWORD *)(v2 + 48) = v4;
  *(_QWORD *)(v2 + 136) = 0xFFFFFFFFLL;
  *(_DWORD *)(v2 + 144) = 0;
  *(_OWORD *)(v2 + 56) = 0;
  *(_OWORD *)(v2 + 72) = 0;
  *(_OWORD *)(v2 + 88) = 0;
  *(_OWORD *)(v2 + 104) = 0;
  merge_handler_ctr();
  *(_QWORD *)(v2 + 72) = 0;
  *(_QWORD *)v2 = &off_2AFED28;
  if ( *(int *)(*(_QWORD *)(v2 + 8) + 28LL) > 0 )
  {
    for ( i = 0; *(_DWORD *)(v16 + 28) > (int)i; ++i )
    {
      v6 = i;
      v7 = operator new(0x68u);
      v8 = *(_QWORD *)(v2 + 8);
      si128 = _mm_load_si128((const __m128i *)&xmmword_23838C0);
      v10 = *(_DWORD *)(v8 + 4LL * (int)i + 16);
      *(_QWORD *)(v7 + 32) = v8;
      *(_DWORD *)(v7 + 12) = -1;
      *(_DWORD *)(v7 + 8) = v10;
      *(_QWORD *)v7 = &off_2AFEAB0;
      *(_QWORD *)(v7 + 40) = 0;
      *(__m128i *)(v7 + 16) = si128;
      *(_OWORD *)(v7 + 48) = 0;
      v11 = (void *)qvector_reserve(v7 + 40, 0, 15, 1);
      *(_QWORD *)(v7 + 40) = v11;
      *(_QWORD *)(v7 + 48) = 15;
      qmemcpy(v11, "$ ignore micro", 14);
      *(_BYTE *)(*(_QWORD *)(v7 + 40) + 14LL) = 0;
      v12 = *(int *)(v7 + 8);
      *(_QWORD *)(v7 + 64) = 0;
      *(_DWORD *)(v7 + 72) = -1;
      *(_QWORD *)(v7 + 80) = 0;
      *(_DWORD *)(v7 + 88) = 4352;
      *(_BYTE *)(v7 + 92) = 0;
      *(_WORD *)(v7 + 93) = 1;
      switch_dbctx(v12);
      v13 = *(_QWORD *)(v7 + 80);
      *(_BYTE *)(v7 + 93) = 0;
      if ( v13 )
      {
        v14 = *(__int64 (**)())(*(_QWORD *)v13 + 48LL);
        if ( v14 == sub_4404A0 )
        {
          *(_DWORD *)(v7 + 72) = -1;
LABEL_8:
          v15 = haystack;
          if ( *(_QWORD *)(v7 + 48) )
            v15 = *(const char **)(v7 + 40);
          netnode_check(&v21, v15, 0, 0);
          *(_DWORD *)(v7 + 72) = v21;
          goto LABEL_11;
        }
        v18 = v14();
        *(_DWORD *)(v7 + 72) = v18;
      }
      else
      {
        v18 = *(_DWORD *)(v7 + 72);
      }
      if ( v18 == -1 )
        goto LABEL_8;
LABEL_11:
      *(_DWORD *)(v7 + 96) = -1;
      *(_QWORD *)v7 = &off_2AFEC70;
      switch_dbctx(v10);
      netnode_check(v7 + 96, "$ ignore micro", 0, 1);
      *(_QWORD *)(v2 + 8 * i + 56) = v7;
      v16 = *(_QWORD *)(v2 + 8);
      *(_DWORD *)(v7 + 12) = v6;
    }
  }
  return v2;
}

