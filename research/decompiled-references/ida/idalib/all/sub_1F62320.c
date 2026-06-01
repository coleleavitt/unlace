_DWORD *__fastcall sub_1F62320(__int64 a1, __int64 a2)
{
  __int64 v5; // rsi
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rax
  int v10; // r14d
  __int64 v11; // rdx
  __int64 v12; // rcx
  _DWORD *result; // rax
  __int64 v14; // r8
  __int64 v15; // r9
  _DWORD *v16; // r15
  __int64 v17; // r12
  _QWORD *v18; // rdi
  __int64 v19; // rax
  unsigned __int64 v20; // rbx
  __int64 v21; // rsi
  __int64 v22; // rax
  __int64 v23; // rsi
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rbx
  __m128i v28; // [rsp+10h] [rbp-58h] BYREF
  _DWORD *v29; // [rsp+20h] [rbp-48h]

  sub_1F58FC0((__int64 *)a1, a2);
  v5 = *(unsigned int *)(*(_QWORD *)a1 + 24LL);
  v6 = *(_QWORD *)(*(_QWORD *)a1 + 32LL);
  v7 = *(_QWORD *)(v6 + 8 * v5);
  v8 = (unsigned int)(*(_DWORD *)(*(_QWORD *)a1 + 24LL) + 1);
  *(_DWORD *)(*(_QWORD *)a1 + 24LL) = v5 + 2;
  v9 = *(_QWORD *)(v6 + 8 * v8);
  *(_DWORD *)(a1 + 20) = 7;
  *(_BYTE *)(a1 + 24) = 1;
  *(_DWORD *)(a1 + 16) = v9;
  *(_WORD *)(a2 + 2) = *(_WORD *)(a2 + 2) & 0xFC07 | (8 * (v9 & 0x7F));
  LODWORD(v6) = *(_DWORD *)(a1 + 20);
  v10 = *(_DWORD *)(a1 + 16) & (1 << v6);
  *(_DWORD *)(a1 + 20) = v6 + 1;
  v11 = *(_QWORD *)(*(_QWORD *)a1 + 8LL);
  v12 = *(_QWORD *)(*(_QWORD *)(v11 + 13064) + 8LL * (unsigned int)(*(_DWORD *)(v11 + 13072))-- - 8);
  *(_QWORD *)(a2 + 16) = v12;
  result = sub_BFA620((_WORD *)a2);
  if ( (_DWORD)v7 )
  {
    v16 = result;
    v17 = (__int64)&result[2 * (unsigned int)(v7 - 1) + 2];
    do
    {
      v18 = *(_QWORD **)(*(_QWORD *)(*(_QWORD *)a1 + 8LL) + 144LL);
      v19 = v18[294];
      v18[304] += 24LL;
      v20 = (v19 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      if ( v18[295] >= v20 + 24 && v19 )
      {
        v18[294] = v20 + 24;
        v21 = *(_QWORD *)a1;
        *(_QWORD *)v20 = 0;
        *(_DWORD *)(v20 + 8) = 0;
        sub_1F1E140((__int64)&v28, v21);
        *(__m128i *)v20 = _mm_loadu_si128(&v28);
      }
      else
      {
        v22 = sub_986170((__int64)(v18 + 294), 24, 24, 3, v14, v15);
        v23 = *(_QWORD *)a1;
        *(_QWORD *)v22 = 0;
        v20 = v22;
        *(_DWORD *)(v22 + 8) = 0;
        sub_1F1E140((__int64)&v28, v23);
        *(__m128i *)v20 = _mm_loadu_si128(&v28);
      }
      result = v29;
      v16 += 2;
      *(_QWORD *)(v20 + 16) = v29;
      *((_QWORD *)v16 - 1) = v20;
    }
    while ( v16 != (_DWORD *)v17 );
  }
  if ( v10 )
  {
    v24 = *(_QWORD *)a1;
    v25 = *(unsigned int *)(*(_QWORD *)a1 + 24LL);
    *(_DWORD *)(v24 + 24) = v25 + 1;
    v26 = *(_QWORD *)(*(_QWORD *)(v24 + 32) + 8 * v25);
    result = (_DWORD *)sub_BFA6D0(a2);
    result[1] = v26;
    *result = HIDWORD(v26);
  }
  return result;
}
