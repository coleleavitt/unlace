unsigned __int64 __fastcall sub_197EE0(__int64 *a1, __int64 a2, double a3, double a4, __m128 a5)
{
  _BYTE *v6; // rdi
  __int64 (*v7)(void); // rax
  unsigned __int64 v8; // r12
  void *v9; // r13
  __int64 v10; // rax
  void (*v11)(); // rax
  __int64 v12; // rdi
  __int64 v13; // rbp
  __int64 v14; // rbx
  __int64 v15; // rax
  const void *v17; // rbp
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rsi
  __int64 v22; // r12
  __int64 v23; // [rsp+0h] [rbp-88h] BYREF
  __m128i v24; // [rsp+8h] [rbp-80h]
  __int64 v25; // [rsp+18h] [rbp-70h]
  __int64 v26; // [rsp+20h] [rbp-68h] BYREF
  __int128 v27; // [rsp+28h] [rbp-60h]
  __int64 v28; // [rsp+38h] [rbp-50h] BYREF
  __int128 v29; // [rsp+40h] [rbp-48h]
  char v30; // [rsp+50h] [rbp-38h]
  unsigned __int64 v31; // [rsp+58h] [rbp-30h]

  v31 = __readfsqword(0x28u);
  v23 = 0;
  v25 = -1;
  v24 = 0;
  if ( a2 )
  {
    v6 = (_BYTE *)a1[315];
    v7 = *(__int64 (**)(void))(*(_QWORD *)v6 + 72LL);
    if ( (v6[12] & 4) != 0 )
    {
      if ( (char *)v7 == (char *)sub_B8C10 )
      {
        v8 = *(_QWORD *)(a2 + 8);
        v9 = nullptr;
        if ( v8 )
        {
          v9 = (void *)qalloc_or_throw();
          memcpy(v9, *(const void **)a2, 8 * v8);
        }
        v23 = (__int64)v9;
        v24 = _mm_unpacklo_epi64((__m128i)v8, (__m128i)v8);
      }
      else
      {
        ((void (__fastcall *)(_BYTE *, __int64 *, __int64))v7)(v6, &v23, a2);
      }
    }
    else
    {
      if ( (char *)v7 == (char *)sub_91B60 )
        v17 = *(const void **)a2;
      else
        v17 = (const void *)v7();
      v18 = sub_194540((__int64)a1);
      if ( (__int64)v17 >= 0 && v18 > 0 )
      {
        v19 = v18;
        LODWORD(v22) = v18 - 1;
        v20 = v24.m128i_i64[0];
        v21 = v23;
        v22 = (int)v22;
        if ( v19 > (__int64)v17 )
          v22 = (__int64)v17;
        v26 = v22;
        if ( v24.m128i_i64[1] < (unsigned __int64)(v24.m128i_i64[0] + 1) )
        {
          v23 = qvector_reserve();
          v21 = v23;
          v20 = v24.m128i_i64[0];
        }
        *(_QWORD *)(v21 + 8 * v20) = v22;
        ++v24.m128i_i64[0];
      }
    }
  }
  else
  {
    sub_197370(a1, &v23, 0.0, a4, a5);
  }
  v10 = *a1;
  v30 = 0;
  v27 = 0;
  v26 = 0;
  v28 = 0;
  v29 = 0;
  (*(void (__fastcall **)(__int64 *, __int64 *, __int64))(v10 + 352))(a1, &v26, 7);
  sub_194A90((__int64)a1, &v26, (__int64)&v23, 3);
  v11 = *(void (**)())(*a1 + 296);
  if ( v11 == sub_197ED0 )
    nullsub_113();
  else
    ((void (__fastcall *)(__int64 *, __int64 *, _QWORD))v11)(a1, &v26, 0);
  sub_17F4E0(&v28);
  v12 = v26;
  if ( v26 )
  {
    v13 = v27;
    if ( (_QWORD)v27 )
    {
      v14 = 0;
      do
      {
        v15 = v14++;
        sub_17F4E0((__int64 *)(32 * v15 + v12));
        v12 = v26;
      }
      while ( v13 != v14 );
    }
    *(_QWORD *)&v27 = 0;
    qfree();
  }
  if ( v23 )
  {
    v24.m128i_i64[0] = 0;
    qfree();
  }
  return v31 - __readfsqword(0x28u);
}

