__int64 __fastcall sub_B80200(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        char a7,
        char a8,
        char a9)
{
  __int64 v11; // rbx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  char v15; // r12
  char v16; // al
  __int64 v17; // rdx
  bool v18; // zf

  v11 = sub_B902D0(160, a1, a2, 0);
  sub_B7FFB0(v11, 0x3Eu, 4, a1, a2, a4, a5, a6, a3);
  v15 = *(_BYTE *)(v11 + 77);
  *(_QWORD *)(v11 + 128) = 0;
  *(_QWORD *)(v11 + 136) = 0;
  *(_QWORD *)(v11 + 144) = 0;
  *(_QWORD *)v11 = &off_2B4A998;
  v16 = *(_BYTE *)(v11 + 76);
  *(_DWORD *)(v11 + 152) = 0;
  *(_BYTE *)(v11 + 76) = v16 & 0x7F | (a7 << 7);
  *(_BYTE *)(v11 + 77) = (2 * (a9 & 1)) | a8 & 1 | v15 & 0xFC;
  *(_DWORD *)(v11 + 74) &= 0xFB80007F;
  v17 = (8 * *(_BYTE *)(*(_QWORD *)(a1 + 2320) + 21LL)) & 0x10;
  v18 = *(_QWORD *)(v11 + 48) == 0;
  *(_BYTE *)(v11 + 74) = v17 | *(_BYTE *)(v11 + 74) & 0xEF;
  if ( v18 )
  {
    if ( a6 )
      *(_QWORD *)(v11 + 48) = *(_QWORD *)(a6 + 48);
    else
      sub_A7AA70(a1, v11, v17, v12, v13, v14);
  }
  return v11;
}
