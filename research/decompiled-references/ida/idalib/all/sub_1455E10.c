__int64 __fastcall sub_1455E10(__int64 a1, __int64 a2)
{
  const void *v2; // r14
  size_t v3; // rbx
  unsigned int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // r9
  __int64 *v7; // rcx
  __int64 *v8; // rax
  __int64 v9; // rax
  unsigned int v10; // r8d
  __int64 *v11; // rcx
  _QWORD *v12; // r13
  unsigned int v13; // eax
  __int64 result; // rax
  __int64 v15; // rdi
  unsigned int v16; // [rsp+4h] [rbp-54h]
  __int64 *v17; // [rsp+8h] [rbp-50h]
  __int64 *v18[8]; // [rsp+18h] [rbp-40h] BYREF

  v2 = *(const void **)(a2 + 8);
  v3 = *(_QWORD *)(a2 + 16);
  v4 = sub_2244B30(v2, v3);
  v5 = (unsigned int)sub_2244CB0(a1 + 40, v2, v3, v4);
  v7 = (__int64 *)(*(_QWORD *)(a1 + 40) + 8 * v5);
  if ( *v7 )
  {
    if ( *v7 != -8 )
    {
      sub_1455C80(v18, v7, 0);
      v8 = v18[0];
      goto LABEL_8;
    }
    --*(_DWORD *)(a1 + 56);
  }
  v17 = v7;
  v16 = v5;
  v9 = sub_22300B0(v3 + 17, 8, v5, v7, v5, v6);
  v10 = v16;
  v11 = v17;
  v12 = (_QWORD *)v9;
  if ( v3 )
  {
    memcpy((void *)(v9 + 16), v2, v3);
    v11 = v17;
    v10 = v16;
  }
  *((_BYTE *)v12 + v3 + 16) = 0;
  *v12 = v3;
  v12[1] = 0;
  *v11 = (__int64)v12;
  ++*(_DWORD *)(a1 + 52);
  v13 = sub_22450D0(a1 + 40, v10);
  sub_1455C80(v18, (__int64 *)(*(_QWORD *)(a1 + 40) + 8LL * v13), 0);
  v8 = v18[0];
LABEL_8:
  result = *v8;
  v15 = *(_QWORD *)(result + 8);
  *(_QWORD *)(result + 8) = a2;
  if ( v15 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
  return result;
}
