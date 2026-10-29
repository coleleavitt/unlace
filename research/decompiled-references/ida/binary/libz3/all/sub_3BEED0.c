__int64 __fastcall sub_3BEED0(_QWORD *a1)
{
  _QWORD *v2; // rbx
  __int64 v3; // rax
  _QWORD *v4; // r12
  void *v5; // rdi
  _QWORD *v6; // rbx
  __int64 v7; // rax
  _QWORD *v8; // r12
  void *v9; // rdi
  __int64 v10; // rdi
  __int64 v11; // rdi
  __int64 result; // rax
  __int64 v13; // rdi
  __int64 v14; // rdi

  v2 = (_QWORD *)a1[13];
  if ( v2 )
  {
    v3 = *((unsigned int *)v2 - 1);
    if ( (_DWORD)v3 )
    {
      v4 = &v2[v3];
      do
      {
        while ( *v2 )
        {
          v5 = (void *)(*v2++ - 8LL);
          sub_186B220(v5);
          if ( v4 == v2 )
          {
            v2 = (_QWORD *)a1[13];
            goto LABEL_7;
          }
        }
        ++v2;
      }
      while ( v4 != v2 );
      v2 = (_QWORD *)a1[13];
    }
LABEL_7:
    sub_186B220(v2 - 1);
  }
  sub_2334C0(a1 + 11);
  v6 = (_QWORD *)a1[9];
  if ( v6 )
  {
    v7 = *((unsigned int *)v6 - 1);
    if ( (_DWORD)v7 )
    {
      v8 = &v6[v7];
      do
      {
        while ( *v6 )
        {
          v9 = (void *)(*v6++ - 8LL);
          sub_186B220(v9);
          if ( v6 == v8 )
          {
            v6 = (_QWORD *)a1[9];
            goto LABEL_14;
          }
        }
        ++v6;
      }
      while ( v8 != v6 );
      v6 = (_QWORD *)a1[9];
    }
LABEL_14:
    sub_186B220(v6 - 1);
  }
  v10 = a1[8];
  if ( v10 )
    sub_186B220((void *)(v10 - 8));
  v11 = a1[7];
  if ( v11 )
    sub_186B220((void *)(v11 - 8));
  result = sub_2334C0(a1 + 5);
  v13 = a1[4];
  if ( v13 )
    result = sub_186B220((void *)(v13 - 8));
  v14 = a1[1];
  if ( v14 )
    return sub_186B220((void *)(v14 - 8));
  return result;
}

