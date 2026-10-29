unsigned __int64 __fastcall sub_2012F20(_QWORD *a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  unsigned __int64 v4; // rdx
  unsigned __int64 result; // rax
  __int64 v6; // r9
  __int64 v7; // r8
  __int64 v8; // r11
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // r8
  __int64 v12; // r12
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // r11
  __int64 v16; // r8
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rdx
  __int64 v19; // r10
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // rsi
  unsigned __int64 v23; // rdx

  if ( a2 - 4 > 4 )
  {
    if ( a2 - 9 > 7 )
    {
      if ( a2 - 17 <= 0xF )
      {
        v19 = a1[1];
        v20 = 0x9AE16A3B2F90404FLL * *(_QWORD *)((char *)a1 + a2 - 8);
        v21 = a3 + a2 - 0x4B6D499041670D8DLL * *a1 + __ROR8__(v19 ^ 0xC949D7C7509E6557LL, 20) - v20;
        v22 = 0x9DDFEA08EB382D69LL
            * (v21
             ^ (__ROL8__(0xB492B66FBE98F273LL * *a1 - v19, 21)
              - 0x3C5A37A36834CED9LL * *(_QWORD *)((char *)a1 + a2 - 16)
              + __ROR8__(a3 ^ v20, 30)));
        return 0x9DDFEA08EB382D69LL
             * ((0x9DDFEA08EB382D69LL * (v22 ^ v21 ^ (v22 >> 47)))
              ^ ((0x9DDFEA08EB382D69LL * (v22 ^ v21 ^ (v22 >> 47))) >> 47));
      }
      else if ( a2 <= 0x20 )
      {
        result = a3 ^ 0x9AE16A3B2F90404FLL;
        if ( a2 )
        {
          v23 = (0xC949D7C7509E6557LL * ((unsigned int)a2 + 4 * *((unsigned __int8 *)a1 + a2 - 1)))
              ^ (0x9AE16A3B2F90404FLL * (*(unsigned __int8 *)a1 + (*((unsigned __int8 *)a1 + (a2 >> 1)) << 8)))
              ^ a3;
          return 0x9AE16A3B2F90404FLL * (v23 ^ (v23 >> 47));
        }
      }
      else
      {
        v8 = *(_QWORD *)((char *)a1 + a2 - 16);
        v9 = a1[3];
        v10 = a1[2];
        v11 = *a1 - 0x3C5A37A36834CED9LL * (a2 + v8);
        v12 = v11 + a1[1];
        v13 = v12 + v10;
        v14 = *(_QWORD *)((char *)a1 + a2 - 32) + v10;
        v15 = v14 + *(_QWORD *)((char *)a1 + a2 - 24) + v8;
        v16 = __ROR8__(v13, 31) + __ROL8__(v9 + v11, 12) + __ROR8__(v12, 7) + __ROL8__(v11, 27);
        v17 = 0x9AE16A3B2F90404FLL
            * (__ROR8__(v15, 31)
             + v9
             + __ROL8__(v14, 27)
             + __ROL8__(v14 + *(_QWORD *)((char *)a1 + a2 - 8), 12)
             + __ROR8__(v14 + *(_QWORD *)((char *)a1 + a2 - 24), 7)
             + v13)
            - 0x3C5A37A36834CED9LL * (v16 + *(_QWORD *)((char *)a1 + a2 - 8) + v15);
        v18 = v16 + ((0xC3A5C85C97CB3127LL * ((v17 >> 47) ^ v17)) ^ a3);
        return 0x9AE16A3B2F90404FLL * (v18 ^ (v18 >> 47));
      }
    }
    else
    {
      v6 = *(_QWORD *)((char *)a1 + a2 - 8);
      v7 = __ROR8__(a2 + v6, a2);
      return v6
           ^ (0x9DDFEA08EB382D69LL
            * ((0x9DDFEA08EB382D69LL
              * ((0x9DDFEA08EB382D69LL * (v7 ^ a3 ^ *a1)) ^ v7 ^ ((0x9DDFEA08EB382D69LL * (v7 ^ a3 ^ *a1)) >> 47)))
             ^ ((0x9DDFEA08EB382D69LL
               * ((0x9DDFEA08EB382D69LL * (v7 ^ a3 ^ *a1)) ^ v7 ^ ((0x9DDFEA08EB382D69LL * (v7 ^ a3 ^ *a1)) >> 47))) >> 47)));
    }
  }
  else
  {
    v3 = a3 ^ *(unsigned int *)((char *)a1 + a2 - 4);
    v4 = 0x9DDFEA08EB382D69LL
       * ((0x9DDFEA08EB382D69LL * (v3 ^ (a2 + 8LL * *(unsigned int *)a1)))
        ^ v3
        ^ ((0x9DDFEA08EB382D69LL * (v3 ^ (a2 + 8LL * *(unsigned int *)a1))) >> 47));
    return 0x9DDFEA08EB382D69LL * (v4 ^ (v4 >> 47));
  }
  return result;
}
