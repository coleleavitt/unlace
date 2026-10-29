unsigned __int64 __fastcall sub_AB5860(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rbp
  __int64 v7; // rax
  __int64 v9; // rdx
  _QWORD v10[4]; // [rsp+8h] [rbp-20h] BYREF

  v10[0] = a2;
  v2 = *(_QWORD *)(*(_QWORD *)&byte_8[sub_F5C3B0(v10) & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v2 + 16) != 16 )
  {
    v9 = *(_QWORD *)(*(_QWORD *)(v2 + 8) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v9 + 16) != 16 )
      return v10[0];
    v2 = sub_F63050(v2, a2, v9, v3);
    if ( !v2 )
      return v10[0];
  }
  if ( !*(_QWORD *)(v2 + 32) )
    return v10[0];
  v4 = *(_QWORD *)&byte_8[v10[0] & 0xFFFFFFFFFFFFFFF0LL];
  v5 = 0;
  if ( (v4 & 8) != 0 )
    v5 = *(__int64 *)((char *)&qword_18 + (v4 & 0xFFFFFFFFFFFFFFF0LL));
  v6 = v5 | ((unsigned __int8)v4 | LOBYTE(v10[0])) & 7;
  v7 = sub_AB5320(
         a1,
         0,
         (*(_BYTE *)(v2 + 18) >> 3) & 3,
         (*(_BYTE *)(v2 + 17) & 4) != 0,
         *(_BYTE *)(v2 + 17) & 1,
         nullptr,
         0,
         0,
         0);
  return sub_A70F20(a1, v7, v6);
}
