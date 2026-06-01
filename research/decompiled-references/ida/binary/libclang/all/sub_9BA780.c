__int64 __fastcall sub_9BA780(__int64 a1, unsigned int a2, __int64 a3)
{
  const __m128i *v5; // rax
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  _QWORD *v9; // rdi
  __int64 (__fastcall *v10)(__int64); // rdx
  __int64 (__fastcall *v11)(__int64); // rax
  _QWORD *v12; // rdi
  __int64 v13; // rax
  __int64 *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // r13
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // r12
  __int64 v19; // rax
  unsigned __int64 *v20; // rax
  __int64 v21; // rbx
  const __m128i *v22; // rax
  __m128i v23; // xmm0
  __int64 v24; // rax
  __int64 v25; // rsi
  __int64 v26; // rax
  __m128i v27; // xmm0
  __m128i v29; // [rsp+0h] [rbp-E8h] BYREF
  __int64 v30; // [rsp+10h] [rbp-D8h]
  __m128i v31; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v32; // [rsp+30h] [rbp-B8h]
  _DWORD v33[16]; // [rsp+40h] [rbp-A8h] BYREF
  _QWORD v34[3]; // [rsp+80h] [rbp-68h] BYREF
  __int64 *v35; // [rsp+98h] [rbp-50h]
  unsigned int v36; // [rsp+A0h] [rbp-48h]
  int v37; // [rsp+B0h] [rbp-38h]

  sub_A1BF70(v34, *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 176) + 224LL) + 8LL * a2));
  v5 = (const __m128i *)sub_A1A5A0(*(_QWORD *)(a1 + 184), 24);
  v9 = *(_QWORD **)(a1 + 24);
  v10 = sub_8D7E60;
  v29 = _mm_loadu_si128(v5);
  v30 = v5[1].m128i_i64[0];
  v11 = *(__int64 (__fastcall **)(__int64))(*v9 + 104LL);
  if ( v11 == sub_8D7E60 )
  {
    v12 = (_QWORD *)v9[3];
    v10 = *(__int64 (__fastcall **)(__int64))(*v12 + 104LL);
    if ( v10 != v11 )
    {
LABEL_23:
      ((void (__fastcall *)(_QWORD *, __int64, __int64 (__fastcall *)(__int64)))v10)(v12, 24, v10);
      goto LABEL_6;
    }
    v9 = (_QWORD *)v12[3];
    v11 = *(__int64 (__fastcall **)(__int64))(*v9 + 104LL);
    if ( v11 == v10 )
    {
      v12 = (_QWORD *)v9[3];
      v10 = *(__int64 (__fastcall **)(__int64))(*v12 + 104LL);
      if ( v10 == v11 )
      {
        (*(void (__fastcall **)(_QWORD, __int64, __int64 (__fastcall *)(__int64), __int64, __int64, __int64, __int64, __int64, __int64))(*(_QWORD *)v12[3] + 104LL))(
          v12[3],
          24,
          v10,
          v6,
          v7,
          v8,
          v29.m128i_i64[0],
          v29.m128i_i64[1],
          v30);
        goto LABEL_6;
      }
      goto LABEL_23;
    }
  }
  ((void (__fastcall *)(_QWORD *, __int64, __int64 (__fastcall *)(__int64)))v11)(v9, 24, v10);
LABEL_6:
  sub_97DB00((__int64)v33, v29.m128i_i64);
  v13 = sub_7A7530(a3, 1);
  sub_6A63E0(v13, (__int64)v33);
  if ( v37 == 1 )
  {
    v14 = v35;
  }
  else
  {
    if ( (unsigned int)(v37 - 2) <= 1 )
      BUG();
    v14 = (__int64 *)v35[4];
  }
  v15 = *v14;
  v16 = a3;
  v17 = *v14 & 0xFFFFFFFFFFFFFFFCLL;
  if ( (v15 & 2) == 0 )
    v17 = 0;
  v18 = v17;
  v19 = *(unsigned int *)(a1 + 232);
  if ( *(unsigned int *)(a1 + 236) < (unsigned __int64)(v19 + 1) )
  {
    sub_25D6060(a1 + 224, a1 + 240, v19 + 1, 16);
    v19 = *(unsigned int *)(a1 + 232);
  }
  v20 = (unsigned __int64 *)(*(_QWORD *)(a1 + 224) + 16 * v19);
  *v20 = v18;
  v20[1] = v16;
  ++*(_DWORD *)(a1 + 232);
  v21 = *(_QWORD *)(a1 + 184);
  v22 = (const __m128i *)sub_A1A5A0(v21, 24);
  v23 = _mm_loadu_si128(v22);
  v24 = v22[1].m128i_i64[0];
  v31 = v23;
  v32 = v24;
  sub_A1A5E0(v21, 24);
  if ( v37 )
    goto LABEL_19;
  v25 = v35[4];
  if ( *(_DWORD *)(v25 + 16) != v36 && v36 )
    v25 = *(__int64 *)((char *)v35 + v36 + 32);
  if ( !*(_BYTE *)(v25 + 51) || (v26 = (__int64)v35 + v34[0] + 72, v34[0] != v36) )
LABEL_19:
    v26 = (__int64)v35 + v34[0] + 40;
  v27 = _mm_load_si128(&v31);
  *(_BYTE *)(v26 + 16) = v32;
  *(__m128i *)v26 = v27;
  sub_A1DB00(v34);
  if ( v33[0] > 1u )
    sub_69F740((__int64)v33);
  return sub_A1C0C0(v34);
}

