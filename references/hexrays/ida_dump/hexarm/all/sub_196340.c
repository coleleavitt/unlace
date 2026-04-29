void __fastcall sub_196340(char *a1)
{
  char *v2; // rdi
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

  v2 = a1 + 456;
  *((_QWORD *)v2 - 57) = &off_4D8840;
  clear_tinfo_t(v2);
  clear_tinfo_t(a1 + 448);
  v3 = *((_QWORD *)a1 + 53);
  if ( v3 )
  {
    *((_QWORD *)a1 + 54) = 0;
    qfree(v3);
  }
  v4 = *((_QWORD *)a1 + 50);
  if ( v4 )
  {
    *((_QWORD *)a1 + 51) = 0;
    qfree(v4);
  }
  v5 = *((_QWORD *)a1 + 46);
  if ( v5 )
  {
    *((_QWORD *)a1 + 47) = 0;
    qfree(v5);
  }
  v6 = *((_QWORD *)a1 + 30);
  if ( v6 )
  {
    *((_QWORD *)a1 + 31) = 0;
    qfree(v6);
  }
  v7 = *((_QWORD *)a1 + 15);
  if ( v7 )
  {
    v8 = *((_QWORD *)a1 + 16);
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
          v7 = *((_QWORD *)a1 + 15);
        }
      }
    }
    *((_QWORD *)a1 + 16) = 0;
    qfree(v7);
  }
  v12 = *((_QWORD *)a1 + 3);
  *(_QWORD *)a1 = &unk_4E7E80;
  if ( v12 )
  {
    *((_QWORD *)a1 + 4) = 0;
    qfree(v12);
  }
  operator delete(a1, 0x1D8u);
}
