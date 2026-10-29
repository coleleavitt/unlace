__int64 __fastcall sub_948560(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rbp
  __int64 v7; // rax
  __int64 v8; // rbp
  __int64 v9; // rax
  unsigned int v10; // eax
  __int64 v11; // rsi
  unsigned int v12; // edi
  __int64 v13; // rax
  unsigned int v14; // ebp
  unsigned __int8 **v16; // r14
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // [rsp+8h] [rbp-110h]
  __int64 v21; // [rsp+18h] [rbp-100h] BYREF
  void *v22[2]; // [rsp+20h] [rbp-F8h] BYREF
  __int64 v23; // [rsp+30h] [rbp-E8h] BYREF
  void *v24; // [rsp+40h] [rbp-D8h] BYREF
  size_t v25; // [rsp+48h] [rbp-D0h]
  __int64 v26; // [rsp+50h] [rbp-C8h] BYREF
  _QWORD v27[8]; // [rsp+60h] [rbp-B8h] BYREF
  _QWORD v28[15]; // [rsp+A0h] [rbp-78h] BYREF

  v6 = *(_QWORD *)(a1 + 184);
  v7 = sub_A1A5A0(v6, 56);
  sub_A1C070(v27, v7);
  sub_A1A5E0(v6, 56);
  v8 = *(_QWORD *)(a1 + 184);
  v9 = sub_A1A5A0(v8, 56);
  sub_A1C070(v28, v9);
  sub_A1A5E0(v8, 56);
  v20 = sub_A1A5A0(*(_QWORD *)(a1 + 184), 56);
  v10 = sub_A1CE20(v28, v27);
  if ( (_BYTE)v10 )
  {
    if ( v28[0] < v27[0] )
    {
      v11 = 2;
      v12 = 2;
    }
    else
    {
      v11 = 1;
      v12 = 0;
      if ( v27[0] < v28[0] )
      {
        v11 = 3;
        v12 = 3;
      }
    }
    if ( *(_BYTE *)(a3 + 112) == 2 )
      v11 = v12;
    v13 = sub_B9AC80(a3, v11);
    sub_B99210(&v24, v13);
    v14 = sub_987D60(a1, a2, v20, &v24);
    if ( (unsigned int)v25 > 0x40 && v24 )
      operator delete[](v24);
  }
  else
  {
    v14 = v10;
    v21 = sub_A16CE0(*(_QWORD *)(a1 + 200), a2);
    v16 = (unsigned __int8 **)sub_A2E0C0(a1, &v21, 2271, 0);
    v17 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 104LL))(*(_QWORD *)(a1 + 24));
    sub_A248F0(v22, v28, v17);
    if ( v16 )
    {
      sub_838D50(v16, (_BYTE *)v22[0], (size_t)v22[1]);
      v18 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 104LL))(*(_QWORD *)(a1 + 24));
      sub_A248F0(&v24, v27, v18);
      sub_838D50(v16, v24, v25);
    }
    else
    {
      v19 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 104LL))(*(_QWORD *)(a1 + 24));
      sub_A248F0(&v24, v27, v19);
    }
    if ( v24 != &v26 )
      operator delete(v24, v26 + 1);
    if ( v22[0] != &v23 )
      operator delete(v22[0], v23 + 1);
  }
  sub_A1C0C0(v28);
  sub_A1C0C0(v27);
  return v14;
}

