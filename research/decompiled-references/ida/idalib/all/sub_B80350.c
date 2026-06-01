__int64 __fastcall sub_B80350(__int64 a1, char a2, __int64 a3, int a4, int a5, __int64 a6, __int64 a7)
{
  __int64 v11; // rbx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdx
  bool v16; // zf

  v11 = sub_B902D0(128, a1, a3, 0);
  sub_B7FFB0(v11, 0x3Au, a2, a1, a3, a5, a6, a7, a4);
  *(_QWORD *)(v11 + 72) &= 0x7FFFFFuLL;
  *(_QWORD *)v11 = &off_2B4AA10;
  v15 = (8 * *(_BYTE *)(*(_QWORD *)(a1 + 2320) + 21LL)) & 0x10;
  v16 = *(_QWORD *)(v11 + 48) == 0;
  *(_BYTE *)(v11 + 74) = v15 | *(_BYTE *)(v11 + 74) & 0xEF;
  if ( v16 )
  {
    if ( a7 )
      *(_QWORD *)(v11 + 48) = *(_QWORD *)(a7 + 48);
    else
      sub_A7AA70(a1, v11, v15, v12, v13, v14);
  }
  return v11;
}
