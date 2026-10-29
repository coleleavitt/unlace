/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14005E930
// Address: 0x000000014005E930

//----- (000000014005E930) ----------------------------------------------------
__int8 *__fastcall sub_14005E930(__int8 *a1, __int64 a2, __int64 a3, char *a4)
{
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // rbx
  __int64 v9; // rdi
  char *v10; // r8
  __int8 *v11; // rbp
  bool v12; // al
  char *v13; // rsi
  __int64 v14; // rdi
  void *v15; // rcx
  void *Block; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int64 v18; // [rsp+38h] [rbp-40h]
  __int64 v19; // [rsp+40h] [rbp-38h]

  Block = nullptr;
  v18 = 0;
  v19 = 0;
  sub_14005E600((__int64)&Block, a4, 0);
  v7 = 0;
  v8 = v18;
  if ( v18 )
  {
    v9 = 0;
    while ( 1 )
    {
      v10 = (char *)Str1;
      if ( *(_QWORD *)((char *)Block + v9 + 8) )
        v10 = *(char **)((char *)Block + v9);
      v11 = sub_14005DE20(a1, a2, v10, a3, 0);
      v12 = sub_14005EF30(v11);
      v8 = v18;
      if ( v12 )
        break;
      ++v7;
      v9 += 24;
      if ( v7 >= v18 )
        goto LABEL_7;
    }
  }
  else
  {
LABEL_7:
    v11 = nullptr;
  }
  v13 = (char *)Block;
  if ( Block )
  {
    if ( v8 )
    {
      v14 = 0;
      do
      {
        v15 = *(void **)&v13[v14];
        if ( v15 )
        {
          *(_QWORD *)&v13[v14 + 8] = 0;
          j_free(v15);
          *(_QWORD *)&v13[v14] = 0;
          *(_QWORD *)&v13[v14 + 16] = 0;
          v13 = (char *)Block;
        }
        v14 += 24;
        --v8;
      }
      while ( v8 );
    }
    v18 = 0;
    j_free(v13);
  }
  return v11;
}
