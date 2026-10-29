__int64 __fastcall sub_6DC9E0(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ecx
  unsigned __int64 v5; // r12
  unsigned __int64 v6; // rax
  unsigned int v7; // ecx
  _QWORD v8[2]; // [rsp+0h] [rbp-98h] BYREF
  int *v9; // [rsp+10h] [rbp-88h] BYREF
  __int64 v10; // [rsp+18h] [rbp-80h]
  __int64 v11; // [rsp+20h] [rbp-78h]
  __int128 v12; // [rsp+28h] [rbp-70h]
  __int64 v13; // [rsp+38h] [rbp-60h]
  int v14; // [rsp+40h] [rbp-58h] BYREF
  __int64 v15; // [rsp+48h] [rbp-50h]
  __int64 v16; // [rsp+50h] [rbp-48h]
  __int128 v17; // [rsp+58h] [rbp-40h]
  __int64 v18; // [rsp+68h] [rbp-30h]

  v3 = 1;
  if ( (*(_QWORD *)&byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL] | a2 & 7) == (*(_QWORD *)&byte_8[a3 & 0xFFFFFFFFFFFFFFF0LL]
                                                                  | a3 & 7) )
    return v3;
  v3 = 0;
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 2160) + 1LL) & 0x40) == 0 )
    return v3;
  v10 = a1;
  v9 = &v14;
  v17 = 0;
  v14 = 0;
  v15 = 0;
  v16 = 0;
  v18 = 0;
  v5 = sub_6DC670(a1, a3, (__int64)sub_6DE030, (__int64)&v9);
  v8[0] = &v9;
  v8[1] = a1;
  LODWORD(v9) = 0;
  v10 = 0;
  v11 = 0;
  v13 = 0;
  v12 = 0;
  v6 = sub_6DC670(a1, a2, (__int64)sub_6DE030, (__int64)v8);
  v7 = v6 & 0xFFFFFFF0;
  LOBYTE(v7) = (*(_QWORD *)&byte_8[v6 & 0xFFFFFFFFFFFFFFF0LL] | v6 & 7) == (*(_QWORD *)&byte_8[v5 & 0xFFFFFFFFFFFFFFF0LL]
                                                                          | v5 & 7);
  return v7;
}

