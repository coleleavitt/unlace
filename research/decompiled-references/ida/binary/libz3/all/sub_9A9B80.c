__int64 __fastcall sub_9A9B80(__int64 a1, unsigned int a2)
{
  __int64 v3; // rax
  __int64 v4; // rdx
  int v5; // ecx
  int v6; // r8d
  int v7; // r9d
  __int64 v8; // rdi
  __int64 v9; // rax
  __int64 v10; // r14
  __int64 v11; // r12
  __int64 v12; // rax
  __int64 v13; // r14
  __int64 v14; // r13
  unsigned int v15; // eax
  __int64 v16; // rsi
  __int64 v17; // rdi
  __int64 v20; // rdx
  int v21; // ecx
  int v22; // r8d
  int v23; // r9d
  __int64 v24; // rdi
  __int64 v25; // rax
  int v26; // ecx
  int v27; // r8d
  int v28; // r9d
  __int64 v29; // rdi
  __int64 v30; // rax
  __int64 v31; // rax
  int v32; // [rsp-8h] [rbp-78h]
  int v33; // [rsp+0h] [rbp-70h]
  int v34; // [rsp+8h] [rbp-68h]
  int v35; // [rsp+Ch] [rbp-64h]
  int v36; // [rsp+10h] [rbp-60h]
  __int64 v37; // [rsp+18h] [rbp-58h] BYREF
  __int64 v38; // [rsp+20h] [rbp-50h] BYREF
  __int64 v39; // [rsp+28h] [rbp-48h]
  __int64 v40; // [rsp+30h] [rbp-40h] BYREF
  __int64 *v41; // [rsp+38h] [rbp-38h]
  __m128i v42; // [rsp+40h] [rbp-30h] BYREF

  v3 = *(_QWORD *)(a1 + 24);
  ++*(_DWORD *)(a1 + 428);
  v38 = 0;
  v39 = v3;
  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 744) + 8LL * a2);
  if ( v4 )
  {
    BYTE4(v40) &= 0xFCu;
    v42.m128i_i8[4] &= 0xFCu;
    LODWORD(v40) = 0;
    v41 = nullptr;
    v42.m128i_i32[0] = 1;
    v42.m128i_i64[1] = 0;
    sub_27B950((__int64)qword_1C7F2C0, (__int64)&v40, (int *)(v4 + 48));
    v8 = *(_QWORD *)(a1 + 480);
    if ( !v8 )
    {
      sub_16669E0(a1 + 472);
      v8 = *(_QWORD *)(a1 + 480);
    }
    sub_166A700(v8, (unsigned int)&v40, 1, v5, v6, v7);
    v9 = sub_15E1B70(*(_QWORD *)(a1 + 472));
    v10 = v9;
    if ( v9 )
      ++*(_DWORD *)(v9 + 8);
  }
  else
  {
    v20 = *(_QWORD *)(*(_QWORD *)(a1 + 752) + 8LL * a2);
    if ( v20 )
    {
      BYTE4(v40) &= 0xFCu;
      v42.m128i_i8[4] &= 0xFCu;
      LODWORD(v40) = 0;
      v41 = nullptr;
      v42.m128i_i32[0] = 1;
      v42.m128i_i64[1] = 0;
      sub_27B950((__int64)qword_1C7F2C0, (__int64)&v40, (int *)(v20 + 48));
      v24 = *(_QWORD *)(a1 + 480);
      if ( !v24 )
      {
        sub_16669E0(a1 + 472);
        v24 = *(_QWORD *)(a1 + 480);
      }
      sub_166A700(v24, (unsigned int)&v40, 1, v21, v22, v23);
      v25 = sub_15E1B70(*(_QWORD *)(a1 + 472));
      v10 = v25;
      if ( v25 )
        ++*(_DWORD *)(v25 + 8);
    }
    else
    {
      v40 = 0;
      v41 = nullptr;
      v42 = (__m128i)1uLL;
      sub_182CBA0(qword_1C7F2C0, &v42);
      v29 = *(_QWORD *)(a1 + 480);
      v42.m128i_i8[4] &= ~1u;
      v42.m128i_i32[0] = 1;
      if ( !v29 )
      {
        sub_16669E0(a1 + 472);
        v29 = *(_QWORD *)(a1 + 480);
      }
      v30 = sub_166A700(v29, (unsigned int)&v40, 1, v26, v27, v28);
      v31 = sub_98B290(*(_QWORD *)(a1 + 472), **(_QWORD **)(*(_QWORD *)(a1 + 32) + 8LL * a2), v30);
      v10 = v31;
      if ( v31 )
        ++*(_DWORD *)(v31 + 8);
    }
  }
  sub_98B270(v38, v39);
  v38 = v10;
  sub_25A130((char *)&v40);
  v11 = *(_QWORD *)(a1 + 24);
  v41 = &v38;
  v40 = v11;
  v42 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)off_1C56520), (__m128i)(unsigned __int64)sub_98E170);
  if ( *(_QWORD *)(v11 + 912) )
  {
    sub_15E1A70(v11);
    v12 = sub_15E1B70(v11);
    v13 = v12;
    if ( v12 )
      ++*(_DWORD *)(v12 + 8);
    sub_966750(a1, v12, -1, 0, 0, -1, (__int64 ***)&v37, v32, v33, v34, v36, nullptr);
    if ( v37 )
      sub_186B220((void *)(v37 - 8));
    if ( v13 )
    {
      v35 = *(_DWORD *)(v13 + 8);
      *(_DWORD *)(v13 + 8) = v35 - 1;
      if ( v35 == 1 )
        sub_15D7BC0(v11, v13);
    }
  }
  sub_B6F780(*(_QWORD *)(a1 + 16));
  if ( *(_QWORD *)(v11 + 912) )
    std::__ostream_insert<char,std::char_traits<char>>();
  if ( v42.m128i_i64[0] )
    ((void (__fastcall *)(__int64 *, __int64 *, __int64))v42.m128i_i64[0])(&v40, &v40, 3);
  v14 = *(_QWORD *)(a1 + 16);
  (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v14 + 7488) + 48LL))(*(_QWORD *)(v14 + 7488), v38);
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v14 + 7488) + 64LL))(*(_QWORD *)(v14 + 7488));
  v15 = sub_B645B0(*(_QWORD *)(a1 + 16), v38);
  sub_8F18B0(*(_QWORD *)(a1 + 16), v15 >> 1);
  v16 = v38;
  if ( v38 )
  {
    v17 = v39;
    if ( (*(_DWORD *)(v38 + 8))-- == 1 )
      sub_15D7BC0(v17, v16);
  }
  return 1;
}

