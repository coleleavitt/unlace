__int64 __fastcall sub_8F2380(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rdi
  __int64 v4; // rbp
  char v5; // bl

  if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
  {
    v3 = a1 + 384;
    v4 = *(_QWORD *)(v3 + 184);
    *(_QWORD *)(v3 + 416) = *a2;
    v5 = sub_A1AD60(v3);
    *(_BYTE *)sub_A1A4E0(v4, 8) = v5;
  }
  return 1;
}

