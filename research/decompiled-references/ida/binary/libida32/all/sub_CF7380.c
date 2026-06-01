__int64 __fastcall sub_CF7380(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  unsigned int v3; // ebp
  __int64 v5; // r12
  unsigned int v6; // eax
  void *v7; // [rsp+0h] [rbp-78h] BYREF
  unsigned int v8; // [rsp+8h] [rbp-70h]
  char v9; // [rsp+Ch] [rbp-6Ch]
  int v10; // [rsp+10h] [rbp-68h]
  _BYTE v11[88]; // [rsp+20h] [rbp-58h] BYREF

  sub_CE7240((__int64)&v7, *(_QWORD *)(a1 + 176));
  v2 = *(_QWORD *)(a1 + 176);
  sub_DFDA20(v2, 48);
  sub_DFF520(v11);
  sub_DFDA50(v2, 48);
  v3 = sub_DA6400(a1, a2, v11);
  if ( (_BYTE)v3 )
  {
    sub_DFFFB0(v11);
    sub_E00FC0(v11);
    v5 = sub_CEB480((__int64)v11);
    v6 = v8;
    *(_DWORD *)(v5 + 8) = v8;
    if ( v6 > 0x40 )
      sub_21E17D0(v5);
    else
      *(_QWORD *)v5 = v7;
    *(_BYTE *)(v5 + 12) = v9;
    *(_DWORD *)(v5 + 16) = v10;
  }
  sub_DFF560(v11);
  if ( v8 > 0x40 && v7 )
    operator delete[](v7);
  return v3;
}

