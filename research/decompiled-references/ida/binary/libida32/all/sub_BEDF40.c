__int64 __fastcall sub_BEDF40(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rbp
  __int64 v3; // rdi

  *(_DWORD *)(a1 + 16) = 1;
  v1 = a1 + 64;
  *(_QWORD *)(a1 + 8) = 0;
  *(_BYTE *)(a1 + 20) = 0;
  *(_DWORD *)(a1 + 32) = 1;
  *(_QWORD *)(a1 + 24) = 0;
  *(_BYTE *)(a1 + 36) = 0;
  v2 = sub_21D53B0();
  v3 = a1 + 40;
  if ( v2 == sub_21D5390() )
  {
    sub_21DBE90(v3, v2);
    return sub_21DBE90(v1, v2);
  }
  else
  {
    sub_21D7CC0(v3, v2);
    return sub_21D7CC0(v1, v2);
  }
}

