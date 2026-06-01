_QWORD *__fastcall create_nodeval_merge_handler2(
        __int64 *a1,
        __int64 a2,
        int a3,
        const char *a4,
        char a5,
        int a6,
        __int64 a7,
        char a8)
{
  __int64 v8; // r10
  __int64 v11; // r15
  __int64 (__fastcall *v12)(__int64, __int64); // rax
  __int64 v13; // rbx
  __int64 v14; // r15
  __int64 v15; // rax
  int v16; // eax
  __int64 v17; // rbp
  _QWORD *v18; // rax
  _QWORD *v19; // r12
  int v20; // r15d
  __int64 v21; // rax
  __m128i si128; // xmm0
  __int64 v23; // rbx
  __int64 v24; // rax
  __int64 v25; // rdi
  void *v26; // rax
  __int64 v27; // rdi
  __int64 (*v28)(); // rax
  bool v29; // zf
  const char *v30; // rsi
  __int64 v32; // rax
  char v33; // al
  size_t n; // [rsp+0h] [rbp-68h]
  int v36; // [rsp+10h] [rbp-58h]
  _QWORD v38[9]; // [rsp+20h] [rbp-48h] BYREF

  v8 = a2;
  v38[1] = __readfsqword(0x28u);
  if ( !a4 || !a8 )
    goto LABEL_9;
  v11 = *a1;
  v12 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)*a1 + 16LL);
  if ( v12 != sub_454920 )
  {
    v33 = v12(v11, (__int64)a4);
    v8 = a2;
    if ( v33 )
      goto LABEL_9;
    return nullptr;
  }
  if ( *(int *)(v11 + 28) <= 0 )
    return nullptr;
  v13 = *a1;
  v14 = 0;
  while ( 1 )
  {
    v15 = switch_dbctx(*(int *)(v13 + 4 * v14 + 16));
    sub_7BEFF0(v38, v15, a4, 0, 0);
    if ( v38[0] != -1 )
      break;
    if ( *(_DWORD *)(v13 + 28) <= (int)++v14 )
      return nullptr;
  }
  v8 = a2;
LABEL_9:
  v16 = a6;
  BYTE1(v16) = BYTE1(a6) | 0x40;
  if ( a7 )
    v16 = a6;
  v17 = 0;
  v36 = v16;
  v18 = sub_460AC0(a1, v8, v16);
  *((_DWORD *)v18 + 36) = a3;
  v19 = v18;
  v18[9] = 0;
  if ( *(int *)(v18[1] + 28LL) > 0 )
  {
    do
    {
      v20 = v17;
      v21 = operator new(0x60u);
      si128 = _mm_load_si128((const __m128i *)&xmmword_23A76C0);
      v23 = v21;
      v24 = v19[1];
      v25 = *(int *)(v24 + 4LL * (int)v17 + 16);
      *(_QWORD *)(v23 + 32) = v24;
      *(_DWORD *)(v23 + 12) = -1;
      *(_DWORD *)(v23 + 8) = v25;
      *(_QWORD *)v23 = &off_2B28A70;
      *(_QWORD *)(v23 + 40) = 0;
      *(__m128i *)(v23 + 16) = si128;
      *(_OWORD *)(v23 + 48) = 0;
      if ( a4 )
      {
        n = strlen(a4);
        v26 = (void *)qvector_reserve(v23 + 40, 0, n + 1, 1);
        *(_QWORD *)(v23 + 40) = v26;
        *(_QWORD *)(v23 + 48) = n + 1;
        memmove(v26, a4, n);
        *(_BYTE *)(*(_QWORD *)(v23 + 40) + n) = 0;
        v25 = *(int *)(v23 + 8);
      }
      *(_QWORD *)(v23 + 64) = 0;
      *(_QWORD *)(v23 + 72) = -1;
      *(_QWORD *)(v23 + 80) = a7;
      *(_DWORD *)(v23 + 88) = v36;
      *(_BYTE *)(v23 + 92) = a5;
      *(_WORD *)(v23 + 93) = 1;
      switch_dbctx(v25);
      if ( a3 != -1 )
      {
        if ( !a3 )
        {
          if ( !under_debugger )
            interr(2767);
          BUG();
        }
        *(_QWORD *)(v23 + 64) = get_module_data(a3);
      }
      v27 = *(_QWORD *)(v23 + 80);
      *(_BYTE *)(v23 + 93) = 0;
      if ( v27 )
      {
        v28 = *(__int64 (**)())(*(_QWORD *)v27 + 48LL);
        if ( v28 == sub_4541E0 )
        {
          v29 = *(_QWORD *)(v23 + 48) == 0;
          *(_QWORD *)(v23 + 72) = -1;
          v30 = haystack;
          if ( !v29 )
            goto LABEL_26;
          goto LABEL_20;
        }
        v32 = v28();
        *(_QWORD *)(v23 + 72) = v32;
      }
      else
      {
        v32 = *(_QWORD *)(v23 + 72);
      }
      if ( v32 != -1 )
        goto LABEL_21;
      v30 = haystack;
      if ( *(_QWORD *)(v23 + 48) )
LABEL_26:
        v30 = *(const char **)(v23 + 40);
LABEL_20:
      netnode_check(v38, v30, 0, 0);
      *(_QWORD *)(v23 + 72) = v38[0];
LABEL_21:
      v19[v17++ + 7] = v23;
      *(_DWORD *)(v23 + 12) = v20;
    }
    while ( *(_DWORD *)(v19[1] + 28LL) > (int)v17 );
  }
  return v19;
}
