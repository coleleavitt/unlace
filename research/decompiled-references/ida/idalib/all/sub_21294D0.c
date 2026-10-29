__int64 __fastcall sub_21294D0(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // r12
  _QWORD *v4; // rdi
  __int64 (__fastcall *v5)(__int64, __int64); // rax
  __int64 v6; // rdi
  unsigned int v7; // ebp
  __int64 v8; // rdi
  int v9; // edx
  int v10; // eax
  signed __int64 v11; // rsi
  __int64 v12; // rcx
  signed __int64 v13; // rax
  unsigned __int8 **v15; // [rsp+8h] [rbp-50h] BYREF
  _QWORD v16[4]; // [rsp+10h] [rbp-48h] BYREF
  __int16 v17; // [rsp+30h] [rbp-28h]

  v2 = *(_QWORD *)a1;
  v3 = *(_QWORD *)(v2 + 184);
  if ( !*(_BYTE *)(v2 + 861) )
  {
    if ( (unsigned __int8)sub_2129170(v2) )
      return 1;
    v2 = *(_QWORD *)a1;
  }
  v4 = *(_QWORD **)(v2 + 8);
  v5 = *(__int64 (__fastcall **)(__int64, __int64))(*v4 + 32LL);
  if ( v5 == sub_2128D50 )
  {
    v6 = v4[1];
    v16[0] = 0;
    v7 = (*(__int64 (__fastcall **)(__int64, unsigned __int8 ***, _QWORD *))(*(_QWORD *)v6 + 200LL))(v6, &v15, v16);
  }
  else
  {
    v7 = v5((__int64)v4, (__int64)&v15);
  }
  if ( (_BYTE)v7 )
    return 1;
  v8 = *(_QWORD *)a1;
  v9 = **(_DWORD **)(a1 + 8);
  if ( *(_BYTE *)v15 != 1 )
  {
    sub_211C660(*(_QWORD *)(v8 + 24), v15);
    return v7;
  }
  v10 = 8 * v9;
  v11 = (signed __int64)v15[2];
  if ( (unsigned int)(8 * v9) <= 0x3F )
  {
    if ( v10 )
    {
      if ( v11 > 0xFFFFFFFFFFFFFFFFLL >> (64 - (unsigned __int8)v10) )
      {
        v12 = 1LL << ((unsigned __int8)v10 - 1);
        v13 = v12 - 1;
        if ( v11 < -v12 )
          goto LABEL_22;
LABEL_21:
        if ( v11 > v13 )
          goto LABEL_22;
      }
    }
    else if ( v11 )
    {
      if ( v11 < 0 )
      {
LABEL_22:
        v16[0] = "out of range literal value";
        v17 = 259;
        return (unsigned int)sub_2153E90(v8, v3, v16, 0, 0);
      }
      v13 = 0;
      goto LABEL_21;
    }
  }
  (*(void (__fastcall **)(_QWORD, signed __int64))(**(_QWORD **)(v8 + 24) + 536LL))(*(_QWORD *)(v8 + 24), v11);
  return v7;
}
