unsigned __int64 __fastcall sub_21A7F0(
        __int64 a1,
        int a2,
        unsigned __int8 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        double a8,
        double a9,
        __m128 a10,
        __m128 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14,
        char a15)
{
  _QWORD *v15; // rbp
  __int64 v17; // rsi
  unsigned __int64 result; // rax
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  const char *v22; // r11
  __m128 v23; // xmm4
  __m128 v24; // xmm5
  __int64 v25; // rcx
  int v26; // edx

  v15 = *(_QWORD **)(a1 + 184);
  v17 = 16 * ((v15[15] == 0) + (unsigned int)((__int64)(v15[15] - v15[11]) >> 3) - 1)
      + (unsigned int)((__int64)(v15[10] - v15[8]) >> 5)
      + (unsigned int)((__int64)(v15[12] - v15[13]) >> 5)
      - a2
      - 1;
  result = sub_20F460((__int64)v15, v17);
  v25 = *(unsigned int *)(result + 8);
  if ( (_DWORD)v25 )
  {
    if ( dbg )
    {
      v26 = dword_8CC5F0;
      *(_BYTE *)(a1 + 224) = v22 == nullptr;
      if ( v26 <= 0 || v22 )
      {
        return sub_219B40((__int64)v15, v22, a3);
      }
      else
      {
        sub_20B290(dword_8CC428, (_BYTE *)&dword_0 + 1);
        sub_1F9CB0();
        return nullsub_70();
      }
    }
    else
    {
      return sub_169630(
               (int)"Please select a debugger first!",
               v17,
               v19,
               v25,
               v20,
               v21,
               a4,
               a5,
               a6,
               a7,
               v23,
               v24,
               a10,
               a11,
               a15);
    }
  }
  return result;
}
