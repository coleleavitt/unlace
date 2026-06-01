/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6C610
// Address: 0x000000000006C610

//----- (000000000006C610) ----------------------------------------------------
_QWORD *__fastcall sub_6C610(__int64 a1, unsigned __int64 a2)
{
  int v2; // r15d
  __int64 v3; // rbp
  char *v4; // rcx
  _QWORD *result; // rax
  __int64 v6; // rdx
  char *v7; // rcx
  __int64 v8; // rdx
  __int128 v9; // [rsp+0h] [rbp-38h]

  if ( *(_QWORD *)a1 > a2 || 32LL * *(_QWORD *)(a1 + 16) + *(_QWORD *)a1 <= a2 )
  {
    sub_70210((char **)a1, *(_QWORD *)(a1 + 8) + 1LL);
    v7 = *(char **)a1;
    result = (_QWORD *)(a1 + 8);
    v8 = 32LL * *(_QWORD *)(a1 + 8);
    *(_DWORD *)&v7[v8] = *(_DWORD *)a2;
    *(_QWORD *)&v7[v8 + 8] = *(_QWORD *)(a2 + 8);
    *(_QWORD *)(a2 + 8) = 0;
    *(_QWORD *)&v7[v8 + 16] = *(_QWORD *)(a2 + 16);
    *(_QWORD *)(a2 + 16) = 0;
    *(_QWORD *)&v7[v8 + 24] = *(_QWORD *)(a2 + 24);
    *(_QWORD *)(a2 + 24) = 0;
  }
  else
  {
    v2 = *(_DWORD *)a2;
    v9 = *(_OWORD *)(a2 + 8);
    *(_QWORD *)(a2 + 8) = 0;
    v3 = *(_QWORD *)(a2 + 24);
    *(_OWORD *)(a2 + 16) = 0;
    sub_70210((char **)a1, *(_QWORD *)(a1 + 8) + 1LL);
    v4 = *(char **)a1;
    result = (_QWORD *)(a1 + 8);
    v6 = 32LL * *(_QWORD *)(a1 + 8);
    *(_DWORD *)&v4[v6] = v2;
    *(_OWORD *)&v4[v6 + 8] = v9;
    *(_QWORD *)&v4[v6 + 24] = v3;
  }
  ++*result;
  return result;
}
