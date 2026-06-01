__int64 __fastcall sub_1FD8A40(__int64 a1, __int64 *a2, __int64 *a3, __int64 *a4)
{
  __int64 v5; // r14
  unsigned int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // r9
  __int64 *v9; // rcx
  __int64 *v10; // rbx
  __int64 v12; // rax
  unsigned int v13; // r8d
  __int64 *v14; // rcx
  __int64 v15; // r12
  unsigned int v16; // eax
  unsigned int v17; // [rsp+4h] [rbp-74h]
  __int64 *v18; // [rsp+8h] [rbp-70h]
  __int64 *v19[12]; // [rsp+18h] [rbp-60h] BYREF

  v5 = *a4;
  *a4 = 0;
  v19[1] = a2;
  v19[2] = a3;
  v6 = sub_2244B30(a2, a3);
  v7 = (unsigned int)sub_2244CB0(a1 + 8, a2, a3, v6);
  v9 = (__int64 *)(*(_QWORD *)(a1 + 8) + 8 * v7);
  if ( *v9 )
  {
    if ( *v9 != -8 )
    {
      sub_1FD8A00(v19, v9, 0);
      v10 = v19[0];
      if ( v5 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
      return *(_QWORD *)(*v10 + 8);
    }
    --*(_DWORD *)(a1 + 24);
  }
  v18 = v9;
  v17 = v7;
  v12 = sub_22300B0((char *)a3 + 25, 8, v7, v9, v7, v8);
  v13 = v17;
  v14 = v18;
  v15 = v12;
  if ( a3 )
  {
    memcpy((void *)(v12 + 24), a2, (size_t)a3);
    v14 = v18;
    v13 = v17;
  }
  *((_BYTE *)a3 + v15 + 24) = 0;
  *(_QWORD *)v15 = a3;
  *(_QWORD *)(v15 + 8) = v5;
  *(_BYTE *)(v15 + 16) = 0;
  *v14 = v15;
  ++*(_DWORD *)(a1 + 20);
  v16 = sub_22450D0(a1 + 8, v13);
  sub_1FD8A00(v19, (__int64 *)(*(_QWORD *)(a1 + 8) + 8LL * v16), 0);
  v10 = v19[0];
  return *(_QWORD *)(*v10 + 8);
}
