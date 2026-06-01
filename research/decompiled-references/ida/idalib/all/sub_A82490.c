bool __fastcall sub_A82490(__int64 a1, __int64 a2, __int64 a3)
{
  bool result; // al
  unsigned __int64 v4; // rbp
  unsigned __int64 v5; // rax
  _QWORD v6[2]; // [rsp+0h] [rbp-98h] BYREF
  int *v7; // [rsp+10h] [rbp-88h] BYREF
  __int64 v8; // [rsp+18h] [rbp-80h]
  __int64 v9; // [rsp+20h] [rbp-78h]
  __int128 v10; // [rsp+28h] [rbp-70h]
  __int64 v11; // [rsp+38h] [rbp-60h]
  int v12; // [rsp+40h] [rbp-58h] BYREF
  __int64 v13; // [rsp+48h] [rbp-50h]
  __int64 v14; // [rsp+50h] [rbp-48h]
  __int128 v15; // [rsp+58h] [rbp-40h]
  __int64 v16; // [rsp+68h] [rbp-30h]

  result = 1;
  if ( (*(_QWORD *)&byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
      | ((unsigned __int8)a2 | (unsigned __int8)*(_QWORD *)&byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL]) & 7) != (*(_QWORD *)&byte_8[a3 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)a3 | (unsigned __int8)*(_QWORD *)&byte_8[a3 & 0xFFFFFFFFFFFFFFF0LL]) & 7) )
  {
    result = 0;
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 2320) + 1LL) & 0x40) != 0 )
    {
      v15 = 0;
      v7 = &v12;
      v8 = a1;
      v12 = 0;
      v13 = 0;
      v14 = 0;
      v16 = 0;
      v4 = sub_A82220(a1, a3, (__int64 (__fastcall *)(__int64))sub_A74280, (__int64)&v7);
      v6[0] = &v7;
      v6[1] = a1;
      LODWORD(v7) = 0;
      v8 = 0;
      v9 = 0;
      v10 = 0;
      v11 = 0;
      v5 = sub_A82220(a1, a2, (__int64 (__fastcall *)(__int64))sub_A74280, (__int64)v6);
      return (*(_QWORD *)&byte_8[v5 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
            | ((unsigned __int8)*(_QWORD *)&byte_8[v5 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v5) & 7) == (*(_QWORD *)&byte_8[v4 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)*(_QWORD *)&byte_8[v4 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v4) & 7);
    }
  }
  return result;
}
