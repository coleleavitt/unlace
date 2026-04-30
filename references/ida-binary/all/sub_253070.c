__int64 __fastcall sub_253070(
        char a1,
        __m128 a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        int a13,
        int a14)
{
  char v14; // al
  __int64 v16; // rdx
  __int64 v17; // rcx
  double v18; // xmm4_8
  double v19; // xmm5_8
  __int64 v21; // rsi
  char *v22; // rdi
  char *s; // [rsp+0h] [rbp-28h] BYREF
  __int128 v24; // [rsp+8h] [rbp-20h]
  unsigned __int64 v25; // [rsp+18h] [rbp-10h]

  v14 = dword_8CC55C;
  v25 = __readfsqword(0x28u);
  if ( (dword_8CC55C & 1) != 0 )
  {
    a2 = 0;
    s = nullptr;
    v24 = 0;
    sub_22FC60(5u, &s);
    v22 = s;
    if ( (unsigned __int64)v24 <= 1 )
    {
      v22 = "Running";
      if ( dword_8CC5F0 <= 0 )
        v22 = nullptr;
    }
    sub_30A040(v22);
    v14 = dword_8CC55C & 0xFE;
    dword_8CC55C &= ~1u;
    if ( s )
    {
      *(_QWORD *)&v24 = 0;
      *(double *)a2.m128_u64 = qfree(s, (const char *)&s);
      v14 = dword_8CC55C;
    }
  }
  if ( (v14 & 4) != 0 )
  {
    sub_24BA10((QT::QVariant *)((char *)&dword_0 + 1), 1, 0, *(double *)a2.m128_u64, a12, a13, a14);
    v14 = dword_8CC55C & 0xFB;
    dword_8CC55C &= ~4u;
  }
  if ( (v14 & 2) != 0 )
  {
    sub_3D80A0((char *)qword_8CD748 + 288, 0);
    dword_8CC55C &= ~2u;
  }
  if ( dbg && (*(_BYTE *)(dbg + 34) & 8) != 0 )
    return 0;
  if ( (unsigned __int8)sub_23BE00() )
    return (unsigned int)-(dword_8CC5F0 == 0);
  v21 = 0;
  if ( a1 )
    v21 = (unsigned int)dword_8BA5B4;
  return sub_252810(0, v21, v16, v17, a2, a3, a4, a5, v18, v19, a8, a9);
}
