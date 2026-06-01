__int64 __fastcall sub_CFB500(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  unsigned int v3; // ebp
  __int64 v4; // r12
  void *v6; // [rsp+0h] [rbp-78h] BYREF
  unsigned int v7; // [rsp+8h] [rbp-70h]
  int v8; // [rsp+10h] [rbp-68h]
  _BYTE v9[24]; // [rsp+20h] [rbp-58h] BYREF
  int v10; // [rsp+38h] [rbp-40h]
  __int64 v11; // [rsp+40h] [rbp-38h]
  int v12; // [rsp+48h] [rbp-30h]

  sub_CE7240((__int64)&v6, *(_QWORD *)(a1 + 176));
  v2 = *(_QWORD *)(a1 + 176);
  sub_DFDA20(v2, 48);
  sub_DFF520(v9);
  sub_DFDA50(v2, 48);
  v3 = sub_DA8220(a1, a2, v9);
  if ( (_BYTE)v3 )
  {
    if ( !v10 && v11 && v12 )
    {
      sub_E00FC0(v9);
      sub_DFFFB0(v9);
    }
    v4 = sub_CEB480((__int64)v9);
    sub_BFCC40(v4, (__int64 *)&v6);
    *(_DWORD *)(v4 + 16) = v8;
  }
  sub_DFF560(v9);
  if ( v7 > 0x40 && v6 )
    operator delete[](v6);
  return v3;
}

