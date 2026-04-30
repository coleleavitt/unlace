__int64 __fastcall sub_240700(
        unsigned int a1,
        double a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  double v9; // xmm0_8
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __m128 v14; // xmm4
  __m128 v15; // xmm5
  int v17; // eax
  _DWORD *v18; // rdi
  __int64 v19; // rdx
  char *v20; // rcx
  char v21[40]; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v22; // [rsp+28h] [rbp-20h]

  v22 = __readfsqword(0x28u);
  v9 = qsnprintf(v21, 40, "EXC_%X", a1);
  if ( (unsigned __int8)sub_22EB00(a1, v21, v9, a3, a4, a5, v14, v15, a8, a9, v10, v11, v12, v13) )
  {
    v17 = xmmword_8CC2F8;
    v18 = qword_8CC600;
    v19 = qword_8CC2F0;
    v20 = (char *)(unsigned int)xmmword_8CC2F8;
    if ( qword_8CC600 )
    {
      *(_QWORD *)qword_8CC600 = qword_8CC2F0;
      v18[2] = v17;
      sub_23D480((__int64)v18, 24, v19, v20, v9);
    }
    else
    {
      sub_20CEA0(dbg, 13, qword_8CC2F0, (unsigned int)xmmword_8CC2F8);
    }
  }
  return 0;
}
