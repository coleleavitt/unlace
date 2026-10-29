void __fastcall sub_14C7A70(__int64 a1, __m128i *a2, __int64 a3, unsigned __int8 a4, __int64 a5)
{
  const __m128i *v5; // rax
  __int64 v9; // rdi
  unsigned __int64 v10; // rax
  __int64 v11; // rcx
  int v12; // eax
  __int32 v13; // edx
  __int32 v14; // eax
  int v15; // eax
  __int64 v16; // rdi
  __int32 v17; // [rsp+0h] [rbp-90h]
  __int64 v18; // [rsp+0h] [rbp-90h]
  _BYTE v19[9]; // [rsp+Fh] [rbp-81h] BYREF
  __m128i v20; // [rsp+18h] [rbp-78h] BYREF
  __int64 v21; // [rsp+28h] [rbp-68h]
  int v22; // [rsp+38h] [rbp-58h]
  __int64 v23; // [rsp+40h] [rbp-50h]
  int v24; // [rsp+50h] [rbp-40h]
  int v25; // [rsp+54h] [rbp-3Ch]

  if ( a2[1].m128i_i16[0] == 20 && a2->m128i_i32[1] == 2 )
  {
    v5 = (const __m128i *)(a1 + 16);
    if ( *(_WORD *)(a1 + 32) != 1 )
    {
      v9 = *(_QWORD *)(a1 + 8);
      v10 = *(_QWORD *)(v9 + 2944) + 1LL;
      if ( v10 >= *(unsigned int *)(v9 + 2912) )
        v5 = (const __m128i *)sub_14180A0(v9, 2u);
      else
        v5 = (const __m128i *)(*(_QWORD *)(v9 + 2904) + 24 * v10);
    }
    v20 = _mm_loadu_si128(v5);
    v21 = v5[1].m128i_i64[0];
    if ( (_WORD)v21 == 62 )
    {
      v11 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 88LL);
      v12 = a2->m128i_i32[0];
      if ( a2->m128i_i32[0] < 0 )
      {
        v18 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 88LL);
        v12 = sub_1021B90(v18, v12);
        v11 = v18;
      }
      v13 = a2->m128i_i32[1] + v12;
      v14 = v20.m128i_i32[0];
      if ( v20.m128i_i32[0] < 0 )
      {
        v17 = v13;
        v14 = sub_1021B90(v11, v20.m128i_i32[0]);
        v13 = v17;
      }
      if ( v13 == v14 )
      {
        v15 = *(_DWORD *)(a1 + 16);
        v16 = *(_QWORD *)(a1 + 96);
        v23 = a5;
        *(_QWORD *)&v19[1] = 0;
        v25 = v15;
        v24 = v15;
        v22 = 0;
        if ( (unsigned int)sub_1CE58C0(v16, a4, (__int64)&v19[1], (__int64)v19, 0) )
          sub_14C7270((void **)a1, *(_QWORD *)(a1 + 8), a2, &v20, 0, 0);
      }
    }
  }
}
