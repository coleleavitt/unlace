__int64 __fastcall ClpCholeskyBase::symbolic1(ClpCholeskyBase *this, const int *a2, const int *a3)
{
  __int64 v3; // rax
  int *v4; // r9
  __int64 v5; // r8
  __int64 v6; // r10
  __int64 v7; // rcx
  int v8; // r11d
  int *v9; // r12
  const int *v10; // rbx
  int v11; // esi
  __int64 v12; // rax
  int v13; // ecx
  __int64 v14; // r11
  const int *v15; // rbp
  __int64 v16; // rax
  int *v17; // r13
  int *v18; // rcx
  int v19; // eax
  __int64 v20; // rax
  __int64 v21; // rdx
  int v22; // ecx
  int v23; // eax
  int v24; // esi

  v3 = *((int *)this + 11);
  v4 = *((int **)this + 18);
  v5 = *((_QWORD *)this + 12);
  if ( (int)v3 <= 0 )
    goto LABEL_19;
  v6 = *((_QWORD *)this + 17);
  v7 = 1;
  do
  {
    v4[v7 - 1] = -1;
    *(_DWORD *)(v6 + 4 * v7 - 4) = -1;
    v8 = v7;
    *(_DWORD *)(v5 + 4 * v7 - 4) = 0;
    v3 = *((int *)this + 11);
    ++v7;
  }
  while ( (int)v3 > v8 );
  if ( (int)v3 <= 0 )
  {
LABEL_19:
    *((_DWORD *)this + 40) = 0;
    *(_DWORD *)(v5 + 4 * v3) = 0;
    return *((unsigned int *)this + 40);
  }
  else
  {
    v9 = v4;
    v10 = a2 + 1;
    v11 = 0;
    do
    {
      *v9 = v11;
      v12 = *(v10 - 1);
      v13 = *v10;
      if ( (int)v12 < *v10 )
      {
        v14 = (int)v12 + 1;
        v15 = &a3[v12 - v14];
        do
        {
          v16 = v15[v14];
          v17 = &v4[v16];
          if ( v4[v16] != v11 )
          {
            do
            {
              v18 = (int *)(v6 + v16 * 4);
              if ( *(int *)(v6 + v16 * 4) < 0 )
                *v18 = v11;
              ++*(_DWORD *)(v5 + v16 * 4);
              *v17 = v11;
              v16 = *v18;
              v17 = &v4[v16];
            }
            while ( v4[v16] != v11 );
            v13 = *v10;
          }
          v19 = v14++;
        }
        while ( v19 < v13 );
      }
      v20 = *((int *)this + 11);
      ++v11;
      ++v9;
      ++v10;
    }
    while ( (int)v20 > v11 );
    *((_DWORD *)this + 40) = 0;
    if ( (int)v20 <= 0 )
    {
      v22 = 0;
    }
    else
    {
      v21 = 1;
      v22 = 0;
      do
      {
        v23 = *(_DWORD *)(v5 + 4 * v21 - 4);
        *(_DWORD *)(v5 + 4 * v21 - 4) = v22;
        v24 = v21++;
        v22 = *((_DWORD *)this + 40) + v23;
        *((_DWORD *)this + 40) = v22;
        v20 = *((int *)this + 11);
      }
      while ( (int)v20 > v24 );
    }
    *(_DWORD *)(v5 + 4 * v20) = v22;
    return *((unsigned int *)this + 40);
  }
}

