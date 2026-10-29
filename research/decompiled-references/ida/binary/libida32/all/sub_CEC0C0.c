__int64 __fastcall sub_CEC0C0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r12
  __int64 v5; // r13
  __int64 v6; // r15
  unsigned int v7; // eax
  unsigned __int8 v8; // si
  _BYTE *v9; // rax
  unsigned int v10; // r13d
  unsigned __int8 **v12; // r15
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v17; // [rsp+18h] [rbp-E0h] BYREF
  void *v18[2]; // [rsp+20h] [rbp-D8h] BYREF
  __int64 v19; // [rsp+30h] [rbp-C8h] BYREF
  void *v20; // [rsp+40h] [rbp-B8h] BYREF
  signed __int64 v21; // [rsp+48h] [rbp-B0h]
  __int64 v22; // [rsp+50h] [rbp-A8h] BYREF
  _QWORD v23[6]; // [rsp+60h] [rbp-98h] BYREF
  _QWORD v24[13]; // [rsp+90h] [rbp-68h] BYREF

  v4 = *(_QWORD *)(a1 + 176);
  sub_DFDA20(v4, 48);
  sub_DFF520(v23);
  sub_DFDA50(v4, 48);
  v5 = *(_QWORD *)(a1 + 176);
  sub_DFDA20(v5, 48);
  sub_DFF520(v24);
  sub_DFDA50(v5, 48);
  v6 = sub_DFDA20(*(_QWORD *)(a1 + 176), 48);
  v7 = sub_E00420(v24, v23);
  if ( (_BYTE)v7 )
  {
    v8 = 2;
    if ( v24[0] >= v23[0] )
    {
      v8 = 3;
      if ( v24[0] <= v23[0] )
        v8 = *(_BYTE *)(a3 + 112) != 2;
    }
    v9 = sub_B3D760(a3, v8);
    sub_B3C480((__int64)&v20, (__int64)v9);
    v10 = sub_D68B10(a1, a2, v6, &v20);
    if ( (unsigned int)v21 > 0x40 && v20 )
      operator delete[](v20);
  }
  else
  {
    v10 = v7;
    v17 = sub_DFB160(*(_QWORD *)(a1 + 400), a2);
    v12 = (unsigned __int8 **)sub_E0FE60(a1, &v17, 2473, 0);
    v13 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 104LL))(*(_QWORD *)(a1 + 24));
    sub_E052E0(v18, v24, v13);
    if ( v12 )
    {
      sub_AC84E0(v12, (_BYTE *)v18[0], (signed __int64)v18[1]);
      v14 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 104LL))(*(_QWORD *)(a1 + 24));
      sub_E052E0(&v20, v23, v14);
      sub_AC84E0(v12, v20, v21);
    }
    else
    {
      v15 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 104LL))(*(_QWORD *)(a1 + 24));
      sub_E052E0(&v20, v23, v15);
    }
    if ( v20 != &v22 )
      operator delete(v20);
    if ( v18[0] != &v19 )
      operator delete(v18[0]);
  }
  sub_DFF560(v24);
  sub_DFF560(v23);
  return v10;
}

