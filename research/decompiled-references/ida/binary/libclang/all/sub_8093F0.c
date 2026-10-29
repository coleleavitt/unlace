__int64 __fastcall sub_8093F0(__int64 a1)
{
  __int64 v1; // rbx

  v1 = sub_AC40C0(32, a1, 8);
  *(_WORD *)v1 = *(_WORD *)v1 & 0xFE00 | 0x3F;
  if ( byte_4AD234C )
    sub_AC4570(63);
  *(_WORD *)(v1 + 2) &= 0xFE07u;
  *(_QWORD *)(v1 + 24) = 0;
  *(_OWORD *)(v1 + 8) = 0;
  return v1;
}

