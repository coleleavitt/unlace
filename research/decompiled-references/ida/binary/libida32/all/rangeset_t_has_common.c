__int64 __fastcall rangeset_t_has_common(unsigned int **a1, unsigned int *a2, int a3)
{
  unsigned int *v3; // rax
  __int64 v4; // rcx
  unsigned int *v5; // r8
  unsigned int v6; // edi
  unsigned int v7; // ecx
  unsigned int v8; // r8d
  unsigned int v9; // esi
  __int64 result; // rax

  v3 = *a1;
  v4 = 2LL * (_QWORD)a1[1];
  v5 = &(*a1)[v4];
  if ( !(v4 * 4) )
    return 0;
  v6 = *a2;
  while ( 1 )
  {
    v7 = v3[1];
    if ( v6 < v7 )
      break;
    v3 += 2;
    if ( v3 == v5 )
      return 0;
  }
  v8 = *v3;
  v9 = a2[1];
  result = 0;
  if ( v8 < v9 )
  {
    result = 1;
    if ( (_BYTE)a3 )
    {
      LOBYTE(result) = v6 >= v8;
      LOBYTE(a3) = v7 >= v9;
      return a3 & (unsigned int)result;
    }
  }
  return result;
}

