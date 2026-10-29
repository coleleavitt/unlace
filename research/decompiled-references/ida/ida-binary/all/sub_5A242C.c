__int64 __fastcall sub_5A242C(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  unsigned int v3; // ebx
  int v4; // ebx
  unsigned __int64 v5; // rax
  __int64 v6; // rax
  _BYTE v9[40]; // [rsp+10h] [rbp-40h] BYREF
  unsigned __int64 i; // [rsp+38h] [rbp-18h]

  sub_5A47A8(v9, a1 + 40);
  if ( sub_5A4CB0(a1 + 80) )
  {
    v2 = sub_5A4CB0(a1 + 80);
    if ( (unsigned __int8)sub_5A480C(v9, v2, 16) != 1 )
    {
      v3 = 0;
      goto LABEL_10;
    }
  }
  else if ( (unsigned __int8)sub_5A4AA8(v9) != 1 )
  {
    v3 = 0;
    goto LABEL_10;
  }
  *(_DWORD *)a2 = 5;
  *(_QWORD *)(a2 + 4) = sub_5A4152(v9);
  v4 = sub_5A4CB0(a1 + 80);
  *(_DWORD *)sub_5A4884(v9) = v4;
  for ( i = 0; ; ++i )
  {
    v5 = sub_5A4CB0(a1 + 80);
    if ( i >= v5 )
      break;
    v6 = sub_5A4CD8(a1 + 80, i);
    sub_5A4954(v9, (unsigned int)i, v6, 16);
  }
  v3 = 1;
LABEL_10:
  sub_5A47E4(v9);
  return v3;
}
