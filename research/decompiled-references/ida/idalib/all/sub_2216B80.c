__int64 *__fastcall sub_2216B80(__int64 a1, const void *a2, size_t a3, __int64 a4, __int64 *a5)
{
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 *v10; // r13
  __int64 v12; // rax
  unsigned int v13; // ecx
  _QWORD *v14; // r12
  __int64 v15; // rax
  unsigned int v16; // eax
  unsigned int v17; // [rsp+Ch] [rbp-4Ch]
  __int64 *v18[8]; // [rsp+18h] [rbp-40h] BYREF

  v7 = (unsigned int)sub_2244CB0(a1, a2, a3, a4);
  v10 = (__int64 *)(*(_QWORD *)a1 + 8 * v7);
  if ( *v10 )
  {
    if ( *v10 != -8 )
    {
      sub_2216AE0(v18, v10, 0);
      return v18[0];
    }
    --*(_DWORD *)(a1 + 16);
  }
  v17 = v7;
  v12 = sub_22300B0(a3 + 17, 8, v7, v7, v8, v9);
  v13 = v17;
  v14 = (_QWORD *)v12;
  if ( a3 )
  {
    memcpy((void *)(v12 + 16), a2, a3);
    v13 = v17;
  }
  v15 = *a5;
  *((_BYTE *)v14 + a3 + 16) = 0;
  *v14 = a3;
  v14[1] = v15;
  *v10 = (__int64)v14;
  ++*(_DWORD *)(a1 + 12);
  v16 = sub_22450D0(a1, v13);
  sub_2216AE0(v18, (__int64 *)(*(_QWORD *)a1 + 8LL * v16), 0);
  return v18[0];
}
