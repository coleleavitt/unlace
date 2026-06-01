unsigned __int64 __fastcall sub_2860(__int64 a1, int a2, __int64 a3)
{
  unsigned __int8 v4; // dl
  unsigned __int16 v6; // [rsp+Eh] [rbp-43Ah] BYREF
  _BYTE v7[1032]; // [rsp+10h] [rbp-438h] BYREF
  unsigned __int64 v8; // [rsp+418h] [rbp-30h]

  v8 = __readfsqword(0x28u);
  qlseek(a1, a2, 0);
  while ( 1 )
  {
    lread(a1, &v6, 1);
    v4 = v6 & 0x7F;
    LOBYTE(v6) = v4;
    if ( !v4 )
      break;
    lread(a1, v7, v4);
    v7[(unsigned __int8)v6] = 0;
    if ( qlread(a1, &v6, 2) != 2 )
      break;
    (*(void (__fastcall **)(_QWORD, _BYTE *, _QWORD))(a3 + 8))(v6, v7, *(_QWORD *)(a3 + 16));
  }
  return v8 - __readfsqword(0x28u);
}

