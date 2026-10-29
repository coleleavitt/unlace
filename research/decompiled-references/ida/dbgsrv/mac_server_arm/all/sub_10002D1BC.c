/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10002D1BC
// Address: 0x000000010002D1BC

//----- (000000010002D1BC) ----------------------------------------------------
void __fastcall sub_10002D1BC(__int64 a1, int a2, __int64 a3)
{
  __int64 v6; // x8
  __int64 v7; // x25
  const char **v8; // x21
  const char *v9; // x0
  size_t v10; // x23
  const char *v11; // x22
  const char *v12; // x1
  size_t v13; // x19
  char *v14; // x1
  int v15; // [xsp+8h] [xbp-68h] BYREF
  void *v16; // [xsp+10h] [xbp-60h]
  size_t v17; // [xsp+18h] [xbp-58h]
  size_t v18; // [xsp+20h] [xbp-50h]

  v6 = *(_QWORD *)(a1 + 96);
  if ( v6 )
  {
    v7 = *(_QWORD *)(a1 + 88) + 32 * v6;
    v8 = (const char **)(v7 - 24);
    if ( *(_QWORD *)(v7 - 16) )
      v9 = *v8;
    else
      v9 = &byte_100075A30;
    v11 = *(const char **)a3;
    v10 = *(_QWORD *)(a3 + 8);
    if ( v10 )
      v12 = *(const char **)a3;
    else
      v12 = &byte_100075A30;
    if ( !strcmp(v9, v12) )
      return;
    if ( *(_DWORD *)(v7 - 32) == a2 )
    {
      if ( v8 != (const char **)a3 )
      {
        if ( v10 )
          v13 = v10 - 1;
        else
          v13 = 0;
        if ( v10 >= 2 )
        {
          v14 = *(char **)(v7 - 24);
          if ( *(_QWORD *)(v7 - 8) <= v13 )
          {
            v14 = (char *)qvector_reserve((_QWORD *)(v7 - 24), v14, v13 + 1, 1u);
            *v8 = v14;
          }
          *(_QWORD *)(v7 - 16) = v13 + 1;
          memmove(v14, v11, v13);
          *(_BYTE *)(*(_QWORD *)(v7 - 24) + v13) = 0;
        }
        else
        {
          *(_QWORD *)(v7 - 16) = 0;
        }
      }
      return;
    }
  }
  else
  {
    v10 = *(_QWORD *)(a3 + 8);
  }
  v15 = a2;
  v17 = 0;
  v18 = 0;
  v16 = nullptr;
  if ( v10 )
  {
    v16 = qalloc_or_throw(v10);
    v18 = v10;
    memcpy(v16, *(const void **)a3, v10);
    v17 = v10;
  }
  sub_10002D360((unsigned __int64 *)(a1 + 88), (unsigned __int64)&v15);
  if ( v16 )
  {
    v17 = 0;
    qfree(v16);
  }
}
// 100075A30: using guessed type char byte_100075A30;
