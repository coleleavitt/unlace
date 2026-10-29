__int64 __fastcall sub_DCF120(_QWORD *a1, __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned int v6; // ebx
  __int64 v8; // r14
  unsigned int v9; // ecx
  __int64 v10; // rax
  void *v11; // rax
  unsigned int v12; // r12d
  int v13; // ebx
  int v14; // eax
  __int64 v15; // r9
  _DWORD *v16; // r13
  __int64 v17; // rax
  __int64 v18; // r14
  __int64 v19; // rax
  __m128i v20; // [rsp+0h] [rbp-A8h] BYREF
  __m128i v21; // [rsp+10h] [rbp-98h] BYREF
  _BYTE v22[48]; // [rsp+20h] [rbp-88h] BYREF
  _BYTE v23[88]; // [rsp+50h] [rbp-58h] BYREF

  if ( !(unsigned __int8)sub_DA7230((__int64)a1, a2) )
    return 0;
  v8 = a1[22];
  v20 = _mm_loadu_si128((const __m128i *)sub_DFDA20(v8, 16));
  sub_DFDA50(v8, 16);
  v9 = *(_DWORD *)(a3 + 20);
  v21 = _mm_load_si128(&v20);
  if ( (unsigned __int8)sub_D317A0((__int64)a1, a2, (__int64)&v21, v9, (unsigned __int8)a4) )
  {
    v11 = sub_D0B940((__int64)&v21);
    v12 = sub_CDB1A0((__int64)a1, a2, (unsigned __int64)v11);
    if ( (_BYTE)v12 )
    {
      v13 = *(_DWORD *)(a1[23] + 32LL);
      v14 = (unsigned int)sub_D0B940((__int64)&v21);
      v16 = sub_D8C6F0(a1 + 6, (_QWORD *)a3, v14, v13, 1, v15);
      v6 = sub_D29E30(v21.m128i_i64);
      if ( (_BYTE)v6 )
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
        v6 = v12;
        sub_DFF560(v22);
      }
      return v6;
    }
    return 0;
  }
  if ( !(_BYTE)a4 )
    return 0;
  v10 = sub_DFD980(a1[22], 48);
  *(_QWORD *)v10 = 0;
  *(_OWORD *)(v10 + 8) = 0;
  *(_DWORD *)(v10 + 24) = 1;
  *(_QWORD *)(v10 + 40) = 0;
  *(_QWORD *)(v10 + 32) = a3;
  return a4;
}

