void __fastcall sub_54AE20(_QWORD *a1)
{
  __int64 *v2; // rbx
  __int64 *v3; // r12
  __int64 v4; // rsi
  __int64 v5; // rdi
  __int64 v7; // rdi

  v2 = (__int64 *)a1[5];
  *a1 = &off_1C50888;
  if ( v2 )
  {
    v3 = &v2[*((unsigned int *)v2 - 1)];
    if ( v2 >= v3 )
      goto LABEL_9;
    do
    {
      while ( 1 )
      {
        v4 = *v2;
        if ( *v2 )
        {
          v5 = a1[4];
          if ( (*(_DWORD *)(v4 + 8))-- == 1 )
            break;
        }
        if ( ++v2 >= v3 )
          goto LABEL_8;
      }
      sub_15D7BC0(v5, v4);
      ++v2;
    }
    while ( v2 < v3 );
LABEL_8:
    v2 = (__int64 *)a1[5];
    if ( v2 )
LABEL_9:
      sub_186B220(v2 - 1);
  }
  v7 = a1[2];
  *a1 = qword_1C665B0;
  if ( v7 )
    sub_186B220((void *)(v7 - 8));
  operator delete(a1, 0x30u);
}

