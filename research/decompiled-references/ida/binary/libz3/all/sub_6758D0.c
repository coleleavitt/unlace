__int64 __fastcall sub_6758D0(_QWORD *a1, __int64 *a2)
{
  _QWORD *v4; // rbx
  _QWORD *v5; // r12
  __int64 v6; // rsi
  __int64 v7; // rdi
  bool v8; // zf
  __int64 result; // rax
  void (__fastcall ***v10)(void *); // rbx
  __int64 *v11; // rbx
  __int64 *i; // rbp
  __int64 v13; // rdi

  v4 = (_QWORD *)a1[3];
  if ( v4 )
  {
    v5 = &v4[*((unsigned int *)v4 - 1)];
    if ( v4 >= v5 )
      goto LABEL_9;
    do
    {
      while ( 1 )
      {
        v6 = *v4;
        if ( *v4 )
        {
          v7 = a1[2];
          v8 = (*(_DWORD *)(v6 + 8))-- == 1;
          if ( v8 )
            break;
        }
        if ( ++v4 >= v5 )
          goto LABEL_8;
      }
      sub_15D7BC0(v7, v6);
      ++v4;
    }
    while ( v4 < v5 );
LABEL_8:
    v4 = (_QWORD *)a1[3];
    if ( v4 )
LABEL_9:
      *((_DWORD *)v4 - 1) = 0;
  }
  result = *a2;
  if ( *a2 )
    ++*(_DWORD *)(result + 16);
  v10 = (void (__fastcall ***)(void *))a1[8];
  if ( v10 )
  {
    v8 = (*((_DWORD *)v10 + 4))-- == 1;
    if ( v8 )
    {
      (**v10)(v10);
      sub_186B220(v10);
      result = *a2;
    }
  }
  v11 = (__int64 *)a1[7];
  a1[8] = result;
  if ( v11 )
  {
    result = *((unsigned int *)v11 - 1);
    for ( i = &v11[result]; i != v11; result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 80LL))(v13) )
      v13 = *v11++;
  }
  return result;
}

