/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000554D4
// Address: 0x00000001000554D4

//----- (00000001000554D4) ----------------------------------------------------
__int64 __fastcall sub_1000554D4(__int64 a1, int a2)
{
  __int64 v4; // x21
  const char *v5; // x20
  int v6; // w19
  __int64 v7; // x0
  void *v8; // x1
  __int64 v9; // x19
  size_t v10; // x2
  void *v12; // [xsp+18h] [xbp-858h]
  _WORD v13[2]; // [xsp+20h] [xbp-850h] BYREF
  _WORD v14[3]; // [xsp+24h] [xbp-84Ch] BYREF
  _BYTE v15[6]; // [xsp+2Ah] [xbp-846h] BYREF

  v13[0] = 0;
  bzero(v14, 0x824u);
  if ( a2 )
    v4 = 0;
  else
    v4 = *(_QWORD *)(a1 + 1136);
  v5 = (const char *)(a1 + 8);
  v6 = *(_DWORD *)(a1 + 1144);
  sub_100000B44();
  if ( !qfileexist(v5) || (v7 = open_linput(v5, 0), (v12 = (void *)v7) == nullptr) )
  {
LABEL_13:
    v9 = 0;
    goto LABEL_14;
  }
  v8 = (void *)v7;
  if ( v6 == 11 )
  {
    v9 = sub_10004BE14((__int64)v13, v7);
    v8 = v12;
  }
  else
  {
    v9 = 0;
  }
  close_linput(v8);
  if ( (_DWORD)v9 )
  {
    if ( !v4
      || (v10 = *(unsigned __int16 *)(v4 + 8), (_DWORD)v10 == v14[2]) && !memcmp(v15, (const void *)(v4 + 10), v10) )
    {
      v9 = 1;
      goto LABEL_14;
    }
    goto LABEL_13;
  }
LABEL_14:
  sub_100000B44();
  return v9;
}
