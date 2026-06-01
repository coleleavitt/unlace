char __fastcall sub_227D340(__int64 a1, int a2, char a3, unsigned __int8 a4, int a5)
{
  __int64 v5; // rax
  __off_t v6; // rbp

  *(_DWORD *)(a1 + 8) = a5;
  *(_BYTE *)(a1 + 40) = 0;
  *(_DWORD *)(a1 + 44) = a4 ^ 1;
  *(_QWORD *)a1 = &off_2BEBDE8;
  *(_QWORD *)(a1 + 32) = 0;
  *(_DWORD *)(a1 + 48) = a2;
  *(_BYTE *)(a1 + 52) = a3;
  *(_WORD *)(a1 + 53) = 0;
  *(_BYTE *)(a1 + 56) = 0;
  *(_QWORD *)(a1 + 64) = 0;
  *(_DWORD *)(a1 + 72) = 0;
  *(_OWORD *)(a1 + 16) = 0;
  v5 = std::_V2::system_category((std::_V2 *)a1);
  *(_QWORD *)(a1 + 88) = 0;
  *(_QWORD *)(a1 + 80) = v5;
  if ( a2 < 0 )
  {
    *(_BYTE *)(a1 + 52) = 0;
  }
  else
  {
    *(_BYTE *)(a1 + 40) = 1;
    if ( a2 <= 2 )
      *(_BYTE *)(a1 + 52) = 0;
    v6 = lseek(a2, 0, 1);
    LODWORD(v5) = sub_228C5C0(*(_DWORD *)(a1 + 48));
    *(_BYTE *)(a1 + 54) = 0;
    LOBYTE(v5) = v6 != -1 && (_DWORD)v5 == 0;
    if ( !(_BYTE)v5 )
      v6 = 0;
    *(_BYTE *)(a1 + 53) = v5;
    *(_QWORD *)(a1 + 88) = v6;
  }
  return v5;
}
