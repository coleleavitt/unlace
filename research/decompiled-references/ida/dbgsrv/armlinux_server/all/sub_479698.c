/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_479698
// Address: 0x0000000000479698

//----- (0000000000479698) ----------------------------------------------------
__int64 __fastcall sub_479698(__int64 a1, char a2, __int64 a3)
{
  __int64 v6; // x1
  signed int v7; // w19
  unsigned __int64 v8; // x0
  bool v9; // cc
  __time_t v10; // x0
  __int64 v11; // x3
  char *v12; // x0
  char *v13; // x3
  __int64 result; // x0
  unsigned __int64 v15; // [xsp+40h] [xbp-10h]
  __int64 v16; // [xsp+48h] [xbp-8h]

  v6 = *(_QWORD *)(a1 + 8);
  v7 = *(_DWORD *)(a1 + 24);
  v8 = 0;
  if ( v6 )
    v9 = v7 < 0;
  else
    v9 = 1;
  if ( !v9 )
  {
    v10 = sub_4926B8();
    v8 = sub_476FC0(v10, v7);
  }
  v15 = v8;
  LOBYTE(v16) = a2;
  v11 = *(_QWORD *)(a1 + 40);
  v12 = *(char **)(a1 + 32);
  if ( (unsigned __int64)(v11 + 1) > *(_QWORD *)(a1 + 48) )
  {
    v12 = (char *)sub_491288(a1 + 32, *(void **)(a1 + 32), v11 + 1, 0x20u);
    *(_QWORD *)(a1 + 32) = v12;
    v11 = *(_QWORD *)(a1 + 40);
  }
  v13 = &v12[32 * v11];
  *(_QWORD *)v13 = a3;
  *((_QWORD *)v13 + 1) = 0;
  *((_QWORD *)v13 + 2) = v15;
  *((_QWORD *)v13 + 3) = v16;
  result = *(_QWORD *)(a1 + 40) + 1LL;
  *(_QWORD *)(a1 + 40) = result;
  return result;
}
// 479720: variable 'v16' is possibly undefined
