/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qlseek
// Address: 0x0007B7CE

//----- (0007B7CE) --------------------------------------------------------
__int64 __fastcall qlseek(int a1, __int64 a2, int whence)
{
  __int64 v5; // r4
  int v6; // r0
  bool v7; // cf
  int v8; // r0

  v5 = -1;
  if ( a1 )
  {
    if ( *(int *)a1 < 2 )
    {
      if ( !qfseek(*(FILE **)(a1 + 8), whence, a2, SHIDWORD(a2), whence) )
        return qftell((FILE *)*(_DWORD *)(a1 + 8));
    }
    else if ( whence )
    {
      if ( whence == 1 )
      {
        v8 = *(_DWORD *)(a1 + 24);
        v7 = __CFADD__(v8, (_DWORD)a2);
        LODWORD(v5) = v8 + a2;
        *(_DWORD *)(a1 + 24) = v8 + a2;
        HIDWORD(v5) = *(_DWORD *)(a1 + 28);
      }
      else
      {
        if ( whence != 2 )
          return *(_QWORD *)(a1 + 24);
        v6 = *(_DWORD *)(a1 + 16);
        HIDWORD(v5) = *(_DWORD *)(a1 + 20);
        v7 = __CFADD__(v6, (_DWORD)a2);
        LODWORD(v5) = v6 + a2;
        *(_DWORD *)(a1 + 24) = v6 + a2;
      }
      HIDWORD(v5) += HIDWORD(a2) + v7;
      *(_DWORD *)(a1 + 28) = HIDWORD(v5);
    }
    else
    {
      *(_QWORD *)(a1 + 24) = a2;
      return a2;
    }
  }
  return v5;
}
