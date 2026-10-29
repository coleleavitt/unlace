__int64 __fastcall sub_8061D0(__int64 a1)
{
  unsigned __int64 v1; // rbp
  __int64 v2; // rbx

  v1 = sub_6C4160(a1, *(_QWORD *)(a1 + 18488) | 1LL);
  v2 = sub_AC40C0(40, a1, 8);
  *(_WORD *)v2 = *(_WORD *)v2 & 0xFE00 | 0xF;
  if ( byte_4AD234C )
    sub_AC4570(15);
  *(_WORD *)(v2 + 1) &= 0xF801u;
  *(_QWORD *)(v2 + 8) = v1;
  *(_QWORD *)(v2 + 16) = 0;
  *(_DWORD *)(v2 + 24) = 0;
  return v2;
}

