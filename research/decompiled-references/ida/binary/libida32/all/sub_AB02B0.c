void __fastcall sub_AB02B0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  char v6; // al
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // r9

  v6 = *(_BYTE *)(a2 + 68);
  if ( (v6 & 1) != 0 )
  {
    v7 = *(_QWORD *)(a2 + 72);
    if ( (v6 & 0xC) != 0xC && (v6 & 0xC) != 0 )
      v7 = *(_QWORD *)(v7 + 8);
    sub_AAE4E0(a1 + 8, 0, 0, v7, a1, a6);
  }
  v8 = sub_B54370(a2);
  if ( v8 )
    sub_AAE4E0(a1 + 8, 0, 0, v8, a1, v9);
}

