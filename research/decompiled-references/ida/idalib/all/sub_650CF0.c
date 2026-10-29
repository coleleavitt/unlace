__int64 __fastcall sub_650CF0(int a1, __int64 a2, __m128i *a3, __m128i *a4, int a5, int a6)
{
  __m128i v6; // xmm0
  __m128i v9; // xmm1
  unsigned int v10; // ebp
  char *v11; // rdx
  __int64 v12; // r12
  __int64 v13; // rbx
  char *v14; // rax
  void *v15; // rdi
  char *v16; // rdx
  __int64 v17; // r12
  __int64 v18; // rbx
  char *v19; // rax
  void *v20; // rdi
  int v22[2]; // [rsp+0h] [rbp-298h] BYREF
  int v23[2]; // [rsp+8h] [rbp-290h] BYREF
  int v24[2]; // [rsp+10h] [rbp-288h] BYREF
  int v25; // [rsp+18h] [rbp-280h]
  int v26; // [rsp+20h] [rbp-278h]
  int v27; // [rsp+28h] [rbp-270h]
  int v28; // [rsp+30h] [rbp-268h]
  void *v29; // [rsp+38h] [rbp-260h]
  __int64 v30; // [rsp+40h] [rbp-258h]
  int v31; // [rsp+48h] [rbp-250h]
  __int64 v32; // [rsp+50h] [rbp-248h]
  int v33; // [rsp+218h] [rbp-80h]
  __m128i v34; // [rsp+220h] [rbp-78h]
  __int64 v35; // [rsp+230h] [rbp-68h]
  void *v36; // [rsp+238h] [rbp-60h] BYREF
  __int128 v37; // [rsp+240h] [rbp-58h]
  void *ptr; // [rsp+250h] [rbp-48h] BYREF
  __int128 v39; // [rsp+258h] [rbp-40h]
  unsigned __int64 v40; // [rsp+268h] [rbp-30h]

  v40 = __readfsqword(0x28u);
  if ( a3->m128i_i64[1] <= 1uLL )
  {
    return 0;
  }
  else
  {
    v6 = _mm_loadl_epi64(a3);
    v9 = 0;
    *(_QWORD *)v22 = v6.m128i_i64[0];
    if ( a4 )
      v9 = _mm_loadl_epi64(a4);
    v35 = a2;
    v34 = _mm_unpacklo_epi64(v6, v9);
    v33 = 0;
    v36 = nullptr;
    ptr = nullptr;
    v37 = 0;
    v39 = 0;
    if ( (unsigned int)sub_6A71C0(
                         a1,
                         (int)v24,
                         (int)v22,
                         (int)v23,
                         a5,
                         a6,
                         v22[0],
                         v9.m128i_i32[0],
                         (int)&off_2B37260,
                         v25,
                         v26,
                         v27,
                         v28,
                         v29,
                         v30,
                         v31,
                         v32) )
    {
      v10 = -1;
    }
    else
    {
      v10 = v37;
      if ( (_QWORD)v37 )
      {
        sub_649C20(a3->m128i_i64, (__int64)&v36);
        if ( a4 )
          sub_649C20(a4->m128i_i64, (__int64)&ptr);
        v10 = v37;
      }
    }
    v11 = (char *)ptr;
    *(_QWORD *)v24 = &off_2B37260;
    if ( ptr )
    {
      v12 = v39;
      if ( (_QWORD)v39 )
      {
        v13 = 0;
        do
        {
          v14 = &v11[32 * v13];
          v15 = *((void **)v14 + 1);
          if ( v15 )
          {
            *((_QWORD *)v14 + 2) = 0;
            qfree(v15);
            v11 = (char *)ptr;
          }
          ++v13;
        }
        while ( v12 != v13 );
      }
      *(_QWORD *)&v39 = 0;
      qfree(v11);
    }
    v16 = (char *)v36;
    if ( v36 )
    {
      v17 = v37;
      if ( (_QWORD)v37 )
      {
        v18 = 0;
        do
        {
          v19 = &v16[32 * v18];
          v20 = *((void **)v19 + 1);
          if ( v20 )
          {
            *((_QWORD *)v19 + 2) = 0;
            qfree(v20);
            v16 = (char *)v36;
          }
          ++v18;
        }
        while ( v17 != v18 );
      }
      *(_QWORD *)&v37 = 0;
      qfree(v16);
    }
  }
  return v10;
}
