__int64 __fastcall sub_7B3500(__int64 *a1, __int64 *a2, __int64 *a3)
{
  __m128i v3; // xmm0
  __m128i v5; // xmm1
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __m128i v9; // xmm1
  __int64 v10; // rax
  __int64 v11; // rax
  unsigned int v12; // ebx
  int v14[2]; // [rsp+0h] [rbp-78h] BYREF
  int v15; // [rsp+8h] [rbp-70h]
  int v16[2]; // [rsp+10h] [rbp-68h]
  void *ptr[2]; // [rsp+18h] [rbp-60h]
  int v18[2]; // [rsp+28h] [rbp-50h]
  __int64 v19[2]; // [rsp+30h] [rbp-48h]
  __int64 v20; // [rsp+40h] [rbp-38h] BYREF
  __m128i v21; // [rsp+48h] [rbp-30h]
  unsigned __int64 v22; // [rsp+58h] [rbp-20h]

  v3 = _mm_loadu_si128((const __m128i *)(a2 + 1));
  v22 = __readfsqword(0x28u);
  v5 = _mm_loadu_si128((const __m128i *)a2 + 2);
  *(__m128i *)ptr = v3;
  *(_QWORD *)v14 = &off_2B11B00;
  v6 = *a2;
  *a2 = 0;
  *(_QWORD *)v16 = v6;
  v7 = a2[3];
  a2[3] = 0;
  *(_QWORD *)v18 = v7;
  v8 = a2[6];
  a2[6] = 0;
  *(__m128i *)v19 = v5;
  v9 = _mm_loadu_si128((const __m128i *)(a2 + 7));
  *(_OWORD *)(a2 + 1) = 0;
  *((_OWORD *)a2 + 2) = 0;
  *(_OWORD *)(a2 + 7) = 0;
  LOBYTE(v15) = 34;
  v20 = v8;
  v21 = v9;
  sub_7B1780((double *)&v20);
  v10 = sub_79C5C0(a1, (unsigned __int8 *)v14, a3);
  v11 = sub_7B3360(v10, 10, a3);
  v12 = 0;
  if ( v11 )
  {
    v12 = 1;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
  }
  sub_7BC530(v14);
  return v12;
}

