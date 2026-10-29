__int64 *__fastcall sub_79C4F0(__int64 a1)
{
  __int64 v1; // rax
  char v2; // r11
  int v3; // r11d
  __int64 v4; // rax
  __int64 *v5; // r9
  bool v6; // r10
  __int64 v7; // rdx
  _QWORD *v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  int v11; // ecx
  __int64 v12; // rax
  int v14; // eax
  int v15; // r11d
  __int64 v16; // rbp

  v1 = sub_79A2E0(a1);
  v3 = v2 & 0x7F;
  v4 = *(_QWORD *)(v1 + 16);
  v5 = (__int64 *)(v4 & 0xFFFFFFFFFFFFFFF8LL);
  v6 = ((v4 >> 2) & 1) == 0;
  if ( (unsigned int)(v3 - 32) > 5 )
    goto LABEL_14;
  if ( ((v4 >> 2) & 1) != 0 )
  {
    v14 = *(_BYTE *)(sub_79C2A0(*v5) + 8) & 0x7F;
    if ( !v14 || v14 == 22 )
    {
      v16 = v5[1];
      if ( ((*(_BYTE *)(sub_79C2A0(v16) + 8) + 72) & 0x7Fu) <= 3 )
        return (__int64 *)v16;
    }
    if ( (unsigned int)(v15 - 33) > 3 )
      return (__int64 *)*v5;
  }
  else if ( (unsigned int)(v3 - 33) > 3 )
  {
    return v5;
  }
  v7 = *(_QWORD *)(sub_79A2E0(a1) + 16);
  v8 = (_QWORD *)(v7 & 0xFFFFFFFFFFFFFFF8LL);
  if ( (v7 & 4) != 0 )
    v8 = (_QWORD *)*v8;
  if ( !v8
    || (v9 = v8[8]) == 0
    || (*(_BYTE *)(v9 + 10) & 0x20) == 0
    || (sub_780B80(a1 - 72),
        v10 = *(_QWORD *)(sub_79A2E0(a1) + 16),
        v5 = (__int64 *)(v10 & 0xFFFFFFFFFFFFFFF8LL),
        v6 = ((v10 >> 2) & 1) == 0,
        v11 != 42) )
  {
LABEL_14:
    if ( !v6 )
      return (__int64 *)*v5;
    return v5;
  }
  if ( ((v10 >> 2) & 1) != 0 )
    v5 = (__int64 *)*v5;
  v12 = *(_QWORD *)(sub_79A2E0((__int64)v5) + 16);
  v5 = (__int64 *)(v12 & 0xFFFFFFFFFFFFFFF8LL);
  if ( (v12 & 4) == 0 )
    return v5;
  return (__int64 *)*v5;
}

