/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_38C30
// Address: 0x0000000000038C30

//----- (0000000000038C30) ----------------------------------------------------
void __fastcall sub_38C30(_QWORD *a1)
{
  __int64 v2; // rdi
  void *v3; // rdi
  char *v4; // r13
  unsigned __int64 v5; // r15
  unsigned __int64 v6; // r12
  __int64 i; // rbx
  void *v8; // rdi
  void *v9; // rdi
  char *v10; // r13
  unsigned __int64 v11; // r15
  unsigned __int64 v12; // r12
  __int64 j; // rbx
  void *v14; // rdi

  v2 = a1[67];
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
    v3 = (void *)a1[68];
    if ( v3 )
    {
      a1[69] = 0;
      qfree(v3);
      a1[68] = 0;
      a1[70] = 0;
    }
    v4 = (char *)a1[71];
    if ( v4 )
    {
      v5 = a1[72];
      if ( v5 )
      {
        v6 = 1;
        for ( i = 0; ; i += 24 )
        {
          v8 = *(void **)&v4[i];
          if ( v8 )
          {
            *(_QWORD *)&v4[i + 8] = 0;
            qfree(v8);
            *(_QWORD *)&v4[i] = 0;
            *(_QWORD *)&v4[i + 16] = 0;
          }
          if ( v6 >= v5 )
            break;
          v4 = (char *)a1[71];
          ++v6;
        }
        v4 = (char *)a1[71];
      }
      a1[72] = 0;
      qfree(v4);
      a1[71] = 0;
      a1[73] = 0;
    }
    v9 = (void *)a1[74];
    if ( v9 )
    {
      a1[75] = 0;
      qfree(v9);
      a1[74] = 0;
      a1[76] = 0;
    }
    v10 = (char *)a1[77];
    if ( v10 )
    {
      v11 = a1[78];
      if ( v11 )
      {
        v12 = 1;
        for ( j = 0; ; j += 24 )
        {
          v14 = *(void **)&v10[j];
          if ( v14 )
          {
            *(_QWORD *)&v10[j + 8] = 0;
            qfree(v14);
            *(_QWORD *)&v10[j] = 0;
            *(_QWORD *)&v10[j + 16] = 0;
          }
          if ( v12 >= v11 )
            break;
          v10 = (char *)a1[77];
          ++v12;
        }
        v10 = (char *)a1[77];
      }
      a1[78] = 0;
      qfree(v10);
      a1[77] = 0;
      a1[79] = 0;
    }
  }
  a1[67] = 0;
}
