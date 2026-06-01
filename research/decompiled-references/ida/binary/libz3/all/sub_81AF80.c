__int64 __fastcall sub_81AF80(unsigned int *a1)
{
  __int64 result; // rax
  __int64 v2; // r8
  unsigned int *v3; // rcx
  unsigned int *v4; // r9
  int v5; // esi
  __int64 v6; // rdx
  unsigned int v7; // eax
  bool v8; // cf

  result = a1[8];
  a1[18] = 0;
  if ( (_DWORD)result )
  {
    v2 = a1[15];
    v3 = a1;
    v4 = &a1[2 * result];
    v5 = 0;
    do
    {
      v6 = v3[19];
      v7 = v3[19];
      if ( (unsigned int)v2 <= (unsigned int)v6 )
        v7 = v2;
      v3[19] = v7;
      v8 = __CFADD__(v5, v7);
      result = v5 + v7;
      v5 = result;
      if ( v8 )
        sub_1201AE(a1, (unsigned int)result, v6, v3, v2, v4);
      v3 += 2;
      a1[18] = result;
    }
    while ( v3 != v4 );
  }
  return result;
}

