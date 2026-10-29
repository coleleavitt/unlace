__int64 __fastcall sub_A24580(__int64 a1, const void *a2, size_t a3)
{
  int v5; // r15d
  unsigned int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // r9
  __int64 *v9; // rcx
  __int64 *v10; // rax
  size_t *v11; // r13
  unsigned int v12; // eax
  unsigned int v13; // [rsp+0h] [rbp-54h]
  __int64 *v14; // [rsp+4h] [rbp-50h]
  __int64 *v15[8]; // [rsp+14h] [rbp-40h] BYREF

  if ( !a3 )
    return 0;
  v5 = *(_DWORD *)(a1 + 580);
  v6 = sub_2244B30(a2, a3);
  v7 = (unsigned int)sub_2244CB0(a1 + 568, a2, a3, v6);
  v9 = (__int64 *)(*(_QWORD *)(a1 + 568) + 8 * v7);
  if ( !*v9 )
    goto LABEL_7;
  if ( *v9 == -8 )
  {
    --*(_DWORD *)(a1 + 584);
LABEL_7:
    v14 = v9;
    v13 = v7;
    v11 = (size_t *)sub_22300B0(a3 + 17, 8, v7, v9, v7, v8);
    memcpy(v11 + 2, a2, a3);
    *((_BYTE *)v11 + a3 + 16) = 0;
    *v11 = a3;
    v11[1] = (unsigned __int64)(unsigned int)(v5 + 1) << 33;
    *v14 = (__int64)v11;
    ++*(_DWORD *)(a1 + 580);
    v12 = sub_22450D0(a1 + 568, v13);
    sub_A24540(v15, (__int64 *)(*(_QWORD *)(a1 + 568) + 8LL * v12), 0);
    v10 = v15[0];
    return *(_QWORD *)(*v10 + 8);
  }
  sub_A24540(v15, v9, 0);
  v10 = v15[0];
  return *(_QWORD *)(*v10 + 8);
}
