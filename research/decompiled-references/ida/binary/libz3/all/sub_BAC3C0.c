__int64 __fastcall sub_BAC3C0(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rbp
  __int64 v3; // rdx
  __int64 *v4; // rbp
  _QWORD *v5; // rbx
  _QWORD *v6; // r12
  __int64 v7; // rsi
  __int64 v8; // rdi

  result = *(_QWORD *)(a1 + 8);
  v2 = *(unsigned int *)(a1 + 16);
  v3 = *(_QWORD *)(*(_QWORD *)(result + 192) + 8 * v2);
  if ( v3 )
  {
    *(_DWORD *)(v3 - 4) = 0;
    v2 = *(unsigned int *)(a1 + 16);
  }
  v4 = (__int64 *)(*(_QWORD *)(result + 200) + 16 * v2);
  v5 = (_QWORD *)v4[1];
  if ( v5 )
  {
    result = *((unsigned int *)v5 - 1);
    v6 = &v5[result];
    if ( v5 >= v6 )
      goto LABEL_11;
    do
    {
      while ( 1 )
      {
        v7 = *v5;
        if ( *v5 )
        {
          v8 = *v4;
          if ( (*(_DWORD *)(v7 + 8))-- == 1 )
            break;
        }
        if ( ++v5 >= v6 )
          goto LABEL_10;
      }
      result = sub_15D7BC0(v8, v7);
      ++v5;
    }
    while ( v5 < v6 );
LABEL_10:
    v5 = (_QWORD *)v4[1];
    if ( v5 )
LABEL_11:
      *((_DWORD *)v5 - 1) = 0;
  }
  return result;
}

