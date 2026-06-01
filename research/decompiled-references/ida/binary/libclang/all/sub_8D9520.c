__int64 __fastcall sub_8D9520(__int64 a1, unsigned int a2, __int64 a3)
{
  const __m128i *v5; // rax
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  _QWORD *v9; // rdi
  __int64 (__fastcall *v10)(__int64); // rdx
  __int64 (__fastcall *v11)(__int64); // rax
  _QWORD *v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // r13
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // r12
  __int64 v20; // rax
  unsigned __int64 *v21; // rax
  __int64 v22; // rbx
  const __m128i *v23; // rax
  __m128i v24; // xmm0
  __int64 v25; // rax
  __int64 v26; // rsi
  __int64 v27; // rax
  __m128i v28; // xmm0
  __m128i v30; // [rsp+0h] [rbp-E8h] BYREF
  __int64 v31; // [rsp+10h] [rbp-D8h]
  __m128i v32; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v33; // [rsp+30h] [rbp-B8h]
  _DWORD v34[16]; // [rsp+40h] [rbp-A8h] BYREF
  _QWORD v35[3]; // [rsp+80h] [rbp-68h] BYREF
  __int64 *v36; // [rsp+98h] [rbp-50h]
  unsigned int v37; // [rsp+A0h] [rbp-48h]
  int v38; // [rsp+B0h] [rbp-38h]

  sub_A1BF70(v35, *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 176) + 224LL) + 8LL * a2));
  v5 = (const __m128i *)sub_A1A5A0(*(_QWORD *)(a1 + 184), 24);
  v9 = *(_QWORD **)(a1 + 24);
  v10 = sub_8D7E60;
  v30 = _mm_loadu_si128(v5);
  v31 = v5[1].m128i_i64[0];
  v11 = *(__int64 (__fastcall **)(__int64))(*v9 + 104LL);
  if ( v11 == sub_8D7E60 )
  {
    v12 = (_QWORD *)v9[3];
    v10 = *(__int64 (__fastcall **)(__int64))(*v12 + 104LL);
    if ( v10 != v11 )
    {
LABEL_23:
      v13 = ((__int64 (__fastcall *)(_QWORD *, __int64, __int64 (__fastcall *)(__int64)))v10)(v12, 24, v10);
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
        v13 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64 (__fastcall *)(__int64), __int64, __int64, __int64, __int64, __int64, __int64))(*(_QWORD *)v12[3] + 104LL))(
                v12[3],
                24,
                v10,
                v6,
                v7,
                v8,
                v30.m128i_i64[0],
                v30.m128i_i64[1],
                v31);
        goto LABEL_6;
      }
      goto LABEL_23;
    }
  }
  v13 = ((__int64 (__fastcall *)(_QWORD *, __int64, __int64 (__fastcall *)(__int64)))v11)(v9, 24, v10);
LABEL_6:
  sub_97DB00(v34, &v30, v13);
  v14 = sub_7A7530(a3, 1);
  sub_6A63E0(v14, (__int64)v34);
  if ( v38 == 1 )
  {
    v15 = v36;
  }
  else
  {
    if ( (unsigned int)(v38 - 2) <= 1 )
      BUG();
    v15 = (__int64 *)v36[4];
  }
  v16 = *v15;
  v17 = a3;
  v18 = *v15 & 0xFFFFFFFFFFFFFFFCLL;
  if ( (v16 & 2) == 0 )
    v18 = 0;
  v19 = v18;
  v20 = *(unsigned int *)(a1 + 232);
  if ( *(unsigned int *)(a1 + 236) < (unsigned __int64)(v20 + 1) )
  {
    sub_25D6060(a1 + 224, a1 + 240, v20 + 1, 16);
    v20 = *(unsigned int *)(a1 + 232);
  }
  v21 = (unsigned __int64 *)(*(_QWORD *)(a1 + 224) + 16 * v20);
  *v21 = v19;
  v21[1] = v17;
  ++*(_DWORD *)(a1 + 232);
  v22 = *(_QWORD *)(a1 + 184);
  v23 = (const __m128i *)sub_A1A5A0(v22, 24);
  v24 = _mm_loadu_si128(v23);
  v25 = v23[1].m128i_i64[0];
  v32 = v24;
  v33 = v25;
  sub_A1A5E0(v22, 24);
  if ( v38 )
    goto LABEL_19;
  v26 = v36[4];
  if ( *(_DWORD *)(v26 + 16) != v37 && v37 )
    v26 = *(__int64 *)((char *)v36 + v37 + 32);
  if ( !*(_BYTE *)(v26 + 51) || (v27 = (__int64)v36 + v35[0] + 72, v35[0] != v37) )
LABEL_19:
    v27 = (__int64)v36 + v35[0] + 40;
  v28 = _mm_load_si128(&v32);
  *(_BYTE *)(v27 + 16) = v33;
  *(__m128i *)v27 = v28;
  sub_A1DB00(v35);
  if ( v34[0] > 1u )
    sub_69F740((__int64)v34);
  return sub_A1C0C0(v35);
}

