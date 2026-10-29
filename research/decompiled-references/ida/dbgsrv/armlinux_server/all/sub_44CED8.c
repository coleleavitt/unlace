/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_44CED8
// Address: 0x000000000044CED8

//----- (000000000044CED8) ----------------------------------------------------
__int64 __fastcall sub_44CED8(__int64 a1, __int64 a2, const char **a3, __int64 *a4)
{
  int v8; // w1
  __int64 v9; // x0
  int v10; // w2
  _QWORD *v12; // x19
  const char *v13; // x0
  const char *v14; // x1
  const char **v15; // [xsp+40h] [xbp-10h] BYREF

  v8 = *(_DWORD *)(a2 + 52);
  if ( v8 )
  {
    while ( 1 )
    {
      v9 = sub_43E4F8(*(_QWORD *)(a1 + 8), v8);
      v10 = *(_DWORD *)(v9 + 84);
      if ( v10 != -1 )
        return (unsigned __int8)sub_44CB48(a1, a2, v10, (__int64)a3, a4, 0);
      v8 = *(_DWORD *)(v9 + 48);
      if ( !v8 )
        goto LABEL_6;
    }
  }
  else
  {
LABEL_6:
    v12 = sub_443EB8(*(_QWORD **)(a2 + 16), (_QWORD *)(a2 + 8), (__int64)a3);
    if ( (_QWORD *)(a2 + 8) == v12
      || (!a3[1] ? (v13 = (const char *)&qword_4B2D48) : (v13 = *a3),
          !v12[5] ? (v14 = (const char *)&qword_4B2D48) : (v14 = (const char *)v12[4]),
          strcmp(v13, v14) < 0) )
    {
      v15 = a3;
      v12 = sub_4485B8((_QWORD *)a2, v12, (__int64 *)&v15);
    }
    sub_4488B8(v12 + 7, a4);
    return 1;
  }
}
// 4B2D48: using guessed type __int64 qword_4B2D48;
