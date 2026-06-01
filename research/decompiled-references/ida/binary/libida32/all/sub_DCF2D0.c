__int64 __fastcall sub_DCF2D0(_QWORD *a1, __int64 a2, unsigned int a3, __int64 a4, unsigned int a5)
{
  __int64 v9; // r15
  unsigned int v10; // eax
  __int64 v11; // rax
  void *v12; // rax
  unsigned int v13; // r12d
  unsigned int v14; // ebx
  int v15; // eax
  _DWORD *v16; // r13
  __int64 v17; // rax
  __int64 v18; // r14
  __int64 v19; // rax
  __m128i v20; // [rsp+0h] [rbp-B8h] BYREF
  __m128i v21; // [rsp+10h] [rbp-A8h] BYREF
  _BYTE v22[48]; // [rsp+20h] [rbp-98h] BYREF
  _BYTE v23[104]; // [rsp+50h] [rbp-68h] BYREF

  if ( !(unsigned __int8)sub_DA7230((__int64)a1, a2) )
    return 0;
  v9 = a1[22];
  v20 = _mm_loadu_si128((const __m128i *)sub_DFDA20(v9, 16));
  sub_DFDA50(v9, 16);
  v21 = _mm_load_si128(&v20);
  v10 = sub_E05440(a3);
  if ( !(unsigned __int8)sub_D317A0((__int64)a1, a2, (__int64)&v21, v10, (unsigned __int8)a5) )
  {
    if ( (_BYTE)a5 )
    {
      v11 = sub_DFD980(a1[22], 48);
      *(_QWORD *)v11 = 0;
      *(_OWORD *)(v11 + 8) = 0;
      *(_DWORD *)(v11 + 24) = 1;
      *(_QWORD *)(v11 + 40) = 0;
      *(_QWORD *)(v11 + 32) = 0;
      return a5;
    }
    return 0;
  }
  v12 = sub_D0B940((__int64)&v21);
  v13 = sub_CDB1A0((__int64)a1, a2, (unsigned __int64)v12);
  if ( !(_BYTE)v13 )
    return 0;
  v14 = *(_DWORD *)(a1[23] + 32LL);
  v15 = (unsigned int)sub_D0B940((__int64)&v21);
  v16 = sub_D8C630(a1 + 6, a4, a3, v15, v14, 1);
  a5 = sub_D29E30(v21.m128i_i64);
  if ( (_BYTE)a5 )
  {
    v17 = sub_DFD980(a1[22], 48);
    sub_DFF430(v17, v16);
  }
  else
  {
    v18 = a1[22];
    sub_DFF430(v22, v16);
    sub_CDA6F0((__int64)v23, (__int64)v22, 0);
    v19 = sub_DFD980(v18, 48);
    sub_DFF520(v19);
    sub_DFF560(v23);
    a5 = v13;
    sub_DFF560(v22);
  }
  return a5;
}

