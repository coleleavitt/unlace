unsigned __int64 __fastcall sub_2DC000(__int64 a1, __int64 a2, _QWORD *a3, unsigned __int64 a4)
{
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rdx
  unsigned __int64 v8; // rbx
  __int64 v9; // rsi
  __int64 (__fastcall *v10)(__int64, __int64); // rax
  __int64 v11; // rbp
  __int64 v12; // rax
  __m128 v13; // xmm0
  __int64 v14; // rdi
  __int64 v15; // rax
  __int64 v18; // [rsp+8h] [rbp-58h] BYREF
  __int128 v19; // [rsp+10h] [rbp-50h] BYREF
  unsigned __int64 v20; // [rsp+20h] [rbp-40h]

  v6 = a3[1];
  v5 = v6;
  if ( a4 <= v6 )
    v6 = a4;
  v20 = __readfsqword(0x28u);
  v19 = 0;
  v18 = 0;
  if ( v6 )
  {
    v18 = qvector_reserve(&v18, 0, v6, 8);
    v6 = v19;
    v5 = a3[1];
  }
  v8 = 0;
  if ( v5 )
  {
    do
    {
      if ( v6 >= a4 )
        break;
      v10 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 1136LL);
      v11 = *(_QWORD *)(*a3 + 8 * v8);
      if ( v10 != sub_2DB460 )
      {
        v12 = ((__int64 (__fastcall *)(__int64, _QWORD, double))v10)(a1, *(_QWORD *)(*a3 + 8 * v8), 0.0);
        v6 = v19;
        v11 = v12;
      }
      if ( v11 != -1 )
      {
        v9 = v18;
        if ( *((_QWORD *)&v19 + 1) < v6 + 1 )
        {
          v18 = qvector_reserve(&v18, v18, v6 + 1, 8);
          v6 = v19;
          v9 = v18;
        }
        *(_QWORD *)(v9 + 8 * v6) = v11;
        v6 = v19 + 1;
        *(_QWORD *)&v19 = v19 + 1;
      }
      ++v8;
    }
    while ( v8 < a3[1] );
  }
  v13 = _mm_loadh_ps((const double *)&v19 + 1);
  v14 = *(_QWORD *)a2;
  v15 = *(_QWORD *)(a2 + 16);
  *(_QWORD *)a2 = v18;
  *(__m128 *)(a2 + 8) = v13;
  v18 = v14;
  *((_QWORD *)&v19 + 1) = v15;
  if ( v14 )
  {
    *(_QWORD *)&v19 = 0;
    qfree(v14, (const char *)a2);
  }
  return v20 - __readfsqword(0x28u);
}
