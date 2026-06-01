__int64 __fastcall sub_8C3D20(__int64 a1)
{
  __int64 v1; // rbx

  v1 = sub_AC40C0(48, a1, 8);
  *(_WORD *)v1 = *(_WORD *)v1 & 0xFE00 | 0x56;
  if ( byte_4AD234C )
    sub_AC4570(86);
  *(_QWORD *)(v1 + 8) = 0;
  *(_QWORD *)v1 &= 0xF3FFFFFFuLL;
  *(_OWORD *)(v1 + 32) = 0;
  return v1;
}

