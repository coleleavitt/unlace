unsigned __int64 __fastcall sub_1E70650(__int64 *a1, unsigned __int64 a2, unsigned __int8 a3, __int64 a4, __int64 a5)
{
  bool v6; // r12
  unsigned int v7; // ebp
  __int64 v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r14
  __int64 v13; // r8
  __int64 v15; // r15
  size_t v16; // rax
  __int64 *v17; // rsi
  unsigned int v18; // ecx
  __int64 v19; // rdi
  __int64 v20; // rax
  unsigned __int64 v21; // [rsp+8h] [rbp-E0h] BYREF
  int v22; // [rsp+1Ch] [rbp-CCh] BYREF
  _BYTE v23[200]; // [rsp+20h] [rbp-C8h] BYREF

  v6 = a3;
  v7 = a4;
  v21 = a2;
  v9 = *(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
  v10 = *(_QWORD *)(*(_QWORD *)(v9 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  v11 = *(unsigned __int8 *)(v10 + 16);
  if ( !a3 )
  {
    v6 = 1;
    if ( *(_BYTE *)(v9 + 16) != 43 )
    {
      v6 = 0;
      if ( (_BYTE)v11 == 43 )
      {
        v6 = sub_F63050(v9, a2, v11, a4) != 0;
        v10 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v21 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
        LOBYTE(v11) = *(_BYTE *)(v10 + 16);
      }
    }
  }
  if ( (_BYTE)v11 == 13 && ((*(_WORD *)(v10 + 18) >> 3) & 0x1FF) == 0x1B3 )
  {
    v12 = 0;
    sub_168B9F0((__int64)v23, a1 + 1, v7, 0x1349u, 0);
    sub_15F7200(v23);
    return v12;
  }
  if ( (*(_BYTE *)(a1[29] + 89) & 1) != 0 && v7 )
  {
    v17 = a1 + 1;
    v18 = 3912;
    goto LABEL_27;
  }
  v12 = 0;
  if ( (unsigned __int8)sub_1E6FC20((__int64)a1, v21, v7, 2, a5) )
    return v12;
  v15 = a1[29];
  if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v21 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                                    & 0xFFFFFFFFFFFFFFF0LL)
                                        + 16LL)
     - 25 <= 1
    && (*(_BYTE *)(v15 + 47) & 0x20) != 0 )
  {
    v16 = j__strlen("__cl_clang_function_pointers");
    if ( !sub_FF8450((__int64)(a1 + 25), (__int64)"__cl_clang_function_pointers", v16, v15) )
    {
      sub_168B9F0((__int64)v23, a1 + 1, v7, 0x124Bu, 0);
      v22 = 1;
      sub_1587D10((__int64)v23, &v22);
      sub_15F7200(v23);
      return v12;
    }
    v15 = a1[29];
  }
  if ( (*(_BYTE *)(v15 + 107) & 4) != 0 )
  {
    v20 = sub_1E62FD0((__int64)a1, v21, v7, 1, v13);
    v15 = a1[29];
    v21 = v20;
  }
  if ( (*(_BYTE *)(v15 + 47) & 0x20) != 0 )
    v21 = sub_1E5D3C0((__int64)a1, v21);
  if ( (unsigned int)(*(_DWORD *)(*(_QWORD *)(a1[31] + 17448) + 248LL) - 55) <= 1 && sub_F65EB0(&v21) )
  {
    v17 = a1 + 1;
    v18 = 5468;
LABEL_27:
    v12 = 0;
    sub_168B9F0((__int64)v23, v17, v7, v18, 0);
    v22 = 1;
    sub_1587D10((__int64)v23, &v22);
    sub_15F7200(v23);
    return v12;
  }
  if ( sub_F65F60(*(_QWORD *)(v21 & 0xFFFFFFFFFFFFFFF0LL)) )
  {
    v17 = a1 + 1;
    v18 = 5478;
    goto LABEL_27;
  }
  v19 = a1[31];
  if ( v6 )
    return sub_A73030(v19, v21, a3);
  else
    return sub_A72DD0(v19, v21);
}
