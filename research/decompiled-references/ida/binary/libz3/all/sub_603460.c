void __fastcall sub_603460(_QWORD *a1)
{
  char *v2; // r13
  __int64 v3; // rbp
  char *v4; // rbx
  char *v5; // rbp
  __int64 v6; // rdi
  __int64 v7; // rdi
  __int64 v8; // rdi
  __int64 v9; // rdi

  v2 = (char *)a1[6];
  *a1 = &off_1C52798;
  if ( v2 )
  {
    v3 = *((unsigned int *)a1 + 14);
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
  v7 = a1[5];
  if ( v7 )
    sub_186B220((void *)(v7 - 8));
  v8 = a1[4];
  if ( v8 )
    sub_186B220((void *)(v8 - 8));
  v9 = a1[3];
  if ( v9 )
    sub_186B220((void *)(v9 - 8));
  operator delete(a1, 0x48u);
}

