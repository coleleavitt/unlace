__int64 __fastcall sub_2FCDE0(__int64 *a1)
{
  _QWORD *v1; // rbx
  __int64 result; // rax
  _QWORD *v4; // r12
  __int64 v5; // rsi
  __int64 v6; // rdi

  v1 = (_QWORD *)a1[1];
  if ( v1 )
  {
    result = *((unsigned int *)v1 - 1);
    v4 = &v1[result];
    if ( v1 >= v4 )
      goto LABEL_9;
    do
    {
      while ( 1 )
      {
        v5 = *v1;
        if ( *v1 )
        {
          v6 = *a1;
          if ( (*(_DWORD *)(v5 + 8))-- == 1 )
            break;
        }
        if ( ++v1 >= v4 )
          goto LABEL_8;
      }
      result = sub_15D7BC0(v6, v5);
      ++v1;
    }
    while ( v1 < v4 );
LABEL_8:
    v1 = (_QWORD *)a1[1];
    if ( v1 )
LABEL_9:
      *((_DWORD *)v1 - 1) = 0;
  }
  return result;
}

