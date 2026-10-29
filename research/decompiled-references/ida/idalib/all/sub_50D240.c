unsigned __int64 __fastcall sub_50D240(__int64 *a1, unsigned int a2, __int64 a3, char a4)
{
  __int64 v5; // rbp
  __int64 v6; // r12
  __int64 v7; // r15
  __int64 v8; // rax
  __int64 v9; // rsi
  __int64 v10; // rax
  __int64 v12; // rdx
  __int64 v13; // r13
  __int64 *v14; // rbp
  __int64 v15; // rax
  _QWORD v16[3]; // [rsp+0h] [rbp-58h] BYREF
  unsigned __int64 v17; // [rsp+18h] [rbp-40h]

  v17 = __readfsqword(0x28u);
  v16[0] = a3;
  v16[1] = a3 + a2;
  v5 = unpack_dq(v16);
  v6 = unpack_dq(v16);
  v7 = 16 * v5;
  v8 = unpack_dq(v16);
  v9 = *a1;
  if ( a4 )
  {
    memmove((void *)(v9 + v7), (const void *)(v9 + v7 + 16), 16 * (a1[1] - v5) - 16);
    v10 = a1[1] - 1;
  }
  else
  {
    v12 = a1[1];
    v13 = v8;
    if ( a1[2] < (unsigned __int64)(v12 + 1) )
    {
      v15 = qvector_reserve(a1, v9, v12 + 1, 16);
      v12 = a1[1];
      *a1 = v15;
      v9 = v15;
    }
    v14 = (__int64 *)(v9 + v7);
    memmove((void *)(v9 + v7 + 16), (const void *)(v9 + v7), 16 * v12 - v7);
    *v14 = v6;
    v14[1] = v13;
    v10 = a1[1] + 1;
  }
  a1[1] = v10;
  return v17 - __readfsqword(0x28u);
}
