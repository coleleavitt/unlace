__int64 __fastcall sub_118A7E0(__int64 a1, __int64 a2, __int64 a3)
{
  char *v5; // rax
  __int64 v6; // rcx
  unsigned __int64 v7; // rsi
  __int64 v8; // rcx
  __int64 result; // rax
  __int64 v10; // rax
  unsigned __int64 v11; // rcx
  char *v12; // [rsp+8h] [rbp-20h]
  char *v13; // [rsp+8h] [rbp-20h]

  v5 = sub_115A2B0(a2, (_DWORD *)(*(_QWORD *)(a1 + 24) + 16LL));
  v6 = *(unsigned int *)(a3 + 8);
  if ( v6 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
  {
    v13 = v5;
    sub_2237220(a3, a3 + 16, v6 + 1, 8);
    v6 = *(unsigned int *)(a3 + 8);
    v5 = v13;
  }
  *(_QWORD *)(*(_QWORD *)a3 + 8 * v6) = "-target-abi";
  v7 = *(unsigned int *)(a3 + 12);
  v8 = (unsigned int)(*(_DWORD *)(a3 + 8) + 1);
  *(_DWORD *)(a3 + 8) = v8;
  if ( v8 + 1 > v7 )
  {
    v12 = v5;
    sub_2237220(a3, a3 + 16, v8 + 1, 8);
    v8 = *(unsigned int *)(a3 + 8);
    v5 = v12;
  }
  *(_QWORD *)(*(_QWORD *)a3 + 8 * v8) = v5;
  ++*(_DWORD *)(a3 + 8);
  result = sub_21B7850(a2, 2333, 2578, 1);
  if ( (_BYTE)result )
  {
    v10 = *(unsigned int *)(a3 + 8);
    if ( v10 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
    {
      sub_2237220(a3, a3 + 16, v10 + 1, 8);
      v10 = *(unsigned int *)(a3 + 8);
    }
    *(_QWORD *)(*(_QWORD *)a3 + 8 * v10) = "-mllvm";
    v11 = *(unsigned int *)(a3 + 12);
    result = (unsigned int)(*(_DWORD *)(a3 + 8) + 1);
    *(_DWORD *)(a3 + 8) = result;
    if ( result + 1 > v11 )
    {
      sub_2237220(a3, a3 + 16, result + 1, 8);
      result = *(unsigned int *)(a3 + 8);
    }
    *(_QWORD *)(*(_QWORD *)a3 + 8 * result) = "-riscv-add-build-attributes";
    ++*(_DWORD *)(a3 + 8);
  }
  return result;
}
