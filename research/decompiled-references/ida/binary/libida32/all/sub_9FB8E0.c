unsigned __int64 __fastcall sub_9FB8E0(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r8
  __int64 v4; // rbp
  __int64 v5; // r10
  __int64 v6; // rax
  __int64 v7; // r12
  __int64 v8; // rcx
  __int64 v9; // r10
  __int64 v10; // r9
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rdx

  v3 = *(_QWORD *)((char *)a1 + a2 - 16);
  v4 = a1[3];
  v5 = a1[2];
  v6 = *a1 - 0x3C5A37A36834CED9LL * (a2 + v3);
  v7 = v6 + a1[1];
  v8 = v7 + v5;
  v9 = *(_QWORD *)((char *)a1 + a2 - 32) + v5;
  v10 = __ROL8__(v6 + v4, 12) + __ROR8__(v7, 7) + __ROL8__(v6, 27) + __ROR8__(v8, 31);
  v11 = 0x9AE16A3B2F90404FLL
      * (__ROR8__(v9 + *(_QWORD *)((char *)a1 + a2 - 24) + v3, 31)
       + v4
       + __ROL8__(v9, 27)
       + __ROL8__(v9 + *(_QWORD *)((char *)a1 + a2 - 8), 12)
       + __ROR8__(v9 + *(_QWORD *)((char *)a1 + a2 - 24), 7)
       + v8)
      - 0x3C5A37A36834CED9LL * (v10 + v9 + *(_QWORD *)((char *)a1 + a2 - 24) + v3 + *(_QWORD *)((char *)a1 + a2 - 8));
  v12 = (a3 ^ (0xC3A5C85C97CB3127LL * ((v11 >> 47) ^ v11))) + v10;
  return 0x9AE16A3B2F90404FLL * ((v12 >> 47) ^ v12);
}

