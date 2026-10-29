/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_431C78
// Address: 0x0000000000431C78

//----- (0000000000431C78) ----------------------------------------------------
__int64 __fastcall sub_431C78(__int64 a1, __int64 a2)
{
  __int64 v3; // x4
  size_t v4; // x23
  unsigned __int64 v6; // x0
  char *v7; // x3
  char *v8; // x1
  int v9; // w3
  char v10; // w5
  char v11; // w2
  bool v12; // cc
  void *v13; // x0
  char s; // [xsp+48h] [xbp-408h] BYREF
  _BYTE v15[1023]; // [xsp+49h] [xbp-407h] BYREF

  s = 0;
  v3 = *(_QWORD *)(a1 + 40);
  if ( (unsigned int)(v3 - 2) <= 0x1E )
  {
    v6 = *(_QWORD *)(a1 + 8);
    v7 = v15;
    if ( !v6 )
      goto LABEL_11;
    do
    {
      v8 = v7;
      v9 = v6 % (int)v3;
      v6 /= (unsigned __int64)(int)v3;
      v10 = v9 + 55;
      v11 = v9 + 48;
      v12 = v9 < 10;
      v7 = v8 + 1;
      if ( !v12 )
        v11 = v10;
      *(v8 - 1) = v11;
    }
    while ( v6 );
    if ( v8 == &s )
    {
LABEL_11:
      v8 = v15;
      s = 48;
    }
    *v8 = 0;
    sub_492FC8(&s, v8 - &s);
  }
  v4 = strlen(&s);
  *(_BYTE *)a2 = 7;
  *(_QWORD *)(a2 + 8) = 0;
  *(_QWORD *)(a2 + 16) = 0;
  *(_QWORD *)(a2 + 24) = 0;
  if ( v4 )
  {
    v13 = sub_491288(a2 + 8, nullptr, v4 + 1, 1u);
    *(_QWORD *)(a2 + 8) = v13;
    *(_QWORD *)(a2 + 16) = v4 + 1;
    memmove(v13, &s, v4);
    *(_BYTE *)(*(_QWORD *)(a2 + 8) + v4) = 0;
  }
  return 0;
}
