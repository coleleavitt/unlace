__int64 __fastcall sub_21506E0(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v4; // rax
  __int64 v5; // r14
  __int64 v6; // r13
  __int64 v7; // r15
  const __m128i *v8; // r12
  __int64 v9; // rdi
  unsigned __int64 v10; // rax
  __int64 v11; // rbp
  unsigned int v12; // esi
  unsigned __int64 v13; // r8
  int v14; // edi
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // r9
  const char *v18; // r10
  unsigned __int64 v19; // rdx
  __m128i *v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // r13
  __int64 v23; // rsi
  __int64 v24; // rdi
  __int64 v25; // rsi
  __int64 v26; // rdx
  unsigned __int64 v27; // [rsp+0h] [rbp-A8h]
  unsigned __int64 v28; // [rsp+0h] [rbp-A8h]
  unsigned __int64 v29; // [rsp+8h] [rbp-A0h]
  const char *v30; // [rsp+10h] [rbp-98h] BYREF
  __int16 v31; // [rsp+30h] [rbp-78h]
  const char *v32; // [rsp+40h] [rbp-68h] BYREF
  unsigned int v33; // [rsp+48h] [rbp-60h]
  __int64 v34; // [rsp+50h] [rbp-58h]
  int v35; // [rsp+58h] [rbp-50h]
  __int16 v36; // [rsp+60h] [rbp-48h]

  v2 = *(_QWORD *)(a1 + 8);
  if ( **(_DWORD **)(v2 + 48) == 3 )
  {
    v4 = sub_2153C00(v2);
    if ( *(_DWORD *)v4 == 2 )
    {
      v5 = *(_QWORD *)(v4 + 16);
      v6 = *(_QWORD *)(v4 + 8);
      v7 = v5 + 1;
    }
    else
    {
      v22 = *(_QWORD *)(v4 + 16);
      if ( v22 )
      {
        v7 = v22 - 1;
        v5 = v22 - 1;
        if ( v22 == 1 )
          v7 = 1;
        else
          v5 = v22 - 2;
        v22 = 1;
      }
      else
      {
        v5 = 0;
        v7 = 1;
      }
      v6 = *(_QWORD *)(v4 + 8) + v22;
    }
    v8 = (const __m128i *)&v32;
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 8) + 152LL))(*(_QWORD *)(a1 + 8));
    v9 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL);
    v36 = 257;
    v30 = ".note";
    v31 = 259;
    v10 = sub_210B6D0(v9, &v30, 7u, 0, 0, (__int64)&v32, 0, 0xFFFFFFFF, 0);
    v11 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 24LL);
    v12 = *(_DWORD *)(v11 + 128);
    v13 = *(_QWORD *)(v11 + 120);
    if ( v12 )
    {
      v16 = v12;
      v15 = 32LL * v12;
      v23 = v13 + v15 - 32;
      v17 = *(_QWORD *)(v23 + 16);
      v14 = *(_DWORD *)(v23 + 24);
      v18 = *(const char **)v23;
      v12 = *(_DWORD *)(v23 + 8);
    }
    else
    {
      v14 = 0;
      v15 = 0;
      v16 = 0;
      v17 = 0;
      v18 = nullptr;
    }
    v32 = v18;
    v19 = v16 + 1;
    v20 = (__m128i *)(v13 + v15);
    v33 = v12;
    v34 = v17;
    v35 = v14;
    if ( v19 > *(unsigned int *)(v11 + 132) )
    {
      v24 = v11 + 120;
      v25 = v11 + 136;
      if ( v13 > (unsigned __int64)&v32 || v20 <= (__m128i *)&v32 )
      {
        v28 = v10;
        sub_2237220(v24, v25, v19, 32);
        v10 = v28;
        v20 = (__m128i *)(*(_QWORD *)(v11 + 120) + 32LL * *(unsigned int *)(v11 + 128));
      }
      else
      {
        v29 = v13;
        v27 = v10;
        sub_2237220(v24, v25, v19, 32);
        v26 = *(_QWORD *)(v11 + 120);
        v10 = v27;
        v8 = (const __m128i *)((char *)&v32 + v26 - v29);
        v20 = (__m128i *)(v26 + 32LL * *(unsigned int *)(v11 + 128));
      }
    }
    *v20 = _mm_loadu_si128(v8);
    v20[1] = _mm_loadu_si128(v8 + 1);
    v21 = *(_QWORD *)(a1 + 8);
    ++*(_DWORD *)(v11 + 128);
    (*(void (__fastcall **)(_QWORD, unsigned __int64, _QWORD))(**(_QWORD **)(v21 + 24) + 176LL))(
      *(_QWORD *)(v21 + 24),
      v10,
      0);
    (*(void (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(*(_QWORD *)(a1 + 8) + 24LL) + 536LL))(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 24LL),
      v7,
      4);
    (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(*(_QWORD *)(a1 + 8) + 24LL) + 536LL))(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 24LL),
      0,
      4);
    (*(void (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(*(_QWORD *)(a1 + 8) + 24LL) + 536LL))(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 24LL),
      1,
      4);
    (*(void (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(*(_QWORD *)(a1 + 8) + 24LL) + 512LL))(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 24LL),
      v6,
      v5);
    (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(*(_QWORD *)(a1 + 8) + 24LL) + 536LL))(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 24LL),
      0,
      1);
    (*(void (__fastcall **)(_QWORD, __int64, _QWORD, __int64, _QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 8) + 24LL) + 608LL))(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 24LL),
      2,
      0,
      1,
      0);
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 8) + 24LL) + 168LL))(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 24LL));
    return 0;
  }
  else
  {
    v36 = 259;
    v32 = "expected string";
    return sub_21543E0(v2, &v32, 0, 0);
  }
}
