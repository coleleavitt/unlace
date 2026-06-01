__int64 __fastcall sub_18D1860(_QWORD *a1, __int64 a2, unsigned __int64 a3, __int64 a4, double a5, double a6)
{
  unsigned __int64 v6; // rsi
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r13
  __int64 v11; // rax
  __int64 v12; // rax
  bool v13; // al
  unsigned int v14; // ecx
  __int64 v15; // rax
  __int64 result; // rax
  unsigned __int64 v17[6]; // [rsp+8h] [rbp-30h] BYREF

  v6 = a2 & 0xFFFFFFFFFFFFFFF0LL;
  v8 = *(_QWORD *)v6;
  v9 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)v6 + 16LL) - 57;
  if ( (unsigned int)v9 > 1 )
    v8 = sub_F63050(v8, v6, v9, a4);
  v10 = *(_QWORD *)(v8 + 32);
  v11 = *(_QWORD *)(a3 + 8);
  if ( v10 == v11 )
    return a3;
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v6 + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 58
    && (v12 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v11 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL),
        *(_BYTE *)(v12 + 16) == 13)
    && ((*(_WORD *)(v12 + 18) >> 3) & 0x1FF) == 0x1B4 )
  {
    v13 = sub_F58060(*(_QWORD *)(v10 & 0xFFFFFFFFFFFFFFF0LL));
    v14 = 38;
    if ( v13 )
    {
      v15 = sub_160A600((__int64)a1, a3, *(_QWORD *)(a1[31] + 18720LL), 0x26u, 0, 0, a5, a6, 0);
      v14 = 29;
      a3 = v15 & 0xFFFFFFFFFFFFFFFELL;
    }
  }
  else
  {
    v17[0] = a3;
    v14 = sub_18D1110(a1, v17, v10, a5, a6);
    result = 1;
    if ( v17[0] == 1 )
      return result;
    a3 = v17[0] & 0xFFFFFFFFFFFFFFFELL;
  }
  return sub_160A600((__int64)a1, a3, v10, v14, 0, 0, a5, a6, 0);
}
