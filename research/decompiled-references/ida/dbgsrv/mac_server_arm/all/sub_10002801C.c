/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10002801C
// Address: 0x000000010002801C

//----- (000000010002801C) ----------------------------------------------------
__int64 __fastcall sub_10002801C(__int64 a1)
{
  __int64 v2; // x0
  __int64 v3; // x0
  __int64 v4; // x8
  int v5; // w12

  v2 = *(_QWORD *)(a1 + 104);
  if ( *(_QWORD *)(a1 + 48) )
  {
    v3 = sub_10002DF68(v2, *(const char **)(a1 + 40));
    if ( v3 )
      goto LABEL_3;
LABEL_8:
    set_error_string(0);
    return set_qerrno();
  }
  v3 = sub_10002DF68(v2, &byte_100075A30);
  if ( !v3 )
    goto LABEL_8;
LABEL_3:
  v4 = *(_QWORD *)(a1 + 184);
  v5 = *(_DWORD *)(v3 + 28);
  while ( 1 )
  {
    v5 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 104) + 64LL) + 8LL * v5) + 24LL);
    if ( v5 == *(_DWORD *)(v4 + 28) )
      break;
    if ( !v5 )
    {
      *(_DWORD *)(v4 + 24) = *(_DWORD *)(v3 + 28);
      return 0;
    }
  }
  return set_qerrno();
}
// 100075A30: using guessed type char byte_100075A30;
