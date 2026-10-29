__int64 __fastcall sub_12ECF50(__int64 a1, _BYTE *a2, size_t a3, unsigned int a4, unsigned int a5)
{
  unsigned int v7; // ebx
  unsigned __int8 *v9; // rax
  unsigned __int8 *v11; // [rsp+8h] [rbp-A0h]
  unsigned __int8 *v12; // [rsp+18h] [rbp-90h] BYREF
  unsigned __int8 *v13; // [rsp+20h] [rbp-88h] BYREF
  char v14; // [rsp+28h] [rbp-80h]

  sub_FD9C70((__int64)&v13, *(_QWORD *)(a1 + 80), a2, a3, 0, 1, 1);
  v7 = v14 & 1;
  if ( (v14 & 1) != 0 )
  {
    v9 = v13;
    v13 = nullptr;
    v12 = v9;
    sub_A0E8E0((_QWORD **)&v12);
    if ( v12 )
      (*(void (__fastcall **)(unsigned __int8 *))(*(_QWORD *)v12 + 8LL))(v12);
    sub_A04D90((__int64 *)&v13);
    goto LABEL_8;
  }
  v11 = v13;
  sub_A04D90((__int64 *)&v13);
  if ( !v11 )
  {
LABEL_8:
    v7 = 1;
    sub_FC70B0((__int64)&v13, *(_QWORD *)(a1 + 48), 0, 726);
    sub_AEC220(&v13, a2, a3);
    sub_AEA040((__int64)&v13);
    return v7;
  }
  sub_1460620(a1, v11, a4, a5);
  return v7;
}
