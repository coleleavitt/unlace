unsigned __int64 __fastcall sub_678CA0(__int64 *a1, unsigned int a2, __int64 a3, char a4)
{
  __int64 v5; // rbp
  __int64 v6; // r15
  int v7; // r12d
  int v8; // eax
  __int64 v9; // rsi
  __int64 v10; // rax
  __int64 v12; // rdx
  int v13; // r13d
  _DWORD *v14; // rbp
  __int64 v15; // rax
  __int64 v16; // [rsp+0h] [rbp-58h] BYREF
  __int64 v17; // [rsp+8h] [rbp-50h]
  unsigned __int64 v18; // [rsp+18h] [rbp-40h]

  v18 = __readfsqword(0x28u);
  v16 = a3;
  v17 = a3 + a2;
  v5 = unpack_dq(&v16, v17);
  v6 = 8 * v5;
  v7 = unpack_dd(&v16);
  v8 = unpack_dd(&v16);
  v9 = *a1;
  if ( a4 )
  {
    memmove((void *)(v9 + v6), (const void *)(v9 + v6 + 8), 8 * (a1[1] - v5) - 8);
    v10 = a1[1] - 1;
  }
  else
  {
    v12 = a1[1];
    v13 = v8;
    if ( a1[2] < (unsigned __int64)(v12 + 1) )
    {
      v15 = qvector_reserve(a1, v9, v12 + 1, 8);
      v12 = a1[1];
      *a1 = v15;
      v9 = v15;
    }
    v14 = (_DWORD *)(v9 + v6);
    memmove((void *)(v9 + v6 + 8), (const void *)(v9 + v6), 8 * v12 - v6);
    *v14 = v7;
    v14[1] = v13 + v7;
    v10 = a1[1] + 1;
  }
  a1[1] = v10;
  return v18 - __readfsqword(0x28u);
}

