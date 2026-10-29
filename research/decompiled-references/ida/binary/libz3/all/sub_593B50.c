void __fastcall sub_593B50(_QWORD *a1)
{
  char *v2; // r13
  __int64 v3; // rbp
  char *v4; // rbx
  char *v5; // rbp
  __int64 v6; // rdi
  __int64 v7; // rdi

  v2 = (char *)a1[5];
  *a1 = &off_1C67FF0;
  if ( v2 )
  {
    v3 = *((unsigned int *)a1 + 12);
    if ( (_DWORD)v3 )
    {
      v4 = v2;
      v5 = &v2[16 * v3];
      do
      {
        while ( 1 )
        {
          v6 = *((_QWORD *)v4 + 1);
          if ( !v6 )
            break;
          v4 += 16;
          sub_186B220((void *)(v6 - 8));
          if ( v4 == v5 )
            goto LABEL_6;
        }
        v4 += 16;
      }
      while ( v4 != v5 );
    }
LABEL_6:
    sub_186B220(v2);
  }
  v7 = a1[2];
  *a1 = qword_1C67518;
  if ( v7 )
    sub_186B220((void *)(v7 - 8));
  operator delete(a1, 0x40u);
}

