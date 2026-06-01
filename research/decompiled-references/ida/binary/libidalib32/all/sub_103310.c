__int64 __fastcall sub_103310(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // eax
  __m128i v4; // xmm0
  unsigned int v6; // r12d
  unsigned int v7; // eax
  int v8; // eax
  __int64 v9; // [rsp+8h] [rbp-40h]
  __int64 (**v10)(); // [rsp+10h] [rbp-38h] BYREF
  int v11; // [rsp+18h] [rbp-30h]
  __int64 v12; // [rsp+1Ch] [rbp-2Ch]
  unsigned __int64 v13; // [rsp+28h] [rbp-20h]

  v3 = *(_DWORD *)(a2 + 8);
  v4 = _mm_loadl_epi64((const __m128i *)(a2 + 12));
  v13 = __readfsqword(0x28u);
  v11 = v3;
  v10 = off_2301D8;
  v12 = v4.m128i_i64[0];
  if ( _mm_cvtsi128_si32(v4) == -1 )
  {
    v9 = a3;
    v6 = _mm_cvtsi128_si32(_mm_shuffle_epi32(v4, 229))
       + *(_DWORD *)(*(_QWORD *)(a1 + 752) + 24LL) * *(_DWORD *)(*(_QWORD *)(a1 + 752) + 28LL);
    v7 = getinf();
    a3 = v9;
    if ( v6 >= v7 )
    {
      v8 = getinf();
      a3 = v9;
      LODWORD(v12) = v8;
    }
    else
    {
      LODWORD(v12) = HIDWORD(v12);
    }
  }
  return sub_F3480(a1, (__int64)&v10, a3);
}

