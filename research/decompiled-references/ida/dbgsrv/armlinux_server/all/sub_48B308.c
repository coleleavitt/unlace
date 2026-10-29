/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_48B308
// Address: 0x000000000048B308

//----- (000000000048B308) ----------------------------------------------------
char *__fastcall sub_48B308(char *a1, __int64 a2, __int64 a3, char *a4)
{
  char *v7; // x1
  __int64 v8; // x19
  unsigned __int64 v9; // x20
  unsigned __int8 *v10; // x2
  char *v11; // x22
  char v12; // w0
  unsigned __int64 v13; // x21
  __int64 v14; // x19
  __int64 v15; // x20
  void *v16; // x0
  char *v17; // x1
  void *ptr; // [xsp+50h] [xbp-20h] BYREF
  unsigned __int64 v20; // [xsp+58h] [xbp-18h]
  __int64 v21; // [xsp+60h] [xbp-10h]

  ptr = nullptr;
  v20 = 0;
  v21 = 0;
  sub_48B0B8((__int64)&ptr, a4, 0);
  v7 = (char *)ptr;
  if ( !v20 )
  {
    v11 = nullptr;
    if ( !ptr )
      return v11;
    goto LABEL_13;
  }
  v8 = 0;
  v9 = 0;
  while ( 1 )
  {
    v10 = (unsigned __int8 *)&qword_4B2D48;
    if ( *(_QWORD *)&v7[v8 + 8] )
      v10 = *(unsigned __int8 **)&v7[v8];
    v11 = sub_48F278(a1, a2, v10, a3, 0);
    v12 = sub_490268(v11);
    v7 = (char *)ptr;
    if ( v12 )
      break;
    ++v9;
    v8 += 24;
    if ( v9 >= v20 )
    {
      v11 = nullptr;
      break;
    }
  }
  if ( ptr )
  {
    v13 = v20;
    if ( v20 )
    {
      v14 = 0;
      v15 = 0;
      do
      {
        v16 = *(void **)&v7[v14];
        v17 = &v7[v14];
        if ( v16 )
        {
          *((_QWORD *)v17 + 1) = 0;
          j__free(v16);
        }
        ++v15;
        v14 += 24;
        v7 = (char *)ptr;
      }
      while ( v13 != v15 );
    }
LABEL_13:
    v20 = 0;
    j__free(v7);
  }
  return v11;
}
// 4B2D48: using guessed type __int64 qword_4B2D48;
