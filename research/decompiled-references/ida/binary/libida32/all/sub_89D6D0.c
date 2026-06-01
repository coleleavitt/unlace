__int64 __fastcall sub_89D6D0(__int64 a1, __int64 *a2, const char *a3)
{
  size_t v4; // rax
  size_t v5; // r13
  size_t v6; // rbp
  __int64 v7; // rax
  _QWORD *v8; // rbx
  int v9; // r8d
  int v10; // r9d
  unsigned int v11; // ebp
  __int64 v13; // rax
  __m128i v14; // xmm0
  __int64 v15; // rdx
  __int64 v16; // rax
  __m128i v17; // xmm0
  __int64 v18; // rdx
  __int64 v19; // rax
  __m128i v20; // xmm0
  __int64 v21; // rax
  __m128i v22; // xmm0
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 (__fastcall **v25)(); // [rsp+0h] [rbp-78h] BYREF
  char v26; // [rsp+8h] [rbp-70h]
  void *ptr; // [rsp+10h] [rbp-68h] BYREF
  __int128 v28; // [rsp+18h] [rbp-60h]
  bool v29; // [rsp+28h] [rbp-50h]
  unsigned __int64 v30; // [rsp+38h] [rbp-40h]

  v30 = __readfsqword(0x28u);
  v26 = 38;
  v28 = 0;
  v25 = &off_2B14668;
  ptr = nullptr;
  if ( a3 )
  {
    v4 = strlen(a3);
    v5 = v4 + 1;
    v6 = v4;
    ptr = (void *)qvector_reserve(&ptr, 0, v4 + 1, 1);
    *(_QWORD *)&v28 = v5;
    memmove(ptr, a3, v6);
    *((_BYTE *)ptr + v6) = 0;
  }
  v7 = *(_QWORD *)(a1 + 40);
  v29 = a2 != nullptr;
  v8 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64 (__fastcall ***)()))(v7 + 80))(a1 + 40, &v25);
  v11 = sub_89A5C0((_QWORD *)(a1 + 40), (__int64)v8, 39, nullptr, v9, v10);
  if ( !v11 && a2 )
  {
    v13 = *a2;
    v14 = _mm_loadu_si128((const __m128i *)(a2 + 1));
    *a2 = v8[2];
    a2[1] = v8[3];
    a2[2] = v8[4];
    v15 = v8[5];
    v8[2] = v13;
    *(__m128i *)(v8 + 3) = v14;
    v16 = a2[3];
    v17 = _mm_loadu_si128((const __m128i *)a2 + 2);
    a2[3] = v15;
    a2[4] = v8[6];
    a2[5] = v8[7];
    v18 = v8[8];
    v8[5] = v16;
    *((__m128i *)v8 + 3) = v17;
    v19 = a2[6];
    v20 = _mm_loadu_si128((const __m128i *)(a2 + 7));
    a2[6] = v18;
    a2[7] = v8[9];
    a2[8] = v8[10];
    v8[8] = v19;
    *(__m128i *)(v8 + 9) = v20;
    v21 = a2[9];
    v22 = _mm_loadu_si128((const __m128i *)a2 + 5);
    a2[9] = v8[11];
    a2[10] = v8[12];
    a2[11] = v8[13];
    v23 = v8[14];
    v8[11] = v21;
    *((__m128i *)v8 + 6) = v22;
    v24 = a2[12];
    a2[12] = v23;
    v8[14] = v24;
  }
  if ( v8 )
    (*(void (__fastcall **)(_QWORD *))(*v8 + 8LL))(v8);
  sub_8B1B40(&v25);
  return v11;
}

