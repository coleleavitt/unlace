void __fastcall sub_616D70(char *a1)
{
  char *v2; // rdi
  void *v3; // rdi
  void *v4; // rdi
  void *v5; // rdi
  __int64 *v6; // rbx
  __int64 *v7; // r12
  __int64 v8; // rsi

  v2 = a1 + 104;
  *((_QWORD *)v2 - 13) = &off_1C528C0;
  sub_616AE0((__int64)v2);
  v3 = *((void **)a1 + 13);
  if ( v3 )
    sub_186B220(v3);
  v4 = *((void **)a1 + 10);
  if ( v4 )
    sub_186B220(v4);
  v5 = *((void **)a1 + 7);
  if ( v5 )
    sub_186B220(v5);
  v6 = *((__int64 **)a1 + 6);
  if ( v6 )
  {
    v7 = &v6[*((unsigned int *)v6 - 1)];
    if ( v6 >= v7 )
      goto LABEL_11;
    do
    {
      v8 = *v6++;
      sub_62A410(*((_QWORD *)a1 + 5), v8);
    }
    while ( v6 < v7 );
    v6 = *((__int64 **)a1 + 6);
    if ( v6 )
LABEL_11:
      sub_186B220(v6 - 1);
  }
  operator delete(a1, 0x88u);
}

