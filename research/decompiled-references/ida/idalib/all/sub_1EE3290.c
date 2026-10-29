__int64 __fastcall sub_1EE3290(__int64 a1, unsigned int a2)
{
  __int64 v2; // r13
  __int64 v3; // rax
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rbx
  __int64 v9; // rdi
  _QWORD v10[7]; // [rsp+0h] [rbp-38h] BYREF

  v2 = a2 - 1;
  v3 = 8 * v2 + *(_QWORD *)(a1 + 4720);
  if ( *(_QWORD *)v3 )
    return *(_QWORD *)v3;
  v10[0] = a1;
  v6 = *((_QWORD *)sub_1EAEBA0(a1 + 4864, a2) + 1);
  v7 = *(_QWORD *)(v6 + 2640);
  v8 = (unsigned int)(v2 - *(_DWORD *)(v6 + 2648));
  v10[1] = v6;
  *(_QWORD *)(*(_QWORD *)(a1 + 4720) + 8 * v2) = sub_1EE3130(
                                                   (__int64)v10,
                                                   (unsigned __int16 *)(*(_QWORD *)(v6 + 2688)
                                                                      + *(unsigned int *)(v7 + 4 * v8)));
  v9 = *(_QWORD *)(a1 + 64);
  if ( v9 )
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v9 + 64LL))(
      v9,
      a2,
      *(_QWORD *)(*(_QWORD *)(a1 + 4720) + 8 * v2));
  return *(_QWORD *)(8 * v2 + *(_QWORD *)(a1 + 4720));
}
