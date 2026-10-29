__m128 *__fastcall sub_20BE620(unsigned __int64 a1, _QWORD *a2, __int64 *a3)
{
  unsigned int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 *v8; // r14
  __int64 v9; // r14
  __m128 *result; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  unsigned int v13; // ecx
  _QWORD *v14; // r12
  unsigned int v15; // eax
  __m128 *v16; // [rsp+8h] [rbp-70h] BYREF
  __int64 *v17[4]; // [rsp+10h] [rbp-68h] BYREF
  __int16 v18; // [rsp+30h] [rbp-48h]

  v4 = sub_2244B30(a2, a3);
  v5 = (unsigned int)sub_2244CB0(a1 + 288, a2, a3, v4);
  v8 = (__int64 *)(*(_QWORD *)(a1 + 288) + 8 * v5);
  if ( *v8 )
  {
    if ( *v8 != -8 )
    {
      sub_20BE5E0(v17, v8, 0);
      v9 = *v17[0];
      result = *(__m128 **)(*v17[0] + 8);
      if ( result )
        return result;
      goto LABEL_4;
    }
    --*(_DWORD *)(a1 + 304);
  }
  LODWORD(v16) = v5;
  v12 = sub_22300B0((char *)a3 + 17, 8, v5, v5, v6, v7);
  v13 = (unsigned int)v16;
  v14 = (_QWORD *)v12;
  if ( a3 )
  {
    memcpy((void *)(v12 + 16), a2, (size_t)a3);
    v13 = (unsigned int)v16;
  }
  *((_BYTE *)a3 + (_QWORD)v14 + 16) = 0;
  *v14 = a3;
  v14[1] = 0;
  *v8 = (__int64)v14;
  ++*(_DWORD *)(a1 + 300);
  v15 = sub_22450D0(a1 + 288, v13);
  sub_20BE5E0(v17, (__int64 *)(*(_QWORD *)(a1 + 288) + 8LL * v15), 0);
  v9 = *v17[0];
  result = *(__m128 **)(*v17[0] + 8);
  if ( !result )
  {
LABEL_4:
    v17[0] = a2;
    v18 = 261;
    v17[1] = a3;
    v16 = (__m128 *)operator new(0x40u);
    sub_20A0CC0((__int64)v16, (__int64)v17);
    result = v16;
    v16 = (__m128 *)(a1 + 72);
    v11 = *(_QWORD *)(a1 + 72);
    *(_QWORD *)(v9 + 8) = result;
    result[3].m128_u64[0] = a1;
    *result = _mm_loadh_ps((const double *)&v16);
    *(_QWORD *)(v11 + 8) = result;
    *(_QWORD *)(a1 + 72) = result;
    if ( a3 == (__int64 *)((char *)&word_10 + 1)
      && !(*a2 ^ 0x646F6D2E6D766C6CLL | a2[1] ^ 0x67616C662E656C75LL)
      && *((_BYTE *)a2 + 16) == 115 )
    {
      *(_QWORD *)(a1 + 856) = result;
      return *(__m128 **)(v9 + 8);
    }
  }
  return result;
}
