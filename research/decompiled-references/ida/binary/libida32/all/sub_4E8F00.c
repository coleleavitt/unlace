__int64 __fastcall sub_4E8F00(__int64 a1, unsigned __int64 a2, signed __int32 a3, const char *a4)
{
  unsigned int v4; // r13d
  __int64 v5; // rbx
  __int64 v7; // r15
  __m128i v8; // xmm1
  unsigned __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // r9
  __int64 v12; // rcx
  const char *v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rbx
  __int64 v16; // rdx
  void *v17; // r13
  __int64 v18; // rdx
  size_t v19; // rbp
  void *v20; // r12
  _QWORD *v21; // rax
  __int64 v23; // rax
  __int64 (__fastcall *v24)(__int64, __int64, __int64, __int64); // rax
  int v25; // ebx
  int v26; // r13d
  int v27; // ebp
  char *v28; // rax
  size_t v29; // r13
  void *v30; // rax
  __int64 v31; // [rsp+0h] [rbp-148h]
  unsigned int v32; // [rsp+Ch] [rbp-13Ch] BYREF
  void *v33; // [rsp+10h] [rbp-138h] BYREF
  __int128 v34; // [rsp+18h] [rbp-130h]
  char v35; // [rsp+28h] [rbp-120h]
  __int64 v36; // [rsp+30h] [rbp-118h] BYREF
  __int64 v37; // [rsp+38h] [rbp-110h]
  __int64 v38; // [rsp+40h] [rbp-108h]
  _BYTE v39[192]; // [rsp+48h] [rbp-100h] BYREF
  _QWORD v40[8]; // [rsp+108h] [rbp-40h] BYREF

  v4 = a2;
  v5 = a2;
  v32 = a3;
  v40[0] = __readfsqword(0x28u);
  sub_4E7970((__int64)&v33, a1, a2, a3, 0, 0);
  if ( v33 )
  {
    *(_QWORD *)&v34 = 0;
    qfree(v33);
  }
  v7 = *(_QWORD *)(a1 + 168);
  v8 = _mm_cvtsi32_si128(v32);
  v9 = HIDWORD(a2);
  if ( HIDWORD(a2) == -1 )
    LODWORD(v9) = a2;
  v33 = (void *)_mm_unpacklo_epi32(_mm_cvtsi32_si128(v9), v8).m128i_u64[0];
  v10 = sub_4E2610(v7, (unsigned int *)&v33);
  v12 = v10;
  if ( v10 == v7 + 8 )
    goto LABEL_18;
  v13 = *(const char **)(v10 + 40);
  if ( v13 != a4 )
  {
    v14 = **(_QWORD **)(a1 + 160);
    v15 = v14 + 48LL * (_QWORD)a4;
    v16 = *(_QWORD *)(v15 + 8);
    if ( v16 )
    {
      v31 = v12;
      v29 = 16 * v16;
      v30 = (void *)qalloc_or_throw(16 * v16, v13);
      v13 = *(const char **)v15;
      v20 = v30;
      memcpy(v30, *(const void **)v15, v29);
      if ( (unsigned __int8)(*(_BYTE *)(v15 + 24) - 1) > 1u )
      {
        LODWORD(v5) = 1;
LABEL_13:
        if ( v20 )
          qfree(v20);
        return (unsigned int)v5;
      }
      v12 = v31;
      v18 = *(_QWORD *)(**(_QWORD **)(a1 + 160) + 48LL * *(_QWORD *)(v31 + 40) + 8);
      v5 = **(_QWORD **)(a1 + 160) + 48LL * *(_QWORD *)(v31 + 40);
      if ( v18 )
      {
        v17 = v20;
        goto LABEL_10;
      }
      if ( v20 )
      {
        qfree(v20);
        LOBYTE(v5) = (unsigned __int8)(*(_BYTE *)(v5 + 24) - 1) > 1u;
        return (unsigned int)v5;
      }
LABEL_30:
      LOBYTE(v5) = (unsigned __int8)(*(_BYTE *)(v5 + 24) - 1) > 1u;
      return (unsigned int)v5;
    }
    if ( (unsigned __int8)(*(_BYTE *)(v15 + 24) - 1) <= 1u )
    {
      v17 = nullptr;
      v5 = v14 + 48LL * (_QWORD)v13;
      v18 = *(_QWORD *)(v5 + 8);
      if ( v18 )
      {
LABEL_10:
        v19 = 16 * v18;
        v20 = (void *)qalloc_or_throw(v19, v13, v19, v12);
        memcpy(v20, *(const void **)v5, v19);
        if ( v17 )
          qfree(v17);
        LOBYTE(v5) = (unsigned __int8)(*(_BYTE *)(v5 + 24) - 1) > 1u;
        goto LABEL_13;
      }
      goto LABEL_30;
    }
LABEL_18:
    LODWORD(v5) = 1;
    return (unsigned int)v5;
  }
  v36 = -1;
  v38 = 0;
  v37 = 0xFFFFFFFFLL;
  v21 = v39;
  do
  {
    *(_WORD *)v21 = 0;
    v21 += 3;
    *((_WORD *)v21 - 11) = 0;
    *((_WORD *)v21 - 10) = 0;
    *((_DWORD *)v21 - 1) = 0;
    *((_WORD *)v21 - 9) = 0;
    *(v21 - 2) = 0;
    *((_DWORD *)v21 - 2) = 0;
  }
  while ( v21 != v40 );
  if ( !(unsigned int)decode_insn(&v36, v4, v40, 0, 0, v11) )
    goto LABEL_18;
  v23 = *(_QWORD *)a1;
  v33 = nullptr;
  v35 = 0;
  v34 = 0;
  v24 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(v23 + 80);
  if ( v24 == sub_4DDF20 )
  {
    v25 = 0;
    v35 = 4;
    v26 = v37;
    v27 = WORD2(v37);
    if ( v39[25] == 5 )
      v25 = v39[49] == 0;
    v33 = (void *)qvector_reserve(&v33, 0, 1, 16);
    v28 = (char *)v33 + 16 * v34;
    *(_QWORD *)v28 = 0xFFFFFFFFLL;
    *((_DWORD *)v28 + 2) = v26;
    *((_DWORD *)v28 + 3) = v27 | (v25 << 16);
    LODWORD(v5) = 1;
  }
  else
  {
    LODWORD(v5) = ((__int64 (__fastcall *)(__int64, void **, unsigned int *, __int64 *, __int64))v24)(
                    a1,
                    &v33,
                    &v32,
                    &v36,
                    v5);
  }
  if ( v33 )
  {
    *(_QWORD *)&v34 = 0;
    qfree(v33);
  }
  return (unsigned int)v5;
}

