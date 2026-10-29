char *__fastcall ClpPESimplex::updateDualDegenerates(ClpPESimplex *this)
{
  __int64 v1; // rdx
  char *result; // rax
  char *v3; // r8
  int v4; // ebp
  int v5; // r12d
  char *v6; // rdx
  int v7; // ecx
  __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // ebp

  v1 = *((int *)this + 30);
  result = (char *)*((int *)this + 31);
  v3 = *((char **)this + 5);
  *((_DWORD *)this + 6) = 0;
  v4 = v1;
  v5 = (int)result;
  v6 = &result[v1 + (_QWORD)v3];
  if ( v3 != v6 )
  {
    result = (char *)memset(v3, 0, v6 - v3);
    v3 = result;
  }
  v7 = v4 + v5;
  *((_QWORD *)this + 13) = 0x3F1A36E2EB1C432DLL;
  if ( v4 + v5 > 0 )
  {
    v8 = *((_QWORD *)this + 12);
    result = nullptr;
    do
    {
      if ( (result[*(_QWORD *)(v8 + 264)] & 7) != 1
        && fabs(*(double *)(*(_QWORD *)(v8 + 1176) + 8LL * (_QWORD)result)) <= 0.0001 )
      {
        v9 = *((int *)this + 6);
        v10 = *((_QWORD *)this + 4);
        *((_DWORD *)this + 6) = v9 + 1;
        *(_DWORD *)(v10 + 4 * v9) = (_DWORD)result;
        v11 = *((_DWORD *)this + 30);
        LODWORD(v10) = *((_DWORD *)this + 31);
        result[(_QWORD)v3] = 1;
        v7 = v11 + v10;
      }
      ++result;
    }
    while ( v7 > (int)result );
  }
  ++*((_DWORD *)this + 38);
  return result;
}

