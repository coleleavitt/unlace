void __fastcall sub_56A3C0(_QWORD *a1)
{
  char *v2; // r13
  __int64 v3; // rbp
  __int64 v4; // rbx
  char *v5; // rbp
  __int64 v6; // rdi

  *a1 = &off_1C51318;
  sub_56A0A0((__int64)a1);
  v2 = (char *)a1[4];
  if ( v2 )
  {
    v3 = *((unsigned int *)a1 + 10);
    if ( (_DWORD)v3 )
    {
      v4 = a1[4];
      v5 = &v2[32 * v3];
      do
      {
        while ( 1 )
        {
          v6 = *(_QWORD *)(v4 + 8);
          if ( !v6 )
            break;
          v4 += 32;
          sub_186B220((void *)(v6 - 8));
          if ( (char *)v4 == v5 )
            goto LABEL_6;
        }
        v4 += 32;
      }
      while ( (char *)v4 != v5 );
    }
LABEL_6:
    sub_186B220(v2);
  }
  operator delete(a1, 0x38u);
}

