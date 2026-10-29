__int64 __fastcall sub_CF4890(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // rbx
  __int64 v5; // rbx
  unsigned int v6; // r15d
  char v8; // [rsp+Fh] [rbp-69h]
  _BYTE v9[104]; // [rsp+10h] [rbp-68h] BYREF

  v4 = *(_QWORD *)(a1 + 176);
  v8 = *(_BYTE *)sub_DFDA20(v4, 8);
  sub_DFDA50(v4, 8);
  v5 = sub_DFDA20(*(_QWORD *)(a1 + 176), 48);
  if ( *(_DWORD *)(v5 + 24) || (v6 = 0, *(_DWORD *)(sub_CDA220(v5) + 20) != -1) )
  {
    if ( a3 || *(_BYTE *)(sub_CDA220(v5) + 60) )
    {
      sub_CDA6F0((__int64)v9, v5, a3);
      v6 = sub_DA6400(a1, a2, v9);
      if ( (_BYTE)v6 )
      {
        sub_E00FC0(v9);
        *(_BYTE *)sub_CE8AA0((__int64)v9) = v8;
      }
      sub_DFF560(v9);
    }
    else
    {
      v6 = 1;
      sub_E00FC0(v5);
      *(_BYTE *)sub_CE8AA0(v5) = v8;
    }
  }
  return v6;
}

