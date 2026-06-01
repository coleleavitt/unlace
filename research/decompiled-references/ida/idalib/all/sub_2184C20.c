__int64 __fastcall sub_2184C20(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r12
  __int64 v7; // rbx
  unsigned int v8; // r12d
  __int64 v10; // [rsp+8h] [rbp-50h]
  __int64 v11[2]; // [rsp+10h] [rbp-48h] BYREF
  char v12; // [rsp+20h] [rbp-38h]

  v6 = 0;
  v7 = *(_QWORD *)(a1 + 128);
  if ( v7 )
  {
    v8 = *(_DWORD *)(v7 + 20);
    v10 = 0;
    sub_216E130((__int64)v11, (_QWORD *)(a1 + 56), a3, a4, a5, a6);
    if ( (v12 & 1) == 0 )
    {
      LODWORD(v10) = (v7 - v11[0]) / 0x28uLL;
      HIDWORD(v10) = v8 > 0xF;
    }
    v6 = v10;
    sub_216EEA0(v11);
  }
  return v6;
}
