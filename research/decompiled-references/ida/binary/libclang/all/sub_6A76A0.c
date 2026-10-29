__int64 __fastcall sub_6A76A0(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // r12
  __int64 v4; // rbp
  __int64 v5; // r13
  unsigned int v6; // ecx
  __int64 v7; // r13
  __int64 v8; // r15
  __int64 v9; // rax
  __int64 result; // rax
  __int64 v11; // r8
  __int64 v12; // r14
  __int64 v13; // rax
  __int64 *v14; // rax
  __int64 v15; // [rsp+8h] [rbp-40h]

  v3 = 1LL << a3;
  v4 = (1LL << a3) - 1;
  v5 = a2 + v4;
  if ( (unsigned __int64)(a2 + v4) > 0x1000 )
  {
    v11 = sub_25CC9C0(v5, 16);
    v12 = v11;
    v13 = *(unsigned int *)(a1 + 72);
    if ( *(unsigned int *)(a1 + 76) < (unsigned __int64)(v13 + 1) )
    {
      v15 = v11;
      sub_25D6060(a1 + 64, a1 + 80, v13 + 1, 16);
      v13 = *(unsigned int *)(a1 + 72);
      v11 = v15;
    }
    v14 = (__int64 *)(*(_QWORD *)(a1 + 64) + 16 * v13);
    *v14 = v12;
    v14[1] = v5;
    ++*(_DWORD *)(a1 + 72);
    return -v3 & (v11 + v4);
  }
  else
  {
    v6 = *(_DWORD *)(a1 + 24) >> 7;
    if ( v6 > 0x1E )
      LOBYTE(v6) = 30;
    v7 = 4096LL << v6;
    v8 = sub_25CC9C0(4096LL << v6, 16);
    v9 = *(unsigned int *)(a1 + 24);
    if ( *(unsigned int *)(a1 + 28) < (unsigned __int64)(v9 + 1) )
    {
      sub_25D6060(a1 + 16, a1 + 32, v9 + 1, 8);
      v9 = *(unsigned int *)(a1 + 24);
    }
    *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8 * v9) = v8;
    result = -v3 & (v4 + v8);
    ++*(_DWORD *)(a1 + 24);
    *(_QWORD *)(a1 + 8) = v8 + v7;
    *(_QWORD *)a1 = result + a2;
  }
  return result;
}

