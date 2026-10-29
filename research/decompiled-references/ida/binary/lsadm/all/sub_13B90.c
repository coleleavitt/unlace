__int64 __fastcall sub_13B90(__int64 a1, __int64 *a2, __int64 a3, int a4)
{
  _QWORD *v5; // rbx
  unsigned int v6; // r12d
  __int64 v7; // rax
  __m128i v8; // xmm0
  __int64 v9; // rdx
  __int64 v10; // rax
  __m128i v11; // xmm0
  __int64 v12; // rdx
  __int64 v13; // rax
  __m128i v14; // xmm0
  __int64 v15; // rax
  __m128i v16; // xmm0
  __int64 (__fastcall **v18)(); // [rsp+0h] [rbp-48h] BYREF
  char v19; // [rsp+8h] [rbp-40h]
  int v20; // [rsp+Ch] [rbp-3Ch]
  unsigned __int64 v21; // [rsp+18h] [rbp-30h]

  v21 = __readfsqword(0x28u);
  v19 = 16;
  v20 = a4;
  v18 = off_796D0;
  v5 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64 (__fastcall ***)()))(*(_QWORD *)a1 + 80LL))(a1, &v18);
  v6 = sub_14400(a1, v5, 17, a3, 0);
  if ( !v6 )
  {
    v7 = *a2;
    v8 = _mm_loadu_si128((const __m128i *)(a2 + 1));
    *a2 = v5[2];
    a2[1] = v5[3];
    a2[2] = v5[4];
    v9 = v5[5];
    v5[2] = v7;
    *(__m128i *)(v5 + 3) = v8;
    v10 = a2[3];
    v11 = _mm_loadu_si128((const __m128i *)a2 + 2);
    a2[3] = v9;
    a2[4] = v5[6];
    a2[5] = v5[7];
    v12 = v5[8];
    v5[5] = v10;
    *((__m128i *)v5 + 3) = v11;
    v13 = a2[6];
    v14 = _mm_loadu_si128((const __m128i *)(a2 + 7));
    a2[6] = v12;
    a2[7] = v5[9];
    a2[8] = v5[10];
    v5[8] = v13;
    *(__m128i *)(v5 + 9) = v14;
    v15 = a2[9];
    v16 = _mm_loadu_si128((const __m128i *)a2 + 5);
    a2[9] = v5[11];
    a2[10] = v5[12];
    a2[11] = v5[13];
    v5[11] = v15;
    *((__m128i *)v5 + 6) = v16;
  }
  if ( v5 )
    (*(void (__fastcall **)(_QWORD *))(*v5 + 8LL))(v5);
  nullsub_14(&v18);
  return v6;
}

