__int64 __fastcall sub_DC6590(__int64 a1, __int64 a2)
{
  __int64 v3; // rbp
  __int64 v4; // rdi
  unsigned int v5; // ebp
  __int64 v7; // rsi
  __int64 v8; // r13
  _QWORD *v9; // rax
  __int64 v10; // rdi
  __int64 v11; // rdi
  __int64 v12; // rax
  __m128 v13; // xmm0
  double v14[2]; // [rsp+0h] [rbp-98h] BYREF
  _BYTE v15[24]; // [rsp+10h] [rbp-88h] BYREF
  int v16; // [rsp+28h] [rbp-70h]
  __int64 v17; // [rsp+30h] [rbp-68h]
  _BYTE v18[88]; // [rsp+40h] [rbp-58h] BYREF

  v3 = *(_QWORD *)(a1 + 176);
  *(_QWORD *)&v14[0] = a2;
  sub_E21760(v3, 48);
  sub_E23260(v15);
  v4 = v3;
  v5 = 0;
  sub_E21790(v4, 48);
  if ( !v16 )
  {
    v7 = v17;
    sub_E23170(v18, v17);
    v8 = *(_QWORD *)(sub_CFE250((__int64)v18, v7) & 0xFFFFFFFFFFFFFFF0LL);
    sub_E232A0(v18);
    v9 = *(_QWORD **)(a1 + 400);
    v10 = v9[4];
    if ( v10 )
    {
      while ( !v10 || (unsigned int)(*(_DWORD *)(v10 + 8) - 1) > 1 || v17 != v9[9] )
      {
        v9 = (_QWORD *)v9[1];
        if ( !v9 )
          goto LABEL_10;
        v10 = v9[4];
      }
      v8 = *(_QWORD *)(sub_DC2F40(v10) + 48);
    }
LABEL_10:
    v5 = 1;
    v11 = *(_QWORD *)(a1 + 176);
    v14[1] = *(double *)(*(_QWORD *)(v8 + 8) & 0xFFFFFFFFFFFFFFF0LL);
    v12 = sub_E216C0(v11, 48);
    *(_OWORD *)(v12 + 8) = 0;
    *(_QWORD *)v12 = 0;
    v13 = _mm_loadh_ps(v14);
    *(_DWORD *)(v12 + 24) = 3;
    *(__m128 *)(v12 + 32) = v13;
  }
  sub_E232A0(v15);
  return v5;
}
