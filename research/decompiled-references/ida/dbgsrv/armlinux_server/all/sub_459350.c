/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_459350
// Address: 0x0000000000459350

//----- (0000000000459350) ----------------------------------------------------
__int64 __fastcall sub_459350(__int64 a1, char *a2)
{
  __int64 *v4; // x21
  unsigned __int64 v5; // x0
  __int64 **v6; // x0
  int v7; // w6
  int v8; // w7
  __int64 *v9; // x19
  __int64 *v10; // x1
  __int64 *v11; // x0
  __int64 v12; // x2
  __int64 v13; // x0
  unsigned __int64 v14; // x5
  unsigned int v15; // w3
  char v16; // w4
  const char *v17; // x2
  unsigned int v18; // w22
  __int64 v19; // x0
  __int64 v20; // x0
  __int64 v21; // x1
  __int64 v22; // x2
  void *v23; // x0
  unsigned int *v25; // x1
  int v26; // w2
  __int64 v27; // x0
  char v28; // [xsp+0h] [xbp-50h]
  __int64 *v29; // [xsp+40h] [xbp-10h] BYREF

  v4 = (__int64 *)(a1 + 704);
  sub_452A08(&v29, a2);
  v5 = sub_49E0C0(v29, *(v29 - 3), 3339675911LL);
  v6 = (__int64 **)sub_459288((_QWORD *)(a1 + 704), v5 % *(_QWORD *)(a1 + 712), (const void **)&v29, v5);
  if ( !v6 )
  {
    v10 = v29;
    v11 = v29 - 3;
    goto LABEL_13;
  }
  v9 = *v6;
  v10 = v29;
  v11 = v29 - 3;
  if ( !v9 )
  {
LABEL_13:
    if ( v11 == std::string::_Rep::_S_empty_rep_storage )
      return (unsigned int)sub_4869C8(1509);
    v9 = nullptr;
LABEL_15:
    if ( &_pthread_key_create )
    {
      v25 = (unsigned int *)(v10 - 1);
      do
        v26 = __ldaxr(v25);
      while ( __stlxr(v26 - 1, v25) );
    }
    else
    {
      v26 = *((_DWORD *)v10 - 2);
      *((_DWORD *)v10 - 2) = v26 - 1;
    }
    if ( v26 <= 0 )
    {
      j__free_0(v11);
      if ( v9 )
        goto LABEL_4;
    }
    else if ( v9 )
    {
      goto LABEL_4;
    }
    return (unsigned int)sub_4869C8(1509);
  }
  if ( v11 != std::string::_Rep::_S_empty_rep_storage )
    goto LABEL_15;
LABEL_4:
  v12 = v9[2];
  v13 = 32 * v9[3] - 32;
  v14 = *(_QWORD *)(v12 + v13 + 8);
  v15 = *(unsigned __int8 *)(v12 + v13 + 24);
  v16 = *(_BYTE *)(v12 + v13 + 25);
  if ( v14 > 1 )
    goto LABEL_5;
  if ( !*(_BYTE *)(v12 + v13 + 24) && !*(_BYTE *)(v12 + v13 + 25) )
  {
    v27 = a1;
    v18 = 0;
    sub_453FC8(v27, a2);
    goto LABEL_7;
  }
  if ( v14 )
LABEL_5:
    v17 = *(const char **)(v12 + v13);
  else
    v17 = (const char *)&qword_4B2D48;
  v18 = sub_454558(a1, a2, v17, v15, v16, nullptr, v7, v8, v28);
LABEL_7:
  v19 = v9[3];
  if ( !v19 )
    goto LABEL_26;
  v20 = v19 - 1;
  v21 = v9[2];
  v9[3] = v20;
  v22 = v21 + 32 * v20;
  v23 = *(void **)v22;
  if ( *(_QWORD *)v22 )
  {
    *(_QWORD *)(v22 + 8) = 0;
    j__free(v23);
  }
  if ( !v9[3] )
LABEL_26:
    sub_453340(v4, v9);
  return v18;
}
// 459418: variable 'v7' is possibly undefined
// 459418: variable 'v8' is possibly undefined
// 459418: variable 'v28' is possibly undefined
// 4B2D48: using guessed type __int64 qword_4B2D48;
// 524590: using guessed type __int64 std::string::_Rep::_S_empty_rep_storage[4];
