__int64 __fastcall sub_507D60(
        const char *src,
        const __m128i *a2,
        double a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  size_t v11; // rax
  size_t v12; // r13
  size_t v13; // r12
  __m128 *v14; // rsi
  unsigned int v15; // r13d
  char *v16; // rax
  int v17; // edx
  int v19; // [rsp+Ch] [rbp-94h] BYREF
  int v20; // [rsp+10h] [rbp-90h] BYREF
  int v21; // [rsp+14h] [rbp-8Ch] BYREF
  char *v22; // [rsp+18h] [rbp-88h] BYREF
  _BYTE *v23; // [rsp+20h] [rbp-80h] BYREF
  __int128 v24; // [rsp+28h] [rbp-78h]
  __m128 v25; // [rsp+38h] [rbp-68h] BYREF
  __int64 v26; // [rsp+48h] [rbp-58h]
  _QWORD v27[3]; // [rsp+50h] [rbp-50h] BYREF
  char v28; // [rsp+68h] [rbp-38h] BYREF
  unsigned __int64 v29; // [rsp+78h] [rbp-28h]

  v29 = __readfsqword(0x28u);
  v23 = nullptr;
  v24 = 0;
  if ( src )
  {
    v11 = strlen(src);
    v12 = v11 + 1;
    v13 = v11;
    v23 = (_BYTE *)qvector_reserve(&v23, 0, v11 + 1, 1);
    *(_QWORD *)&v24 = v12;
    memmove(v23, src, v13);
    v23[v13] = 0;
  }
  v14 = &v25;
  v25 = (__m128)_mm_loadu_si128(a2);
  v26 = a2[1].m128i_i64[0];
  sub_4F9500(v23, (int *)&v25, &v19, v27, &v20, 0, v25, a4, a5, a6, a7, a8, a9, a10, nullptr, &v21, &v22);
  v15 = 1;
  if ( v27[1] )
  {
    v14 = (__m128 *)v20;
    v16 = (char *)v27;
    v17 = 0;
    while ( 1 )
    {
      if ( *(_QWORD *)v16 )
      {
        if ( v20 == v17 )
        {
          v15 = dword_6CD1F8[v20];
          break;
        }
        ++v17;
      }
      v16 += 8;
      if ( &v28 == v16 )
      {
        v15 = -2;
        break;
      }
    }
  }
  if ( v23 )
  {
    *(_QWORD *)&v24 = 0;
    qfree(v23, (const char *)v14);
  }
  return v15;
}
