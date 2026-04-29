__int64 __fastcall sub_1F1C10(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, int a5, __int64 a6)
{
  _QWORD *v8; // rcx
  _QWORD *v9; // r14
  const char *v10; // rsi
  char v11; // al
  __int64 v12; // rsi
  size_t v13; // r13
  void *v14; // r14
  unsigned int v15; // eax
  int v16; // eax
  unsigned int v17; // r13d
  __int64 v19; // r15
  int v20; // eax
  __int64 v21; // rbp
  __int64 v22; // rax
  unsigned int v24; // [rsp+8h] [rbp-B0h]
  __int64 v25; // [rsp+8h] [rbp-B0h]
  _DWORD v26[4]; // [rsp+10h] [rbp-A8h] BYREF
  __int64 v27; // [rsp+20h] [rbp-98h]
  int v28; // [rsp+28h] [rbp-90h]
  void *v29; // [rsp+30h] [rbp-88h]
  __int128 v30; // [rsp+38h] [rbp-80h]
  __int64 v31; // [rsp+48h] [rbp-70h]
  __int128 v32; // [rsp+50h] [rbp-68h]
  _QWORD v33[11]; // [rsp+60h] [rbp-58h] BYREF

  v33[3] = __readfsqword(0x28u);
  v8 = *(_QWORD **)(a2 + 8);
  v9 = (_QWORD *)v8[1];
  if ( v9[1] == 1 && *(_DWORD *)*v9 == 1 )
  {
    v19 = *(_QWORD *)(a1 + 440);
    v20 = sub_22D8D0(a1, *(_QWORD *)(*v9 + 8LL), *(unsigned __int16 *)(*v9 + 18LL), (int)v8 + 48, a3, a4, a5, a6);
    v17 = v20;
    if ( v20 != -1 && v20 >= (int)v19 )
    {
      v21 = *(_QWORD *)(a1 + 432) + 104LL * v20;
      if ( *(_DWORD *)(v21 + 88) == *(unsigned __int16 *)(*v9 + 18LL) )
      {
        sub_1C42B0(v21, *(_DWORD *)(a2 + 4));
        copy_tinfo_t(v21 + 80, *(_QWORD *)(a2 + 8) + 48LL);
        v22 = *(_QWORD *)(a2 + 8);
        if ( *(_QWORD *)(v22 + 32) > 1u )
          sub_20E990(a1, v21, *(_QWORD *)(v22 + 24), 4);
      }
    }
  }
  else
  {
    v10 = s1;
    if ( v8[4] )
      v10 = (const char *)v8[3];
    v11 = sub_20DD80(a1, v10, 4294967287LL);
    v12 = *(_QWORD *)(a2 + 8);
    if ( v11 )
    {
      v13 = 0;
      v14 = nullptr;
    }
    else
    {
      v13 = *(_QWORD *)(v12 + 32);
      v14 = nullptr;
      if ( v13 )
      {
        v25 = *(_QWORD *)(a2 + 8);
        v14 = (void *)qalloc_or_throw(*(_QWORD *)(v12 + 32));
        memcpy(v14, *(const void **)(v25 + 24), v13);
        v12 = *(_QWORD *)(a2 + 8);
      }
    }
    v15 = *(_DWORD *)(a2 + 4);
    v26[0] = 0;
    v24 = v15;
    copy_argloc(v26, v12);
    v27 = a4;
    v28 = 1;
    v29 = nullptr;
    v30 = 0;
    if ( v13 )
    {
      v29 = (void *)qalloc_or_throw(v13);
      *((_QWORD *)&v30 + 1) = v13;
      memcpy(v29, v14, v13);
      *(_QWORD *)&v30 = v13;
    }
    v31 = 0;
    v32 = 0;
    v33[0] = 0;
    copy_tinfo_t(v33, v12 + 48);
    v16 = v28;
    v33[2] = 0;
    BYTE1(v16) = BYTE1(v28) & 0x7E;
    v28 = v16 | 0x100000;
    v33[1] = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v24), _mm_cvtsi32_si128(a3)).m128i_u64[0];
    v17 = sub_1F11A0(a1, (__int64)v26, 0);
    clear_tinfo_t(v33);
    if ( v31 )
    {
      *(_QWORD *)&v32 = 0;
      qfree(v31);
    }
    if ( v29 )
    {
      *(_QWORD *)&v30 = 0;
      qfree(v29);
    }
    cleanup_argloc(v26);
    if ( v14 )
      qfree(v14);
  }
  return v17;
}
