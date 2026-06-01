__int64 __fastcall sub_332220(
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
  int v10; // eax
  bool v11; // dl
  __int64 result; // rax
  __int64 sreg; // rax
  double v14; // xmm4_8
  double v15; // xmm5_8
  _QWORD v16[3]; // [rsp+0h] [rbp-38h] BYREF
  int v17; // [rsp+18h] [rbp-20h]
  unsigned __int64 v18; // [rsp+28h] [rbp-10h]

  v18 = __readfsqword(0x28u);
  v10 = *(_DWORD *)(a1 + 8);
  if ( v10 == 25 || v10 == 58 )
    return sub_3AEEA0();
  v11 = sub_32FD50();
  result = 1;
  if ( !v11 )
  {
    get_ph(a1, a2);
    sreg = get_sreg(xmmword_8CC810);
    v17 = 0;
    v16[0] = -1;
    if ( sreg != -1 )
      sreg = 16 * sel2para(sreg);
    v16[1] = sreg;
    v16[2] = 0;
    return sub_331480(
             "Offset",
             (__int64 (__fastcall *)(unsigned __int64, _QWORD, __int64, _QWORD, _QWORD))sub_331B90,
             (__int64)v16,
             1,
             1u,
             a3,
             a4,
             a5,
             a6,
             v14,
             v15,
             a9,
             a10);
  }
  return result;
}
