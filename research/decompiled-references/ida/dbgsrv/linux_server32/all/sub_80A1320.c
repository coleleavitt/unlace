/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80A1320
// Address: 0x080A1320

//----- (080A1320) --------------------------------------------------------
int __cdecl sub_80A1320(_DWORD *a1, char **a2, int a3, char *n)
{
  int result; // eax
  char *v5; // eax
  size_t v6; // ecx
  size_t v7; // edx
  char *v8; // eax
  size_t v9; // edx
  size_t v10; // edx
  char *v11; // eax
  char *v12; // ecx
  char v13; // [esp+1h] [ebp-21h] BYREF
  unsigned int v14; // [esp+2h] [ebp-20h]

  v14 = __readgsdword(0x14u);
  a2[1] = nullptr;
  if ( (a1[104] & 0x10) != 0 )
  {
    v13 = 0;
    if ( n )
    {
      v5 = *a2;
      v6 = (size_t)a2[2];
      if ( &v13 < *a2 || &v13 >= &v5[v6] )
      {
        v10 = 0;
        if ( v6 >= (unsigned int)n
          || (v5 = (char *)sub_80CF920((int)a2, v5, (unsigned int)n, 1u),
              v10 = (size_t)a2[1],
              *a2 = v5,
              v10 < (unsigned int)n) )
        {
          while ( 1 )
          {
            v5[v10++] = v13;
            if ( n == (char *)v10 )
              break;
            v5 = *a2;
          }
        }
      }
      else
      {
        v7 = 0;
        if ( v6 >= (unsigned int)n
          || (v5 = (char *)sub_80CF920((int)a2, v5, (unsigned int)n, 1u),
              v7 = (size_t)a2[1],
              *a2 = v5,
              v7 < (unsigned int)n) )
        {
          while ( 1 )
          {
            v5[v7++] = 0;
            if ( n == (char *)v7 )
              break;
            v5 = *a2;
          }
        }
      }
      a2[1] = n;
    }
    goto LABEL_4;
  }
  if ( n )
  {
    v8 = *a2;
    v9 = (size_t)n;
    if ( a2[2] < n )
    {
      v11 = (char *)sub_80CF920((int)a2, v8, (unsigned int)n, 1u);
      v12 = a2[1];
      *a2 = v11;
      v9 = n - v12;
      v8 = &v11[(_DWORD)v12];
    }
    memset(v8, 0, v9);
    a2[1] = n;
  }
  if ( (*(int (__cdecl **)(_DWORD *, int, char *, char *, _DWORD))(*a1 + 144))(a1, a3, *a2, n, 0) > 0 )
  {
LABEL_4:
    result = (int)n;
    goto LABEL_5;
  }
  result = -1;
LABEL_5:
  if ( v14 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return result;
}
