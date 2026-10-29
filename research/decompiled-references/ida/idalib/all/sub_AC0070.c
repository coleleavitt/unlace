__int64 __fastcall sub_AC0070(_QWORD *a1, unsigned __int64 a2, unsigned __int64 a3, __int64 a4, __int64 a5)
{
  __int64 result; // rax
  __int64 v6; // rcx
  __int64 v7; // r8
  unsigned __int64 v8; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v9; // [rsp+8h] [rbp-40h] BYREF
  __int64 v10[6]; // [rsp+18h] [rbp-30h] BYREF

  v9 = a2;
  v8 = a3;
  while ( 1 )
  {
    v10[0] = 0;
    v9 = sub_A725A0(a1, v9, v10, a4, a5);
    v8 = sub_A725A0(a1, v8, v10, v6, v7);
    if ( (*(_QWORD *)&byte_8[v9 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
        | ((unsigned __int8)*(_QWORD *)&byte_8[v9 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v9) & 7) == (*(_QWORD *)&byte_8[v8 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)*(_QWORD *)&byte_8[v8 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v8) & 7) )
      break;
    result = sub_ABFC30(a1, (__int64 *)&v9, (__int64 *)&v8, 1);
    if ( !(_BYTE)result )
      return result;
  }
  return 1;
}
