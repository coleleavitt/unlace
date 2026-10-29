__int64 __fastcall sub_DAB460(__int64 a1)
{
  _QWORD *v2; // rbx
  _QWORD *v3; // rbp
  _QWORD *v4; // rax
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rbp
  __int64 v8; // rbx
  __int64 v9; // rsi
  void *v10; // rdi
  __int64 result; // rax

  v2 = *(_QWORD **)(a1 + 24);
  v3 = &v2[2 * *(unsigned int *)(a1 + 32)];
  if ( v2 != v3 )
  {
    while ( *v2 <= 1u )
    {
      v2 += 2;
      if ( v3 == v2 )
        goto LABEL_9;
    }
    while ( v3 != v2 )
    {
      sub_DAAB00(*(_QWORD *)a1, v2[1] & 0xFFFFFFFFFFFFFFFELL);
      v4 = v2 + 2;
      if ( v3 == v2 + 2 )
        break;
      while ( 1 )
      {
        v2 = v4;
        if ( *v4 > 1u )
          break;
        v4 += 2;
        if ( v3 == v4 )
          goto LABEL_9;
      }
    }
  }
LABEL_9:
  v5 = *(_QWORD *)(a1 + 16);
  if ( v5 )
  {
    v6 = *(unsigned int *)(v5 - 4);
    if ( !(_DWORD)v6 )
      goto LABEL_14;
    v7 = 8 * v6;
    v8 = 0;
    do
    {
      v9 = *(_QWORD *)(v5 + v8);
      v8 += 8;
      sub_DAAB00(*(_QWORD *)a1, v9 & 0xFFFFFFFFFFFFFFFELL);
      v5 = *(_QWORD *)(a1 + 16);
    }
    while ( v8 != v7 );
    if ( v5 )
LABEL_14:
      *(_DWORD *)(v5 - 4) = 0;
  }
  v10 = *(void **)(a1 + 24);
  if ( v10 )
  {
    sub_186B220(v10);
    v5 = *(_QWORD *)(a1 + 16);
  }
  if ( v5 )
    sub_186B220((void *)(v5 - 8));
  result = *(_QWORD *)(a1 + 8);
  if ( result )
    return sub_186B220((void *)(result - 8));
  return result;
}

