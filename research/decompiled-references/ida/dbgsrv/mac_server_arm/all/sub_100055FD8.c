/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100055FD8
// Address: 0x0000000100055FD8

//----- (0000000100055FD8) ----------------------------------------------------
bool __fastcall sub_100055FD8(__int64 a1, char a2, char *a3, size_t a4)
{
  __int64 v7; // x0
  __int64 v8; // x3
  __int64 v9; // x4
  __int64 v10; // x5
  __int64 v11; // x6
  __int64 v12; // x7
  __int64 v13; // x20
  unsigned __int8 *v14; // x1

  v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 56LL))(a1);
  v13 = v7;
  if ( v7 )
  {
    if ( *(_QWORD *)(v7 + 16) )
      v14 = *(unsigned __int8 **)(v7 + 8);
    else
      v14 = (unsigned __int8 *)&byte_100075A30;
    qstrncpy(a3, v14, a4);
  }
  else
  {
    qsnprintf(a3, a4, "%08X", v8, v9, v10, v11, v12, a2);
  }
  return v13 != 0;
}
// 100056030: variable 'v8' is possibly undefined
// 100056030: variable 'v9' is possibly undefined
// 100056030: variable 'v10' is possibly undefined
// 100056030: variable 'v11' is possibly undefined
// 100056030: variable 'v12' is possibly undefined
// 100075A30: using guessed type char byte_100075A30;
