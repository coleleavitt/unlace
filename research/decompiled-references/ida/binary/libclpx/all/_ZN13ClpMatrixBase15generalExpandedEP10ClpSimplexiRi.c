__int64 __fastcall ClpMatrixBase::generalExpanded(ClpMatrixBase *this, ClpSimplex *a2, int a3, int *a4)
{
  __int64 result; // rax
  int v5; // eax
  int v6; // r8d
  __int64 v7; // r9
  __int64 v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rdi
  __int64 v11; // rdx

  if ( a3 == 2 )
  {
    *a4 = *((_DWORD *)a2 + 26);
    return 0;
  }
  else
  {
    result = 3;
    if ( a3 != 4 )
    {
      result = 0;
      if ( !a3 )
      {
        v5 = *((_DWORD *)a2 + 27);
        v6 = *a4;
        v7 = **((_QWORD **)a2 + 132);
        if ( v5 > 0 )
        {
          v8 = (unsigned int)(v5 - 1);
          v9 = 0;
          v10 = v8 + 1;
          do
          {
            if ( (*(_BYTE *)(*((_QWORD *)a2 + 33) + v9) & 7) == 1 )
            {
              v11 = v6++;
              *(_DWORD *)(v7 + 4 * v11) = v9;
            }
            ++v9;
          }
          while ( v10 != v9 );
        }
        *a4 = v6;
        return 0;
      }
    }
  }
  return result;
}

