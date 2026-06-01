__int64 __fastcall sub_6DA840(_QWORD *a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rax
  __int64 v5; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v6; // [rsp+8h] [rbp-40h] BYREF
  __int64 v7; // [rsp+10h] [rbp-38h] BYREF
  __int64 v8[6]; // [rsp+18h] [rbp-30h] BYREF

  v6 = a2;
  v5 = a3;
  while ( 1 )
  {
    v7 = 0;
    v8[0] = 0;
    v6 = sub_6DA5F0((__int64)a1, v6, &v7);
    v3 = sub_6DA5F0((__int64)a1, v5, v8);
    v5 = v3;
    v7 &= 0xFFFFFFFFFFFFFFF8LL;
    v8[0] &= 0xFFFFFFFFFFFFFFF8LL;
    if ( v8[0] != v7 )
      return 0;
    if ( (*(_QWORD *)&byte_8[v6 & 0xFFFFFFFFFFFFFFF0LL] | v6 & 7) == (*(_QWORD *)&byte_8[v3 & 0xFFFFFFFFFFFFFFF0LL]
                                                                    | v3 & 7) )
      break;
    if ( !(unsigned __int8)sub_6DA1C0(a1, (__int64 *)&v6, &v5, 0) )
      return 0;
  }
  return 1;
}

