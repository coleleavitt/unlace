__int64 __fastcall ClpPackedMatrix::checkFlags(ClpPackedMatrix *this)
{
  int v1; // ebp
  __int64 result; // rax
  _DWORD *v3; // r8
  _DWORD *v4; // r9
  int v5; // edi
  __int64 v6; // r10
  unsigned __int64 v7; // rcx
  int v8; // esi
  __int64 v9; // rdx
  bool v10; // zf
  __int64 v11; // rax
  __int64 v12; // rdx
  int v13; // edx
  int v14; // ecx

  v1 = *((_DWORD *)this + 25);
  result = *((_QWORD *)this + 11);
  v3 = *(_DWORD **)(result + 48);
  v4 = *(_DWORD **)(result + 56);
  if ( (v1 & 1) != 0 )
  {
    if ( (v1 & 2) != 0 )
      return result;
    v5 = *((_DWORD *)this + 24);
    if ( v5 <= 0 )
      return result;
    goto LABEL_11;
  }
  v5 = *((_DWORD *)this + 24);
  if ( v5 > 0 )
  {
    v6 = *(_QWORD *)(result + 32);
    v7 = 0;
    do
    {
      result = (unsigned int)v3[v7 / 4];
      v8 = v4[v7 / 4];
      if ( (int)result < (int)result + v8 )
      {
        v9 = (int)result;
        v10 = *(double *)(v6 + 8LL * (int)result) == 0.0;
        v11 = 8LL * (int)result;
        if ( v10 )
          goto LABEL_19;
        result = v6 + v11 + 8;
        v12 = v6 + 8 + 8 * ((unsigned int)(v8 - 1) + v9);
        while ( v12 != result )
        {
          result += 8;
          if ( *(double *)(result - 8) == 0.0 )
            goto LABEL_19;
        }
      }
      v7 += 4LL;
    }
    while ( 4LL * (unsigned int)(v5 - 1) + 4 != v7 );
    if ( (v1 & 2) == 0 )
    {
LABEL_11:
      if ( v3[1] != *v3 + *v4 )
LABEL_19:
        abort();
      result = 1;
      while ( v5 > (int)result )
      {
        v13 = v3[result] + v4[result];
        v14 = v3[++result];
        if ( v14 != v13 )
          goto LABEL_19;
      }
    }
  }
  return result;
}

