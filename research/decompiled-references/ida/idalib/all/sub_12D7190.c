__int64 __fastcall sub_12D7190(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, unsigned int a5)
{
  unsigned __int8 v6; // al
  unsigned int v7; // r12d
  unsigned int v8; // ebp
  __int64 v9; // r13
  unsigned __int8 v10; // [rsp+Fh] [rbp-69h]
  int v13; // [rsp+38h] [rbp-40h] BYREF
  int v14; // [rsp+3Ch] [rbp-3Ch] BYREF
  __int64 v15; // [rsp+40h] [rbp-38h] BYREF
  int v16[12]; // [rsp+48h] [rbp-30h] BYREF

  v15 = 0;
  if ( (unsigned __int8)sub_12D6D10((__int64 *)a1, a2, a3, (int *)&v15, &v13)
    && (*(_QWORD *)v16 = 0, (v6 = sub_12D6D10((__int64 *)a1, a4, a5, v16, &v14)) != 0)
    && (v7 = v16[0],
        v8 = HIDWORD(v15) + v13,
        v9 = (unsigned int)(v16[1] + v14),
        v16[1] <= (unsigned int)(HIDWORD(v15) + v13) && HIDWORD(v15) <= v16[1] && (_DWORD)v15 == v16[0])
    && (unsigned int)v9 <= v8 )
  {
    v10 = v6;
    sub_12D5F60(a1, a2, v15, v16[1] - HIDWORD(v15));
    sub_12D5F60(a1, SHIDWORD(a4), (v9 << 32) | v7, v8 - v9);
    return v10;
  }
  else
  {
    *(_BYTE *)(a1 + 32) = 0;
    return 0;
  }
}
