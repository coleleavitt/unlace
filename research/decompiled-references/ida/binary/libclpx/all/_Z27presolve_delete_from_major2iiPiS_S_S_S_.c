__int64 __fastcall presolve_delete_from_major2(int a1, int a2, int *a3, int *a4, int *a5, int *a6, int *a7)
{
  __int64 v7; // rdi
  int *v8; // rdx
  int *v9; // rcx
  __int64 result; // rax
  int *v11; // rdi
  __int64 v12; // r11
  __int64 v13; // r10
  int v14; // edx
  int v15; // r10d
  int *v16; // r9

  v7 = a1;
  v8 = &a3[v7];
  v9 = &a4[v7];
  result = *v8;
  v11 = &a6[result];
  v12 = *v11;
  if ( a5[result] == a2 )
  {
    *v8 = v12;
    v15 = result;
    result = (unsigned int)*a7;
    *v11 = result;
    *a7 = v15;
    --*v9;
  }
  else if ( *v9 > 1 )
  {
    v13 = (int)v12;
    if ( a2 == a5[v13] )
    {
      v14 = *v11;
LABEL_11:
      v16 = &a6[v13];
      *v11 = *v16;
      result = (unsigned int)*a7;
      *v16 = result;
      *a7 = v14;
      --*v9;
    }
    else
    {
      LODWORD(result) = 1;
      while ( 1 )
      {
        result = (unsigned int)(result + 1);
        v14 = a6[v13];
        if ( *v9 == (_DWORD)result )
          break;
        v13 = v14;
        if ( a5[v13] == a2 )
        {
          v11 = &a6[v12];
          goto LABEL_11;
        }
        v12 = v14;
      }
    }
  }
  return result;
}

