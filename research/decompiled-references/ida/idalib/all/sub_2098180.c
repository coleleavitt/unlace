void __fastcall sub_2098180(__int64 *a1, __int64 a2)
{
  int v2; // eax
  __int64 v3; // rbp
  int v4; // r13d
  __int64 v5; // r12
  size_t v6; // rdx
  size_t v7; // rbx
  unsigned int v8; // eax
  unsigned int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned int v13; // r14d
  __int64 *v14; // r15
  __int64 v15; // r12
  unsigned int v16; // eax
  void *src; // [rsp+8h] [rbp-50h]
  __int64 *v18[8]; // [rsp+18h] [rbp-40h] BYREF

  v2 = sub_208D420(a2);
  v3 = *a1;
  v4 = v2;
  v5 = sub_20CC3B0(a2);
  v7 = v6;
  v8 = sub_2244B30(v5, v6);
  src = (void *)v5;
  v9 = sub_2244CB0(v3, v5, v7, v8);
  v13 = v9;
  v14 = (__int64 *)(*(_QWORD *)v3 + 8LL * v9);
  if ( *v14 )
  {
    if ( *v14 != -8 )
    {
      sub_2098140(v18, v14, 0);
      *(_DWORD *)(*v18[0] + 12) = v4;
      return;
    }
    --*(_DWORD *)(v3 + 16);
  }
  v15 = sub_22300B0(v7 + 17, 8, v9, v10, v11, v12);
  if ( v7 )
    memcpy((void *)(v15 + 16), src, v7);
  *(_BYTE *)(v15 + v7 + 16) = 0;
  *(_QWORD *)v15 = v7;
  *(_DWORD *)(v15 + 12) = v4;
  *(_DWORD *)(v15 + 8) = 0;
  *v14 = v15;
  ++*(_DWORD *)(v3 + 12);
  v16 = sub_22450D0(v3, v13);
  sub_2098140(v18, (__int64 *)(*(_QWORD *)v3 + 8LL * v16), 0);
}
