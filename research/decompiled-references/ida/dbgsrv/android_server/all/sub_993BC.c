/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_993BC
// Address: 0x00000000000993BC

//----- (00000000000993BC) ----------------------------------------------------
void *__fastcall sub_993BC(void *result, __int64 *a2)
{
  void *v2; // x19
  __int64 v3; // x22
  __int64 v4; // x23
  __int64 v5; // x8
  size_t v6; // x20
  void *v7; // x1
  __int64 v8; // x9
  __int64 v9; // x24
  __int64 v10; // x21
  void *v11; // x1
  __int64 v12; // x8
  __int64 v13; // x21
  unsigned __int64 v14; // x21

  v2 = result;
  v3 = 24 * a2[1];
  if ( v3 )
  {
    v4 = *a2;
    do
    {
      result = strchr(*(const char **)v4, 61);
      if ( result )
      {
        v5 = *(_QWORD *)(v4 + 8);
        if ( v5 )
        {
          v6 = v5 - 1;
          if ( v5 != 1 )
          {
            v7 = *(void **)v2;
            v8 = *((_QWORD *)v2 + 1);
            if ( v8 )
              v9 = v8 - 1;
            else
              v9 = 0;
            v10 = v9 + v5;
            if ( *((_QWORD *)v2 + 2) < (unsigned __int64)(v9 + v5) )
            {
              v7 = qvector_reserve((pthread_mutex_t *)v2, v7, v9 + v5, 1u);
              *(_QWORD *)v2 = v7;
            }
            *((_QWORD *)v2 + 1) = v10;
            *((_BYTE *)v7 + v9 + v6) = 0;
            result = memcpy((void *)(*(_QWORD *)v2 + v9), *(const void **)v4, v6);
          }
        }
        v11 = *(void **)v2;
        v12 = *((_QWORD *)v2 + 1);
        if ( v12 )
          v13 = v12 - 1;
        else
          v13 = 0;
        if ( *((_QWORD *)v2 + 2) < (unsigned __int64)(v13 + 2) )
        {
          result = qvector_reserve((pthread_mutex_t *)v2, v11, v13 + 2, 1u);
          v11 = result;
          *(_QWORD *)v2 = result;
        }
        *((_QWORD *)v2 + 1) = v13 + 2;
        *((_BYTE *)v11 + v13) = 0;
        *(_BYTE *)(*(_QWORD *)v2 + v13 + 1) = 0;
      }
      v3 -= 24;
      v4 += 24;
    }
    while ( v3 );
  }
  v14 = *((_QWORD *)v2 + 1);
  if ( v14 >= 2 )
  {
    if ( *((_QWORD *)v2 + 2) >= v14 + 1 )
    {
      result = *(void **)v2;
    }
    else
    {
      result = qvector_reserve((pthread_mutex_t *)v2, *(void **)v2, v14 + 1, 1u);
      *(_QWORD *)v2 = result;
    }
    *((_QWORD *)v2 + 1) = v14 + 1;
    *((_BYTE *)result + v14 - 1) = 0;
    *(_BYTE *)(*(_QWORD *)v2 + v14) = 0;
  }
  return result;
}
