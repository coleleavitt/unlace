__int64 __fastcall sub_80FB30(_QWORD *a1, int a2)
{
  __int64 v3; // rax
  __int64 v4; // rcx
  unsigned int v5; // edx
  __int64 v6; // rax
  unsigned int v7; // r12d
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rdx
  _QWORD *v11; // rbx
  _QWORD *v12; // r13
  void *v13; // rdi
  __int64 v14; // rax
  __int64 result; // rax
  __int64 v16; // rcx
  __int64 v17; // rdx
  _QWORD *v18; // rbx
  _QWORD *v19; // r13
  void *v20; // rdi

  v3 = a1[86];
  v4 = a1[85];
  if ( v3 )
  {
    v5 = *(_DWORD *)(v3 - 4) - a2;
    if ( v4 )
      *(_DWORD *)(v4 - 4) = *(_DWORD *)(v3 + 4LL * v5);
    *(_DWORD *)(v3 - 4) = v5;
  }
  else if ( v4 )
  {
    *(_DWORD *)(v4 - 4) = *(_DWORD *)(4LL * (unsigned int)-a2);
  }
  sub_7E4990((__int64)a1, a2);
  v6 = a1[11];
  if ( v6 )
    v7 = *(_DWORD *)(v6 - 4);
  else
    v7 = 0;
  v8 = a1[75];
  if ( v8 )
  {
    v9 = 8LL * v7;
    v10 = 8LL * *(unsigned int *)(v8 - 4);
    v11 = (_QWORD *)(v8 + v9);
    v12 = (_QWORD *)(v8 + v10);
    if ( v9 != v10 )
    {
      do
      {
        while ( *v11 )
        {
          v13 = (void *)(*v11++ - 8LL);
          sub_186B220(v13);
          if ( v12 == v11 )
            goto LABEL_11;
        }
        ++v11;
      }
      while ( v12 != v11 );
LABEL_11:
      v8 = a1[75];
    }
    *(_DWORD *)(v8 - 4) = v7;
  }
  v14 = a1[76];
  if ( v14 )
    *(_DWORD *)(v14 - 4) = v7;
  result = a1[77];
  if ( result )
  {
    v16 = 8LL * v7;
    v17 = 8LL * *(unsigned int *)(result - 4);
    v18 = (_QWORD *)(result + v16);
    v19 = (_QWORD *)(result + v17);
    if ( v16 != v17 )
    {
      do
      {
        while ( *v18 )
        {
          v20 = (void *)(*v18++ - 8LL);
          sub_186B220(v20);
          if ( v19 == v18 )
            goto LABEL_19;
        }
        ++v18;
      }
      while ( v19 != v18 );
LABEL_19:
      result = a1[77];
    }
    *(_DWORD *)(result - 4) = v7;
  }
  return result;
}

