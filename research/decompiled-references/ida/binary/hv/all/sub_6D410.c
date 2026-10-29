__int64 __fastcall sub_6D410(
        __int64 a1,
        unsigned int *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        __m128 a10,
        __m128 a11,
        __m128 a12,
        __m128 a13,
        __m128 a14)
{
  __int64 v14; // rax
  __int64 result; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __m128 v20; // xmm4
  __m128 v21; // xmm5
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __m128 v26; // xmm4
  __m128 v27; // xmm5
  __int64 *v28; // rsi
  char *v29; // rdi
  void *ptr; // [rsp+0h] [rbp-38h] BYREF
  __int128 v31; // [rsp+8h] [rbp-30h]
  unsigned __int64 v32; // [rsp+18h] [rbp-20h]

  v32 = __readfsqword(0x28u);
  if ( !a2 )
  {
    sub_6CFE0("Expected packet", (__int64 *)(a1 + 16), a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, (char)ptr);
    return 0;
  }
  v14 = sub_6DB20(a1, *((unsigned __int8 *)a2 + 4));
  if ( !v14 )
  {
    ptr = nullptr;
    v31 = 0;
    sub_17D80((char **)&ptr);
    v28 = (__int64 *)(a1 + 16);
    v29 = (char *)haystack;
    if ( (_QWORD)v31 )
      v29 = (char *)ptr;
    sub_6CFE0(v29, v28, v22, v23, v24, v25, (__m128)0LL, a8, a9, a10, v26, v27, a13, a14, (char)ptr);
    if ( ptr )
    {
      *(_QWORD *)&v31 = 0;
      j__free(ptr);
      return 0;
    }
    return 0;
  }
  result = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(v14 + 16))(
             (__int64)a2 + 5,
             *a2,
             *(unsigned int *)(a1 + 108));
  if ( result )
  {
    *(_BYTE *)(result + 8) = *((_BYTE *)a2 + 4);
  }
  else
  {
    sub_6CFE0(
      "Couldn't deserialize packet",
      (__int64 *)(a1 + 16),
      v16,
      v17,
      v18,
      v19,
      a7,
      a8,
      a9,
      a10,
      v20,
      v21,
      a13,
      a14,
      (char)ptr);
    return 0;
  }
  return result;
}

