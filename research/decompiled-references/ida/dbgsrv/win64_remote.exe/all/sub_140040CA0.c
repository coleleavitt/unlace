/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140040CA0
// Address: 0x0000000140040CA0

//----- (0000000140040CA0) ----------------------------------------------------
__int64 __fastcall sub_140040CA0(__int64 a1, __int64 a2)
{
  int v4; // eax
  _QWORD *v5; // rcx
  void *v7; // rcx

  if ( a1 == a2 )
    return a1;
  v4 = *(_DWORD *)a1;
  if ( *(int *)a2 < -1 )
  {
    if ( v4 >= -1 )
    {
      v7 = *(void **)(a1 + 8);
      if ( v7 )
      {
        *(_QWORD *)(a1 + 16) = 0;
        j_free(v7);
        *(_QWORD *)(a1 + 8) = 0;
        *(_QWORD *)(a1 + 24) = 0;
      }
    }
    *(_QWORD *)(a1 + 8) = *(_QWORD *)(a2 + 8);
    *(_DWORD *)a1 = *(_DWORD *)a2;
    return a1;
  }
  v5 = (_QWORD *)(a1 + 8);
  if ( v4 < -1 )
  {
    if ( v5 )
      sub_140003130(v5, a2 + 8);
    *(_DWORD *)a1 = *(_DWORD *)a2;
    return a1;
  }
  else
  {
    sub_140040C10((__int64)v5, a2 + 8);
    *(_DWORD *)a1 = *(_DWORD *)a2;
    return a1;
  }
}
