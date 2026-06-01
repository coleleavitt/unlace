__int64 __fastcall sub_884420(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  bool v6; // zf
  const char *v8; // rdi
  int v9; // edx
  __int64 result; // rax
  char v11; // [rsp+0h] [rbp-58h]
  int v12; // [rsp+4h] [rbp-54h] BYREF
  int v13; // [rsp+8h] [rbp-50h] BYREF
  unsigned int v14; // [rsp+Ch] [rbp-4Ch] BYREF
  struct tm tp; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int64 v16; // [rsp+48h] [rbp-10h]

  v6 = *(_QWORD *)(a2 + 8) == 0;
  v16 = __readfsqword(0x28u);
  v8 = haystack;
  if ( !v6 )
    v8 = *(const char **)a2;
  v9 = qsscanf((int)v8, (int)"%d-%d-%d", (int)&v12, (int)&v13, (int)&v14, a6, v11);
  result = 0;
  if ( v9 == 3 )
  {
    memset(&tp.tm_yday, 0, 28);
    *(_OWORD *)&tp.tm_sec = 0;
    *(_QWORD *)&tp.tm_year = (unsigned int)(v12 - 1900);
    *(_QWORD *)&tp.tm_mday = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v14), _mm_cvtsi32_si128(v13 - 1)).m128i_u64[0];
    *a1 = qtimegm(&tp);
    return 1;
  }
  return result;
}

