void __fastcall sub_70720(_QWORD *a1, int a2, __int64 *a3, int a4)
{
  unsigned __int64 v4; // r8
  int v6; // ecx
  char *v8; // rsi
  __int64 v10; // r9
  __int64 v11; // rdx
  char *v12; // rax
  int *v13; // rdx
  int v14; // edx
  char *v15; // rdi
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rax
  __int64 v18; // rsi
  __int64 v19; // rax

  v4 = a3[1];
  if ( v4 )
  {
    v6 = 0;
    v8 = (char *)a1[32];
    v10 = *a3;
    v11 = 0;
    v12 = &v8[4 * a1[33]];
    while ( 1 )
    {
      v13 = (int *)(v10 + 4 * v11);
      if ( v8 != v12 )
      {
        v14 = *v13;
        v15 = v8;
        while ( v14 != *(_DWORD *)v15 )
        {
          v15 += 4;
          if ( v12 == v15 )
            goto LABEL_8;
        }
        if ( v12 != v15 )
          break;
      }
LABEL_8:
      v11 = ++v6;
      if ( v6 >= v4 )
        return;
    }
    memmove(v15, v15 + 4, v12 - v15 - 4);
    v16 = a1[33];
    v17 = v16 - 1;
    a1[33] = v16 - 1;
    if ( a4 != 5 )
    {
      v18 = a1[32];
      if ( a1[34] < v16 )
      {
        v19 = qvector_reserve(a1 + 32, v18, v16, 4);
        a1[32] = v19;
        v18 = v19;
        v17 = a1[33];
      }
      *(_DWORD *)(v18 + 4 * v17) = a2;
      ++a1[33];
    }
  }
}
