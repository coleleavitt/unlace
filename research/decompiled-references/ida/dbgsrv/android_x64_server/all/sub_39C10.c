/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_39C10
// Address: 0x0000000000039C10

//----- (0000000000039C10) ----------------------------------------------------
void __fastcall sub_39C10(__int64 a1, const char *a2)
{
  __int64 *v3; // r12
  __int64 *v4; // r13
  _QWORD *v5; // rbp
  __int64 *v6; // rbx
  __int64 v7; // r12
  bool v8; // zf
  _QWORD *v9; // rcx
  unsigned __int64 v10; // rax
  _QWORD *v11; // rbx
  const char *v12; // rdi
  __int64 *v13; // rax
  __int64 *v14; // rax
  __int64 *v15; // rax
  __int64 v16; // rax

  if ( *(_QWORD *)(a1 + 1000) )
  {
    v3 = *(__int64 **)(a1 + 984);
    v4 = (__int64 *)(a1 + 992);
    if ( v3 != (__int64 *)(a1 + 992) )
    {
      v5 = (_QWORD *)(a1 + 1016);
      while ( 1 )
      {
        v9 = (_QWORD *)*v5;
        if ( !*v5 )
          goto LABEL_23;
        v10 = v3[4];
        v11 = (_QWORD *)(a1 + 1016);
        do
        {
          if ( v9[4] >= v10 )
            v11 = v9;
          v9 = (_QWORD *)v9[v9[4] < v10];
        }
        while ( v9 );
        if ( v11 == v5 || v10 < v11[4] )
          goto LABEL_23;
        if ( !a2 )
          break;
        v12 = s1;
        if ( v11[11] )
          v12 = (const char *)v11[10];
        if ( !strcmp(v12, a2) )
          break;
        v13 = (__int64 *)v3[1];
        if ( v13 )
        {
          do
          {
            v6 = v13;
            v13 = (__int64 *)*v13;
          }
          while ( v13 );
        }
        else
        {
          v6 = (__int64 *)v3[2];
          if ( (__int64 *)*v6 != v3 )
          {
            v7 = (__int64)(v3 + 2);
            do
            {
              v6 = *(__int64 **)(*(_QWORD *)v7 + 16LL);
              v8 = *v6 == *(_QWORD *)v7;
              v7 = *(_QWORD *)v7 + 16LL;
            }
            while ( !v8 );
          }
        }
LABEL_32:
        v3 = v6;
        if ( v6 == v4 )
          return;
      }
      sub_41760(a1, (__int64)(v11 + 5));
LABEL_23:
      v14 = (__int64 *)v3[1];
      if ( v14 )
      {
        do
        {
          v6 = v14;
          v14 = (__int64 *)*v14;
        }
        while ( v14 );
      }
      else
      {
        v6 = (__int64 *)v3[2];
        if ( (__int64 *)*v6 != v3 )
        {
          v15 = v3 + 2;
          do
          {
            v16 = *v15;
            v6 = *(__int64 **)(v16 + 16);
            v8 = *v6 == v16;
            v15 = (__int64 *)(v16 + 16);
          }
          while ( !v8 );
        }
      }
      if ( *(__int64 **)(a1 + 984) == v3 )
        *(_QWORD *)(a1 + 984) = v6;
      --*(_QWORD *)(a1 + 1000);
      sub_4C430(*(__int64 **)(a1 + 992), v3);
      operator delete(v3);
      goto LABEL_32;
    }
  }
}
