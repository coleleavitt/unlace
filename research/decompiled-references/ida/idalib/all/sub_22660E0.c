void __fastcall sub_22660E0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14,
        __int64 a15,
        __int64 a16,
        __int64 a17)
{
  bool v17; // zf
  _BYTE *v19; // rsi
  _BYTE *v20; // rdx
  int v21; // eax
  int v22; // edx
  int v23; // ecx
  int v24; // r8d
  int v25; // r9d
  void *v26; // rax
  void *v27[2]; // [rsp+60h] [rbp-168h] BYREF
  __m128i v28; // [rsp+70h] [rbp-158h] BYREF
  void *ptr; // [rsp+80h] [rbp-148h] BYREF
  __m128i si128; // [rsp+88h] [rbp-140h]
  _BYTE v31[304]; // [rsp+98h] [rbp-130h] BYREF

  *(_QWORD *)(a1 + 272) = a2;
  *(_QWORD *)a1 = a1 + 16;
  *(_BYTE *)(a1 + 312) = 0;
  v17 = *(_DWORD *)(a2 + 8) == 1;
  *(_QWORD *)(a1 + 8) = 0x2000000000LL;
  if ( v17 )
  {
    v19 = *(_BYTE **)(a2 + 48);
    v20 = &v19[*(_QWORD *)(a2 + 56)];
    ptr = v31;
    si128 = _mm_load_si128((const __m128i *)&xmmword_23A8DE0);
    sub_A1FE50(&ptr, v19, v20);
    v21 = sub_2259FA0(*(_QWORD *)(a2 + 48), *(_QWORD *)(a2 + 56));
    sub_228A3C0((unsigned int)&ptr, v21, v22, v23, v24, v25, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17);
    v27[0] = &v28;
    sub_2259A00(v27, ptr, (__int64)ptr + si128.m128i_i64[0]);
    if ( *(_BYTE *)(a1 + 312) )
    {
      sub_A0AAD0(a1 + 280, v27);
      if ( v27[0] != &v28 )
        operator delete(v27[0]);
    }
    else
    {
      *(_QWORD *)(a1 + 280) = a1 + 296;
      if ( v27[0] == &v28 )
      {
        *(__m128i *)(a1 + 296) = _mm_load_si128(&v28);
      }
      else
      {
        *(void **)(a1 + 280) = v27[0];
        *(_QWORD *)(a1 + 296) = v28.m128i_i64[0];
      }
      v26 = v27[1];
      *(_BYTE *)(a1 + 312) = 1;
      *(_QWORD *)(a1 + 288) = v26;
    }
    if ( ptr != v31 )
      free(ptr);
  }
}
