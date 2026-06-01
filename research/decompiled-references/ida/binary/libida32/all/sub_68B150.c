__int64 __fastcall sub_68B150(const __m128i *a1, __int64 a2, __int64 *a3, int a4, __int64 a5)
{
  __m128i v6; // xmm0
  unsigned int v7; // r12d
  __int64 v9; // rdx
  _QWORD v10[2]; // [rsp+0h] [rbp-98h] BYREF
  __m128i v11; // [rsp+10h] [rbp-88h]
  __int64 v12; // [rsp+20h] [rbp-78h]
  int v13; // [rsp+28h] [rbp-70h]
  __int64 v14; // [rsp+30h] [rbp-68h] BYREF
  void *v15; // [rsp+38h] [rbp-60h]
  __int128 v16; // [rsp+40h] [rbp-58h]
  void *ptr; // [rsp+50h] [rbp-48h]
  __int128 v18; // [rsp+58h] [rbp-40h]
  int v19; // [rsp+68h] [rbp-30h]
  unsigned __int64 v20; // [rsp+78h] [rbp-20h]

  v20 = __readfsqword(0x28u);
  if ( !a2 )
    a2 = a1->m128i_i64[1];
  v6 = _mm_loadl_epi64(a1);
  v12 = a5;
  v10[0] = off_2B0DA90;
  v11 = _mm_unpacklo_epi64(v6, (__m128i)(unsigned __int64)a2);
  v10[1] = 4;
  v13 = 0;
  v14 = 0;
  v15 = nullptr;
  ptr = nullptr;
  v19 = 0;
  v16 = 0;
  v18 = 0;
  visit_subtypes((int)v10, (int)&v14, (int)a3, a4, 0);
  v7 = v13;
  if ( v13 >= 0 && (v19 & 1) != 0 )
  {
    v9 = v14;
    v14 = *a3;
    *a3 = v9;
  }
  if ( ptr )
  {
    *(_QWORD *)&v18 = 0;
    qfree(ptr);
  }
  if ( v15 )
  {
    *(_QWORD *)&v16 = 0;
    qfree(v15);
  }
  clear_tinfo_t(&v14);
  return v7;
}

