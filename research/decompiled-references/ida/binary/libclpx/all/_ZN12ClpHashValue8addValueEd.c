__int64 __fastcall ClpHashValue::addValue(ClpHashValue *this, double a2)
{
  int v3; // eax
  __int64 v4; // rcx
  __int64 v5; // rsi
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // edi
  __int64 result; // rax

  v3 = ClpHashValue::hash(this, a2);
  v4 = *((_QWORD *)this + 1);
  v5 = v4 + 16LL * v3;
  if ( *(_DWORD *)(v5 + 8) == -1 )
  {
    result = *((unsigned int *)this + 4);
    *(_DWORD *)(v5 + 8) = result;
    *((_DWORD *)this + 4) = result + 1;
    *(double *)v5 = a2;
  }
  else
  {
    while ( 1 )
    {
      v6 = *(int *)(v5 + 12);
      if ( (_DWORD)v6 == -1 )
        break;
      v5 = v4 + 16 * v6;
    }
    v7 = *((int *)this + 6);
    v8 = (int)v7 + 1;
    v9 = v4 + 16 * (v7 + 1);
    do
    {
      v10 = v9;
      v11 = v8;
      v9 += 16;
      ++v8;
    }
    while ( *(_DWORD *)(v10 + 8) != -1 );
    result = *((unsigned int *)this + 4);
    *((_DWORD *)this + 6) = v11;
    *(_DWORD *)(v5 + 12) = v11;
    *(_DWORD *)(v10 + 8) = result;
    *((_DWORD *)this + 4) = result + 1;
    *(double *)v10 = a2;
  }
  return result;
}

