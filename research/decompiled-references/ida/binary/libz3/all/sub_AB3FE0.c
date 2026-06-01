__int64 __fastcall sub_AB3FE0(__int64 a1, unsigned int a2, unsigned int a3, int a4)
{
  __int64 v4; // rax
  void *v5; // rcx
  unsigned __int64 v6; // r14
  unsigned int *v7; // rax
  _QWORD *v8; // rax
  __m128i v9; // xmm0
  __int64 v10; // r12
  bool v11; // zf
  __int64 v12; // rax
  __int64 v13; // r15
  __int64 result; // rax
  __int64 v15; // rsi
  __int64 v16; // rdi
  __int64 v17; // r13
  __int64 v18; // r14
  void *v19; // r15
  __int64 v20; // rax
  _QWORD *v21; // rax
  void *v22; // rsi
  _QWORD *v23; // rdx
  _QWORD *v24; // r14
  __int64 v25; // rax
  int v26; // [rsp-8h] [rbp-98h]
  int v27; // [rsp+0h] [rbp-90h]
  int v28; // [rsp+8h] [rbp-88h]
  int v29; // [rsp+8h] [rbp-88h]
  _DWORD v30[2]; // [rsp+Ch] [rbp-84h] BYREF
  int v31; // [rsp+14h] [rbp-7Ch] BYREF
  void *v32; // [rsp+18h] [rbp-78h] BYREF
  __int64 v33; // [rsp+20h] [rbp-70h] BYREF
  __int64 v34; // [rsp+28h] [rbp-68h] BYREF
  __m128i v35; // [rsp+30h] [rbp-60h] BYREF
  __int128 v36; // [rsp+40h] [rbp-50h] BYREF
  __m128i v37; // [rsp+50h] [rbp-40h]

  v4 = *(_QWORD *)(a1 + 32);
  v30[0] = a4;
  ++*(_DWORD *)(a1 + 56);
  v5 = **(void ***)(v4 + 8LL * a2);
  v6 = *(_QWORD *)(a1 + 24);
  v33 = **(_QWORD **)(v4 + 8LL * a3);
  v32 = v5;
  v7 = (unsigned int *)sub_15E1B70(v6);
  v35 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v7, (__m128i)v6);
  if ( v7 )
    ++v7[2];
  v37 = 0u;
  v31 = sub_966440(a1, v7) ^ 1;
  v36 = 0;
  v8 = (_QWORD *)operator new(0x28u);
  *v8 = a1;
  v9 = _mm_loadl_epi64((const __m128i *)off_1C56828);
  v8[1] = &v32;
  v10 = *(_QWORD *)(a1 + 24);
  v8[2] = v30;
  v11 = *(_QWORD *)(v10 + 912) == 0;
  v8[3] = &v33;
  v8[4] = &v35;
  *(_QWORD *)&v36 = v8;
  v37 = _mm_unpacklo_epi64(v9, (__m128i)(unsigned __int64)sub_AB3B20);
  if ( !v11 )
  {
    v12 = sub_AB3B20((__int64 *)&v36);
    v13 = v12;
    if ( v12 )
      ++*(_DWORD *)(v12 + 8);
    v34 = 0;
    sub_966750(a1, v12, -1, 0, 0, -1, (__int64 ***)&v34, v26, v27, v28, v30[1], v32);
    if ( v34 )
      sub_186B220((void *)(v34 - 8));
    if ( v13 )
    {
      v29 = *(_DWORD *)(v13 + 8);
      *(_DWORD *)(v13 + 8) = v29 - 1;
      if ( v29 == 1 )
        sub_15D7BC0(v10, v13);
    }
  }
  sub_B69FE0(*(_QWORD *)(a1 + 16), *(_DWORD *)(a1 + 8), 1, (unsigned int)&v31, 0, 0, 1);
  if ( (unsigned int)sub_8E7030(*(_QWORD *)(a1 + 16)) )
  {
    v17 = v35.m128i_i64[0];
    v18 = v33;
    v19 = v32;
    v20 = sub_918C00(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 7488LL));
    v21 = (_QWORD *)sub_180C100(v20, 32);
    v22 = v32;
    v21[2] = v18;
    v23 = v21;
    v24 = v21;
    v21[1] = v19;
    *v21 = off_1C55C98;
    v25 = *(_QWORD *)(a1 + 16);
    v24[3] = v17;
    (*(void (__fastcall **)(_QWORD, void *, _QWORD *))(**(_QWORD **)(v25 + 7488) + 16LL))(
      *(_QWORD *)(v25 + 7488),
      v22,
      v23);
    (*(void (__fastcall **)(_QWORD, __int64, _QWORD *))(**(_QWORD **)(*(_QWORD *)(a1 + 16) + 7488LL) + 16LL))(
      *(_QWORD *)(*(_QWORD *)(a1 + 16) + 7488LL),
      v33,
      v24);
  }
  if ( *(_QWORD *)(v10 + 912) )
    std::__ostream_insert<char,std::char_traits<char>>();
  result = v37.m128i_i64[0];
  if ( v37.m128i_i64[0] )
    result = ((__int64 (__fastcall *)(__int128 *, __int128 *, __int64))v37.m128i_i64[0])(&v36, &v36, 3);
  v15 = v35.m128i_i64[0];
  if ( v35.m128i_i64[0] )
  {
    v16 = v35.m128i_i64[1];
    v11 = (*(_DWORD *)(v35.m128i_i64[0] + 8))-- == 1;
    if ( v11 )
      return sub_15D7BC0(v16, v15);
  }
  return result;
}

