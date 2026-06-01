__int64 __fastcall sub_CF5310(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // rbx
  unsigned int v5; // r15d
  __int64 v7; // rbx
  unsigned int v8; // eax
  __int64 v9; // rbx
  unsigned int v10; // eax
  void *v11; // [rsp+10h] [rbp-88h] BYREF
  unsigned int v12; // [rsp+18h] [rbp-80h]
  char v13; // [rsp+1Ch] [rbp-7Ch]
  int v14; // [rsp+20h] [rbp-78h]
  _BYTE v15[104]; // [rsp+30h] [rbp-68h] BYREF

  sub_CE7240((__int64)&v11, *(_QWORD *)(a1 + 176));
  v4 = sub_DFDA20(*(_QWORD *)(a1 + 176), 48);
  if ( *(_DWORD *)(v4 + 24) || (v5 = 0, *(_DWORD *)(sub_CDA220(v4) + 20) != -1) )
  {
    if ( a3 || *(_BYTE *)(sub_CDA220(v4) + 60) )
    {
      sub_CDA6F0((__int64)v15, v4, a3);
      v5 = sub_DA6400(a1, a2, v15);
      if ( (_BYTE)v5 )
      {
        sub_E00FC0(v15);
        v7 = sub_CEB480((__int64)v15);
        v8 = v12;
        *(_DWORD *)(v7 + 8) = v12;
        if ( v8 > 0x40 )
          sub_21E17D0(v7);
        else
          *(_QWORD *)v7 = v11;
        *(_BYTE *)(v7 + 12) = v13;
        *(_DWORD *)(v7 + 16) = v14;
      }
      sub_DFF560(v15);
    }
    else
    {
      sub_E00FC0(v4);
      v9 = sub_CEB480(v4);
      v10 = v12;
      *(_DWORD *)(v9 + 8) = v12;
      if ( v10 > 0x40 )
        sub_21E17D0(v9);
      else
        *(_QWORD *)v9 = v11;
      v5 = 1;
      *(_BYTE *)(v9 + 12) = v13;
      *(_DWORD *)(v9 + 16) = v14;
    }
  }
  if ( v12 > 0x40 && v11 )
    operator delete[](v11);
  return v5;
}

