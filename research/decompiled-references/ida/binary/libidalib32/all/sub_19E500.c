__int64 __fastcall sub_19E500(__int64 *a1, const __m128i *a2)
{
  __int64 v3; // rax
  __int64 v4; // r12
  __int64 v5; // rax
  int v6; // edx
  int v7; // eax
  __int64 v8; // rax
  __int64 v9; // rbx
  const void *v10; // r14
  size_t v11; // rax
  size_t v12; // r12
  int v13; // eax
  __m128i si128; // xmm0
  __int16 *v15; // r12
  __int16 v16; // dx
  unsigned __int16 v17; // ax
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  void *v22; // rdi
  size_t v23; // r15
  void (__fastcall *v24)(void *); // rax
  void *v25; // rdi
  __int64 v26; // rax
  _BYTE v27[24]; // [rsp+0h] [rbp-88h] BYREF
  __int64 v28; // [rsp+18h] [rbp-70h]
  _BYTE v29[24]; // [rsp+20h] [rbp-68h] BYREF
  __int64 v30; // [rsp+38h] [rbp-50h]
  unsigned __int64 v31; // [rsp+48h] [rbp-40h]

  v31 = __readfsqword(0x28u);
  v3 = qalloc_or_throw();
  *(_DWORD *)(v3 + 8) = 1;
  v4 = v3;
  *(_QWORD *)v3 = off_235040;
  *(_QWORD *)(v3 + 16) = 0;
  *(_DWORD *)v27 = 64;
  *(_QWORD *)(v3 + 24) = a2;
  v5 = a2->m128i_i64[0];
  v6 = a2[5].m128i_i32[0];
  memset(&v27[4], 0, 20);
  *(_QWORD *)&v27[8] = v5;
  memset(&v29[4], 0, 20);
  LODWORD(v30) = -1;
  v28 = v4;
  *(_QWORD *)v29 = 2;
  v7 = (v6 & 0x200000) == 0 ? 1 : 65;
  if ( (v6 & 0x400000) != 0 )
    LOBYTE(v7) = v7 | 0x80;
  HIDWORD(v30) = v7;
  v8 = sub_19D580(a1, (__int64)v27);
  v9 = v8;
  if ( !v8 )
  {
    if ( under_debugger )
      goto LABEL_27;
    interr();
    goto LABEL_23;
  }
  *(_QWORD *)(v4 + 16) = v8;
  *(_DWORD *)(v8 + 164) = a2[7].m128i_i32[1];
  v10 = (const void *)a2[2].m128i_i64[0];
  if ( v10 && (v11 = strlen((const char *)a2[2].m128i_i64[0]), (v12 = v11) != 0) )
  {
    v22 = *(void **)(v9 + 16);
    v23 = v11 + 1;
    if ( *(_QWORD *)(v9 + 32) < v11 + 1 )
    {
      v26 = qvector_reserve();
      *(_QWORD *)(v9 + 16) = v26;
      v22 = (void *)v26;
    }
    *(_QWORD *)(v9 + 24) = v23;
    memmove(v22, v10, v12);
    *(_BYTE *)(*(_QWORD *)(v9 + 16) + v12) = 0;
  }
  else
  {
    *(_QWORD *)(v9 + 24) = 0;
  }
  v13 = a2[5].m128i_i32[0] | 0x80000;
  *(_DWORD *)(v9 + 112) = v13;
  *(__m128i *)(v9 + 96) = _mm_load_si128(a2 + 6);
  *(__m128i *)(v9 + 64) = _mm_load_si128(a2 + 3);
  si128 = _mm_load_si128(a2 + 4);
  *(_DWORD *)(v9 + 124) = 0;
  *(__m128i *)(v9 + 80) = si128;
  v15 = (__int16 *)a2->m128i_i64[1];
  v16 = *v15;
  if ( *v15 == -1 )
  {
    *v15 = sub_199DB0();
    v16 = *(_WORD *)a2->m128i_i64[1];
    if ( v16 == -1 )
      goto LABEL_25;
    v13 = *(_DWORD *)(v9 + 112);
  }
  *(_WORD *)(v9 + 168) = v16;
  if ( (v13 & 0x200000) == 0 )
    goto LABEL_11;
  v17 = a2[7].m128i_u16[1];
  if ( v17 > 0x2Eu )
  {
LABEL_23:
    if ( under_debugger )
      goto LABEL_27;
    interr();
LABEL_25:
    if ( !under_debugger )
      interr();
LABEL_27:
    BUG();
  }
  *(_WORD *)(v9 + 172) = v17;
LABEL_11:
  if ( !(unsigned __int8)sub_19DEE0(a1, v9) )
  {
    v24 = *(void (__fastcall **)(void *))(*(_QWORD *)v9 + 8LL);
    if ( v24 == sub_198CF0 )
    {
      sub_198C60(v9);
      v25 = (void *)v9;
      v9 = 0;
      operator delete(v25, 0xD0u);
    }
    else
    {
      ((void (__fastcall *)(__int64, __int64, void (__fastcall *)(void *), __int64, __int64, __int64, _QWORD, _QWORD, _QWORD, __int64, _QWORD, _QWORD, _QWORD, __int64))v24)(
        v9,
        v9,
        sub_198CF0,
        v18,
        v19,
        v20,
        *(_QWORD *)v27,
        *(_QWORD *)&v27[8],
        *(_QWORD *)&v27[16],
        v28,
        *(_QWORD *)v29,
        *(_QWORD *)&v29[8],
        *(_QWORD *)&v29[16],
        v30);
      return 0;
    }
  }
  return v9;
}

