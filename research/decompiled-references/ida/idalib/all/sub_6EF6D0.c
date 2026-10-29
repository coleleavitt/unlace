__int64 __fastcall sub_6EF6D0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r12
  __int64 v7; // rbp
  __int64 v8; // r13
  __int64 v9; // rcx
  __int64 v10; // r13
  __int64 v11; // r15
  __int64 v12; // rax
  __int64 result; // rax
  __int64 v14; // r8
  __int64 v15; // r14
  __int64 v16; // rax
  __int64 *v17; // rax
  __int64 v18; // [rsp+8h] [rbp-40h]

  v6 = 1LL << a3;
  v7 = (1LL << a3) - 1;
  v8 = a2 + v7;
  if ( (unsigned __int64)(a2 + v7) > 0x1000 )
  {
    v14 = sub_22300B0(v8, 16, a3, (unsigned int)a3, a5, a6);
    v15 = v14;
    v16 = *(unsigned int *)(a1 + 72);
    if ( *(unsigned int *)(a1 + 76) < (unsigned __int64)(v16 + 1) )
    {
      v18 = v14;
      sub_2237220(a1 + 64, a1 + 80, v16 + 1, 16);
      v16 = *(unsigned int *)(a1 + 72);
      v14 = v18;
    }
    v17 = (__int64 *)(*(_QWORD *)(a1 + 64) + 16 * v16);
    *v17 = v15;
    v17[1] = v8;
    ++*(_DWORD *)(a1 + 72);
    return -v6 & (v14 + v7);
  }
  else
  {
    v9 = *(_DWORD *)(a1 + 24) >> 7;
    if ( (unsigned int)v9 > 0x1E )
      v9 = 30;
    v10 = 4096LL << v9;
    v11 = sub_22300B0(4096LL << v9, 16, a3, v9, a5, a6);
    v12 = *(unsigned int *)(a1 + 24);
    if ( *(unsigned int *)(a1 + 28) < (unsigned __int64)(v12 + 1) )
    {
      sub_2237220(a1 + 16, a1 + 32, v12 + 1, 8);
      v12 = *(unsigned int *)(a1 + 24);
    }
    *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8 * v12) = v11;
    result = -v6 & (v7 + v11);
    ++*(_DWORD *)(a1 + 24);
    *(_QWORD *)(a1 + 8) = v11 + v10;
    *(_QWORD *)a1 = result + a2;
  }
  return result;
}
