_WORD *__fastcall sub_81D480(__int64 a1, int a2)
{
  _WORD *v2; // rax
  __int64 v3; // rbp
  _WORD *v4; // rbx

  v2 = (_WORD *)sub_AC40C0(24, a1, 8);
  v3 = *(_QWORD *)(a1 + 18560);
  v4 = v2;
  *v2 = *v2 & 0xFE00 | 0x1A;
  if ( byte_4AD234C )
    sub_AC4570(26);
  *(_WORD *)((char *)v4 + 1) &= 0xF801u;
  *((_QWORD *)v4 + 1) = v3;
  *((_DWORD *)v4 + 4) = a2;
  return v4;
}

