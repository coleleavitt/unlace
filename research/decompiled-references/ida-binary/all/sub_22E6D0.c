__int64 __fastcall sub_22E6D0(
        __int64 *a1,
        const char *a2,
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
        size_t a13,
        __int64 a14)
{
  __int64 v14; // rbx
  bool v15; // zf
  char v16; // r13
  unsigned __int64 i; // rbp
  __int64 v18; // rdx
  __int64 v19; // r15
  unsigned __int64 v20; // r12
  size_t v21; // r9
  __int64 v22; // rsi
  unsigned __int64 v23; // r12
  size_t v25; // [rsp+0h] [rbp-68h]
  size_t v26; // [rsp+8h] [rbp-60h]
  __int64 v27; // [rsp+10h] [rbp-58h] BYREF
  __int128 v28; // [rsp+18h] [rbp-50h]
  unsigned __int64 v29; // [rsp+28h] [rbp-40h]

  LODWORD(v14) = 1;
  v29 = __readfsqword(0x28u);
  v15 = a1[1] == 0;
  v28 = 0;
  v27 = 0;
  if ( !v15 )
  {
    v16 = (char)a2;
    v14 = 0;
    for ( i = 0; ; i = v28 )
    {
      v18 = *a1;
      v19 = *a1 + 24 * v14;
      v20 = *(_QWORD *)(v19 + 8);
      if ( v20 )
      {
        a13 = v20 - 1;
        if ( v20 != 1 )
        {
          v21 = v20 - 1;
          if ( i )
          {
            --i;
            v21 = a13 + i;
            v20 += i;
          }
          v22 = v27;
          if ( *((_QWORD *)&v28 + 1) < v20 )
          {
            v25 = a13;
            v26 = v21;
            v27 = qvector_reserve(&v27, v27, v20, 1);
            v21 = v26;
            v22 = v27;
            a13 = v25;
          }
          *(_QWORD *)&v28 = v20;
          *(_BYTE *)(v22 + v21) = 0;
          a2 = *(const char **)v19;
          memcpy((void *)(i + v27), *(const void **)v19, a13);
          i = v28;
        }
      }
      if ( ++v14 >= (unsigned __int64)a1[1] )
        break;
      v23 = 2;
      if ( i )
        v23 = i-- + 1;
      a2 = (const char *)v27;
      if ( *((_QWORD *)&v28 + 1) < v23 )
      {
        v27 = qvector_reserve(&v27, v27, v23, 1);
        a2 = (const char *)v27;
      }
      *(_QWORD *)&v28 = v23;
      a2[i] = 59;
      *(_BYTE *)(v27 + i + 1) = 0;
    }
    LOBYTE(v14) = i <= 0x5000;
    if ( i > 0x5000 )
    {
      a2 = "The 'undesirable' paths exceeded the maximum size that can be stored inside the idb; can't add more.";
      if ( v16 )
        sub_169630(
          (int)"%s",
          (__int64)"The 'undesirable' paths exceeded the maximum size that can be stored inside the idb; can't add more.",
          v18,
          a12,
          a13,
          a14,
          (__m128)0LL,
          a4,
          a5,
          a6,
          a7,
          a8,
          a9,
          a10,
          v25);
      else
        sub_169700(
          (int)"%s\n",
          (__int64)"The 'undesirable' paths exceeded the maximum size that can be stored inside the idb; can't add more.",
          v18,
          a12,
          a13,
          a14,
          (__m128)0LL,
          a4,
          a5,
          a6,
          a7,
          a8,
          a9,
          a10,
          v25);
    }
    if ( v27 )
    {
      *(_QWORD *)&v28 = 0;
      qfree(v27, a2);
    }
  }
  return (unsigned int)v14;
}
