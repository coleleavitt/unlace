_QWORD *__fastcall create_nodeval_vd_merge_handler(
        __int64 *a1,
        const char *a2,
        unsigned int a3,
        const char *a4,
        char a5,
        int a6,
        int a7,
        const __m128i *a8,
        char a9)
{
  const __m128i *v10; // rbx
  __int64 (__fastcall *v11)(__int64, __int64); // rax
  __int64 v12; // rbx
  __int64 v13; // r14
  __int64 v14; // rax
  _QWORD *v15; // rax
  _QWORD *v16; // r12
  void (__fastcall *v17)(__int128 *, const __m128i *, __int64); // rax
  __int64 v18; // rax
  __int64 v19; // r13
  __int64 v20; // rbx
  __int64 v21; // rax
  __m128i *v22; // r14
  __m128i v23; // xmm3
  __int64 v24; // rax
  __m128i si128; // xmm1
  __int64 v26; // rdi
  size_t v27; // r14
  void *v28; // rax
  __int64 v29; // rsi
  __int64 v30; // rax
  __int64 v31; // rdi
  __int64 (*v32)(); // rax
  bool v33; // zf
  const char *v34; // rsi
  void (__fastcall *v35)(__int128 *, __int128 *, __int64); // rax
  int v37; // eax
  __m128i v41; // [rsp+20h] [rbp-A8h] BYREF
  int v42; // [rsp+3Ch] [rbp-8Ch] BYREF
  __int128 v43; // [rsp+40h] [rbp-88h] BYREF
  __m128i v44; // [rsp+50h] [rbp-78h] BYREF
  __int128 v45; // [rsp+60h] [rbp-68h] BYREF
  __m128i v46; // [rsp+70h] [rbp-58h]
  unsigned __int64 v47; // [rsp+88h] [rbp-40h]

  v10 = a8;
  v47 = __readfsqword(0x28u);
  if ( a4 && a9 )
  {
    v11 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)*a1 + 16LL);
    if ( v11 == sub_440BA0 )
    {
      if ( *(int *)(*a1 + 28) > 0 )
      {
        v12 = *a1;
        v13 = 0;
        while ( 1 )
        {
          v14 = switch_dbctx(*(int *)(v12 + 4 * v13 + 16));
          sub_79BBF0(&v42, v14, a4, 0, 0);
          if ( v42 != -1 )
            break;
          if ( *(_DWORD *)(v12 + 28) <= (int)++v13 )
            return nullptr;
        }
        v10 = a8;
        goto LABEL_9;
      }
      return nullptr;
    }
    if ( !(unsigned __int8)v11(*a1, (__int64)a4) )
      return nullptr;
  }
