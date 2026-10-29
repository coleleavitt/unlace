_WORD *__fastcall sub_81D4F0(__int64 a1)
{
  _WORD *v1; // rax
  __int64 v2; // rbp
  _WORD *v3; // rbx

  v1 = (_WORD *)sub_AC40C0(24, a1, 8);
  v2 = *(_QWORD *)(a1 + 18560);
  v3 = v1;
  *v1 = *v1 & 0xFE00 | 0x1A;
  if ( byte_4AD234C )
    sub_AC4570(26);
  *(_WORD *)((char *)v3 + 1) &= 0xF801u;
  *((_QWORD *)v3 + 1) = v2;
  *((_DWORD *)v3 + 4) = 0;
  return v3;
}

