__int64 __fastcall sub_1FD8C30(__int64 a1, const void *a2, size_t a3, __int64 *a4)
{
  unsigned int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // r9
  __int64 *v9; // rcx
  __int64 *v10; // rax
  __int64 v11; // rax
  unsigned int v12; // r8d
  __int64 *v13; // rcx
  __int64 v14; // r12
  unsigned int v15; // eax
  __int64 v16; // rbx
  __int64 result; // rax
  __int64 v18; // rdi
  unsigned int v19; // [rsp+4h] [rbp-54h]
  __int64 *v20; // [rsp+8h] [rbp-50h]
  __int64 *v21[8]; // [rsp+18h] [rbp-40h] BYREF

  v6 = sub_2244B30(a2, a3);
  v7 = (unsigned int)sub_2244CB0(a1 + 8, a2, a3, v6);
  v9 = (__int64 *)(*(_QWORD *)(a1 + 8) + 8 * v7);
  if ( *v9 )
  {
    if ( *v9 != -8 )
    {
      sub_1FD8A00(v21, v9, 0);
      v10 = v21[0];
      goto LABEL_8;
    }
    --*(_DWORD *)(a1 + 24);
  }
  v20 = v9;
  v19 = v7;
  v11 = sub_22300B0(a3 + 25, 8, v7, v9, v7, v8);
  v12 = v19;
  v13 = v20;
  v14 = v11;
  if ( a3 )
  {
    memcpy((void *)(v11 + 24), a2, a3);
    v13 = v20;
    v12 = v19;
  }
  *(_BYTE *)(v14 + a3 + 24) = 0;
  *(_OWORD *)(v14 + 8) = 0;
  *(_QWORD *)v14 = a3;
  *(_BYTE *)(v14 + 16) = 0;
  *v13 = v14;
  ++*(_DWORD *)(a1 + 20);
  v15 = sub_22450D0(a1 + 8, v12);
  sub_1FD8A00(v21, (__int64 *)(*(_QWORD *)(a1 + 8) + 8LL * v15), 0);
  v10 = v21[0];
LABEL_8:
  v16 = *v10;
  result = *a4;
  *a4 = 0;
  v18 = *(_QWORD *)(v16 + 8);
  *(_QWORD *)(v16 + 8) = result;
  if ( v18 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 8LL))(v18);
    result = *(_QWORD *)(v16 + 8);
  }
  *(_BYTE *)(v16 + 16) = 1;
  return result;
}
