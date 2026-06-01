/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_70840
// Address: 0x0000000000070840

//----- (0000000000070840) ----------------------------------------------------
unsigned __int64 __fastcall sub_70840(__int64 a1, __int64 a2, int a3, const char **a4)
{
  __int64 v6; // rbp
  const char *v7; // r13
  __int64 v8; // r14
  char *v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rbp

  v6 = *(_QWORD *)(a1 + 88);
  *(_DWORD *)(a1 + 176) = *(_DWORD *)(a1 + 120);
  v7 = *a4;
  v8 = 48LL * a3;
  v9 = strstr(*a4, *(const char **)(v6 + v8 + 24));
  if ( v9 )
  {
    v10 = *(_QWORD *)(v6 + v8 + 32);
    v11 = v10 - 1;
    if ( !v10 )
      v11 = 0;
    *a4 = &v9[v11];
    v12 = a2;
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 40LL))(a2, 0);
    *(_DWORD *)(a1 + 176) = *(_DWORD *)(a1 + 116);
  }
  else
  {
    *a4 = &v7[strlen(v7)];
    v12 = a2;
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 40LL))(a2, (unsigned int)(a3 + 1));
  }
  return sub_70580(a1, v12, (unsigned __int64)*a4, *(_DWORD *)(a1 + 120));
}
