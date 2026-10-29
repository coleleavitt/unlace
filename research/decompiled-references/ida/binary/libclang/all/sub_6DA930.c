__int64 __fastcall sub_6DA930(_QWORD *a1, unsigned __int64 a2, unsigned __int64 a3)
{
  __int64 result; // rax
  unsigned __int64 v4; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v5; // [rsp+8h] [rbp-30h] BYREF
  __int64 v6[4]; // [rsp+18h] [rbp-20h] BYREF

  v5 = a2;
  v4 = a3;
  while ( 1 )
  {
    v6[0] = 0;
    v5 = sub_6DA5F0((__int64)a1, v5, v6);
    v4 = sub_6DA5F0((__int64)a1, v4, v6);
    if ( (*(_QWORD *)&byte_8[v5 & 0xFFFFFFFFFFFFFFF0LL] | v5 & 7) == (*(_QWORD *)&byte_8[v4 & 0xFFFFFFFFFFFFFFF0LL]
                                                                    | v4 & 7) )
      break;
    result = sub_6DA1C0(a1, (__int64 *)&v5, (__int64 *)&v4, 1);
    if ( !(_BYTE)result )
      return result;
  }
  return 1;
}

