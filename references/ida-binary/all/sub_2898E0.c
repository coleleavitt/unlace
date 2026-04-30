unsigned __int64 __fastcall sub_2898E0(QT::QCoreApplication *this, void *a2, char a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __m128i v9; // xmm2
  __m128i v10; // xmm0
  unsigned __int64 v11; // r12
  void **v12; // rbp
  void *v13; // rdi
  __m128i v14; // xmm4
  __m128i v15; // xmm5
  __m128i v16; // [rsp+0h] [rbp-88h] BYREF
  __m128i v17; // [rsp+10h] [rbp-78h] BYREF
  _OWORD v18[2]; // [rsp+20h] [rbp-68h] BYREF
  _OWORD v19[2]; // [rsp+40h] [rbp-48h] BYREF
  unsigned __int64 v20; // [rsp+68h] [rbp-20h]

  v20 = __readfsqword(0x28u);
  if ( !(unsigned __int8)sub_1A1870() )
  {
    sub_176C30(this, a2, a3);
    if ( !*((_BYTE *)this + 433) && !*((_DWORD *)this + 6) && !*(_BYTE *)(*((_QWORD *)this + 2) + 881LL) )
    {
      v9 = _mm_loadu_si128((const __m128i *)((char *)this + 376));
      v10 = _mm_loadu_si128((const __m128i *)((char *)this + 408));
      v17 = _mm_loadu_si128((const __m128i *)((char *)this + 360));
      v18[0] = _mm_loadu_si128((const __m128i *)((char *)this + 392));
      v18[1] = v10;
      v19[0] = v17;
      v16 = v9;
      v19[1] = v9;
      sub_283600((__int64 **)v19, (__int64 **)v18, v6, v7, v8);
      v11 = *((_QWORD *)this + 52) + 8LL;
      v12 = (void **)(v9.m128i_i64[1] + 8);
      if ( v9.m128i_i64[1] + 8 < v11 )
      {
        do
        {
          v13 = *v12++;
          operator delete(v13, 0x110u);
        }
        while ( (unsigned __int64)v12 < v11 );
      }
      v14 = _mm_load_si128(&v17);
      v15 = _mm_load_si128(&v16);
      *((_DWORD *)this + 106) = 0;
      *(__m128i *)((char *)this + 392) = v14;
      *(__m128i *)((char *)this + 408) = v15;
    }
  }
  return v20 - __readfsqword(0x28u);
}
