__int64 __fastcall sub_3E5E80(
        __int64 a1,
        _DWORD *a2,
        double a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        __m128 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14)
{
  double v14; // xmm4_8
  double v15; // xmm5_8
  unsigned int v16; // eax
  __int64 v17; // rdi
  unsigned int v18; // ebp
  __int64 v19; // r12
  __int64 v20; // rbx
  _QWORD *v21; // rcx
  void (__fastcall ***v22)(_QWORD); // rdx
  __int64 v25; // [rsp+0h] [rbp-50h] BYREF
  __int64 v26[2]; // [rsp+8h] [rbp-48h] BYREF
  __int64 v27; // [rsp+18h] [rbp-38h] BYREF
  __int128 v28; // [rsp+20h] [rbp-30h]
  unsigned __int64 v29; // [rsp+30h] [rbp-20h]

  v29 = __readfsqword(0x28u);
  v25 = -1;
  v28 = 0;
  v27 = 0;
  sub_254C60(
    a2,
    (const char *)qword_8BA5A8,
    (__int64)&v25,
    (__int64)&v27,
    a13,
    a14,
    (__m128)0LL,
    a4,
    a5,
    a6,
    a7,
    a8,
    a9,
    a10);
  v26[0] = (__int64)a2;
  v26[1] = (__int64)&v27;
  v16 = sub_3E5A30(a1, v26, 0.0, a4, a5, a6, v14, v15, a9, a10);
  v17 = v27;
  v18 = v16;
  if ( v27 )
  {
    v19 = v28;
    if ( (_QWORD)v28 )
    {
      v20 = 0;
      do
      {
        v21 = (_QWORD *)(v17 + 8 * v20);
        v22 = (void (__fastcall ***)(_QWORD))*v21;
        if ( *v21 )
        {
          if ( (*((_DWORD *)v22 + 2))-- == 1 )
          {
            (**(void (__fastcall ***)(_QWORD))*v21)(*v21);
            v17 = v27;
          }
        }
        ++v20;
      }
      while ( v19 != v20 );
    }
    *(_QWORD *)&v28 = 0;
    qfree(v17, (const char *)v26);
  }
  return v18;
}
