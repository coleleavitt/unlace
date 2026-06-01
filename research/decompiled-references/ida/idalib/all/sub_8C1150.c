__int64 __fastcall sub_8C1150(__int64 a1, __int64 *a2, const char *a3, const char *a4)
{
  size_t v6; // r13
  size_t v7; // rax
  size_t v8; // r15
  size_t v9; // r13
  __int64 v10; // rax
  _QWORD *v11; // rbx
  int v12; // r8d
  int v13; // r9d
  unsigned int v14; // r12d
  __int64 v16; // rax
  __m128i v17; // xmm0
  __int64 v18; // rdx
  __int64 v19; // rax
  __m128i v20; // xmm0
  __int64 v21; // rdx
  __int64 v22; // rax
  __m128i v23; // xmm0
  __int64 v24; // rax
  __m128i v25; // xmm0
  __int64 v26; // rdx
  __int64 v27; // rax
  __int64 (__fastcall **v28)(); // [rsp+8h] [rbp-88h] BYREF
  char v29; // [rsp+10h] [rbp-80h]
  void *ptr; // [rsp+18h] [rbp-78h] BYREF
  __int128 v31; // [rsp+20h] [rbp-70h]
  void *v32; // [rsp+30h] [rbp-60h] BYREF
  __int128 v33; // [rsp+38h] [rbp-58h]
  bool v34; // [rsp+48h] [rbp-48h]
  unsigned __int64 v35; // [rsp+50h] [rbp-40h]

  v35 = __readfsqword(0x28u);
  v29 = 40;
  v31 = 0;
  v28 = &off_2B3E668;
  ptr = nullptr;
  if ( a3 )
  {
    v6 = strlen(a3);
    ptr = (void *)qvector_reserve(&ptr, 0, v6 + 1, 1);
    *(_QWORD *)&v31 = v6 + 1;
    memmove(ptr, a3, v6);
    *((_BYTE *)ptr + v6) = 0;
  }
  v32 = nullptr;
  v33 = 0;
  if ( a4 )
  {
    v7 = strlen(a4);
    v8 = v7 + 1;
    v9 = v7;
    v32 = (void *)qvector_reserve(&v32, 0, v7 + 1, 1);
    *(_QWORD *)&v33 = v8;
    memmove(v32, a4, v9);
    *((_BYTE *)v32 + v9) = 0;
  }
  v10 = *(_QWORD *)(a1 + 40);
  v34 = a2 != nullptr;
  v11 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64 (__fastcall ***)()))(v10 + 80))(a1 + 40, &v28);
  v14 = sub_8BE300((_QWORD *)(a1 + 40), (__int64)v11, 41, nullptr, v12, v13);
  if ( !v14 && a2 )
  {
    v16 = *a2;
    v17 = _mm_loadu_si128((const __m128i *)(a2 + 1));
    *a2 = v11[2];
    a2[1] = v11[3];
    a2[2] = v11[4];
    v18 = v11[5];
    v11[2] = v16;
    *(__m128i *)(v11 + 3) = v17;
    v19 = a2[3];
    v20 = _mm_loadu_si128((const __m128i *)a2 + 2);
    a2[3] = v18;
    a2[4] = v11[6];
    a2[5] = v11[7];
    v21 = v11[8];
    v11[5] = v19;
    *((__m128i *)v11 + 3) = v20;
    v22 = a2[6];
    v23 = _mm_loadu_si128((const __m128i *)(a2 + 7));
    a2[6] = v21;
    a2[7] = v11[9];
    a2[8] = v11[10];
    v11[8] = v22;
    *(__m128i *)(v11 + 9) = v23;
    v24 = a2[9];
    v25 = _mm_loadu_si128((const __m128i *)a2 + 5);
    a2[9] = v11[11];
    a2[10] = v11[12];
    a2[11] = v11[13];
    v26 = v11[14];
    v11[11] = v24;
    *((__m128i *)v11 + 6) = v25;
    v27 = a2[12];
    a2[12] = v26;
    v11[14] = v27;
  }
  if ( v11 )
    (*(void (__fastcall **)(_QWORD *))(*v11 + 8LL))(v11);
  sub_8D58C0(&v28);
  return v14;
}
