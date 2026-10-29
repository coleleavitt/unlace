__int64 __fastcall sub_BC0080(_QWORD *a1, _DWORD *a2, __int64 a3, const double *a4, double a5)
{
  unsigned int v6; // r14d
  int v7; // eax
  double v8; // xmm0_8
  __int64 v9; // r14
  _DWORD *v10; // rax
  _DWORD *v11; // rbp
  unsigned int v12; // r13d
  int v13; // eax
  __int64 result; // rax

  sub_14078B0(a1 + 231, a2, a3, a4);
  v6 = sub_BB24A0((__int64)a1, *(_DWORD **)a4);
  v7 = sub_BB24A0((__int64)a1, a2);
  sub_BBF3C0(a1, v7 ^ 1, v6, 0xFFFFFFFE, 0xFFFFFFFE, 0xFFFFFFFE, a5);
  *(_QWORD *)&v8 = _mm_loadh_ps(a4).m128_u64[0];
  v9 = a1[3];
  v10 = (_DWORD *)sub_15E1AF0(a1[217]);
  v11 = v10;
  if ( v10 )
    ++v10[2];
  v12 = sub_966380((__int64)a1, a2, v10);
  v13 = sub_BB24A0((__int64)a1, a2);
  result = sub_BBF3C0(a1, v13, v12, 0xFFFFFFFE, 0xFFFFFFFE, 0xFFFFFFFE, v8);
  if ( v11 )
  {
    if ( v11[2]-- == 1 )
      return sub_15D7BC0(v9, v11);
  }
  return result;
}

