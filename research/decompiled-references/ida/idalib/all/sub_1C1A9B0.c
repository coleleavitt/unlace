void __fastcall sub_1C1A9B0(__int64 a1, __int64 a2, unsigned __int64 a3, __m128 si128, __m128 a5)
{
  __int64 v7; // rbx
  unsigned int v8; // eax
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned int v11; // r13d
  __int64 *v12; // r14
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // r14
  __int64 *v16; // rax
  __int64 v17; // rdi
  __int64 v18; // rdx
  unsigned __int64 v19; // rdx
  __int64 v20; // rdx
  __m128 *v21; // rax
  unsigned int v22; // eax
  unsigned __int64 v23; // rsi
  __int64 v24; // r8
  __int64 v25; // r9
  unsigned __int64 v26; // rax
  __int64 *v27; // rbx
  __int64 v28; // r12
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // [rsp+8h] [rbp-40h] BYREF
  __int64 *v31[6]; // [rsp+18h] [rbp-30h] BYREF

  v30 = a3;
  if ( (a2 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
  {
    v7 = *(_QWORD *)(*(_QWORD *)(a1 + 248) + 17504LL);
    v8 = sub_2244B30("objectForKeyedSubscript", 23);
    v11 = sub_2244CB0(v7, "objectForKeyedSubscript", 23, v8);
    v12 = (__int64 *)(*(_QWORD *)v7 + 8LL * v11);
    if ( *v12 )
    {
      if ( *v12 != -8 )
      {
        sub_989490(v31, v12, 0);
        v15 = *v31[0];
        v16 = *(__int64 **)(*v31[0] + 8);
        if ( !v16 )
          goto LABEL_6;
        goto LABEL_17;
      }
      --*(_DWORD *)(v7 + 16);
    }
    v20 = *(_QWORD *)(v7 + 24);
    *(_QWORD *)(v7 + 104) += 40LL;
    v21 = (__m128 *)((v20 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    if ( *(_QWORD *)(v7 + 32) >= (unsigned __int64)&v21[2].m128_u64[1] && v20 )
      *(_QWORD *)(v7 + 24) = (char *)v21 + 40;
    else
      v21 = (__m128 *)sub_986170(v7 + 24, 40, 40, 3, v9, v10);
    v21[2].m128_i8[6] = 116;
    si128 = (__m128)_mm_load_si128((const __m128i *)&xmmword_23AAB80);
    v21[2].m128_i16[2] = 28777;
    v21[2].m128_i32[0] = 1919120226;
    v21[1] = si128;
    v21[2].m128_i8[7] = 0;
    v21->m128_u64[0] = 23;
    v21->m128_u64[1] = 0;
    *v12 = (__int64)v21;
    ++*(_DWORD *)(v7 + 12);
    v22 = sub_22450D0(v7, v11);
    sub_989490(v31, (__int64 *)(*(_QWORD *)v7 + 8LL * v22), 0);
    v15 = *v31[0];
    v16 = *(__int64 **)(*v31[0] + 8);
    if ( !v16 )
    {
LABEL_6:
      v17 = *(_QWORD *)(v7 + 120);
      if ( !v17
        || (v16 = (__int64 *)(*(__int64 (__fastcall **)(__int64, const char *, __int64))(*(_QWORD *)v17 + 16LL))(
                               v17,
                               "objectForKeyedSubscript",
                               23),
            (*(_QWORD *)(v15 + 8) = v16) == 0) )
      {
        v18 = *(_QWORD *)(v7 + 24);
        *(_QWORD *)(v7 + 104) += 24LL;
        v16 = (__int64 *)((v18 + 7) & 0xFFFFFFFFFFFFFFF8LL);
        if ( *(_QWORD *)(v7 + 32) >= (unsigned __int64)(v16 + 3) && v18 )
          *(_QWORD *)(v7 + 24) = v16 + 3;
        else
          v16 = (__int64 *)sub_986170(v7 + 24, 24, 24, 3, v13, v14);
        v19 = *v16 & 0xFFFFF80000000000LL;
        v16[1] = 0;
        *v16 = v19 | 0x1FFFC05;
        *(_QWORD *)(v15 + 8) = v16;
        v16[2] = v15;
      }
    }
LABEL_17:
    v31[0] = v16;
    v23 = sub_FE3230(*(_QWORD **)(*(_QWORD *)(a1 + 248) + 17512LL), 1u, (unsigned __int64 *)v31);
    v26 = sub_19D01C0(*(_QWORD *)(a1 + 736), v23, a2, 1, v24, v25);
    if ( v26 )
    {
      v27 = *(__int64 **)(a1 + 736);
      v28 = *(_QWORD *)(**(_QWORD **)(v26 + 96) + 48LL);
      v29 = sub_EEC8C0(v30, v23, *(double *)si128.m128_u64);
      sub_19E4440(v27, v29, v28, (__int64 *)&v30, 0, 1u, si128, a5, 0, 0, 0);
    }
  }
}
