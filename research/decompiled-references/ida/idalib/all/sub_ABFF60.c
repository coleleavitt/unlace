__int64 __fastcall sub_ABFF60(_QWORD *a1, unsigned __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rcx
  __int64 v6; // r8
  unsigned __int64 v7; // rax
  __int64 v9; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v10; // [rsp+8h] [rbp-40h] BYREF
  __int64 v11; // [rsp+10h] [rbp-38h] BYREF
  __int64 v12[6]; // [rsp+18h] [rbp-30h] BYREF

  v10 = a2;
  v9 = a3;
  while ( 1 )
  {
    v11 = 0;
    v12[0] = 0;
    v10 = sub_A725A0(a1, v10, &v11, a4, a5);
    v7 = sub_A725A0(a1, v9, v12, v5, v6);
    v9 = v7;
    v11 &= 0xFFFFFFFFFFFFFFF8LL;
    v12[0] &= 0xFFFFFFFFFFFFFFF8LL;
    if ( v12[0] != v11 )
      return 0;
    if ( (*(_QWORD *)&byte_8[v10 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
        | ((unsigned __int8)*(_QWORD *)&byte_8[v10 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v10) & 7) == (*(_QWORD *)&byte_8[v7 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)*(_QWORD *)&byte_8[v7 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v7) & 7) )
      break;
    if ( !(unsigned __int8)sub_ABFC30(a1, (__int64 *)&v10, &v9, 0) )
      return 0;
  }
  return 1;
}
