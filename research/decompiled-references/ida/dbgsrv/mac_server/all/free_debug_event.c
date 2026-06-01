/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: free_debug_event
// Address: 0x0000000100073370

//----- (0000000100073370) ----------------------------------------------------
__int64 __fastcall free_debug_event(__int64 a1)
{
  __int64 result; // rax
  int v3; // ecx
  int v4; // ecx
  void *v5; // rdi
  __int64 v6; // rcx
  void *v7; // rdi

  result = *(_DWORD *)(a1 + 20) & 0xFFFFFFF;
  if ( (unsigned int)result <= 0xB )
  {
    v3 = 1544;
    if ( _bittest(&v3, result) )
    {
      v5 = *(void **)(a1 + 24);
      if ( v5 )
      {
LABEL_7:
        *(_QWORD *)(a1 + 32) = 0;
        qfree(v5);
        result = a1 + 24;
        v6 = 40;
LABEL_8:
        *(_QWORD *)result = 0;
        *(_QWORD *)(a1 + v6) = 0;
      }
    }
    else
    {
      v4 = 2306;
      if ( _bittest(&v4, result) )
      {
        v5 = *(void **)(a1 + 24);
        if ( v5 )
          goto LABEL_7;
      }
      else if ( (_DWORD)result == 7 )
      {
        v7 = *(void **)(a1 + 40);
        if ( v7 )
        {
          *(_QWORD *)(a1 + 48) = 0;
          qfree(v7);
          result = a1 + 40;
          v6 = 56;
          goto LABEL_8;
        }
      }
    }
  }
  *(_DWORD *)(a1 + 20) = 0;
  return result;
}
