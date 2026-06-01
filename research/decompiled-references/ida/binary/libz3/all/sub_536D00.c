__int64 __fastcall sub_536D00(__int64 a1, __int64 a2, _QWORD *a3, int a4)
{
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 *v9; // rax
  __int64 v10; // rsi
  char v11; // al
  char v12; // [rsp+Fh] [rbp-39h] BYREF
  _BYTE v13[56]; // [rsp+10h] [rbp-38h] BYREF

  if ( a1 != *(_QWORD *)(a2 + 8) )
    return 0;
  v7 = sub_186B270(0x38u);
  v8 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 32) = 1;
  v9 = *(__int64 **)(v8 + 8);
  *(_DWORD *)(v7 + 8) = a4;
  *(_QWORD *)v7 = &off_1C50818;
  v10 = *v9;
  *(_QWORD *)(v7 + 24) = 0;
  *(_QWORD *)(v7 + 40) = 0;
  sub_16669D0(v13, v10);
  v11 = sub_1666AE0(v13, *a3, v7 + 16, &v12);
  if ( v11 )
  {
    v11 = (*(_BYTE *)(v7 + 36) & 1) == 0;
    if ( (*(_BYTE *)(v7 + 36) & 1) == 0 )
      v11 = *(_DWORD *)(v7 + 32) == 1;
  }
  *(_BYTE *)(v7 + 48) = v11;
  return v7;
}

