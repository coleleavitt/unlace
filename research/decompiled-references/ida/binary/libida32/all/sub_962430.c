__int64 __fastcall sub_962430(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rbp
  __int64 v7; // r14
  __int64 v8; // r12
  __int64 v10; // r12
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // r12
  __int64 result; // rax
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 *v18; // rcx
  __int64 v19; // [rsp+8h] [rbp-30h]
  __int64 v20; // [rsp+8h] [rbp-30h]

  v6 = 1LL << a4;
  v7 = (1LL << a4) - 1;
  v8 = a3 + v7;
  if ( (unsigned __int64)(a3 + v7) > 0x1000 )
  {
    v16 = sub_220C370(a3 + v7, 16, a3, a4, a5, a6);
    v17 = *(unsigned int *)(a1 + 72);
    if ( v17 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 76) )
    {
      v20 = v16;
      sub_22134E0(a1 + 64, a1 + 80, v17 + 1, 16);
      v17 = *(unsigned int *)(a1 + 72);
      v16 = v20;
    }
    v18 = (__int64 *)(*(_QWORD *)(a1 + 64) + 16 * v17);
    *v18 = v16;
    v18[1] = v8;
    ++*(_DWORD *)(a1 + 72);
    return -v6 & (v7 + v16);
  }
  else
  {
    v10 = 0x40000000000LL;
    v11 = *(_DWORD *)(a1 + 24) >> 7;
    if ( (unsigned int)v11 < 0x1E )
      v10 = 4096LL << v11;
    v12 = sub_220C370(v10, 16, a3, v11, a5, a6);
    v13 = *(unsigned int *)(a1 + 24);
    if ( v13 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 28) )
    {
      v19 = v12;
      sub_22134E0(a1 + 16, a1 + 32, v13 + 1, 8);
      v13 = *(unsigned int *)(a1 + 24);
      v12 = v19;
    }
    v14 = v12 + v10;
    *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8 * v13) = v12;
    result = -v6 & (v7 + v12);
    *(_QWORD *)(a1 + 8) = v14;
    ++*(_DWORD *)(a1 + 24);
    *(_QWORD *)a1 = result + a3;
  }
  return result;
}

