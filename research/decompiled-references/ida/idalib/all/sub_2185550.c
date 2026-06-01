__int64 __fastcall sub_2185550(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r12
  __int64 v7; // rbx
  unsigned __int64 v8; // r12
  __int64 v10; // [rsp+8h] [rbp-50h]
  __int64 v11[2]; // [rsp+10h] [rbp-48h] BYREF
  char v12; // [rsp+20h] [rbp-38h]

  v6 = 0;
  v7 = *(_QWORD *)(a1 + 128);
  if ( v7 )
  {
    v8 = *(_QWORD *)(v7 + 32);
    v10 = 0;
    sub_216E690((__int64)v11, (_QWORD *)(a1 + 56), a3, a4, a5, a6);
    if ( (v12 & 1) == 0 )
    {
      LODWORD(v10) = (unsigned __int64)(v7 - v11[0]) >> 6;
      HIDWORD(v10) = v8 > 0x17;
    }
    v6 = v10;
    sub_20EAA70(v11);
  }
  return v6;
}
