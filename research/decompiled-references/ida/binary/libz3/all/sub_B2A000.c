unsigned int *__fastcall sub_B2A000(
        __int64 *a1,
        unsigned int *a2,
        unsigned int *a3,
        unsigned int *a4,
        unsigned int *a5)
{
  unsigned int *v7; // rbx
  __int64 v8; // rcx
  unsigned int *result; // rax
  unsigned int *v10; // r14
  __int64 v11; // rax
  unsigned int *v12; // rax
  __int64 v13; // [rsp+8h] [rbp-40h]
  __int64 v14; // [rsp+8h] [rbp-40h]

  v7 = a3;
  v8 = *a1;
  if ( !a4 )
  {
    if ( !a2 )
    {
      result = a5;
      v10 = a5;
      if ( !a3 )
        return result;
      goto LABEL_9;
    }
    v10 = a5;
    if ( a3 )
    {
      if ( a2 != a3 )
      {
        v11 = *a1;
        goto LABEL_8;
      }
    }
    else
    {
      v7 = a2;
    }
LABEL_9:
    result = v7;
    if ( !v10 )
      return result;
    goto LABEL_10;
  }
  if ( !a5 || a4 == a5 )
  {
    if ( a2 )
    {
      if ( !a3 )
      {
        v10 = a4;
        v7 = a2;
        goto LABEL_10;
      }
      if ( a2 != a3 )
      {
        v10 = a4;
        v11 = *a1;
        goto LABEL_8;
      }
    }
    else
    {
      result = a4;
      if ( !a3 )
        return result;
    }
    v10 = a4;
    goto LABEL_10;
  }
  v13 = *a1;
  result = (unsigned int *)sub_180C100(*(_QWORD *)(v8 + 56), 24);
  v8 = v13;
  v10 = result;
  *a4 = (*a4 + 1) & 0x3FFFFFFF | *a4 & 0xC0000000;
  *a5 = (*a5 + 1) & 0x3FFFFFFF | *a5 & 0xC0000000;
  *(_QWORD *)result = 0;
  *((_QWORD *)result + 1) = a4;
  *((_QWORD *)result + 2) = a5;
  if ( !a2 )
  {
    if ( !v7 )
      return result;
    goto LABEL_10;
  }
  if ( v7 )
  {
    if ( a2 != v7 )
    {
      v11 = *a1;
LABEL_8:
      v14 = v8;
      v12 = (unsigned int *)sub_180C100(*(_QWORD *)(v11 + 56), 24);
      v8 = v14;
      *a2 = (*a2 + 1) & 0x3FFFFFFF | *a2 & 0xC0000000;
      *v7 = (*v7 + 1) & 0x3FFFFFFF | *v7 & 0xC0000000;
      *(_QWORD *)v12 = 0;
      *((_QWORD *)v12 + 1) = a2;
      *((_QWORD *)v12 + 2) = v7;
      v7 = v12;
      goto LABEL_9;
    }
  }
  else
  {
    v7 = a2;
  }
LABEL_10:
  result = v7;
  if ( v7 != v10 )
  {
    result = (unsigned int *)sub_180C100(*(_QWORD *)(v8 + 56), 24);
    *v7 = (*v7 + 1) & 0x3FFFFFFF | *v7 & 0xC0000000;
    *v10 = (*v10 + 1) & 0x3FFFFFFF | *v10 & 0xC0000000;
    *(_QWORD *)result = 0;
    *((_QWORD *)result + 1) = v7;
    *((_QWORD *)result + 2) = v10;
  }
  return result;
}

