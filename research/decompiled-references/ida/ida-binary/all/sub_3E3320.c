__int64 __fastcall sub_3E3320(
        __int64 *a1,
        _DWORD *a2,
        const char *a3,
        double a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        __m128 a10,
        __m128 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14)
{
  const char *v17; // rsi
  unsigned int v18; // ebp
  __int64 v19; // rdi
  __int64 v20; // r12
  __int64 v21; // rbx
  _QWORD *v22; // rcx
  void (__fastcall ***v23)(_QWORD); // rdx
  _BYTE v26[8]; // [rsp+0h] [rbp-50h] BYREF
  __int64 v27; // [rsp+8h] [rbp-48h] BYREF
  __int128 v28; // [rsp+10h] [rbp-40h]
  unsigned __int64 v29; // [rsp+20h] [rbp-30h]

  v29 = __readfsqword(0x28u);
  v27 = 0;
  v17 = (const char *)qword_8BA5A8;
  v28 = 0;
  v18 = sub_254C60(
          a2,
          (const char *)qword_8BA5A8,
          (__int64)v26,
          (__int64)&v27,
          a13,
          a14,
          (__m128)0LL,
          a5,
          a6,
          a7,
          a8,
          a9,
          a10,
          a11);
  if ( (_BYTE)v18 )
  {
    v17 = (const char *)&v27;
    v18 = sub_3E10A0(a1, &v27, a3);
  }
  v19 = v27;
  if ( v27 )
  {
    v20 = v28;
    if ( (_QWORD)v28 )
    {
      v21 = 0;
      do
      {
        v22 = (_QWORD *)(v19 + 8 * v21);
        v23 = (void (__fastcall ***)(_QWORD))*v22;
        if ( *v22 )
        {
          if ( (*((_DWORD *)v23 + 2))-- == 1 )
          {
            (**(void (__fastcall ***)(_QWORD))*v22)(*v22);
            v19 = v27;
          }
        }
        ++v21;
      }
      while ( v20 != v21 );
    }
    *(_QWORD *)&v28 = 0;
    qfree(v19, v17);
  }
  return v18;
}
