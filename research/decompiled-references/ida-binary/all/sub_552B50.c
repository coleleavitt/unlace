__int64 __fastcall liblicui::license_chooser_t__::vfunc_13(
        __int64 a1,
        __int64 a2,
        double a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  __int64 v11; // rdi
  int v12; // ecx
  double v13; // xmm0_8
  __int64 v15; // [rsp+0h] [rbp-38h] BYREF
  __int128 v16; // [rsp+8h] [rbp-30h]
  unsigned __int64 v17; // [rsp+18h] [rbp-20h]

  v11 = *(_QWORD *)(a1 + 184);
  v17 = __readfsqword(0x28u);
  sub_5527E0(v11, a3, a4, a5, a6, a7, a8, a9, a10);
  v16 = 0;
  v15 = 0;
  v15 = qvector_reserve(&v15, 0, 1, 8);
  v12 = 6;
  *(_QWORD *)(v15 + 8 * v16) = a2;
  *(_QWORD *)&v16 = v16 + 1;
  if ( *(_BYTE *)(a1 + 240) )
    v12 = 8;
  v13 = callui(203, 2, *(_QWORD *)(a1 + 184), v12, (unsigned int)&v15, (unsigned int)&callui, v15, (_QWORD)v16);
  if ( v15 )
  {
    *(_QWORD *)&v16 = 0;
    qfree(v15, (_BYTE *)&dword_0 + 2, v13);
  }
  return -1;
}
