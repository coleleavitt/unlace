__int64 __fastcall sub_1670290(__int64 a1, int a2, __int64 a3)
{
  _QWORD *v5; // rdx
  __int64 v6; // r13
  __int64 v7; // rax
  __int64 result; // rax
  void *v9; // r14
  _QWORD *v10; // rdx
  void *v11; // rdi
  int v12; // r15d
  int v13; // eax
  _QWORD v14[8]; // [rsp+8h] [rbp-40h] BYREF

  if ( *(_DWORD *)(a1 + 2028) <= *(_DWORD *)(a1 + 2024) )
  {
    v9 = (void *)(a1 + 2032);
    v6 = sub_2237400(a1 + 2016, a1 + 2032, 0, 144, v14);
    v10 = (_QWORD *)(v6 + 144LL * *(unsigned int *)(a1 + 2024));
    memset(v10, 0, 0x90u);
    v10[2] = v10 + 4;
    v10[3] = 0x200000000LL;
    sub_1670150((__int64 *)(a1 + 2016), v6);
    v11 = *(void **)(a1 + 2016);
    v12 = v14[0];
    if ( v9 != v11 )
      free(v11);
    v13 = *(_DWORD *)(a1 + 2024);
    *(_QWORD *)(a1 + 2016) = v6;
    *(_DWORD *)(a1 + 2028) = v12;
    v7 = (unsigned int)(v13 + 1);
    *(_DWORD *)(a1 + 2024) = v7;
  }
  else
  {
    v5 = (_QWORD *)(*(_QWORD *)(a1 + 2016) + 144LL * *(unsigned int *)(a1 + 2024));
    memset(v5, 0, 0x90u);
    v5[2] = v5 + 4;
    v5[3] = 0x200000000LL;
    v6 = *(_QWORD *)(a1 + 2016);
    v7 = (unsigned int)(*(_DWORD *)(a1 + 2024) + 1);
    *(_DWORD *)(a1 + 2024) = v7;
  }
  *(_DWORD *)(v6 + 144 * v7 - 144) = a2;
  result = *(_QWORD *)(a1 + 2016) + 144LL * *(unsigned int *)(a1 + 2024);
  *(_QWORD *)(result - 136) = a3;
  return result;
}
