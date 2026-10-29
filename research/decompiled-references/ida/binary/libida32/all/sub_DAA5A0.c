__int64 __fastcall sub_DAA5A0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbp
  __int64 v5; // rdi
  unsigned int v6; // ebp
  __int64 v8; // rsi
  __int64 v9; // r13
  _QWORD *v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rdi
  __int64 v13; // rax
  __m128 v14; // xmm0
  double v15[2]; // [rsp+0h] [rbp-98h] BYREF
  _BYTE v16[24]; // [rsp+10h] [rbp-88h] BYREF
  int v17; // [rsp+28h] [rbp-70h]
  __int64 v18; // [rsp+30h] [rbp-68h]
  _BYTE v19[88]; // [rsp+40h] [rbp-58h] BYREF

  v4 = *(_QWORD *)(a1 + 176);
  *(_QWORD *)&v15[0] = a3;
  sub_DFDA20(v4, 48);
  sub_DFF520(v16);
  v5 = v4;
  v6 = 0;
  sub_DFDA50(v5, 48);
  if ( !v17 )
  {
    v8 = v18;
    sub_DFF430(v19, v18);
    v9 = *(_QWORD *)(sub_CDA510((__int64)v19, v8) & 0xFFFFFFFFFFFFFFF0LL);
    sub_DFF560(v19);
    v10 = *(_QWORD **)(a1 + 400);
    v11 = v10[4];
    if ( v11 )
    {
      while ( !v11 || (unsigned int)(*(_DWORD *)(v11 + 8) - 1) > 1 || v10[9] != v18 )
      {
        v10 = (_QWORD *)v10[1];
        if ( !v10 )
          goto LABEL_10;
        v11 = v10[4];
      }
      v9 = *(_QWORD *)(sub_D9F200(v11) + 48);
    }
LABEL_10:
    v6 = 1;
    v12 = *(_QWORD *)(a1 + 176);
    v15[1] = *(double *)(*(_QWORD *)(v9 + 8) & 0xFFFFFFFFFFFFFFF0LL);
    v13 = sub_DFD980(v12, 48);
    *(_OWORD *)(v13 + 8) = 0;
    *(_QWORD *)v13 = 0;
    v14 = _mm_loadh_ps(v15);
    *(_DWORD *)(v13 + 24) = 3;
    *(__m128 *)(v13 + 32) = v14;
  }
  sub_DFF560(v16);
  return v6;
}

