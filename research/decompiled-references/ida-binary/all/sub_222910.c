void __fastcall thread_t::set_trace_bpt(
        __int64 a1,
        unsigned int *a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  int v10; // r13d
  unsigned int v11; // r15d
  __int64 v12; // r14
  char v13; // al
  double v14; // xmm4_8
  double v15; // xmm5_8
  __int64 v16; // rax

  if ( qword_8CC348 == *(_QWORD *)(a1 + 80) )
  {
    if ( *((_QWORD *)a2 + 16) )
    {
      v10 = 4;
      v11 = 1;
      sub_2401E0(*a2);
      v12 = *((_QWORD *)a2 + 15) + 16LL * *((_QWORD *)a2 + 16) - 16;
      v13 = *((_BYTE *)a2 + 153) | *(_BYTE *)(v12 + 8);
      *((_BYTE *)a2 + 153) = v13;
      while ( 1 )
      {
        sub_210D40(a2, v11, (v11 & v13) == 0 ? -1 : 1, 0);
        if ( !--v10 )
          break;
        v13 = *((_BYTE *)a2 + 153);
        v11 *= 2;
      }
      *((_BYTE *)a2 + 152) = *(_BYTE *)(v12 + 9);
      v16 = *((_QWORD *)a2 + 16);
      if ( v16 )
        *((_QWORD *)a2 + 16) = v16 - 1;
      sub_222400((__int64)a2, (__int64)&qword_8CC340, 1, a3, a4, a5, a6, v14, v15, a9, a10);
    }
    sub_2369A0(a1, a2);
  }
}
