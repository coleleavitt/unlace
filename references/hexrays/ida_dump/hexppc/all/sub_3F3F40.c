__int64 __fastcall sub_3F3F40(__int64 a1, signed int a2, unsigned int a3, double a4)
{
  signed int v4; // r8d
  unsigned int v6; // r9d
  __int64 v7; // r12
  char v8; // al
  unsigned int v9; // ebp
  __int64 v10; // rsi
  signed int v11; // r13d
  int *v12; // rdi
  __int64 v13; // rax
  int v14; // r15d
  __int64 v15; // r14
  int dtype_size; // eax
  __int64 v17; // r8
  int v19; // edx
  int v20; // edx
  __int64 v21; // rcx
  __int64 v22; // rax
  signed __int8 v23; // si
  __int64 v24; // rdx
  __int64 v25; // rax
  char v26; // [rsp+3h] [rbp-45h] BYREF
  int v27; // [rsp+4h] [rbp-44h] BYREF
  unsigned __int64 v28; // [rsp+8h] [rbp-40h]

  v4 = a2;
  v28 = __readfsqword(0x28u);
  v6 = a3;
  v27 = 0;
  if ( a2 == 1 )
  {
    v19 = *(unsigned __int16 *)(a1 + 48);
    v10 = (__int64)&v26;
    v12 = &v27;
    if ( (unsigned __int8)sub_3E5AC0(&v27, &v26, v19) )
    {
      v20 = v27;
      if ( v27 != -1 )
      {
        v21 = *(_QWORD *)(a1 + 832);
        v22 = *(_QWORD *)(v21 + 4464);
        if ( v22 )
        {
          BYTE1(v20) = BYTE1(v27) | 0x10;
          v9 = *(_DWORD *)(*(_QWORD *)(v21 + 4456) + 4 * v22 - 4);
          v23 = v26;
          *(_QWORD *)(v21 + 4464) = v22 - 1;
          if ( !(unsigned __int8)sub_3EC4B0(a1, v23, v20, v9, 1u, a4) )
            return (unsigned int)-1;
          return v9;
        }
LABEL_17:
        sub_3E6800(a4, (__int64)v12, v10);
      }
      return (unsigned int)-1;
    }
  }
  v7 = v4;
  v8 = *(_BYTE *)(a1 + 40LL * v4 + 65);
  if ( (unsigned __int8)(v8 - 2) <= 2u || (unsigned __int8)(v8 - 6) <= 1u )
  {
    v9 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)a1 + 56LL))(a1, (unsigned int)v4, v6);
    if ( v9 != -1 )
    {
      if ( *(_BYTE *)(a1 + 40 * v7 + 69) == 9 )
        return v9;
      v10 = v9;
      v11 = v9;
      v12 = (int *)(*(_QWORD *)(a1 + 832) + 104LL);
      if ( !sub_60EF0(v12, v9) )
      {
        v24 = *(_QWORD *)(a1 + 832);
        v25 = *(_QWORD *)(v24 + 4464);
        if ( !v25 )
          goto LABEL_17;
        v11 = *(_DWORD *)(*(_QWORD *)(v24 + 4456) + 4 * v25 - 4);
        *(_QWORD *)(v24 + 4464) = v25 - 1;
      }
      v13 = *(_QWORD *)(a1 + 832);
      v14 = *(_DWORD *)(v13 + 80);
      v15 = *(int *)(v13 + 64);
      dtype_size = get_dtype_size(*(unsigned __int8 *)(a1 + 40 * v7 + 69));
      v17 = (int)v9;
      v9 = v11;
      sub_1D2710(a1, 2u, dtype_size, v15, v17, v11, v14);
      return v9;
    }
    return (unsigned int)-1;
  }
  return sub_3F3ED0(a1, v4, a4);
}
