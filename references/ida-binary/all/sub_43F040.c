__int64 __fastcall sub_43F040(
        const char *a1,
        double a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  char v10; // al
  double v11; // xmm4_8
  double v12; // xmm5_8
  __int64 v13; // rdi
  __int64 v14; // r12
  __int64 v15; // rbx
  unsigned int v16; // ebp
  char v17; // al
  __int64 v18; // r12
  __int64 v19; // rbx
  __int64 *v20; // rax
  __int64 v21; // rdx
  __int64 v23; // [rsp+0h] [rbp-48h] BYREF
  __int128 v24; // [rsp+8h] [rbp-40h]
  unsigned __int64 v25; // [rsp+18h] [rbp-30h]

  v25 = __readfsqword(0x28u);
  v23 = 0;
  v24 = 0;
  v10 = sub_43CC20(&v23, (__int64)a1, (__m128)0LL);
  v13 = v23;
  if ( !v10 || (v14 = v23 + 32 * v24, v14 == v23) )
  {
    v16 = 0;
  }
  else
  {
    v15 = v23;
    LOBYTE(v16) = 0;
    do
    {
      v17 = sub_43D3B0(v15, a1, 0.0, a3, a4, a5, v11, v12, a8, a9);
      v15 += 32;
      LOBYTE(v16) = v17 | v16;
    }
    while ( v14 != v15 );
    v13 = v23;
    v16 = (unsigned __int8)v16;
  }
  if ( v13 )
  {
    v18 = v24;
    if ( (_QWORD)v24 )
    {
      v19 = 0;
      do
      {
        v20 = (__int64 *)(v13 + 32 * v19);
        v21 = *v20;
        if ( *v20 )
        {
          v20[1] = 0;
          qfree(v21, a1);
          v13 = v23;
        }
        ++v19;
      }
      while ( v18 != v19 );
    }
    *(_QWORD *)&v24 = 0;
    qfree(v13, a1);
  }
  return v16;
}
