/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140025490
// Address: 0x0000000140025490

//----- (0000000140025490) ----------------------------------------------------
char __fastcall sub_140025490(__int64 a1, unsigned __int64 a2, const char **a3, char **a4)
{
  char *v8; // r12
  __int64 v9; // rax
  unsigned __int64 v10; // r13
  char *v11; // rsi
  const char *v12; // rbp
  __int64 v14; // rax
  const char *v15; // r8
  void *Block; // [rsp+30h] [rbp-48h] BYREF
  __int64 v17; // [rsp+38h] [rbp-40h]
  __int64 v18; // [rsp+40h] [rbp-38h]

  v8 = *a4;
  v9 = *(int *)(a2 + 20);
  v10 = v9;
  if ( (_DWORD)v9 )
  {
    while ( 1 )
    {
      v9 = sub_14002D9C0(*(_QWORD *)(a1 + 8), (int)v9);
      if ( *(_DWORD *)(v9 + 48) != -1 )
        break;
      LODWORD(v9) = *(_DWORD *)(v9 + 16);
      if ( !(_DWORD)v9 )
        goto LABEL_4;
    }
    *a4 = nullptr;
    return sub_140023CA0(a1, a2, *(_DWORD *)(v9 + 48), (__int64)a3, v8, 1);
  }
  else
  {
LABEL_4:
    Block = nullptr;
    v17 = 0;
    v18 = 0;
    v11 = (char *)Str1;
    if ( a3[1] )
      v12 = *a3;
    else
      v12 = Str1;
    v14 = sub_14002D9C0(*(_QWORD *)(a1 + 8), v10);
    v15 = Str1;
    if ( *(_QWORD *)(v14 + 32) )
      v15 = *(const char **)(v14 + 24);
    sub_140002FB0((__int64)&Block, "%s.%s", v15, v12);
    if ( v17 )
      v11 = (char *)Block;
    sub_140063F70(0, v11);
    sub_1400640B0(0x602u);
    sub_140024990(a1);
    if ( Block )
    {
      v17 = 0;
      j_free(Block);
    }
    return 0;
  }
}
