__int64 __fastcall sub_2190B70(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned int *v8; // rax
  __int64 v9; // rbx
  unsigned int *v11; // rax
  unsigned int *v12; // [rsp+0h] [rbp-48h] BYREF
  char v13; // [rsp+8h] [rbp-40h]
  unsigned int *v14; // [rsp+10h] [rbp-38h] BYREF
  char v15; // [rsp+18h] [rbp-30h]

  sub_216EEC0((__int64)&v14, (_QWORD *)(a1 + 56), (unsigned int)a2, a4, a5, a6);
  if ( (v15 & 1) != 0 )
  {
    v8 = v14;
    v13 |= 1u;
    v14 = nullptr;
    v12 = v8;
  }
  else
  {
    sub_21729C0((__int64)&v12, (_QWORD *)(a1 + 56), v14, HIDWORD(a2), v6, v7);
  }
  sub_216EFC0((__int64 *)&v14);
  if ( (v13 & 1) != 0 )
  {
    v11 = v12;
    v12 = nullptr;
    v14 = v11;
    sub_2220CA0(&v14, 1);
  }
  v9 = v12[1];
  if ( *((_WORD *)v12 + 7) != 0xFFF1 && (*(_WORD *)(*(_QWORD *)(a1 + 56) + 18LL) & 0xFFDF) == 8 && (v12[3] & 0xF) == 2 )
    v9 &= ~1uLL;
  sub_218B120((__int64 *)&v12);
  return v9;
}
