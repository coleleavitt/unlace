/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_74E08
// Address: 0x00074E08

//----- (00074E08) --------------------------------------------------------
size_t __fastcall sub_74E08(int a1, unsigned __int64 a2, void *a3, unsigned int a4)
{
  unsigned __int64 v7; // r2
  __int64 v8; // r0
  bool v9; // zf
  __int64 v10; // r8
  __int64 v11; // r0
  unsigned int v12; // r2

  if ( (a2 & 0x8000000000000000LL) != 0LL || (v7 = *(_QWORD *)(a1 + 8), a2 >= v7) )
  {
    sub_70B98(3);
    if ( *(_QWORD *)(a1 + 8) == a2 )
      return 0;
    else
      return -1;
  }
  else
  {
    v8 = *(_QWORD *)(a1 + 24);
    v9 = HIDWORD(v8) == -1;
    if ( HIDWORD(v8) == -1 )
      v9 = (_DWORD)v8 == -1;
    if ( !v9 )
    {
      if ( *(_QWORD *)(a1 + 32) < v8 )
      {
        sub_70B98(4);
        return -1;
      }
      v10 = a2 + v8;
      LODWORD(v11) = sub_74D98(*(_DWORD *)(a1 + 20), a2 + v8, 0);
      if ( v10 != v11 )
        return -1;
      v7 = *(_QWORD *)(a1 + 8);
    }
    v12 = v7 - a2;
    if ( v12 >= a4 )
      v12 = a4;
    return sub_74B94(*(_DWORD *)(a1 + 20), a3, v12);
  }
}
// 74E64: variable 'v11' is possibly undefined
