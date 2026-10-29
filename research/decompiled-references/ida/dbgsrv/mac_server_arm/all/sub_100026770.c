/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100026770
// Address: 0x0000000100026770

//----- (0000000100026770) ----------------------------------------------------
__int64 __fastcall sub_100026770(__int64 a1)
{
  __int64 v1; // x8
  __int64 v2; // x19
  __int64 v3; // x20
  const char *v4; // x8
  const char *v6; // x1
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x4
  __int64 v10; // x5
  __int64 v11; // x6
  __int64 v12; // x7
  char *v14; // x1

  if ( *(_DWORD *)(a1 + 216) != 1 )
    return set_qerrno();
  v1 = *(int *)(*(_QWORD *)(a1 + 184) + 24LL);
  if ( !(_DWORD)v1 )
    return set_qerrno();
  v2 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 104) + 64LL) + 8 * v1);
  v3 = *(_QWORD *)(v2 + 40);
  v4 = v3 ? *(const char **)(v2 + 32) : &byte_100075A30;
  v6 = *(_QWORD *)(a1 + 48) ? *(const char **)(a1 + 40) : &byte_100075A30;
  if ( strcmp(v4, v6) )
    return set_qerrno();
  if ( v3 )
    v14 = *(char **)(v2 + 32);
  else
    v14 = &byte_100075A30;
  return sub_1000262A4(a1, (char)v14, v7, v8, v9, v10, v11, v12);
}
// 10002681C: variable 'v7' is possibly undefined
// 10002681C: variable 'v8' is possibly undefined
// 10002681C: variable 'v9' is possibly undefined
// 10002681C: variable 'v10' is possibly undefined
// 10002681C: variable 'v11' is possibly undefined
// 10002681C: variable 'v12' is possibly undefined
// 100075A30: using guessed type char byte_100075A30;
