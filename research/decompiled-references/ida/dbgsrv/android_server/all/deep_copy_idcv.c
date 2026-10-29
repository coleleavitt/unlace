/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: deep_copy_idcv
// Address: 0x00000000000710F8

//----- (00000000000710F8) ----------------------------------------------------
__int64 __fastcall deep_copy_idcv(__int64 a1, __int64 a2)
{
  _QWORD *v4; // x0
  __int64 v5; // x22
  _QWORD *v6; // x21
  const char **v7; // x24
  _QWORD *v8; // x20
  char *v9; // x8
  __int64 v10; // x8
  const char *v11; // x9
  const char **v12; // t1

  if ( *(_BYTE *)a2 != 5 )
    return copy_idcv((unsigned __int8 *)a1, (unsigned __int8 *)a2);
  v4 = operator new(0x20u);
  v5 = *(_QWORD *)(a2 + 8);
  v4[1] = 0;
  v6 = v4 + 1;
  v4[2] = 0;
  *v4 = v4 + 1;
  v7 = *(const char ***)v5;
  v8 = v4;
  while ( v7 != (const char **)(v5 + 8) )
  {
    sub_7BAA8((_QWORD **)v8, v6, v7 + 4, (__int64)(v7 + 4));
    v9 = (char *)v7[1];
    if ( v9 )
    {
      do
      {
        v7 = (const char **)v9;
        v9 = *(char **)v9;
      }
      while ( v9 );
    }
    else
    {
      v10 = (__int64)(v7 + 2);
      if ( *(const char ***)v7[2] == v7 )
      {
        v7 = (const char **)v7[2];
      }
      else
      {
        do
        {
          v11 = *(const char **)v10;
          v12 = *(const char ***)(*(_QWORD *)v10 + 16LL);
          v10 = *(_QWORD *)v10 + 16LL;
          v7 = v12;
        }
        while ( *v12 != v11 );
      }
    }
  }
  *((_DWORD *)v8 + 6) = 1;
  *((_DWORD *)v8 + 7) = *(_DWORD *)(v5 + 28);
  free_idcv((__int64 *)a1);
  *(_BYTE *)a1 = 5;
  *(_QWORD *)(a1 + 8) = v8;
  return 0;
}
