__int64 __fastcall sub_330A10(
        __int64 a1,
        const char *a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  __int64 ph; // rbx
  __int64 result; // rax
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __m128 v15; // xmm4
  __m128 v16; // xmm5
  int v17; // edx
  __int64 v18; // rsi
  char v19; // [rsp+0h] [rbp-438h]
  __int64 sreg; // [rsp+8h] [rbp-430h] BYREF
  _BYTE v21[1032]; // [rsp+10h] [rbp-428h] BYREF
  unsigned __int64 v22; // [rsp+418h] [rbp-20h]

  v22 = __readfsqword(0x28u);
  ph = get_ph(a1, a2);
  result = 0;
  if ( (*(_BYTE *)(ph + 8) & 1) != 0 )
  {
    sub_32E8C0(ph, (__int64)v21, 1017, "\n", *(double *)a3.m128_u64);
    sreg = get_sreg(xmmword_8CC810);
    v17 = sub_1697D0(
            (int)v21,
            (__int64)&word_8CEC28,
            (__int64)&sreg,
            v12,
            v13,
            v14,
            a3,
            a4,
            a5,
            a6,
            v15,
            v16,
            a9,
            a10,
            v19);
    result = 1;
    if ( v17 )
    {
      v18 = *(_DWORD *)(ph + 68) + (unsigned int)(unsigned __int16)word_8CEC28;
      if ( *(_DWORD *)(ph + 80) <= (int)v18 )
        v18 = (unsigned int)(v18 + 1);
      return (unsigned __int8)split_sreg_range(xmmword_8CC810, v18, sreg, 2, 0);
    }
  }
  return result;
}
