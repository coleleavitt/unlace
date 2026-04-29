void __fastcall sub_C5C0(void *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdx
  __int64 v4; // r12
  __int64 i; // rbx
  __int64 *v6; // rax
  __int64 v7; // rdi

  *(_QWORD *)a1 = &off_4D6D8;
  qfclose(*((_QWORD *)a1 + 10));
  v2 = *((_QWORD *)a1 + 12);
  if ( v2 )
  {
    *((_QWORD *)a1 + 13) = 0;
    qfree(v2);
  }
  v3 = *((_QWORD *)a1 + 7);
  *(_QWORD *)a1 = &off_4D698;
  if ( v3 )
  {
    v4 = *((_QWORD *)a1 + 8);
    if ( v4 )
    {
      for ( i = 0; i != v4; ++i )
      {
        v6 = (__int64 *)(v3 + 24 * i);
        v7 = *v6;
        if ( *v6 )
        {
          v6[1] = 0;
          qfree(v7);
          v3 = *((_QWORD *)a1 + 7);
        }
      }
    }
    *((_QWORD *)a1 + 8) = 0;
    qfree(v3);
  }
  sub_C390(*((void ***)a1 + 3));
  operator delete(a1, 0x80u);
}
