/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000314DC
// Address: 0x00000001000314DC

//----- (00000001000314DC) ----------------------------------------------------
__int64 __fastcall sub_1000314DC(__int64 a1, __int64 a2, int a3, char **a4)
{
  __int64 v8; // x8
  const char *v9; // x23
  __int64 v10; // x24
  __int64 v11; // x24
  const char *v12; // t1
  char *v13; // x0
  __int64 v14; // x8
  bool v15; // cf
  __int64 v16; // x8
  __int64 result; // x0
  char *v18; // x21
  char *v19; // x1
  __int64 v20; // x22
  __int64 v21; // x23
  __int64 v22; // x0

  v8 = *(_QWORD *)(a1 + 88);
  *(_DWORD *)(a1 + 176) = *(_DWORD *)(a1 + 120);
  v9 = *a4;
  v10 = v8 + 48LL * a3;
  v12 = *(const char **)(v10 + 24);
  v11 = v10 + 24;
  v13 = strstr(*a4, v12);
  if ( v13 )
  {
    v14 = *(_QWORD *)(v11 + 8);
    v15 = v14 != 0;
    v16 = v14 - 1;
    if ( !v15 )
      v16 = 0;
    *a4 = &v13[v16];
    result = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 40LL))(a2, 0);
    *(_DWORD *)(a1 + 176) = *(_DWORD *)(a1 + 116);
  }
  else
  {
    *a4 = (char *)&v9[strlen(v9)];
    result = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 40LL))(a2, (unsigned int)(a3 + 1));
  }
  v18 = *a4;
  v19 = *(char **)(a1 + 168);
  if ( v19 < v18 )
  {
    v20 = *(unsigned int *)(a1 + 120);
    v21 = sub_1000311EC(*(_BYTE **)(a1 + 160), v19);
    v22 = sub_1000311EC(*(_BYTE **)(a1 + 168), v18);
    result = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)a2 + 16LL))(a2, v21, v22, v20);
    *(_QWORD *)(a1 + 168) = v18;
  }
  return result;
}
