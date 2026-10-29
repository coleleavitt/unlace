__int64 __fastcall sub_81D9E0(__int64 a1, _QWORD *a2, int a3, __int64 a4, int a5)
{
  __int64 v8; // rbp
  __int64 v9; // rbp
  __int64 result; // rax

  v8 = *(_QWORD *)(a4 + 8);
  *(_WORD *)a1 = *(_WORD *)a1 & 0xFE00 | 0x44;
  if ( byte_4AD234C )
    sub_AC4570(68);
  *(_WORD *)(a1 + 1) &= 0xF801u;
  *(_QWORD *)(a1 + 8) = v8;
  *(_QWORD *)(a1 + 16) = a4;
  v9 = sub_AC40C0(64, a2, 8);
  sub_81D800(v9, a2, a3, 0, 0, a5);
  result = *(_QWORD *)(a4 + 8);
  *(_BYTE *)(a1 + 1) &= 0x3Fu;
  *(_QWORD *)(a1 + 24) = v9;
  *(_QWORD *)(v9 + 8) = result;
  *(_BYTE *)(a1 + 2) &= 0xF8u;
  return result;
}

