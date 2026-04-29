void *__fastcall sub_192C30(_QWORD *a1)
{
  _QWORD *v2; // rdi
  __int64 v3; // rdi
  __int64 v4; // rdi
  __int64 v5; // rdi
  __int64 v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // r12
  __int64 i; // rbp
  __int64 v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rdi
  void *result; // rax

  v2 = a1 + 57;
  *(v2 - 57) = &off_4CB2E0;
  clear_tinfo_t(v2);
  clear_tinfo_t(a1 + 56);
  v3 = a1[53];
  if ( v3 )
  {
    a1[54] = 0;
    qfree(v3);
  }
  v4 = a1[50];
  if ( v4 )
  {
    a1[51] = 0;
    qfree(v4);
  }
  v5 = a1[46];
  if ( v5 )
  {
    a1[47] = 0;
    qfree(v5);
  }
  v6 = a1[30];
  if ( v6 )
  {
    a1[31] = 0;
    qfree(v6);
  }
  v7 = a1[15];
  if ( v7 )
  {
    v8 = a1[16];
    if ( v8 )
    {
      for ( i = 0; i != v8; ++i )
      {
        v10 = v7 + (i << 7);
        v11 = *(_QWORD *)(v10 + 96);
        if ( v11 )
        {
          *(_QWORD *)(v10 + 104) = 0;
          qfree(v11);
          v7 = a1[15];
        }
      }
    }
    a1[16] = 0;
    qfree(v7);
  }
  v12 = a1[3];
  result = &unk_4D8E80;
  *a1 = &unk_4D8E80;
  if ( v12 )
  {
    a1[4] = 0;
    return (void *)qfree(v12);
  }
  return result;
}
