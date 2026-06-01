__int64 __fastcall sub_81D390(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, char a6)
{
  __int64 v10; // rbx
  __int16 v11; // ax

  v10 = sub_AC40C0(48, a1, 8);
  *(_WORD *)v10 = *(_WORD *)v10 & 0xFE00 | 0x39;
  if ( byte_4AD234C )
    sub_AC4570(57);
  v11 = *(_WORD *)(v10 + 1);
  *(_QWORD *)(v10 + 8) = a2;
  *(_BYTE *)(v10 + 40) = a6;
  *(_QWORD *)(v10 + 16) = a3;
  *(_QWORD *)(v10 + 24) = a4;
  *(_WORD *)(v10 + 1) = v11 & 0xF801 | 2;
  *(_QWORD *)(v10 + 32) = a5;
  return v10;
}

