__int64 __fastcall sub_1F6FD0(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, int a5, __int64 a6)
{
  _QWORD *v8; // rcx
  _QWORD *v9; // r14
  const char *v10; // rsi
  char v11; // al
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rsi
  size_t v15; // r13
  void *v16; // r14
  unsigned int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  int v20; // eax
  unsigned int v21; // r13d
  __int64 v23; // r15
  int v24; // eax
  __int64 v25; // rbp
  __int64 v26; // rax
  __int64 v27; // [rsp-10h] [rbp-C8h]
  unsigned int v29; // [rsp+8h] [rbp-B0h]
  __int64 v30; // [rsp+8h] [rbp-B0h]
  _DWORD v31[4]; // [rsp+10h] [rbp-A8h] BYREF
  __int64 v32; // [rsp+20h] [rbp-98h]
  int v33; // [rsp+28h] [rbp-90h]
  void *v34; // [rsp+30h] [rbp-88h]
  __int128 v35; // [rsp+38h] [rbp-80h]
  __int64 v36; // [rsp+48h] [rbp-70h]
  __int128 v37; // [rsp+50h] [rbp-68h]
  __int64 v38; // [rsp+60h] [rbp-58h]
  unsigned __int64 v39; // [rsp+68h] [rbp-50h]
  __int64 v40; // [rsp+70h] [rbp-48h]
  unsigned __int64 v41; // [rsp+78h] [rbp-40h]

  v41 = __readfsqword(0x28u);
  v8 = *(_QWORD **)(a2 + 8);
  v9 = (_QWORD *)v8[1];
  if ( v9[1] == 1 && *(_DWORD *)*v9 == 1 )
  {
    v23 = *(_QWORD *)(a1 + 440);
    v24 = sub_232C90(a1, *(_QWORD *)(*v9 + 8LL), *(unsigned __int16 *)(*v9 + 18LL), (int)v8 + 48, a3, a4, a5, a6);
    v21 = v24;
    if ( v24 != -1 && v24 >= (int)v23 )
    {
      v25 = *(_QWORD *)(a1 + 432) + 104LL * v24;
      if ( *(_DWORD *)(v25 + 88) == *(unsigned __int16 *)(*v9 + 18LL) )
      {
        sub_1C9130(v25, *(unsigned int *)(a2 + 4), 13LL * v24, v27);
        copy_tinfo_t();
        v26 = *(_QWORD *)(a2 + 8);
        if ( *(_QWORD *)(v26 + 32) > 1u )
          sub_213D50(a1, v25, *(_QWORD *)(v26 + 24), 4);
      }
    }
  }
  else
  {
    v10 = s1;
    if ( v8[4] )
      v10 = (const char *)v8[3];
    v11 = sub_213140(a1, v10, 4294967287LL);
    v14 = *(_QWORD *)(a2 + 8);
    if ( v11 )
    {
      v15 = 0;
      v16 = nullptr;
    }
    else
    {
      v15 = *(_QWORD *)(v14 + 32);
      v16 = nullptr;
      if ( v15 )
      {
        v30 = *(_QWORD *)(a2 + 8);
        v16 = (void *)qalloc_or_throw(*(_QWORD *)(v14 + 32), v14, v12, v13);
        memcpy(v16, *(const void **)(v30 + 24), v15);
        v14 = *(_QWORD *)(a2 + 8);
      }
    }
    v17 = *(_DWORD *)(a2 + 4);
    v31[0] = 0;
    v29 = v17;
    copy_argloc();
    v32 = a4;
    v33 = 1;
    v34 = nullptr;
    v35 = 0;
    if ( v15 )
    {
      v34 = (void *)qalloc_or_throw(v15, v14, v18, v19);
      *((_QWORD *)&v35 + 1) = v15;
      memcpy(v34, v16, v15);
      *(_QWORD *)&v35 = v15;
    }
    v36 = 0;
    v37 = 0;
    v38 = 0;
    copy_tinfo_t();
    v20 = v33;
    v40 = 0;
    BYTE1(v20) = BYTE1(v33) & 0x7E;
    v33 = v20 | 0x100000;
    v39 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v29), _mm_cvtsi32_si128(a3)).m128i_u64[0];
    v21 = sub_1F6560(a1, (__int64)v31, 0);
    clear_tinfo_t();
    if ( v36 )
    {
      *(_QWORD *)&v37 = 0;
      qfree(v36);
    }
    if ( v34 )
    {
      *(_QWORD *)&v35 = 0;
      qfree((__int64)v34);
    }
    cleanup_argloc();
    if ( v16 )
      qfree((__int64)v16);
  }
  return v21;
}
