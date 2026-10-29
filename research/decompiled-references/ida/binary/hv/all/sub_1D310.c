__int64 __fastcall sub_1D310(_QWORD *a1, const char *a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  int v7; // [rsp+4h] [rbp-64h] BYREF
  int v8; // [rsp+8h] [rbp-60h] BYREF
  unsigned int v9; // [rsp+Ch] [rbp-5Ch] BYREF
  struct tm tp; // [rsp+10h] [rbp-58h] BYREF
  unsigned __int64 v11; // [rsp+48h] [rbp-20h]

  v11 = __readfsqword(0x28u);
  if ( (unsigned int)sub_9A8C0(
                       (_DWORD)a2,
                       (unsigned int)"%d-%d-%d",
                       (unsigned int)&v7,
                       (unsigned int)&v8,
                       (unsigned int)&v9,
                       a6) == 3 )
  {
    memset(&tp.tm_yday, 0, 28);
    *(_OWORD *)&tp.tm_sec = 0;
    *(_QWORD *)&tp.tm_year = (unsigned int)(v7 - 1900);
    *(_QWORD *)&tp.tm_mday = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v9), _mm_cvtsi32_si128(v8 - 1)).m128i_u64[0];
    *a1 = j__timegm(&tp) << 32;
    return 0;
  }
  else
  {
    sub_1D110((__int64)"wrong date format: %s", a2);
    return 33;
  }
}

