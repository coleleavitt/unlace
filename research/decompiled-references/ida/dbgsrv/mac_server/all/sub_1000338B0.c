/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000338B0
// Address: 0x00000001000338B0

//----- (00000001000338B0) ----------------------------------------------------
const char *__fastcall sub_1000338B0(_QWORD *a1, unsigned int a2, unsigned int *a3)
{
  unsigned __int64 v3; // rax
  unsigned int v4; // r8d
  unsigned int *v5; // rcx
  int v6; // r9d
  unsigned int *v7; // r10
  unsigned int *v8; // r8
  __int64 v9; // r11
  unsigned __int64 v10; // rcx
  unsigned int *v11; // rdx
  const char *result; // rax
  int v13; // edi
  unsigned int *v14; // r9

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
        v7 = (unsigned int *)a1[14];
        do
        {
          v8 = v7;
          v9 = v6;
          if ( v3 <= v6 )
            break;
          v7 = &v5[2 * v6++];
        }
        while ( v5[2 * v9] <= a2 );
        v4 = v8[1];
      }
    }
    *a3 = v4;
  }
  v10 = a1[12];
  if ( !v10 )
    return nullptr;
  v11 = (unsigned int *)a1[11];
  if ( *v11 > a2 )
    return nullptr;
  v13 = 1;
  v14 = v11;
  do
  {
    result = _s1;
    if ( *((_QWORD *)v14 + 2) )
      result = *((const char **)v14 + 1);
    if ( v10 <= v13 )
      break;
    v14 = &v11[8 * v13++];
  }
  while ( *v14 <= a2 );
  return result;
}
