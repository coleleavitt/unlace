unsigned __int64 __fastcall sub_1895550(
        __int64 *a1,
        int a2,
        unsigned int *a3,
        __int64 a4,
        __int64 a5,
        __m128 a6,
        __m128i a7)
{
  unsigned int *v8; // r13
  unsigned int *v10; // r12
  __int64 *v11; // rsi
  unsigned __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rbp
  unsigned int v15; // eax
  __int64 v16; // r14
  __m128i *v17; // rbp
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 *v20; // rdi
  __int64 v21; // rsi
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // rbx
  _QWORD *v26; // [rsp+8h] [rbp-C0h]
  __int16 v28; // [rsp+3Eh] [rbp-8Ah] BYREF
  void *ptr; // [rsp+40h] [rbp-88h] BYREF
  __int64 v30; // [rsp+48h] [rbp-80h]
  _BYTE v31[120]; // [rsp+50h] [rbp-78h] BYREF

  v8 = a3;
  v10 = &a3[4 * a4];
  v11 = (__int64 *)v31;
  v26 = (_QWORD *)sub_168B6C0((__int64)a1);
  ptr = v31;
  v30 = 0x800000000LL;
  if ( v10 == v8 )
  {
    v23 = 0;
  }
  else
  {
    do
    {
      v14 = *((_QWORD *)v8 + 1);
      v15 = sub_1A3A250(*a1);
      v16 = sub_1A86640(a1, v14, *v8, v15);
      v17 = (__m128i *)sub_BAF3D0(v26, *(_QWORD *)(*a1 + 544), v14, *v8, a2, v16);
      sub_17B7670(*a1, (__int64)v17, *(_QWORD *)(*a1 + 192), 1, v18, v19);
      sub_18954B0(a1, (__int64)v17);
      v20 = (__int64 *)*a1;
      v21 = *(_QWORD *)(*a1 + 192);
      v28 = 1;
      sub_1836B60(v20, v21, v17, a5, &v28, a6, a7);
      sub_16660F0(*a1, *(_QWORD *)(*a1 + 192), (__int64)v17);
      if ( v16 )
        sub_17C44D0((__int64 *)*a1, v17->m128i_i64, v16, 1u);
      v12 = HIDWORD(v30);
      v22 = (unsigned int)v30 + 1LL;
      if ( v22 > HIDWORD(v30) )
        sub_2237220(&ptr, v31, v22, 8);
      *((_QWORD *)ptr + (unsigned int)v30) = v17;
      v8 += 4;
      v23 = (unsigned int)(v30 + 1);
      LODWORD(v30) = v30 + 1;
    }
    while ( v10 != v8 );
    v11 = (__int64 *)ptr;
  }
  v24 = sub_17B2ED0(*a1, v11, v23, v12, v13, a6);
  if ( ptr != v31 )
    free(ptr);
  return v24;
}
