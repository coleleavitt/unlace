__int64 __fastcall sub_53A700(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbx
  __int64 v5; // r13
  _QWORD *i; // r15
  const char *v7; // rsi
  const char *v8; // rdi
  __int64 v9; // rax
  _QWORD *v10; // rbp
  unsigned __int64 v11; // rbx
  const char *v13; // r12
  void *v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v20; // [rsp+10h] [rbp-48h]
  __int64 v21; // [rsp+18h] [rbp-40h]

  v21 = *a1;
  v20 = a1[1];
  v4 = *a1 + 48 * v20;
  if ( *a1 != v4 )
  {
    v5 = *(_QWORD *)(a2 + 8);
    for ( i = (_QWORD *)*a1; (_QWORD *)v4 != i; i += 6 )
    {
      v9 = i[1];
      v10 = i;
      if ( v5 )
      {
        v7 = *(const char **)a2;
        v8 = &s1;
        if ( !v9 )
          goto LABEL_4;
      }
      else
      {
        if ( !v9 )
        {
LABEL_10:
          if ( i )
            goto LABEL_11;
          break;
        }
        v7 = &s1;
      }
      v8 = (const char *)*i;
LABEL_4:
      if ( !strcmp(v8, v7) )
        goto LABEL_10;
    }
  }
  if ( a1[2] < (unsigned __int64)(v20 + 1) )
  {
    v15 = qvector_reserve(a1, v21, v20 + 1, 48);
    v16 = a1[1];
    *a1 = v15;
    v4 = v15 + 48 * v16;
  }
  v10 = (_QWORD *)v4;
  *(_QWORD *)v4 = 0;
  *(_QWORD *)(v4 + 40) = 0;
  *(_OWORD *)(v4 + 8) = 0;
  *(_OWORD *)(v4 + 24) = 0;
  ++a1[1];
LABEL_11:
  if ( v10 != (_QWORD *)a2 )
  {
    v11 = *(_QWORD *)(a2 + 8);
    if ( v11 > 1 )
    {
      v13 = *(const char **)a2;
      v14 = (void *)*v10;
      if ( v10[2] < v11 )
      {
        v17 = qvector_reserve(v10, *v10, v11, 1);
        *v10 = v17;
        v14 = (void *)v17;
      }
      v10[1] = v11;
      memmove(v14, v13, v11 - 1);
      *(_BYTE *)(*v10 + v11 - 1) = 0;
    }
    else
    {
      v10[1] = 0;
    }
  }
  return QT::QByteArray::operator=(v10 + 3, a3);
}
