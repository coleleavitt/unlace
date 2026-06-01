__int64 __fastcall sub_17A6440(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // ebx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx

  v5 = sub_1E5F620(a1, a3, *(_QWORD *)(a4 + 16));
  if ( !(_BYTE)v5 )
    return v5;
  sub_1A39AF0(a1, *(_QWORD *)(a4 + 8));
  v10 = *(_QWORD *)(a4 + 16);
  if ( (*(_BYTE *)(v10 + 28) & 0x7F) != 0x3E || *(char *)(v10 + 76) < 0 )
    return v5;
  sub_179D210(a1, a2, v10, v7, v8, v9);
  return v5;
}
