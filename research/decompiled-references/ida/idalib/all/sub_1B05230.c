__int64 __fastcall sub_1B05230(__int64 a1, const __m128i *a2)
{
  const __m128i *v2; // r12
  unsigned __int64 v4; // rbx
  __int64 v5; // rcx
  unsigned __int64 v6; // rsi
  __int64 v7; // rdx
  __m128i *v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdi
  __m128i v14; // xmm0
  __int32 v15; // eax
  char v17; // dl
  void *v18; // rax
  __int32 v19; // edx
  const void *v20; // rsi
  void *v21; // r13
  char *v22; // r12
  __int64 v23; // rbx
  void *v24; // rdi
  int v25; // r14d
  __int64 v26; // rax
  _QWORD *v27; // rbx
  void *v28; // rdi
  int v29; // r14d
  __int64 v30; // rdx
  _DWORD v31[46]; // [rsp+10h] [rbp-B8h] BYREF

  v2 = a2;
  v4 = *(_QWORD *)(*(_QWORD *)a1 + 3032LL);
  if ( !v4 )
    v4 = *(_QWORD *)(*(_QWORD *)a1 + 544LL);
  if ( (*(_BYTE *)(v4 + 8) & 0x7F) == 0x18
    || (*(_BYTE *)(v4 + 8) & 0x7F) == 0
    || sub_B8E4C0(v4)
    || sub_B8E5D0(v4)
    || (v17 = *(_BYTE *)(v4 + 8) & 0x7F, ((v17 + 69) & 0x7Fu) <= 2)
    || v17 == 72 )
  {
    if ( (*(_BYTE *)(sub_168B6E0(a1) + 60) & 0x20) != 0 )
    {
      sub_168B9F0((__int64)v31, (__int64 *)a1, a2[3].m128i_u32[0], 0x1B37u, 0);
      sub_15F7200(v31);
    }
    v5 = *(unsigned int *)(a1 + 24);
    v6 = *(_QWORD *)(a1 + 16);
    v7 = v5 + 1;
    v8 = (__m128i *)(v6 + 56 * v5);
    if ( v5 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 28) )
    {
      v21 = (void *)(a1 + 32);
      if ( v6 > (unsigned __int64)v2 || v8 <= v2 )
      {
        v27 = (_QWORD *)sub_2237400(a1 + 16, a1 + 32, v7, 56, v31);
        sub_1B05140(a1 + 16, v27);
        v28 = *(void **)(a1 + 16);
        v29 = v31[0];
        if ( v28 != v21 )
          free(v28);
        v30 = *(unsigned int *)(a1 + 24);
        *(_QWORD *)(a1 + 16) = v27;
        *(_DWORD *)(a1 + 28) = v29;
        v8 = (__m128i *)&v27[7 * v30];
      }
      else
      {
        v22 = &v2->m128i_i8[-v6];
        v23 = sub_2237400(a1 + 16, a1 + 32, v7, 56, v31);
        sub_1B05140(a1 + 16, (_QWORD *)v23);
        v24 = *(void **)(a1 + 16);
        v25 = v31[0];
        if ( v24 != v21 )
          free(v24);
        v26 = *(unsigned int *)(a1 + 24);
        *(_QWORD *)(a1 + 16) = v23;
        v2 = (const __m128i *)&v22[v23];
        *(_DWORD *)(a1 + 28) = v25;
        v8 = (__m128i *)(v23 + 56 * v26);
      }
    }
    v8->m128i_i64[0] = 0;
    v8->m128i_i64[1] = 0;
    v8[1].m128i_i32[0] = 0;
    operator delete(0, 0, 8);
    v13 = v2[1].m128i_u32[0];
    v8[1].m128i_i32[0] = v13;
    if ( (_DWORD)v13 )
    {
      v18 = (void *)sub_22300B0(16 * v13, 8, v9, v10, v11, v12);
      v19 = v2->m128i_i32[2];
      v8->m128i_i64[0] = (__int64)v18;
      v20 = (const void *)v2->m128i_i64[0];
      v8->m128i_i32[2] = v19;
      v8->m128i_i32[3] = v2->m128i_i32[3];
      memcpy(v18, v20, 16LL * v8[1].m128i_u32[0]);
    }
    else
    {
      v8->m128i_i64[0] = 0;
      v8->m128i_i64[1] = 0;
    }
    v14 = _mm_loadu_si128(v2 + 2);
    v8[1].m128i_i32[2] = v2[1].m128i_i32[2];
    v15 = v2[1].m128i_i32[3];
    v8[2] = v14;
    v8[1].m128i_i32[3] = v15;
    v8[3].m128i_i32[0] = v2[3].m128i_i32[0];
    ++*(_DWORD *)(a1 + 24);
    return 1;
  }
  else
  {
    sub_168B9F0((__int64)v31, (__int64 *)a1, a2[3].m128i_u32[0], 0x11F6u, 0);
    sub_15F7200(v31);
    return 0;
  }
}
