unsigned __int64 __fastcall sub_F01B00(_QWORD *a1, __int64 a2, int a3)
{
  unsigned int v3; // r13d
  char v5; // al
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // edx
  int v10; // r14d
  __int64 v11; // rsi
  __int64 v12; // rax
  unsigned __int64 v13; // rbx
  __int16 v14; // ax
  char v16; // al

  v3 = a2;
  v5 = sub_FFF090(58);
  v9 = 29;
  if ( !v5 )
  {
    if ( (unsigned __int8)sub_FFE580(58, a2, 29, v6)
      || (unsigned __int8)sub_FFE5D0(58)
      || (unsigned __int8)sub_FFEEE0(58)
      || (v16 = sub_FFED80(58), v9 = 8, v16) )
    {
      v9 = 16;
    }
  }
  v10 = v9 + 8 * a3;
  v11 = 8 * ((8 * ((unsigned int)a2 + (unsigned __int64)(unsigned int)(v10 + 1)) + 15) >> 3) + 48;
  v12 = a1[294];
  a1[304] += v11;
  v13 = (v12 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[295] >= v11 + v13 && v12 )
    a1[294] = v11 + v13;
  else
    v13 = sub_986170(
            (__int64)(a1 + 294),
            v11,
            8 * ((8 * (v3 + (unsigned __int64)(unsigned int)(v10 + 1)) + 15) >> 3) + 48,
            3,
            v7,
            v8);
  v14 = *(_WORD *)v13;
  *(_DWORD *)(v13 + 40) = v3;
  *(_DWORD *)(v13 + 44) = v10;
  v14 &= 0xFE00u;
  *(_BYTE *)(v13 + 48) = 1;
  LOBYTE(v14) = v14 | 0xD0;
  *(_WORD *)v13 = v14;
  if ( unk_2CD7484 )
    sub_EE9B50(208);
  *(_QWORD *)(v13 + 8) = 58;
  *(_DWORD *)(v13 + 16) = 0;
  *(_DWORD *)(v13 + 32) = a3;
  *(_QWORD *)(v13 + 24) = v13 + 40;
  return v13;
}
