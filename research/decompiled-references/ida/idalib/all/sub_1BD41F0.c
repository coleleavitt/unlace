bool __fastcall sub_1BD41F0(__int64 a1, __int64 a2, __int64 a3, char a4, _BYTE *a5)
{
  __int64 v7; // rax
  unsigned __int64 v8; // r15
  char v9; // r15
  unsigned __int64 v11; // [rsp+10h] [rbp-58h] BYREF
  __int64 v12[2]; // [rsp+18h] [rbp-50h] BYREF
  char v13[57]; // [rsp+2Fh] [rbp-39h] BYREF

  v12[0] = *(_QWORD *)&byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
         | ((unsigned __int8)*(_QWORD *)&byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)a2) & 7;
  v7 = *(_QWORD *)&byte_8[a3 & 0xFFFFFFFFFFFFFFF0LL];
  *a5 = 0;
  v11 = v7 & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)v7 | (unsigned __int8)a3) & 7;
  v8 = sub_6D5440(&v11);
  if ( v8 == sub_6D5440(v12) )
    return 0;
  v13[0] = 1;
  v9 = 0;
  while ( (unsigned __int8)sub_ABFC30(*(_QWORD **)(a1 + 248), v12, (__int64 *)&v11, 1) )
  {
    v9 = sub_1BCBEB0(v12[0], v11, a4, v9 ^ 1u, v13, a5, *(_QWORD *)(a1 + 248));
    if ( !v9 )
      return 0;
  }
  return v9 && sub_1BC70C0(v12[0], v11);
}
