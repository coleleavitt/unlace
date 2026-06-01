__int64 __fastcall create_nodeval_diff_source(
        __int64 a1,
        int a2,
        unsigned int a3,
        const char *a4,
        char a5,
        int a6,
        __int64 a7)
{
  __int64 v11; // rax
  __m128i si128; // xmm0
  __int64 v13; // rbx
  void *v14; // rax
  __int64 v15; // rsi
  __int64 v16; // rax
  __int64 v17; // rdi
  __int64 (*v18)(); // rax
  const char *v19; // rsi
  int v21; // eax
  size_t n; // [rsp+0h] [rbp-58h]
  int v23; // [rsp+14h] [rbp-44h] BYREF
  unsigned __int64 v24; // [rsp+18h] [rbp-40h]

  v24 = __readfsqword(0x28u);
  v11 = operator new(0x60u);
  si128 = _mm_load_si128((const __m128i *)&xmmword_23838C0);
  *(_DWORD *)(v11 + 12) = -1;
  v13 = v11;
  *(__m128i *)(v11 + 16) = si128;
  *(_DWORD *)(v11 + 8) = a2;
  *(_QWORD *)(v11 + 32) = a1;
  *(_QWORD *)v11 = &off_2AFEAB0;
  *(_QWORD *)(v11 + 40) = 0;
  *(_OWORD *)(v11 + 48) = 0;
  if ( a4 )
  {
    n = strlen(a4);
    v14 = (void *)qvector_reserve(v13 + 40, 0, n + 1, 1);
    *(_QWORD *)(v13 + 40) = v14;
    *(_QWORD *)(v13 + 48) = n + 1;
    memmove(v14, a4, n);
    *(_BYTE *)(*(_QWORD *)(v13 + 40) + n) = 0;
    a2 = *(_DWORD *)(v13 + 8);
  }
  *(_DWORD *)(v13 + 88) = a6;
  *(_QWORD *)(v13 + 64) = 0;
  *(_DWORD *)(v13 + 72) = -1;
  *(_QWORD *)(v13 + 80) = 0;
  *(_BYTE *)(v13 + 92) = a5;
  *(_WORD *)(v13 + 93) = 1;
  switch_dbctx(a2);
  if ( a3 != -1 )
  {
    if ( !a3 )
    {
      if ( !under_debugger )
        interr(2039);
      BUG();
    }
    *(_QWORD *)(v13 + 64) = get_module_data(a3);
  }
  if ( !*(_QWORD *)(a7 + 16) )
  {
    v21 = *(_DWORD *)(v13 + 72);
    goto LABEL_14;
  }
  v15 = *(_QWORD *)(v13 + 32);
  v23 = *(_DWORD *)(v13 + 8);
  v16 = (*(__int64 (__fastcall **)(__int64, __int64, int *))(a7 + 24))(a7, v15, &v23);
  *(_QWORD *)(v13 + 80) = v16;
  v17 = v16;
  v18 = *(__int64 (**)())(*(_QWORD *)v16 + 48LL);
  if ( v18 != sub_4404A0 )
  {
    v21 = ((__int64 (__fastcall *)(__int64))v18)(v17);
    *(_DWORD *)(v13 + 72) = v21;
LABEL_14:
    if ( v21 != -1 )
      return v13;
    goto LABEL_9;
  }
  *(_DWORD *)(v13 + 72) = -1;
LABEL_9:
  v19 = haystack;
  if ( *(_QWORD *)(v13 + 48) )
    v19 = *(const char **)(v13 + 40);
  netnode_check(&v23, v19, 0, 0);
  *(_DWORD *)(v13 + 72) = v23;
  return v13;
}

