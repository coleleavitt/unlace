void __fastcall sub_20DC70(__int64 *a1, const char *a2)
{
  unsigned __int64 v2; // rax
  __int64 v4; // rdx
  __int64 *v5; // r12
  __int64 v6; // rbx
  __int64 v7; // rbp
  __int64 v8; // rdi
  __int64 v9; // rbx
  __int64 v10; // rbp
  __int64 v11; // rdi
  __int64 v12; // rbp
  __int64 v13; // rbx
  __int64 v14; // rdi
  __int64 v15; // rbp
  __int64 v16; // rdi

  v2 = *((_QWORD *)a2 + 3);
  v4 = a1[3];
  v5 = (__int64 *)(v4 + 8);
  if ( v4 + 8 < v2 )
  {
    do
    {
      v6 = *v5;
      v7 = *v5 + 512;
      do
      {
        v8 = v6;
        v6 += 32;
        sub_20DAF0(v8, a2);
      }
      while ( v7 != v6 );
      v2 = *((_QWORD *)a2 + 3);
      ++v5;
    }
    while ( (unsigned __int64)v5 < v2 );
    v4 = a1[3];
  }
  v9 = *a1;
  if ( v4 == v2 )
  {
    v15 = *(_QWORD *)a2;
    while ( v15 != v9 )
    {
      v16 = v9;
      v9 += 32;
      sub_20DAF0(v16, a2);
    }
  }
  else
  {
    v10 = a1[2];
    while ( v10 != v9 )
    {
      v11 = v9;
      v9 += 32;
      sub_20DAF0(v11, a2);
    }
    v12 = *(_QWORD *)a2;
    v13 = *((_QWORD *)a2 + 1);
    if ( *(_QWORD *)a2 != v13 )
    {
      do
      {
        v14 = v13;
        v13 += 32;
        sub_20DAF0(v14, a2);
      }
      while ( v12 != v13 );
    }
  }
}