LABEL_9:
  v15 = sub_44C750(a1, a2, a6);
  v44 = 0u;
  v16 = v15;
  v43 = 0;
  *((_DWORD *)v15 + 35) = a3;
  v17 = (void (__fastcall *)(__int128 *, const __m128i *, __int64))v10[1].m128i_i64[0];
  if ( v17 )
  {
    v17(&v43, v10, 2);
    v44 = _mm_loadu_si128(v10 + 1);
  }
  v18 = v16[1];
  v19 = 0;
  v16[9] = 0;
  if ( *(int *)(v18 + 28) > 0 )
  {
    v41 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)off_2AFEE00), (__m128i)(unsigned __int64)sub_440770);
    do
    {
      v20 = operator new(0x68u);
      v46 = 0u;
      v45 = 0;
      if ( v44.m128i_i64[0] )
      {
        v21 = operator new(0x20u);
        *(_QWORD *)(v21 + 16) = 0;
        v22 = (__m128i *)v21;
        *(_QWORD *)(v21 + 24) = 0;
        *(_OWORD *)v21 = 0;
        if ( v44.m128i_i64[0] )
        {
          ((void (__fastcall *)(__int64, __int128 *, __int64))v44.m128i_i64[0])(v21, &v43, 2);
          v22[1] = _mm_load_si128(&v44);
        }
        v23 = _mm_load_si128(&v41);
        *(_QWORD *)&v45 = v22;
        v46 = v23;
      }
      v24 = v16[1];
      si128 = _mm_load_si128((const __m128i *)&xmmword_23838C0);
      v26 = *(int *)(v24 + 4LL * (int)v19 + 16);
      *(_QWORD *)(v20 + 32) = v24;
      *(_DWORD *)(v20 + 12) = -1;
      *(_DWORD *)(v20 + 8) = v26;
      *(_QWORD *)v20 = &off_2AFEAB0;
      *(_QWORD *)(v20 + 40) = 0;
      *(__m128i *)(v20 + 16) = si128;
      *(_OWORD *)(v20 + 48) = 0;
      if ( a4 )
      {
        v27 = strlen(a4);
        v28 = (void *)qvector_reserve(v20 + 40, 0, v27 + 1, 1);
        *(_QWORD *)(v20 + 40) = v28;
        *(_QWORD *)(v20 + 48) = v27 + 1;
        memmove(v28, a4, v27);
        *(_BYTE *)(*(_QWORD *)(v20 + 40) + v27) = 0;
        v26 = *(int *)(v20 + 8);
      }
      *(_QWORD *)(v20 + 64) = 0;
      *(_DWORD *)(v20 + 72) = -1;
      *(_DWORD *)(v20 + 88) = a6;
      *(_QWORD *)(v20 + 80) = 0;
      *(_BYTE *)(v20 + 92) = a5;
      *(_WORD *)(v20 + 93) = 1;
      switch_dbctx(v26);
      if ( a3 != -1 )
      {
        if ( !a3 )
        {
          if ( !under_debugger )
            interr(2039);
          BUG();
        }
        *(_QWORD *)(v20 + 64) = get_module_data(a3);
      }
      if ( v46.m128i_i64[0] )
      {
        v29 = *(_QWORD *)(v20 + 32);
        v42 = *(_DWORD *)(v20 + 8);
        v30 = ((__int64 (__fastcall *)(__int128 *, __int64, int *))v46.m128i_i64[1])(&v45, v29, &v42);
        *(_QWORD *)(v20 + 80) = v30;
        v31 = v30;
        v32 = *(__int64 (**)())(*(_QWORD *)v30 + 48LL);
        if ( v32 == sub_4404A0 )
        {
          v33 = *(_QWORD *)(v20 + 48) == 0;
          *(_DWORD *)(v20 + 72) = -1;
          v34 = haystack;
          if ( !v33 )
            goto LABEL_35;
          goto LABEL_25;
        }
        v37 = ((__int64 (__fastcall *)(__int64))v32)(v31);
        *(_DWORD *)(v20 + 72) = v37;
      }
      else
      {
        v37 = *(_DWORD *)(v20 + 72);
      }
      if ( v37 != -1 )
        goto LABEL_26;
      v34 = haystack;
      if ( *(_QWORD *)(v20 + 48) )
LABEL_35:
        v34 = *(const char **)(v20 + 40);
LABEL_25:
      netnode_check(&v42, v34, 0, 0);
      *(_DWORD *)(v20 + 72) = v42;
LABEL_26:
      *(_QWORD *)v20 = &off_2AFEB68;
      *(_DWORD *)(v20 + 96) = a7;
      v16[v19 + 7] = v20;
      v35 = (void (__fastcall *)(__int128 *, __int128 *, __int64))v46.m128i_i64[0];
      *(_DWORD *)(v20 + 12) = v19;
      if ( v35 )
        v35(&v45, &v45, 3);
      ++v19;
    }
    while ( *(_DWORD *)(v16[1] + 28LL) > (int)v19 );
  }
  if ( v44.m128i_i64[0] )
    ((void (__fastcall *)(__int128 *, __int128 *, __int64))v44.m128i_i64[0])(&v43, &v43, 3);
  return v16;
}

