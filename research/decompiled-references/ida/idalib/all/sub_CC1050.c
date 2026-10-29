__int64 __fastcall sub_CC1050(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdi
  __int64 v6; // rsi
  __int64 v7; // rcx
  unsigned int v8; // r15d
  __int64 v9; // rbp
  __int64 v10; // rax
  __int64 v11; // rdx
  unsigned int v12; // r13d
  unsigned int v14; // ebp
  char v15; // al
  __int64 v16; // rax
  __int64 v17; // rdi
  __int64 v18; // rax
  unsigned int v19; // edx
  __int64 v20; // [rsp+8h] [rbp-80h]
  unsigned int v22; // [rsp+20h] [rbp-68h]
  unsigned __int8 v23; // [rsp+27h] [rbp-61h]
  __int64 v24; // [rsp+28h] [rbp-60h]
  __int64 v25; // [rsp+38h] [rbp-50h]
  __int64 v26[8]; // [rsp+48h] [rbp-40h] BYREF

  v5 = *(_QWORD *)(*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  v20 = v5;
  if ( (unsigned int)*(unsigned __int8 *)(v5 + 16) - 57 > 1 )
    v20 = sub_F63050(v5, a2, a3, a4);
  v6 = *(_QWORD *)(v20 + 32);
  v8 = sub_CE6180(a1[61], v6);
  v9 = *(_QWORD *)(a2 + 16);
  v24 = *(_QWORD *)(v9 + 8);
  v10 = *(_QWORD *)(v24 & 0xFFFFFFFFFFFFFFF0LL);
  v11 = (unsigned int)*(unsigned __int8 *)(v10 + 16) - 57;
  if ( (unsigned int)v11 > 1 )
    v10 = sub_CAEB00(v10, v6, v11, v7);
  v12 = sub_CE6180(a1[61], *(_QWORD *)(v10 + 32));
  v26[0] = v9 | 2;
  v22 = sub_CBEFF0((__int64)a1, v26, 13, 1u, 0, 1, 0);
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD *, __int64))(*a1 + 40LL))(a1, v9) )
  {
    v26[0] = a2 | 4;
    v23 = sub_CA5390((__int64)a1, 13, v22, v26);
    if ( v23 )
    {
      if ( !*(_DWORD *)(v20 + 20) )
        return v23;
      v14 = 0;
      while ( 1 )
      {
        v26[0] = a2 | 4;
        if ( !(unsigned __int8)sub_CA48C0((__int64)a1, 13, v22, v26) )
          break;
        v26[0] = a2 | 4;
        if ( !(unsigned __int8)sub_CA3F50((__int64)a1, v12, v14, v26) )
          break;
        if ( v8 == v12 )
        {
          v15 = sub_F58060(*(_QWORD *)(v6 & 0xFFFFFFFFFFFFFFF0LL));
          if ( v24 != v6 && v15 )
          {
            v16 = sub_CE6660(a1[61], v6);
            v17 = a1[61];
            v26[0] = a2 | 4;
            v25 = v16;
            v18 = sub_CE6170(v17);
            v19 = ((unsigned int)sub_BFE5A0(a2, v18) >> 3) & 7;
            if ( (_BYTE)v19 == 7 )
              LOBYTE(v19) = 1;
            if ( !(unsigned __int8)sub_CA7B10(a1, v25, v19, v26) )
              return 0;
          }
        }
        else if ( !(unsigned __int8)sub_CB1C10((__int64)a1, v12, v8, v6, a2) )
        {
          return 0;
        }
        v26[0] = a2 | 4;
        if ( !(unsigned __int8)sub_CA4D80((__int64)a1, v8, v14, v26) )
          return 0;
        if ( ++v14 == *(_DWORD *)(v20 + 20) )
          return v23;
      }
    }
  }
  return 0;
}
