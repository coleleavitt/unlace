__int64 __fastcall sub_DFF430(_QWORD *a1)
{
  _QWORD *v2; // rbx
  __int64 result; // rax
  _QWORD *v4; // r13
  __int64 v5; // r12
  __int64 v6; // rdi
  bool v7; // zf
  _QWORD *v8; // rbx
  _QWORD *v9; // r13
  __int64 v10; // r12
  __int64 v11; // rdi

  v2 = (_QWORD *)a1[99];
  if ( v2 )
  {
    result = *((unsigned int *)v2 - 1);
    v4 = &v2[result];
    if ( v4 == v2 )
      goto LABEL_9;
    do
    {
      while ( 1 )
      {
        v5 = *v2;
        result = sub_DFBCB0(a1);
        if ( v5 )
        {
          v6 = a1[37];
          v7 = (*(_DWORD *)(v5 + 8))-- == 1;
          if ( v7 )
            break;
        }
        if ( v4 == ++v2 )
          goto LABEL_8;
      }
      ++v2;
      result = sub_15D7BC0(v6, v5);
    }
    while ( v4 != v2 );
LABEL_8:
    v2 = (_QWORD *)a1[99];
    if ( v2 )
LABEL_9:
      *((_DWORD *)v2 - 1) = 0;
  }
  v8 = (_QWORD *)a1[95];
  if ( v8 )
  {
    result = *((unsigned int *)v8 - 1);
    v9 = &v8[result];
    if ( v9 == v8 )
      goto LABEL_18;
    do
    {
      while ( 1 )
      {
        v10 = *v8;
        result = sub_DFBCB0(a1);
        if ( v10 )
        {
          v11 = a1[37];
          v7 = (*(_DWORD *)(v10 + 8))-- == 1;
          if ( v7 )
            break;
        }
        if ( v9 == ++v8 )
          goto LABEL_17;
      }
      ++v8;
      result = sub_15D7BC0(v11, v10);
    }
    while ( v9 != v8 );
LABEL_17:
    v8 = (_QWORD *)a1[95];
    if ( v8 )
LABEL_18:
      *((_DWORD *)v8 - 1) = 0;
  }
  return result;
}

