unsigned __int64 __fastcall sub_6E80(__int64 *a1, __int64 *a2)
{
  __int64 v2; // rax
  size_t v3; // rbx
  size_t v5; // rbx
  __int64 v6; // r12
  char v7; // bl
  __int64 v8; // rax
  __int64 v9; // rsi
  __int64 v10; // rsi
  __m128i v11; // xmm0
  __m128i v12; // xmm0
  void *v13; // rax
  void *v15; // rax
  const void *v16; // rsi
  __int64 v17; // rax
  __int64 v18; // rbx
  __int64 v19; // rbp
  __int64 v20; // rdx
  __int64 v21; // rcx
  size_t v22; // r13
  void *v23; // rax
  void *v24; // rax
  const void *v25; // rsi
  int v26; // [rsp+4h] [rbp-BCh]
  __int64 v27; // [rsp+8h] [rbp-B8h]
  const void **v28; // [rsp+10h] [rbp-B0h]
  void *ptr; // [rsp+28h] [rbp-98h]
  __m128i v30; // [rsp+30h] [rbp-90h] BYREF
  void *v31; // [rsp+40h] [rbp-80h]
  __m128i v32; // [rsp+48h] [rbp-78h] BYREF
  __int64 v33; // [rsp+58h] [rbp-68h]
  __m128i v34; // [rsp+60h] [rbp-60h] BYREF
  char v35; // [rsp+70h] [rbp-50h]
  unsigned __int64 v36; // [rsp+80h] [rbp-40h]

  v2 = *a2;
  v3 = a2[3];
  v36 = __readfsqword(0x28u);
  v30 = 0;
  v27 = v2;
  ptr = nullptr;
  v26 = *((_DWORD *)a2 + 2);
  if ( v3 )
  {
    v15 = (void *)sub_113E0(v3);
    v16 = (const void *)a2[2];
    v30.m128i_i64[1] = v3;
    ptr = v15;
    memcpy(v15, v16, v3);
    v30.m128i_i64[0] = v3;
  }
  v5 = a2[6];
  v31 = nullptr;
  v32 = 0;
  if ( v5 )
  {
    v24 = (void *)sub_113E0(v5);
    v25 = (const void *)a2[5];
    v31 = v24;
    v32.m128i_i64[1] = v5;
    memcpy(v24, v25, v5);
    v32.m128i_i64[0] = v5;
  }
  v6 = a2[9];
  v33 = 0;
  v34 = 0;
  if ( v6 )
  {
    v33 = sub_113E0(24 * v6);
    v18 = v33;
    v19 = 0;
    v34.m128i_i64[1] = v6;
    do
    {
      while ( 1 )
      {
        v20 = a2[8];
        *(_QWORD *)v18 = 0;
        *(_OWORD *)(v18 + 8) = 0;
        v21 = v20 + 24 * v19;
        v22 = *(_QWORD *)(v21 + 8);
        if ( v22 )
          break;
        ++v19;
        v18 += 24;
        if ( v6 == v19 )
          goto LABEL_13;
      }
      v28 = (const void **)(v20 + 24 * v19);
      v23 = (void *)sub_113E0(*(_QWORD *)(v21 + 8));
      *(_QWORD *)v18 = v23;
      *(_QWORD *)(v18 + 16) = v22;
      ++v19;
      v18 += 24;
      memcpy(v23, *v28, v22);
      *(_QWORD *)(v18 - 16) = v22;
    }
    while ( v6 != v19 );
LABEL_13:
    v34.m128i_i64[0] = v6;
  }
  v7 = *((_BYTE *)a2 + 88);
  v8 = a1[1];
  v9 = *a1;
  v35 = v7;
  if ( a1[2] < (unsigned __int64)(v8 + 1) )
  {
    v17 = sub_11430(a1, v9, v8 + 1, 96);
    *a1 = v17;
    v9 = v17;
    v8 = a1[1];
  }
  v10 = 96 * v8 + v9;
  *(__m128i *)(v10 + 24) = _mm_loadu_si128(&v30);
  v11 = _mm_load_si128(&v32);
  *(_QWORD *)v10 = v27;
  *(__m128i *)(v10 + 48) = v11;
  v12 = _mm_loadu_si128(&v34);
  *(_DWORD *)(v10 + 8) = v26;
  *(_BYTE *)(v10 + 88) = v7;
  *(_QWORD *)(v10 + 16) = ptr;
  v13 = v31;
  *(__m128i *)(v10 + 72) = v12;
  *(_QWORD *)(v10 + 40) = v13;
  *(_QWORD *)(v10 + 64) = v33;
  ++a1[1];
  return v36 - __readfsqword(0x28u);
}

