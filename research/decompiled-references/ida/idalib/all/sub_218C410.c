unsigned __int64 __fastcall sub_218C410(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 *v6; // rax
  unsigned __int64 v7; // rbx
  unsigned __int64 *v9; // rax
  unsigned __int64 *v10; // [rsp+0h] [rbp-48h] BYREF
  char v11; // [rsp+8h] [rbp-40h]
  unsigned __int64 *v12; // [rsp+10h] [rbp-38h] BYREF
  char v13; // [rsp+18h] [rbp-30h]

  sub_216F990((__int64)&v12, (_QWORD *)(a1 + 56), (unsigned int)a2, a4, a5, a6);
  if ( (v13 & 1) != 0 )
  {
    v6 = v12;
    v11 |= 1u;
    v12 = nullptr;
    v10 = v6;
  }
  else
  {
    sub_217BF40((__int64)&v10, (_QWORD *)(a1 + 56), v12, HIDWORD(a2));
  }
  sub_216FA80((__int64 *)&v12);
  if ( (v11 & 1) != 0 )
  {
    v9 = v10;
    v10 = nullptr;
    v12 = v9;
    sub_2220CA0(&v12, 1);
  }
  v7 = _byteswap_uint64(v10[1]);
  if ( *((_WORD *)v10 + 3) != 0xF1FF
    && (__ROL2__(*(_WORD *)(*(_QWORD *)(a1 + 56) + 18LL), 8) & 0xFFDF) == 8
    && (*((_BYTE *)v10 + 4) & 0xF) == 2 )
  {
    v7 &= ~1uLL;
  }
  sub_218A810((__int64 *)&v10);
  return v7;
}
