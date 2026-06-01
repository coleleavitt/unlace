/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46AE30
// Address: 0x000000000046AE30

//----- (000000000046AE30) ----------------------------------------------------
__int64 __fastcall sub_46AE30(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // x19
  unsigned __int64 v4; // x20
  int v6; // w3
  const void *v8; // x22
  void *v9; // x4

  if ( *(_BYTE *)(a2 + 29) )
  {
    v3 = (_QWORD *)a1;
    if ( a1 && a2 != a1 )
    {
      v4 = *(_QWORD *)(a2 + 8);
      if ( v4 > 1 )
      {
        v8 = *(const void **)a2;
        v9 = *(void **)a1;
        if ( v4 > *(_QWORD *)(a1 + 16) )
        {
          v9 = sub_491288(a1, *(void **)a1, v4, 1u);
          *v3 = v9;
        }
        v3[1] = v4;
        memmove(v9, v8, v4 - 1);
        *(_BYTE *)(*v3 + v4 - 1) = 0;
      }
      else
      {
        *(_QWORD *)(a1 + 8) = 0;
      }
    }
    return 0;
  }
  else
  {
    v6 = *(_DWORD *)(a2 + 24);
    if ( (unsigned int)(v6 - 10) > 1 && v6 != 18 )
    {
      a1 = (unsigned __int8)under_debugger;
      if ( !under_debugger )
        sub_492270(30222);
      __break(0x3E8u);
    }
    return sub_46A338(a1, a2, a3);
  }
}
// 52451C: using guessed type char under_debugger;
