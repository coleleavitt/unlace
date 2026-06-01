__int64 __fastcall sub_CF3FF0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  unsigned int v3; // ebx
  __int64 v5; // rbp
  unsigned int v6; // eax
  void *v7; // [rsp+0h] [rbp-48h] BYREF
  unsigned int v8; // [rsp+8h] [rbp-40h]
  char v9; // [rsp+Ch] [rbp-3Ch]
  int v10; // [rsp+10h] [rbp-38h]

  sub_CE7240((__int64)&v7, *(_QWORD *)(a1 + 176));
  v2 = sub_DFDA20(*(_QWORD *)(a1 + 176), 48);
  v3 = sub_DA6400(a1, a2, v2);
  if ( (_BYTE)v3 )
  {
    sub_DFFFB0(v2);
    sub_E00FC0(v2);
    v5 = sub_CEB480(v2);
    v6 = v8;
    *(_DWORD *)(v5 + 8) = v8;
    if ( v6 > 0x40 )
      sub_21E17D0(v5);
    else
      *(_QWORD *)v5 = v7;
    *(_BYTE *)(v5 + 12) = v9;
    *(_DWORD *)(v5 + 16) = v10;
  }
  if ( v8 > 0x40 && v7 )
    operator delete[](v7);
  return v3;
}

