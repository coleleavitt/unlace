__int64 __fastcall sub_6E10F0(__int64 a1, int a2, int a3)
{
  __int64 v3; // rax
  unsigned int v4; // edx
  __int64 result; // rax
  int v7; // [rsp+0h] [rbp-48h]
  int v8; // [rsp+8h] [rbp-40h]
  int v9[2]; // [rsp+10h] [rbp-38h]
  int v10[2]; // [rsp+18h] [rbp-30h]
  void *v11; // [rsp+30h] [rbp-18h]
  int v12; // [rsp+38h] [rbp-10h]
  __int64 v13; // [rsp+40h] [rbp-8h]

  sub_150B360(a1 + 1040, v7, v8, 0, *(_QWORD *)a1, a2, a3, v11, v12, v13);
  if ( *(_QWORD *)v9 )
    ++*(_DWORD *)(*(_QWORD *)v9 + 8LL);
  v3 = *(_QWORD *)(a1 + 1144);
  if ( !v3 || (v4 = *(_DWORD *)(v3 - 4), v4 == *(_DWORD *)(v3 - 8)) )
  {
    sub_23A6F0((unsigned int **)(a1 + 1144));
    v3 = *(_QWORD *)(a1 + 1144);
    v4 = *(_DWORD *)(v3 - 4);
  }
  *(_QWORD *)(v3 + 8LL * v4) = *(_QWORD *)v9;
  *(_DWORD *)(v3 - 4) = v4 + 1;
  result = *(_QWORD *)v9;
  if ( *(_QWORD *)v9 )
  {
    if ( (*(_DWORD *)(*(_QWORD *)v9 + 8LL))-- == 1 )
    {
      sub_15D7BC0(*(_QWORD *)v10, *(_QWORD *)v9);
      return *(_QWORD *)v9;
    }
  }
  return result;
}

