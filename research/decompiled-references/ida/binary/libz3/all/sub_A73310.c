__int64 __fastcall sub_A73310(__int64 a1)
{
  __int64 v1; // rbp
  _QWORD *v2; // rbx
  __int64 result; // rax
  _QWORD *v4; // r12
  __int64 v5; // rsi
  __int64 v6; // rdi
  bool v7; // zf
  __int64 v8; // rsi
  __int64 v9; // rdi

  v1 = *(_QWORD *)(a1 + 64);
  v2 = *(_QWORD **)(v1 + 896);
  *(_DWORD *)(v1 + 880) = -2;
  if ( v2 )
  {
    result = *((unsigned int *)v2 - 1);
    v4 = &v2[result];
    if ( v2 >= v4 )
      goto LABEL_9;
    do
    {
      while ( 1 )
      {
        v5 = *v2;
        if ( *v2 )
        {
          v6 = *(_QWORD *)(v1 + 888);
          v7 = (*(_DWORD *)(v5 + 8))-- == 1;
          if ( v7 )
            break;
        }
        if ( ++v2 >= v4 )
          goto LABEL_8;
      }
      result = sub_15D7BC0(v6, v5);
      ++v2;
    }
    while ( v2 < v4 );
LABEL_8:
    v2 = *(_QWORD **)(v1 + 896);
    if ( v2 )
LABEL_9:
      *((_DWORD *)v2 - 1) = 0;
  }
  v8 = *(_QWORD *)(v1 + 904);
  if ( v8 && (v9 = *(_QWORD *)(v1 + 912), v7 = *(_DWORD *)(v8 + 8) == 1, --*(_DWORD *)(v8 + 8), v7) )
  {
    result = sub_15D7BC0(v9, v8);
    *(_QWORD *)(v1 + 904) = 0;
  }
  else
  {
    *(_QWORD *)(v1 + 904) = 0;
  }
  return result;
}

