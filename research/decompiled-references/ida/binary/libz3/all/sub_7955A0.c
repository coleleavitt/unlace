__int64 __fastcall sub_7955A0(_QWORD *a1)
{
  __int64 result; // rax
  unsigned int ***v3; // rbx
  unsigned int ***v4; // r12
  __int64 v5; // rdi
  unsigned int **v6; // r13
  void **v7; // r14
  __int64 v8; // rdi
  __int64 v9; // rdi
  __int64 v10; // rdi
  __int64 v11; // rdi
  __int64 v12; // rdi

  result = (__int64)&off_1C54798;
  v3 = (unsigned int ***)a1[8];
  *a1 = &off_1C54798;
  if ( !v3 )
    goto LABEL_13;
  v4 = &v3[*((unsigned int *)v3 - 1)];
  if ( v4 == v3 )
    goto LABEL_12;
  v5 = a1[7];
  do
  {
    v6 = *v3;
    result = ***v3;
    if ( v5 )
    {
      if ( (unsigned int)result < *(_DWORD *)(v5 - 4) )
      {
        v7 = (void **)(*(_QWORD *)(v5 + 8 * result) & 0xFFFFFFFFFFFFFFF8LL);
        if ( *(_QWORD *)(v5 + 8 * result) > 7u )
        {
          if ( *v7 )
            sub_186B220(*v7);
          sub_186B220(v7);
          v5 = a1[7];
          result = **v6;
        }
      }
    }
    ++v3;
    *(_QWORD *)(v5 + 8 * result) = 0;
  }
  while ( v4 != v3 );
  v3 = (unsigned int ***)a1[8];
  if ( v3 )
  {
LABEL_12:
    result = sub_186B220(v3 - 1);
LABEL_13:
    v5 = a1[7];
  }
  if ( v5 )
    result = sub_186B220((void *)(v5 - 8));
  v8 = a1[5];
  if ( v8 )
    result = sub_186B220((void *)(v8 - 8));
  v9 = a1[4];
  if ( v9 )
    result = sub_186B220((void *)(v9 - 8));
  v10 = a1[3];
  if ( v10 )
    result = sub_186B220((void *)(v10 - 8));
  v11 = a1[2];
  if ( v11 )
    result = sub_186B220((void *)(v11 - 8));
  v12 = a1[1];
  if ( v12 )
    return sub_186B220((void *)(v12 - 8));
  return result;
}

