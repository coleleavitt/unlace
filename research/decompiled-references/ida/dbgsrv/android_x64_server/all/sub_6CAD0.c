/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6CAD0
// Address: 0x000000000006CAD0

//----- (000000000006CAD0) ----------------------------------------------------
const char *__fastcall sub_6CAD0(_QWORD *a1, unsigned int a2, unsigned int *a3)
{
  unsigned __int64 v3; // r9
  unsigned int v4; // eax
  unsigned int *v5; // r8
  int v6; // eax
  __int64 v7; // rcx
  __int64 v8; // r10
  unsigned __int64 v9; // r9
  unsigned int *v10; // r10
  const char *result; // rax
  int v12; // ecx
  __int64 v13; // rdi
  __int64 v14; // rdi

  if ( a3 )
  {
    v3 = a1[15];
    v4 = 0;
    if ( v3 )
    {
      v5 = (unsigned int *)a1[14];
      if ( *v5 <= a2 )
      {
        v6 = 1;
        v7 = 0;
        do
        {
          v8 = v7;
          v7 = v6;
          if ( v3 <= v6 )
            break;
          ++v6;
        }
        while ( v5[2 * v7] <= a2 );
        v4 = v5[2 * v8 + 1];
      }
    }
    *a3 = v4;
  }
  v9 = a1[12];
  if ( !v9 )
    return nullptr;
  v10 = (unsigned int *)a1[11];
  if ( *v10 > a2 )
    return nullptr;
  v12 = 1;
  v13 = 0;
  do
  {
    v14 = 8 * v13;
    result = s1;
    if ( *(_QWORD *)&v10[v14 + 4] )
      result = *(const char **)&v10[v14 + 2];
    v13 = v12;
    if ( v9 <= v12 )
      break;
    ++v12;
  }
  while ( v10[8 * v13] <= a2 );
  return result;
}
