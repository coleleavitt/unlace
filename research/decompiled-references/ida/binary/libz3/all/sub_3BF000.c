__int64 __fastcall sub_3BF000(__int64 *a1)
{
  __int64 result; // rax
  _QWORD *v3; // rbx
  __int64 v4; // rax
  _QWORD *v5; // r12
  void *v6; // rdi
  _QWORD *v7; // rbx
  __int64 v8; // rax
  _QWORD *v9; // r12
  void *v10; // rdi
  __int64 v11; // rdi

  sub_2334C0(a1 + 98);
  sub_2334C0(a1 + 96);
  sub_2334C0(a1 + 94);
  a1[25] = (__int64)&off_1C4CA80;
  sub_267D20(a1 + 25);
  result = sub_3BEED0(a1 + 9);
  v3 = (_QWORD *)a1[6];
  if ( v3 )
  {
    v4 = *((unsigned int *)v3 - 1);
    if ( (_DWORD)v4 )
    {
      v5 = &v3[v4];
      do
      {
        while ( *v3 )
        {
          v6 = (void *)(*v3++ - 8LL);
          sub_186B220(v6);
          if ( v5 == v3 )
          {
            v3 = (_QWORD *)a1[6];
            goto LABEL_7;
          }
        }
        ++v3;
      }
      while ( v5 != v3 );
      v3 = (_QWORD *)a1[6];
    }
LABEL_7:
    result = sub_186B220(v3 - 1);
  }
  v7 = (_QWORD *)a1[4];
  if ( v7 )
  {
    v8 = *((unsigned int *)v7 - 1);
    if ( (_DWORD)v8 )
    {
      v9 = &v7[v8];
      do
      {
        while ( *v7 )
        {
          v10 = (void *)(*v7++ - 8LL);
          sub_186B220(v10);
          if ( v7 == v9 )
          {
            v7 = (_QWORD *)a1[4];
            goto LABEL_14;
          }
        }
        ++v7;
      }
      while ( v9 != v7 );
      v7 = (_QWORD *)a1[4];
    }
LABEL_14:
    result = sub_186B220(v7 - 1);
  }
  v11 = a1[3];
  if ( v11 )
    return sub_186B220((void *)(v11 - 8));
  return result;
}

