/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4319A0
// Address: 0x00000000004319A0

//----- (00000000004319A0) ----------------------------------------------------
__int64 __fastcall sub_4319A0(__int64 a1, __int64 a2)
{
  const char *v3; // x20
  char *v4; // x0
  char *v5; // x21
  size_t v6; // x23
  const char *v7; // x0
  bool v8; // w0
  void *v9; // x1
  void *v11; // x0
  void *ptr; // [xsp+40h] [xbp-20h] BYREF
  size_t v13; // [xsp+48h] [xbp-18h]
  __int64 v14; // [xsp+50h] [xbp-10h]

  if ( *(_QWORD *)(a1 + 16) )
    v3 = *(const char **)(a1 + 8);
  else
    v3 = (const char *)&qword_4B2D48;
  v4 = strchr(v3, 61);
  v5 = v4;
  if ( v4 )
  {
    v6 = v4 - v3;
    ptr = nullptr;
    v13 = 0;
    v14 = 0;
    if ( v4 == v3 )
      goto LABEL_5;
    v11 = nullptr;
    if ( v6 != -1 )
    {
      v11 = sub_491288((__int64)&ptr, nullptr, v6 + 1, 1u);
      ptr = v11;
    }
    v13 = v6 + 1;
    memmove(v11, v3, v6);
    *((_BYTE *)ptr + v6) = 0;
    if ( !v13 )
LABEL_5:
      v7 = (const char *)&qword_4B2D48;
    else
      v7 = (const char *)ptr;
    v8 = sub_495020(v7, v5 + 1);
    v9 = ptr;
    *(_QWORD *)(a2 + 8) = v8;
    if ( v9 )
    {
      v13 = 0;
      j__free(v9);
    }
  }
  return 0;
}
// 4B2D48: using guessed type __int64 qword_4B2D48;
