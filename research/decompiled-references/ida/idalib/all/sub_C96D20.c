unsigned __int64 __fastcall sub_C96D20(
        _QWORD *a1,
        unsigned __int8 a2,
        int a3,
        unsigned __int8 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v8; // rax
  __int64 v9; // rsi
  unsigned __int64 v10; // rbx
  char v11; // cl

  v8 = a1[294];
  v9 = 16 * a2 + 32 * a3 + 72 + 8 * (unsigned int)a4;
  a1[304] += v9;
  v10 = (v8 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[295] >= v9 + v10 && v8 )
    a1[294] = v9 + v10;
  else
    v10 = sub_986170((__int64)(a1 + 294), v9, v9, 3, a5, a6);
  *(_WORD *)v10 = *(_WORD *)v10 & 0xFE00 | 0x6D;
  if ( unk_2CD7484 )
    sub_EE9B50(109);
  v11 = *(_BYTE *)(v10 + 2);
  *(_OWORD *)(v10 + 32) = 0;
  *(_QWORD *)(v10 + 8) = 0;
  *(_QWORD *)(v10 + 24) = 0;
  *(_QWORD *)(v10 + 48) = 0;
  *(_DWORD *)(v10 + 56) = 0;
  *(_QWORD *)(v10 + 64) = 0;
  *(_BYTE *)(v10 + 2) = (32 * (a4 & 1)) | (16 * (a2 & 1)) | v11 & 0xCF;
  return v10;
}
