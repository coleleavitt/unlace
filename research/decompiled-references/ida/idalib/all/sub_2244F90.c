int __fastcall sub_2244F90(__int64 *a1, size_t *a2)
{
  size_t v2; // r12
  char *v3; // rbp
  _QWORD *v4; // rax
  __int64 v5; // rdx
  int v6; // r15d
  __int64 v7; // r14
  int v8; // ecx
  unsigned int v9; // ebx
  __int64 v10; // rsi
  __int64 v11; // r9
  int v12; // r8d
  unsigned int v13; // ebx
  int v14; // edx
  unsigned int v15; // ebx
  __int64 v17; // [rsp+0h] [rbp-48h]
  int v18; // [rsp+8h] [rbp-40h]
  int v19; // [rsp+Ch] [rbp-3Ch]

  v2 = *a2;
  v3 = (char *)a2 + *((unsigned int *)a1 + 5);
  LODWORD(v4) = sub_2287CD0(v3, *a2);
  v5 = *((unsigned int *)a1 + 2);
  if ( (_DWORD)v5 )
  {
    v6 = v5 - 1;
    v7 = *a1;
    v8 = (int)v4;
    v9 = (v5 - 1) & (unsigned int)v4;
    v10 = v9;
    v4 = *(_QWORD **)(*a1 + 8LL * v9);
    if ( v4 )
    {
      v11 = 8 * v5 + 8;
      if ( v2 )
      {
        v12 = 1;
        while ( 1 )
        {
          if ( v4 != (_QWORD *)-8LL && *(_DWORD *)(v7 + 4 * v10 + v11) == v8 && v2 == *v4 )
          {
            v19 = v12;
            v17 = v11;
            v18 = v8;
            LODWORD(v4) = memcmp(v3, (char *)v4 + *((unsigned int *)a1 + 5), v2);
            v8 = v18;
            v11 = v17;
            v12 = v19;
            if ( !(_DWORD)v4 )
              break;
          }
          v13 = v12 + v9;
          ++v12;
          v9 = v6 & v13;
          v10 = v9;
          v4 = *(_QWORD **)(v7 + 8LL * v9);
          if ( !v4 )
            return (int)v4;
        }
      }
      else
      {
        v14 = 1;
        while ( v4 == (_QWORD *)-8LL || v8 != *(_DWORD *)(v7 + 4 * v10 + v11) || *v4 )
        {
          v15 = v14 + v9;
          ++v14;
          v9 = v6 & v15;
          v10 = v9;
          v4 = *(_QWORD **)(v7 + 8LL * v9);
          if ( !v4 )
            return (int)v4;
        }
      }
      *(_QWORD *)(v7 + 8LL * (int)v9) = -8;
      --*((_DWORD *)a1 + 3);
      ++*((_DWORD *)a1 + 4);
    }
  }
  return (int)v4;
}
