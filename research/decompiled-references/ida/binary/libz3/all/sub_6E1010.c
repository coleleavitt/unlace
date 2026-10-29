__int64 __fastcall sub_6E1010(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rbp
  __int64 v7; // rax
  unsigned int v8; // edx
  __int64 result; // rax
  __int64 v10; // rdi
  __int64 v12; // [rsp+8h] [rbp-30h]
  __int64 v13; // [rsp+10h] [rbp-28h] BYREF
  __int64 v14; // [rsp+18h] [rbp-20h]

  v3 = a1 + 1040;
  v4 = *(_QWORD *)(v3 - 1040);
  v5 = *(_QWORD *)(v3 - 1008);
  v13 = 0;
  v14 = v4;
  sub_14EE3D0(v3, a2, v5, &v13);
  v6 = v13;
  if ( v13 )
    ++*(_DWORD *)(v13 + 8);
  v7 = *(_QWORD *)(a1 + 1144);
  if ( !v7 || (v8 = *(_DWORD *)(v7 - 4), v8 == *(_DWORD *)(v7 - 8)) )
  {
    sub_23A6F0((unsigned int **)(a1 + 1144));
    v7 = *(_QWORD *)(a1 + 1144);
    v8 = *(_DWORD *)(v7 - 4);
  }
  *(_QWORD *)(v7 + 8LL * v8) = v6;
  *(_DWORD *)(v7 - 4) = v8 + 1;
  result = v13;
  if ( v13 )
  {
    v10 = v14;
    if ( (*(_DWORD *)(v13 + 8))-- == 1 )
    {
      v12 = result;
      sub_15D7BC0(v10, result);
      return v12;
    }
  }
  return result;
}

