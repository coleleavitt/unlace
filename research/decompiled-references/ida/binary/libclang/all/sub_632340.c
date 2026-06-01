void __fastcall sub_632340(__int64 a1, _BYTE *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int8 v8; // al
  void **p_ptr; // rdi
  __m128i v10; // xmm0
  int v11; // edx
  int v12; // ecx
  int v13; // r8d
  int v14; // r9d
  int v15; // edx
  int v16; // ecx
  int v17; // r8d
  int v18; // r9d
  const __m128i *v19; // rbx
  const __m128i *v20; // r14
  __m128i v21; // xmm0
  __int64 v22; // rax
  _BYTE *v23; // rdi
  __int64 v24; // rbx
  __int64 v25; // rax
  __m128i v26; // [rsp+0h] [rbp-178h]
  __m128i v27; // [rsp+20h] [rbp-158h] BYREF
  __m128i v28; // [rsp+30h] [rbp-148h] BYREF
  void *ptr; // [rsp+40h] [rbp-138h] BYREF
  __int64 v30; // [rsp+48h] [rbp-130h]
  _BYTE v31[296]; // [rsp+50h] [rbp-128h] BYREF

  if ( a2 )
  {
    v8 = a2[28] & 0x7F;
    if ( v8 == 16 || (unsigned int)v8 - 33 <= 3 )
    {
      ptr = v31;
      v30 = 0x800000000LL;
      sub_639160(&v27, a2, a1, 0, 1, a6);
      p_ptr = &ptr;
      v26 = _mm_load_si128(&v27);
      v10 = _mm_load_si128(&v28);
      sub_63A310(
        (unsigned int)&ptr,
        (_DWORD)a2,
        v11,
        v12,
        v13,
        v14,
        v26.m128i_i32[0],
        v26.m128i_i64[1],
        v10.m128i_i32[0],
        v10.m128i_i64[1]);
      if ( (_DWORD)v30 )
      {
        v19 = (const __m128i *)ptr;
        v20 = (const __m128i *)((char *)ptr + 32 * (unsigned int)v30);
        do
        {
          v21 = _mm_loadu_si128(v19);
          v19 += 2;
          v22 = sub_63A250((_DWORD)p_ptr, (_DWORD)a2, v15, v16, v17, v18, v21.m128i_i32[0], v21.m128i_i64[1]);
          LODWORD(p_ptr) = a1;
          LODWORD(a2) = v22;
          sub_632340(a1, v22, a3);
        }
        while ( v19 != v20 );
        v23 = ptr;
        if ( ptr != v31 )
LABEL_8:
          free(v23);
      }
      else
      {
        v24 = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)a2 + 32LL))(a2);
        v25 = *(unsigned int *)(a3 + 8);
        if ( *(unsigned int *)(a3 + 12) < (unsigned __int64)(v25 + 1) )
        {
          sub_25D6060(a3, a3 + 16, v25 + 1, 8);
          v25 = *(unsigned int *)(a3 + 8);
        }
        *(_QWORD *)(*(_QWORD *)a3 + 8 * v25) = v24;
        v23 = ptr;
        ++*(_DWORD *)(a3 + 8);
        if ( v23 != v31 )
          goto LABEL_8;
      }
    }
  }
}

