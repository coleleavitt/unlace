__int64 *__fastcall sub_1CAF480(__int64 **a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // r12
  __int64 v4; // rbx
  __int64 v5; // r13
  bool v6; // zf
  char v7; // r14
  __int64 v8; // r15
  char v9; // al
  unsigned __int8 v10; // al
  __int64 *result; // rax

  **a1 = a2;
  v2 = *a1[1];
  if ( v2 )
  {
    v3 = *(_QWORD *)(v2 + 16);
    v4 = sub_EEE9A0(32, (_QWORD *)a1[3][31], 8u);
    v5 = **a1;
    v6 = unk_2CD7484 == 0;
    v7 = *(_BYTE *)(v5 + 1);
    v8 = *(_QWORD *)(v5 + 8);
    *(_WORD *)v4 = *(_WORD *)v4 & 0xFE00 | 0x16;
    if ( !v6 )
      sub_EE9B50(22);
    v9 = *(_BYTE *)(v4 + 1);
    *(_BYTE *)(v4 + 2) &= 0xF8u;
    *(_QWORD *)(v4 + 8) = v8;
    *(_QWORD *)(v4 + 16) = v3;
    *(_QWORD *)(v4 + 24) = v5;
    *(_BYTE *)(v4 + 1) = v7 & 0x3E | v9 & 1;
    v10 = sub_B63820(v4);
    *(_BYTE *)(v4 + 1) = (v10 << 6) | *(_BYTE *)(v4 + 1) & 0x3F;
    *(_BYTE *)(v4 + 2) = *(_BYTE *)(v4 + 2) & 0xF8 | (v10 >> 2) & 7;
    result = a1[2];
    *result = v4;
  }
  else
  {
    result = a1[2];
    *result = a2;
  }
  return result;
}
