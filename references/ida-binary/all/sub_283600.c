void __fastcall sub_283600(__int64 **a1, __int64 **a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned __int64 v5; // rax
  __int64 v7; // rdx
  __int64 **v8; // rbx
  __int64 *v9; // rdi
  __int64 *v10; // rbx
  __int64 *v11; // r12
  __int64 *v12; // rdi
  __int64 *v13; // r12
  __int64 *v14; // rbx
  __int64 *v15; // rdi
  __int64 *v16; // rbp
  __int64 *v17; // rdi

  v5 = (unsigned __int64)a2[3];
  v7 = (__int64)a1[3];
  v8 = (__int64 **)(v7 + 8);
  if ( v7 + 8 < v5 )
  {
    do
    {
      v9 = *v8++;
      sub_174D10(v9, (__int64)a2, v7, a4, a5);
      v5 = (unsigned __int64)a2[3];
    }
    while ( (unsigned __int64)v8 < v5 );
    v7 = (__int64)a1[3];
  }
  v10 = *a1;
  if ( v7 == v5 )
  {
    v16 = *a2;
    while ( v16 != v10 )
    {
      v17 = v10;
      v10 += 34;
      sub_174D10(v17, (__int64)a2, v7, a4, a5);
    }
  }
  else
  {
    v11 = a1[2];
    while ( v11 != v10 )
    {
      v12 = v10;
      v10 += 34;
      sub_174D10(v12, (__int64)a2, v7, a4, a5);
    }
    v13 = *a2;
    v14 = a2[1];
    if ( *a2 != v14 )
    {
      do
      {
        v15 = v14;
        v14 += 34;
        sub_174D10(v15, (__int64)a2, v7, a4, a5);
      }
      while ( v13 != v14 );
    }
  }
}
