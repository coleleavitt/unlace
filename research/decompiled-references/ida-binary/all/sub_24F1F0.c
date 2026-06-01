_QWORD *__fastcall sub_24F1F0(
        __int64 a1,
        double a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  char *v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // rbp
  __int64 v15; // rax
  __int64 v16; // rdx
  _QWORD *result; // rax
  double v18; // xmm4_8
  double v19; // xmm5_8
  _QWORD *v20; // rdi

  sub_3E1200();
  v13 = dword_8BA594;
  v14 = *(_QWORD *)(a1 + 32LL * dword_8BA594 + 8);
  if ( dbg )
  {
    if ( (*(_BYTE *)(dbg + 37) & 0x40) != 0 )
    {
      v20 = qword_8CC600;
      if ( qword_8CC600 )
      {
        *(_QWORD *)qword_8CC600 = v14;
        v20[1] = a1;
        *((_DWORD *)v20 + 4) = v13;
        if ( (unsigned int)sub_23D480((__int64)v20, 11, v13, v10, a2) != 1 )
        {
          qword_8BA5A8 = -1;
          goto LABEL_20;
        }
        v14 = *(_QWORD *)qword_8CC600;
      }
    }
  }
  qword_8BA5A8 = v14;
  if ( v14 == -1 )
  {
LABEL_20:
    v14 = -1;
    goto LABEL_6;
  }
  if ( getseg(v14) || (sub_240EA0(1, a2), (unsigned __int8)is_mapped(v14)) )
    sub_233900(v14);
LABEL_6:
  if ( (_DWORD)dword_8CC428 )
  {
    v15 = qword_8CC430;
    v16 = qword_8CC430 + ((_QWORD)xmmword_8CC438 << 8);
    if ( qword_8CC430 != v16 )
    {
      while ( (_DWORD)dword_8CC428 != *(_DWORD *)v15 )
      {
        v15 += 256;
        if ( v16 == v15 )
          goto LABEL_13;
      }
      if ( v15 )
        qword_8BA598 = sub_240FC0(*(_QWORD *)(v15 + 40), 0, a2, v16, (unsigned int)dword_8CC428, v11, v12);
    }
  }
LABEL_13:
  sub_2A9EE0();
  if ( (HIDWORD(qword_8CC350) & 0xFFFFFFF) == 7 && HIDWORD(qword_8CC340) == (_DWORD)dword_8CC428 )
    v14 = qword_8CC348;
  result = (_QWORD *)is_mapped(v14);
  if ( (_BYTE)result )
    return sub_24EFB0(v14, nullptr, a2, a3, a4, a5, v18, v19, a8, a9);
  return result;
}
