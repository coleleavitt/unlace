__m128i *__fastcall sub_180CBF0(__int64 a1, __int64 a2, const __m128i *a3, __int64 a4, __int64 a5, __int64 a6)
{
  const void *v10; // rsi
  __int64 v11; // rax
  __int64 v12; // r9
  _QWORD *v13; // r12
  __int64 v14; // r8
  const void *v15; // r13
  __int64 v16; // rax
  __m128i *v17; // rbx
  __int64 *v19; // rbx
  __int64 v20; // r13
  unsigned int *v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rax
  unsigned int *v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  _QWORD *v31; // rbx
  __int64 v32; // rax
  __int64 v33; // [rsp+8h] [rbp-F0h]
  const void *v34; // [rsp+10h] [rbp-E8h] BYREF
  size_t v35; // [rsp+18h] [rbp-E0h]
  _QWORD v36[2]; // [rsp+20h] [rbp-D8h] BYREF
  _QWORD v37[2]; // [rsp+30h] [rbp-C8h] BYREF
  _BYTE v38[184]; // [rsp+40h] [rbp-B8h] BYREF

  v10 = (const void *)a3[3].m128i_i64[0];
  v35 = a3[2].m128i_u32[2];
  v34 = v10;
  v11 = sub_1804C00(a2, v10, v35, a4, a5, a6);
  if ( v11 )
  {
    v19 = (__int64 *)(a1 + 8);
    v20 = v11;
    sub_168B9F0((__int64)v38, v19, *(_DWORD *)(v11 + 24), 0x13D9u, 0);
    v21 = *(unsigned int **)(*(_QWORD *)v20 + 16LL);
    v22 = *v21;
    v36[0] = v21 + 4;
    v36[1] = v22;
    v23 = sub_166BAF0((__int64)v38, (__int64)v36);
    v24 = *(unsigned int **)(a3->m128i_i64[0] + 16);
    v25 = *v24;
    v37[0] = v24 + 4;
    v37[1] = v25;
    v26 = sub_166BAF0(v23, (__int64)v37);
    sub_1682BA0(v26, (__int64)&v34);
    sub_15F7200(v38);
    sub_168B9F0((__int64)v38, v19, a3[1].m128i_u32[2], 0x16CFu, 0);
    sub_15F7200(v38);
    if ( (*(_BYTE *)(a2 + 29) & 1) == 0 )
      return nullptr;
    v31 = sub_B8C3D0(a2, (__int64)v19, v27, v28, v29, v30);
    sub_18050A0((__int64)v31);
    if ( *((_DWORD *)v31 + 2) )
    {
      return nullptr;
    }
    else
    {
      *(_BYTE *)(a2 + 29) &= ~1u;
      return nullptr;
    }
  }
  else
  {
    v13 = *(_QWORD **)(a1 + 248);
    v14 = a3[2].m128i_u32[2];
    v15 = (const void *)a3[3].m128i_i64[0];
    v16 = v13[294];
    v13[304] += 56LL;
    v17 = (__m128i *)((v16 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    if ( v13[295] >= (unsigned __int64)&v17[3].m128i_u64[1] && v16 )
    {
      v13[294] = (char *)v17 + 56;
    }
    else
    {
      v33 = v14;
      v32 = sub_986170((__int64)(v13 + 294), 56, 56, 3, v14, v12);
      v14 = v33;
      v17 = (__m128i *)v32;
    }
    sub_B2E740(v17, (__int64)v13, a3, v15, v14);
  }
  return v17;
}
