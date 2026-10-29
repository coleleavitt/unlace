__int64 __fastcall sub_8C6400(__int64 a1)
{
  __int64 v1; // rbx

  v1 = sub_AC40C0(16, a1, 8);
  *(_WORD *)v1 = *(_WORD *)v1 & 0xFE00 | 0x63;
  if ( byte_4AD234C )
    sub_AC4570(99);
  *(_QWORD *)(v1 + 8) = 0;
  return v1;
}

