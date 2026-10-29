__int64 __fastcall sub_D1A530(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // r13
  unsigned int v5; // r14d
  __int64 v7; // rbp
  unsigned int v8; // eax
  __int64 v9; // rbp
  unsigned int v10; // eax
  void *v11; // [rsp+10h] [rbp-B8h] BYREF
  unsigned int v12; // [rsp+18h] [rbp-B0h]
  char v13; // [rsp+1Ch] [rbp-ACh]
  int v14; // [rsp+20h] [rbp-A8h]
  _BYTE v15[24]; // [rsp+30h] [rbp-98h] BYREF
  int v16; // [rsp+48h] [rbp-80h]
  _BYTE v17[104]; // [rsp+60h] [rbp-68h] BYREF

  sub_D0AF80((__int64)&v11, *(_QWORD *)(a1 + 176));
  v4 = *(_QWORD *)(a1 + 176);
  sub_E21760(v4, 48);
  sub_E23260(v15);
  sub_E21790(v4, 48);
  if ( v16 || (v5 = 0, *(_DWORD *)(sub_CFDF60((__int64)v15) + 20) != -1) )
  {
    if ( a3 || *(_BYTE *)(sub_CFDF60((__int64)v15) + 60) )
    {
      sub_CFE430((__int64)v17, (__int64)v15, a3);
      v5 = sub_DCA140(a1, a2, v17);
      if ( (_BYTE)v5 )
      {
        sub_E24D00(v17);
        v7 = sub_D0F1C0((__int64)v17);
        v8 = v12;
        *(_DWORD *)(v7 + 8) = v12;
        if ( v8 > 0x40 )
          sub_2205510(v7);
        else
          *(_QWORD *)v7 = v11;
        *(_BYTE *)(v7 + 12) = v13;
        *(_DWORD *)(v7 + 16) = v14;
      }
      sub_E232A0(v17);
    }
    else
    {
      sub_E24D00(v15);
      v9 = sub_D0F1C0((__int64)v15);
      v10 = v12;
      *(_DWORD *)(v9 + 8) = v12;
      if ( v10 > 0x40 )
        sub_2205510(v9);
      else
        *(_QWORD *)v9 = v11;
      v5 = 1;
      *(_BYTE *)(v9 + 12) = v13;
      *(_DWORD *)(v9 + 16) = v14;
    }
  }
  sub_E232A0(v15);
  if ( v12 > 0x40 && v11 )
    operator delete[](v11);
  return v5;
}
