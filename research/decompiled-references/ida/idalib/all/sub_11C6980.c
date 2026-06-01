__int64 *__fastcall sub_11C6980(__int64 a1, const void *a2, size_t a3, __int64 a4, char *a5)
{
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 *v10; // r13
  __int64 v12; // rax
  unsigned int v13; // ecx
  __int64 v14; // r12
  char v15; // al
  unsigned int v16; // eax
  unsigned int v17; // [rsp+Ch] [rbp-4Ch]
  __int64 *v18[8]; // [rsp+18h] [rbp-40h] BYREF

  v7 = (unsigned int)sub_2244CB0(a1, a2, a3, a4);
  v10 = (__int64 *)(*(_QWORD *)a1 + 8 * v7);
  if ( *v10 )
  {
    if ( *v10 != -8 )
    {
      sub_10298F0(v18, v10, 0);
      return v18[0];
    }
    --*(_DWORD *)(a1 + 16);
  }
  v17 = v7;
  v12 = sub_22300B0(a3 + 17, 8, v7, v7, v8, v9);
  v13 = v17;
  v14 = v12;
  if ( a3 )
  {
    memcpy((void *)(v12 + 16), a2, a3);
    v13 = v17;
  }
  v15 = *a5;
  *(_BYTE *)(v14 + a3 + 16) = 0;
  *(_QWORD *)v14 = a3;
  *(_BYTE *)(v14 + 8) = v15;
  *v10 = v14;
  ++*(_DWORD *)(a1 + 12);
  v16 = sub_22450D0(a1, v13);
  sub_10298F0(v18, (__int64 *)(*(_QWORD *)a1 + 8LL * v16), 0);
  return v18[0];
}
