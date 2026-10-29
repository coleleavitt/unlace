__int64 __fastcall sub_1A7B0(__int64 a1, _WORD *a2, size_t a3, const __m128i *a4)
{
  __int64 v7; // rax
  __m128i v8; // xmm1
  unsigned __int64 v9; // r13
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rdx
  __int64 v13; // rsi
  unsigned int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  bool v19; // dl
  unsigned __int64 v20; // rax
  __int64 v21; // r13
  int v22; // eax
  __int64 v23; // rbp
  __int64 *v24; // r15
  __int64 v25; // rbx
  unsigned __int8 v26; // al
  __int64 *v28; // rbx
  unsigned __int8 v29; // al
  __int64 v30; // r8
  __int64 v31; // rdi
  __m128i v32; // [rsp+0h] [rbp-C8h] BYREF
  void (__fastcall *v33)(__m128i *, __m128i *, __int64); // [rsp+10h] [rbp-B8h]
  __int64 v34; // [rsp+18h] [rbp-B0h]
  __m128i v35[6]; // [rsp+20h] [rbp-A8h] BYREF
  unsigned __int64 v36; // [rsp+88h] [rbp-40h]

  v36 = __readfsqword(0x28u);
  v7 = a4[1].m128i_i64[1];
  v32 = 0;
  v33 = nullptr;
  v34 = v7;
  if ( a4[1].m128i_i64[0] )
  {
    v8 = _mm_loadu_si128(a4);
    v33 = (void (__fastcall *)(__m128i *, __m128i *, __int64))a4[1].m128i_i64[0];
    a4[1].m128i_i64[0] = 0;
    a4[1].m128i_i64[1] = 0;
    v32 = v8;
  }
  sub_C960((__int64)v35, a1, (__int64)a2, a3, &v32);
  if ( v33 )
    v33(&v32, &v32, 3);
  v9 = *(_QWORD *)(a1 + 72);
  v10 = *(_QWORD *)(a1 + 64);
  if ( v9 <= v10 )
  {
    v11 = v10 - v9;
    if ( v11 == -1 || v11 > 2 )
    {
      v12 = v9 + *(_QWORD *)(a1 + 56);
      if ( *(_WORD *)v12 == 21599 && *(_BYTE *)(v12 + 2) == 116 )
      {
        v31 = *(_QWORD *)(a1 + 56);
        v13 = *(_QWORD *)(a1 + 64);
        *(_QWORD *)(a1 + 72) = v9 + 3;
        v21 = sub_21AE0(v31, v13, a1);
        goto LABEL_26;
      }
    }
  }
  v13 = a3;
  v14 = sub_BE90(a2, a3);
  if ( !v14 )
    goto LABEL_25;
  v19 = 0;
  if ( a3 > 1 )
    v19 = *a2 == 21599;
  *(_BYTE *)(a1 + 80) = v19;
  *(_QWORD *)(a1 + 72) = v9 + v14;
  if ( !(unsigned __int8)sub_1A620(a1) )
    goto LABEL_25;
  v13 = 1;
  v20 = sub_12C70((_QWORD *)a1, 1);
  v16 = 96;
  *(_WORD *)(v20 + 16) = 96;
  v21 = v20;
  *(_BYTE *)(v20 + 18) = 0;
  v22 = *(_DWORD *)(a1 + 96);
  if ( !v22 )
    goto LABEL_25;
  v23 = v21;
  while ( 1 )
  {
    v13 = *(_QWORD *)(a1 + 88);
    v24 = (__int64 *)(v13 + 8LL * (unsigned int)(v22 - 1));
    v25 = *v24;
    if ( !sub_BDF0(*(_WORD *)(*v24 + 16)) )
      break;
    *(_DWORD *)(a1 + 96) = v15;
    if ( !v25 )
      goto LABEL_28;
    v13 = v25;
    sub_C080(v23, v25, (_QWORD *)a1);
    v22 = *(_DWORD *)(a1 + 96);
    if ( (unsigned __int16)(*(_WORD *)(v25 + 16) - 160) <= 1u )
      v23 = v25;
    if ( !v22 )
      goto LABEL_19;
  }
  v24 = (__int64 *)(v13 + 8LL * *(unsigned int *)(a1 + 96));
LABEL_28:
  if ( (__int64 *)v13 != v24 )
  {
    v28 = (__int64 *)v13;
    while ( 1 )
    {
      v13 = *v28;
      if ( *(_WORD *)(*v28 + 16) == 221 )
        break;
      sub_C080(v23, v13, (_QWORD *)a1);
LABEL_31:
      if ( v24 == ++v28 )
        goto LABEL_19;
    }
    v29 = *(_BYTE *)(v13 + 18);
    if ( v29 > 4u )
    {
      v30 = 0;
      if ( v29 != 5 || !*(_DWORD *)(v13 + 8) )
        goto LABEL_36;
      v13 = *(_QWORD *)v13;
    }
    else
    {
      v30 = 0;
      if ( v29 <= 2u )
      {
LABEL_36:
        v13 = v30;
        sub_C080(v23, v30, (_QWORD *)a1);
        goto LABEL_31;
      }
    }
    v30 = *(_QWORD *)v13;
    goto LABEL_36;
  }
LABEL_19:
  v26 = *(_BYTE *)(v21 + 18);
  if ( v26 > 4u )
  {
    if ( v26 == 5 && *(_DWORD *)(v21 + 8) )
      goto LABEL_26;
LABEL_25:
    v21 = 0;
    goto LABEL_26;
  }
  if ( v26 <= 2u )
    v21 = 0;
LABEL_26:
  sub_CBD0(v35, v13, v15, v16, v17, v18);
  return v21;
}

