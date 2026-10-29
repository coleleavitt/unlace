__int64 __fastcall sub_24F380(
        int a1,
        unsigned int a2,
        double a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10,
        __int64 a11,
        char *a12)
{
  int v12; // ebx
  __int64 v14; // rax
  _DWORD *v15; // rdi
  __int64 v16; // rsi
  __int64 v17; // rdx
  char *v18; // rcx
  __int64 v19; // r13
  double v20; // xmm4_8
  double v21; // xmm5_8
  unsigned int v22; // r14d
  int v24; // eax
  char *v25; // rcx
  __int64 v26; // rdx
  _QWORD *v27; // rdi

  if ( dbg )
  {
    v12 = a1;
    if ( !a1 )
      goto LABEL_16;
    v14 = qword_8CC430 + ((_QWORD)xmmword_8CC438 << 8);
    if ( qword_8CC430 == v14 )
      goto LABEL_16;
    v15 = (_DWORD *)qword_8CC430;
    while ( v12 != *v15 )
    {
      v15 += 64;
      if ( (_DWORD *)v14 == v15 )
        goto LABEL_16;
    }
    if ( v15 )
    {
      dword_8BA580 = ((__int64)v15 - qword_8CC430) >> 8;
      if ( byte_8CC44C )
        dword_8CC448 = 0;
      v16 = 0xFFFFFFFFLL;
      v19 = sub_23F1C0((__int64)v15, -1, a3, qword_8CC430, a12);
      if ( v19 )
      {
        LODWORD(dword_8CC428) = v12;
        v22 = a2;
        if ( (_BYTE)a2 )
          return v22;
        v22 = 1;
        if ( dword_8CC5F0 >= 0 )
          goto LABEL_13;
        sub_24F1F0(v19, a3, a4, a5, a6, v20, v21, a9, a10);
        v24 = dword_8BA590;
        if ( dword_8BA590 == -1 )
          goto LABEL_28;
        v25 = (char *)dbg;
        v26 = *(_QWORD *)(v19 + 32LL * dword_8BA590 + 8);
        if ( !dbg )
          goto LABEL_27;
        if ( (*(_BYTE *)(dbg + 37) & 0x40) == 0 )
          goto LABEL_27;
        v27 = qword_8CC600;
        if ( !qword_8CC600 )
          goto LABEL_27;
        *(_QWORD *)qword_8CC600 = v26;
        v27[1] = v19;
        *((_DWORD *)v27 + 4) = v24;
        if ( (unsigned int)sub_23D480((__int64)v27, 11, v26, v25, a3) != 1 )
LABEL_28:
          v26 = -1;
        else
          v26 = *(_QWORD *)qword_8CC600;
LABEL_27:
        v16 = 0;
        qword_8BA5A0 = v26;
        v22 = 1;
        sub_241220(v19, 0, v26, a3);
        v12 = dword_8CC428;
        goto LABEL_13;
      }
      if ( !(_BYTE)a2 )
      {
        v12 = dword_8CC428;
        v22 = 0;
LABEL_13:
        sub_23F2E0(v12, a3, v16, v17, v18);
LABEL_14:
        sub_22A640((unsigned int)dword_8CC428);
        sub_388FE0();
        return v22;
      }
    }
    else
    {
LABEL_16:
      dword_8BA580 = -1;
      LODWORD(dword_8CC428) = 0;
      if ( !(_BYTE)a2 )
      {
        sub_3E1200();
        v22 = 0;
        qword_8BA5A8 = -1;
        qword_8BA5A0 = -1;
        goto LABEL_14;
      }
    }
  }
  return 0;
}
