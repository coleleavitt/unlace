/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14005E600
// Address: 0x000000014005E600

//----- (000000014005E600) ----------------------------------------------------
__int64 __fastcall sub_14005E600(__int64 a1, char *a2, char a3)
{
  __int64 v6; // r13
  int v7; // ebx
  char *v8; // rax
  void **v9; // rsi
  unsigned __int64 v10; // rbp
  char *v11; // r12
  __int64 v12; // rbx
  char *v13; // r8
  char *v14; // rcx
  int v15; // eax
  char *v16; // rax
  char *v17; // rax
  int v19; // [rsp+34h] [rbp-174h]
  char *v20; // [rsp+38h] [rbp-170h] BYREF
  __int64 v21; // [rsp+40h] [rbp-168h]
  __int64 v22; // [rsp+48h] [rbp-160h]
  struct _exception v23; // [rsp+50h] [rbp-158h] BYREF

  v19 = *(_DWORD *)(a1 + 8);
  v6 = 0;
  if ( (a3 & 1) != 0 )
    v6 = UserMathErrorFunction(&v23);
  v7 = a3 & 2;
  if ( (a3 & 2) != 0 )
  {
    v8 = sub_14005EA40(a2);
    sub_14005DFE0(a1, a3, v8, v6, 0);
  }
  v9 = sub_14005E3A0();
  v10 = 0;
  v11 = (char *)Str1;
  if ( v9[1] )
  {
    v12 = 0;
    do
    {
      v13 = (char *)Str1;
      if ( *(_QWORD *)((char *)*v9 + v12 + 8) )
        v13 = *(char **)((char *)*v9 + v12);
      sub_14005DFE0(a1, a3, v13, a2, v6, 0);
      ++v10;
      v12 += 24;
    }
    while ( v10 < (unsigned __int64)v9[1] );
    v7 = a3 & 2;
  }
  if ( a2 )
  {
    if ( !strcmp(a2, "sig") )
    {
      v14 = "IDASGN";
    }
    else if ( !strcmp(a2, "ids") )
    {
      v14 = "IDAIDS";
    }
    else if ( !strcmp(a2, "idc") )
    {
      v14 = "IDAIDC";
    }
    else
    {
      v15 = strcmp(a2, "til");
      v14 = nullptr;
      if ( !v15 )
        v14 = "IDATIL";
    }
    v16 = nullptr;
    v20 = nullptr;
    v21 = 0;
    v22 = 0;
    if ( v14 )
    {
      if ( sub_14005D470(v14, (__int64)&v20) )
      {
        if ( v21 )
          v11 = v20;
        sub_14005DFE0(a1, a3, v11, v6, 0);
      }
      v16 = v20;
    }
    if ( v16 )
    {
      v21 = 0;
      j_free(v16);
    }
  }
  if ( !v7 )
  {
    v17 = sub_14005EA40(a2);
    sub_14005DFE0(a1, a3, v17, v6, 0);
  }
  return (unsigned int)(*(_DWORD *)(a1 + 8) - v19);
}
