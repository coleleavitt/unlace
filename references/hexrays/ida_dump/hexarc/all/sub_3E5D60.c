__int64 __fastcall sub_3E5D60(__int64 a1, __int64 a2, int a3, __int64 a4, __int64 a5, double a6)
{
  __int64 v6; // r14
  int v8; // r13d
  __int64 v9; // rbp
  __int64 v10; // r12
  __int64 v11; // rcx
  __int64 v12; // r8
  int v13; // r15d
  __int64 result; // rax
  __int64 v15; // rbp
  __int64 v16; // rdi
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int dtype_size; // eax
  int v22; // eax

  if ( *(_WORD *)(a1 + 48) != 3 )
  {
    if ( !under_debugger )
      sub_37B760(0xCA49u, a2, a6);
    BUG();
  }
  v6 = a3;
  v8 = a4;
  v9 = 40LL * (int)a2;
  v10 = a1 + v9 + 64;
  v13 = sub_3E57E0(a1, a2, (_DWORD)a2 == 0 ? 272 : 280, a4, a5);
  result = 0;
  if ( v13 != -1 )
  {
    v15 = a1 + v9;
    v16 = *(unsigned __int8 *)(v15 + 69);
    if ( (unsigned __int8)(*(_BYTE *)(v15 + 65) - 2) > 2u )
    {
      if ( (_DWORD)v6 != v13 )
      {
        dtype_size = get_dtype_size(v16);
        sub_1CF210(a1, 4u, dtype_size, (int)v6, 0x3BEA45E214ADDC55LL, v13, 0);
      }
    }
    else if ( v8 == -1 )
    {
      v22 = get_dtype_size(v16);
      sub_1CF210(a1, 1u, v22, v6, 296, v13, 4);
    }
    else
    {
      v17 = get_dtype_size(2);
      sub_1CF210(a1, 1u, v17, v6, 296, v13, 4);
      v18 = get_dtype_size(2);
      sub_1CF210(a1, 3u, v18, 4, 0x3BEA45E214ADDC55LL, 288, 0);
      v19 = get_dtype_size(2);
      sub_1CF210(a1, 0xCu, v19, v13, 288, v13, 0);
      v20 = get_dtype_size(2);
      sub_1CF210(a1, 1u, v20, v8, 296, v13, 4);
    }
    sub_3E5CA0(a1, v10, v13, v11, v12);
    return 1;
  }
  return result;
}
