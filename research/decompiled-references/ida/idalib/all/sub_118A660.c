__int64 __fastcall sub_118A660(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rsi
  __int64 v6; // rax
  unsigned __int64 v7; // rcx
  char *v8; // rbp
  __int64 result; // rax
  const char *v10[2]; // [rsp+0h] [rbp-38h] BYREF
  char *v11[5]; // [rsp+10h] [rbp-28h] BYREF

  v5 = *(_QWORD *)(a1 + 24);
  v10[0] = nullptr;
  v10[1] = nullptr;
  v11[0] = nullptr;
  v11[1] = nullptr;
  sub_1152ED0(a2, (_DWORD *)(v5 + 16), v10, v11);
  v6 = *(unsigned int *)(a3 + 8);
  if ( v6 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
  {
    sub_2237220(a3, a3 + 16, v6 + 1, 8);
    v6 = *(unsigned int *)(a3 + 8);
  }
  *(_QWORD *)(*(_QWORD *)a3 + 8 * v6) = "-target-abi";
  v7 = *(unsigned int *)(a3 + 12);
  v8 = v11[0];
  result = (unsigned int)(*(_DWORD *)(a3 + 8) + 1);
  *(_DWORD *)(a3 + 8) = result;
  if ( result + 1 > v7 )
  {
    sub_2237220(a3, a3 + 16, result + 1, 8);
    result = *(unsigned int *)(a3 + 8);
  }
  *(_QWORD *)(*(_QWORD *)a3 + 8 * result) = v8;
  ++*(_DWORD *)(a3 + 8);
  return result;
}
