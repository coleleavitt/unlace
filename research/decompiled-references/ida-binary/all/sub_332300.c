__int64 __fastcall sub_332300(
        __int64 a1,
        __m128 a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  int v9; // eax
  bool v10; // dl
  double v11; // xmm4_8
  double v12; // xmm5_8
  __int64 result; // rax
  __int64 v14; // rdi
  _QWORD v15[3]; // [rsp+0h] [rbp-38h] BYREF
  int v16; // [rsp+18h] [rbp-20h]
  unsigned __int64 v17; // [rsp+28h] [rbp-10h]

  v17 = __readfsqword(0x28u);
  v9 = *(_DWORD *)(a1 + 8);
  if ( v9 == 25 || v9 == 58 )
    return sub_3AE7A0();
  v10 = sub_32FD50();
  result = 1;
  if ( !v10 )
  {
    v16 = 0;
    v15[0] = -1;
    v14 = xmmword_8CC820;
    if ( (_QWORD)xmmword_8CC820 != -1 )
      v14 = 16 * sel2para(xmmword_8CC820);
    v15[1] = v14;
    v15[2] = 0;
    return sub_331480(
             "Offset",
             (__int64 (__fastcall *)(unsigned __int64, _QWORD, __int64, _QWORD, _QWORD))sub_331B90,
             (__int64)v15,
             1,
             1u,
             a2,
             a3,
             a4,
             a5,
             v11,
             v12,
             a8,
             a9);
  }
  return result;
}
