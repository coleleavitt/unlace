__int64 __fastcall sub_2FB5A0(_QWORD *a1, unsigned int a2)
{
  __int64 v3; // rax
  unsigned int v4; // eax
  unsigned int v5; // r12d
  int v6; // ebx
  __int64 result; // rax
  _QWORD *v8; // rbx
  _QWORD *v9; // r12
  __int64 v10; // rsi
  __int64 v11; // rdi

  v3 = a1[61];
  if ( v3 )
  {
    v4 = *(_DWORD *)(v3 - 4);
    if ( a2 <= v4 )
      v4 = a2;
    v5 = v4;
    if ( v4 )
    {
      v6 = 0;
      do
      {
        ++v6;
        sub_2FAFC0((__int64)(a1 + 55));
      }
      while ( v5 != v6 );
    }
  }
  sub_2EC9E0((__int64)a1);
  sub_2EE240((__int64)a1);
  result = sub_330280(a1 + 37);
  v8 = (_QWORD *)a1[27];
  if ( v8 )
  {
    result = *((unsigned int *)v8 - 1);
    v9 = &v8[result];
    if ( v8 >= v9 )
      goto LABEL_15;
    do
    {
      while ( 1 )
      {
        v10 = *v8;
        if ( *v8 )
        {
          v11 = a1[26];
          if ( (*(_DWORD *)(v10 + 8))-- == 1 )
            break;
        }
        if ( ++v8 >= v9 )
          goto LABEL_14;
      }
      result = sub_15D7BC0(v11, v10);
      ++v8;
    }
    while ( v8 < v9 );
LABEL_14:
    v8 = (_QWORD *)a1[27];
    if ( v8 )
LABEL_15:
      *((_DWORD *)v8 - 1) = 0;
  }
  return result;
}

