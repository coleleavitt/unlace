bool __fastcall sub_4D9150(int **a1, __int64 *a2)
{
  int *v4; // r14
  int *v5; // r12
  __int64 v6; // rdx
  bool result; // al
  __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 v10; // rdi
  int v11; // ebx
  __int64 v12; // rax
  __int64 v13; // rax
  int v14; // ebx
  __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rax

  v4 = a1[1];
  if ( (*((_BYTE *)a1 + 44) & 0x20) != 0 )
  {
    v5 = nullptr;
    v6 = 0;
    if ( v4 )
    {
      do
      {
        v11 = *((unsigned __int16 *)*a1 + (_QWORD)v5);
        if ( v6 )
        {
          while ( *(_WORD *)(v6 + 2) == (_WORD)v11 )
          {
            v5 = (int *)((char *)v5 + 1);
            *(_WORD *)(v6 + 2) = v11 + 1;
            if ( v5 == v4 )
              return 1;
            v11 = *((unsigned __int16 *)*a1 + (_QWORD)v5);
          }
        }
        v8 = a2[1];
        v9 = *a2;
        v10 = v8 + 1;
        if ( a2[2] < (unsigned __int64)(v8 + 1) )
        {
          v12 = qvector_reserve(a2, v9, v8 + 1, 4);
          v8 = a2[1];
          *a2 = v12;
          v9 = v12;
          v10 = v8 + 1;
        }
        v6 = v9 + 4 * v8;
        v5 = (int *)((char *)v5 + 1);
        a2[1] = v10;
        *(_DWORD *)v6 = v11 | ((v11 + 1) << 16);
      }
      while ( v5 != v4 );
    }
    return 1;
  }
  result = 0;
  if ( v4 == (int *)((char *)&dword_0 + 2) )
  {
    result = *((_WORD *)*a1 + 1) != 0xFFFF && *(_WORD *)*a1 != 0xFFFF;
    if ( result )
    {
      v13 = a2[1];
      v14 = **a1;
      v15 = *a2;
      v16 = v13 + 1;
      if ( a2[2] < (unsigned __int64)(v13 + 1) )
      {
        v17 = qvector_reserve(a2, v15, v16, 4);
        *a2 = v17;
        v15 = v17;
        v13 = a2[1];
        v16 = v13 + 1;
      }
      a2[1] = v16;
      *(_DWORD *)(v15 + 4 * v13) = v14;
      return 1;
    }
  }
  return result;
}
