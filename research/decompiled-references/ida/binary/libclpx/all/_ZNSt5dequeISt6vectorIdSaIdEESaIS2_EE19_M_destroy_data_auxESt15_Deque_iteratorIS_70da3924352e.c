void **__fastcall std::deque<std::vector<double>>::_M_destroy_data_aux(__int64 a1, __int64 a2, void ***a3)
{
  __int64 v3; // rcx
  unsigned __int64 v5; // rdx
  void ***v6; // r12
  void **v7; // rbx
  __int64 v8; // rbp
  void *v9; // rdi
  void **result; // rax
  void **v11; // rdx
  void **v12; // rbx
  unsigned __int64 v13; // rbp
  void **v14; // rbx
  unsigned __int64 v15; // rbp
  void **v16; // rbx
  unsigned __int64 v17; // rbp

  v3 = *(_QWORD *)(a2 + 24);
  v5 = (unsigned __int64)a3[3];
  v6 = (void ***)(v3 + 8);
  if ( v3 + 8 < v5 )
  {
LABEL_2:
    while ( 2 )
    {
      v7 = *v6;
      v8 = (__int64)(*v6 + 63);
      do
      {
        while ( 1 )
        {
          v9 = *v7;
          if ( !*v7 )
            break;
          v7 += 3;
          operator delete(v9);
          if ( (void **)v8 == v7 )
          {
            v5 = (unsigned __int64)a3[3];
            if ( v5 > (unsigned __int64)++v6 )
              goto LABEL_2;
            goto LABEL_6;
          }
        }
        v7 += 3;
      }
      while ( v7 != (void **)v8 );
      v5 = (unsigned __int64)a3[3];
      if ( v5 > (unsigned __int64)++v6 )
        continue;
      break;
    }
LABEL_6:
    v3 = *(_QWORD *)(a2 + 24);
  }
  result = *(void ***)a2;
  if ( v5 == v3 )
  {
    if ( *a3 != result )
    {
      v16 = result + 3;
      v17 = (unsigned __int64)&result[((unsigned __int64)((char *)*a3 - (char *)(result + 3)) >> 3) + 3];
      while ( 1 )
      {
        if ( *result )
        {
          operator delete(*result);
          result = v16;
          if ( (void **)v17 == v16 )
            return result;
        }
        else
        {
          result = v16;
          if ( v16 == (void **)v17 )
            return result;
        }
        v16 += 3;
      }
    }
  }
  else
  {
    v11 = *(void ***)(a2 + 16);
    if ( v11 != result )
    {
      v12 = result + 3;
      v13 = (unsigned __int64)&result[((unsigned __int64)((char *)v11 - (char *)(result + 3)) >> 3) + 3];
      while ( 1 )
      {
        if ( *result )
        {
          operator delete(*result);
          result = v12;
          if ( (void **)v13 == v12 )
            break;
        }
        else
        {
          result = v12;
          if ( v12 == (void **)v13 )
            break;
        }
        v12 += 3;
      }
    }
    result = a3[1];
    if ( *a3 != result )
    {
      v14 = result + 3;
      v15 = (unsigned __int64)&result[((unsigned __int64)((char *)*a3 - (char *)(result + 3)) >> 3) + 3];
      while ( 1 )
      {
        if ( *result )
        {
          operator delete(*result);
          result = v14;
          if ( (void **)v15 == v14 )
            return result;
        }
        else
        {
          result = v14;
          if ( v14 == (void **)v15 )
            return result;
        }
        v14 += 3;
      }
    }
  }
  return result;
}

