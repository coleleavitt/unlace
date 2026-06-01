/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100036610
// Address: 0x0000000100036610

//----- (0000000100036610) ----------------------------------------------------
__int64 __fastcall sub_100036610(__int64 a1, __int64 a2, int a3, char **a4)
{
  __int64 v5; // r14
  const char *v6; // r13
  __int64 v7; // r15
  char *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rdx
  bool v11; // cf
  __int64 v12; // rcx
  char **v13; // r15
  __int64 v14; // r14
  __int64 result; // rax
  char *v16; // r15
  char *v17; // rsi
  unsigned int v18; // r12d
  unsigned int v19; // r13d
  unsigned int v20; // eax

  v5 = *(_QWORD *)(a1 + 88);
  *(_DWORD *)(a1 + 176) = *(_DWORD *)(a1 + 120);
  v6 = *a4;
  v7 = 48LL * a3;
  v8 = strstr(*a4, *(const char **)(v5 + v7 + 24));
  if ( v8 )
  {
    v9 = *(_QWORD *)(v5 + v7 + 32);
    v10 = 0;
    v11 = v9 == 0;
    v12 = v9 - 1;
    if ( !v11 )
      v10 = v12;
    v13 = a4;
    *a4 = &v8[v10];
    v14 = a2;
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 40LL))(a2, 0);
    result = *(unsigned int *)(a1 + 116);
    *(_DWORD *)(a1 + 176) = result;
  }
  else
  {
    v13 = a4;
    *a4 = (char *)&v6[strlen(v6)];
    v14 = a2;
    result = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 40LL))(a2, (unsigned int)(a3 + 1));
  }
  v16 = *v13;
  v17 = *(char **)(a1 + 168);
  if ( v17 < v16 )
  {
    v18 = *(_DWORD *)(a1 + 120);
    v19 = sub_100036380(*(_BYTE **)(a1 + 160), v17);
    v20 = sub_100036380(*(_BYTE **)(a1 + 168), v16);
    result = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v14 + 16LL))(v14, v19, v20, v18);
    *(_QWORD *)(a1 + 168) = v16;
  }
  return result;
}
