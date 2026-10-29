void __fastcall sub_1817920(__int64 *a1, __int64 a2, const __m128i *a3, __int64 a4, __int64 a5, __int64 a6)
{
  _QWORD *v8; // rdi
  __int64 v9; // rax
  __m128i *v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rax
  __int64 v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rbp
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rax
  _QWORD *v23; // rax
  __int64 v24; // [rsp+8h] [rbp-C0h] BYREF
  _BYTE v25[184]; // [rsp+10h] [rbp-B8h] BYREF

  if ( (*(_BYTE *)(a1[29] + 1) & 8) != 0 )
  {
    sub_168B9F0((__int64)v25, a1 + 1, a3[1].m128i_u32[2], 0xC85u, 0);
    v15 = sub_15DD120((__int64)v25, (__int64)a3);
    v16 = v15;
    if ( *(_BYTE *)(v15 + 120) )
    {
      sub_AE9DF0((unsigned __int8 **)(v15 + 32), 1, 2u);
      sub_15F7200(v25);
    }
    else
    {
      if ( *(_BYTE *)(v15 + 132) )
      {
        v19 = sub_168B9E0((_QWORD *)v15);
        v22 = *(_QWORD *)(v16 + 16);
        if ( v22 )
          v22 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v22 + 32LL))(*(_QWORD *)(v16 + 16));
        v24 = v22;
        v23 = sub_1587BC0(v19, &v24, v17, v18, v20, v21);
        sub_AE9DF0((unsigned __int8 **)(*v23 + 32LL * *(unsigned int *)(v16 + 128) + 8), 1, 2u);
      }
      sub_15F7200(v25);
    }
  }
  else
  {
    v8 = (_QWORD *)a1[31];
    v9 = v8[294];
    v8[304] += 40LL;
    v10 = (__m128i *)((v9 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    if ( v8[295] >= (unsigned __int64)&v10[2].m128i_u64[1] && v9 )
      v8[294] = (char *)v10 + 40;
    else
      v10 = (__m128i *)sub_986170((__int64)(v8 + 294), 40, 40, 3, a5, a6);
    sub_B10140(v10, a1[31], a3);
    sub_B8CC60(a2, (__int64)v10, v11, v12, v13, v14);
  }
}
