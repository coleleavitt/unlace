unsigned __int64 __fastcall sub_194B340(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        const __m128i *a4,
        __int64 a5,
        __int64 a6,
        double a7,
        __m128 a8)
{
  unsigned __int64 v9; // r12
  __int32 v10; // edx
  _QWORD *v12; // rax
  _DWORD *v13; // rdx
  _DWORD *v14; // rbp
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdx
  const __m128i *v19; // rax
  __int64 v20; // rax
  __int64 i; // rdx
  __int64 v22; // rax
  __m128i *v23; // rdx
  __int64 v24; // rsi
  __int64 j; // rax
  __int64 v26; // [rsp+10h] [rbp-170h] BYREF
  __int64 v27; // [rsp+18h] [rbp-168h] BYREF
  const __m128i *v28; // [rsp+20h] [rbp-160h]
  void *ptr; // [rsp+28h] [rbp-158h] BYREF
  __int64 v30; // [rsp+30h] [rbp-150h]
  _BYTE v31[256]; // [rsp+38h] [rbp-148h] BYREF
  __int64 v32; // [rsp+138h] [rbp-48h]

  v9 = 0;
  v28 = a4;
  v27 = a3;
  ptr = v31;
  v30 = 0x800000000LL;
  v32 = 0;
  v10 = a4[1].m128i_i32[2];
  v26 = a5;
  LODWORD(v32) = v10;
  HIDWORD(v32) = a4[1].m128i_i32[3];
  if ( !(unsigned __int8)sub_194AFD0(a1, &v27, 0, &v27, *(_DWORD *)(v27 + 20), (__int64)&ptr, a7, a8, 0) )
  {
    v12 = (_QWORD *)sub_F22F70(&v26);
    if ( v12 )
    {
      v9 = sub_AB7A80(
             *(_QWORD **)(*a1 + 248),
             (unsigned __int8)(*(_WORD *)(v27 + 18) >> 3),
             v12,
             (const __m128i *)ptr,
             v30);
      sub_1EA6140(a2, v9, (unsigned int)(8 * *(_DWORD *)(v9 + 20) + 32), 8);
      v14 = v13;
      *v13 = v28->m128i_i32[0];
      if ( !sub_15AB9E0(a6, *(_QWORD **)(*a1 + 248), (__int64)v13, v15, v16, v17) )
        v18 = 0;
      v19 = v28;
      *((_QWORD *)v14 + 1) = v18;
      v14[5] = v19[1].m128i_i32[1];
      v14[4] = v19[1].m128i_i32[0];
      v14[6] = v19[1].m128i_i32[2];
      v14[7] = v19[1].m128i_i32[3];
      if ( (_DWORD)v30 )
      {
        v20 = (unsigned int)(v30 - 1);
        for ( i = 0; ; ++i )
        {
          *(_QWORD *)&v14[2 * i + 8] = *((_QWORD *)ptr + 4 * i + 3);
          if ( i == v20 )
            break;
        }
      }
    }
    else
    {
      v22 = sub_1CDD580(*a1, v26, v28[1].m128i_u32[0], &ptr);
      v9 = v22;
      if ( (v22 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
      {
        sub_18CD120(a2, v22);
        *v23 = _mm_loadu_si128(v28 + 1);
        if ( (_DWORD)v30 )
        {
          v24 = (unsigned int)(v30 - 1);
          for ( j = 0; ; ++j )
          {
            v23[1].m128i_i64[j] = *((_QWORD *)ptr + 4 * j + 3);
            if ( v24 == j )
              break;
          }
        }
      }
    }
  }
  if ( ptr != v31 )
    free(ptr);
  return v9;
}
