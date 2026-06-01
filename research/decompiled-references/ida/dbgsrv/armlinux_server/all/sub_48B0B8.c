/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_48B0B8
// Address: 0x000000000048B0B8

//----- (000000000048B0B8) ----------------------------------------------------
__int64 __fastcall sub_48B0B8(__int64 a1, char *a2, char a3)
{
  __int64 v3; // x25
  __int64 v7; // x28
  __int64 *v8; // x27
  __int64 v9; // x19
  unsigned __int64 v10; // x20
  unsigned __int8 *v11; // x2
  const char *v12; // x0
  unsigned __int8 *v13; // x2
  unsigned __int8 *v14; // x0
  unsigned __int8 *v16; // x0
  void *ptr; // [xsp+70h] [xbp-1020h] BYREF
  __int64 v18; // [xsp+78h] [xbp-1018h]
  __int64 v19; // [xsp+80h] [xbp-1010h]

  v3 = 0;
  v7 = *(_QWORD *)(a1 + 8);
  if ( (a3 & 1) != 0 )
    v3 = sub_47DB58();
  if ( (a3 & 2) != 0 )
  {
    v16 = (unsigned __int8 *)idadir(a2);
    sub_48A0E0((char **)a1, a3, v16, v3, 0);
  }
  v8 = sub_48AEC8();
  if ( v8[1] )
  {
    v9 = 0;
    v10 = 0;
    do
    {
      v11 = (unsigned __int8 *)&qword_4B2D48;
      if ( *(_QWORD *)(*v8 + v9 + 8) )
        v11 = *(unsigned __int8 **)(*v8 + v9);
      sub_48A0E0((char **)a1, a3, v11, a2, v3, 0);
      ++v10;
      v9 += 24;
    }
    while ( v10 < v8[1] );
  }
  if ( a2 )
  {
    if ( !strcmp(a2, "sig") )
    {
      v12 = "IDASGN";
    }
    else if ( !strcmp(a2, "ids") )
    {
      v12 = "IDAIDS";
    }
    else if ( !strcmp(a2, "idc") )
    {
      v12 = "IDAIDC";
    }
    else
    {
      if ( strcmp(a2, "til") )
        goto LABEL_19;
      v12 = "IDATIL";
    }
    ptr = nullptr;
    v18 = 0;
    v19 = 0;
    if ( (unsigned __int8)sub_4950A8(v12, (__int64)&ptr) )
    {
      v13 = (unsigned __int8 *)ptr;
      if ( !v18 )
        v13 = (unsigned __int8 *)&qword_4B2D48;
      sub_48A0E0((char **)a1, a3, v13, v3, 0);
    }
    if ( ptr )
    {
      v18 = 0;
      j__free(ptr);
    }
  }
LABEL_19:
  if ( (a3 & 2) == 0 )
  {
    v14 = (unsigned __int8 *)idadir(a2);
    sub_48A0E0((char **)a1, a3, v14, v3, 0);
  }
  return (unsigned int)*(_QWORD *)(a1 + 8) - (unsigned int)v7;
}
// 4B2D48: using guessed type __int64 qword_4B2D48;
