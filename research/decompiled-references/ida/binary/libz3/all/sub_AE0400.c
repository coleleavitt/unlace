__int64 __fastcall sub_AE0400(_QWORD *a1)
{
  _QWORD *v2; // rbx
  _QWORD *v3; // r12
  __int64 v4; // rsi
  __int64 v5; // rdi
  __int64 result; // rax

  v2 = (_QWORD *)a1[19];
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
          v5 = a1[18];
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
    v2 = (_QWORD *)a1[19];
    if ( v2 )
LABEL_9:
      *((_DWORD *)v2 - 1) = 0;
  }
  result = a1[17];
  if ( result )
    *(_DWORD *)(result - 4) = 0;
  return result;
}

