__int64 __fastcall sub_6E1710(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // r12
  __int64 v5; // rax
  __int64 v6; // rbp
  __int64 v7; // rdx
  unsigned int v8; // ecx
  __int64 result; // rax
  __int64 v10; // rdi
  __int64 v12; // rax
  __int64 v13; // [rsp+8h] [rbp-30h]
  __int64 v14; // [rsp+10h] [rbp-28h] BYREF
  __int64 v15; // [rsp+18h] [rbp-20h]

  v3 = a1 + 1040;
  v4 = *(_QWORD *)(v3 - 1008);
  v5 = *(_QWORD *)(v3 - 1040);
  v14 = 0;
  v15 = v5;
  if ( (unsigned int)sub_1506780(v3, a2, v4, &v14) == 5 )
  {
    v12 = sub_15E1B70(*(_QWORD *)(a1 + 1048));
    v6 = v12;
    if ( v12 )
    {
      ++*(_DWORD *)(v12 + 8);
      sub_6DE2C0(v14, v15);
      v14 = v6;
      goto LABEL_3;
    }
    sub_6DE2C0(v14, v15);
    v14 = 0;
LABEL_14:
    v6 = 0;
    goto LABEL_4;
  }
  v6 = v14;
  if ( !v14 )
    goto LABEL_14;
LABEL_3:
  ++*(_DWORD *)(v6 + 8);
LABEL_4:
  v7 = *(_QWORD *)(a1 + 1144);
  if ( !v7 || (v8 = *(_DWORD *)(v7 - 4), v8 == *(_DWORD *)(v7 - 8)) )
  {
    sub_23A6F0((unsigned int **)(a1 + 1144));
    v7 = *(_QWORD *)(a1 + 1144);
    v8 = *(_DWORD *)(v7 - 4);
  }
  *(_QWORD *)(v7 + 8LL * v8) = v6;
  result = v14;
  *(_DWORD *)(v7 - 4) = v8 + 1;
  if ( result )
  {
    v10 = v15;
    if ( (*(_DWORD *)(result + 8))-- == 1 )
    {
      v13 = result;
      sub_15D7BC0(v10, result);
      return v13;
    }
  }
  return result;
}

