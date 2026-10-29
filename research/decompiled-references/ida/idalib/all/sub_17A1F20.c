_QWORD *__fastcall sub_17A1F20(__int64 a1, __int64 a2)
{
  unsigned __int8 v4; // al
  _QWORD *v5; // rdx
  __int64 v6; // rdi
  _QWORD *v7; // rcx
  _QWORD *v8; // rax
  _QWORD *v9; // rcx
  _QWORD *v10; // rax
  _QWORD *v11; // rdx
  _QWORD *v12; // rdx
  __int64 v13; // rdi
  _QWORD *v14; // rsi
  _QWORD *result; // rax
  _QWORD *v16; // rdx
  _QWORD *v17; // rcx

  v4 = *(_BYTE *)(a2 + 28) & 0x7F;
  if ( (unsigned int)v4 - 40 <= 6 && v4 != 43 )
  {
    if ( !*(_BYTE *)(a1 + 452) )
      goto LABEL_34;
    v5 = *(_QWORD **)(a1 + 432);
    v6 = *(unsigned int *)(a1 + 444);
    v7 = &v5[v6];
    if ( v5 != v7 )
    {
      v8 = v5;
      if ( a2 == *v5 )
        goto LABEL_11;
      do
      {
        if ( v7 == ++v8 )
          break;
      }
      while ( a2 != *v8 );
    }
    if ( (unsigned int)v6 < *(_DWORD *)(a1 + 440) )
    {
      *(_DWORD *)(a1 + 444) = v6 + 1;
      *v7 = a2;
      v5 = *(_QWORD **)(a1 + 432);
      v8 = &v5[v6];
    }
    else
    {
LABEL_34:
      v8 = (_QWORD *)sub_2236760(a1 + 432, a2);
      v5 = *(_QWORD **)(a1 + 432);
      if ( !*(_BYTE *)(a1 + 452) )
      {
        v9 = &v5[*(unsigned int *)(a1 + 440)];
        goto LABEL_12;
      }
    }
LABEL_11:
    v9 = &v5[*(unsigned int *)(a1 + 444)];
LABEL_12:
    if ( v8 != v9 && *v8 >= 0xFFFFFFFFFFFFFFFELL )
    {
      v10 = v8 + 1;
      do
      {
        v11 = v10;
        if ( v9 == v10 )
          break;
        ++v10;
      }
      while ( *v11 >= 0xFFFFFFFFFFFFFFFELL );
    }
  }
  if ( !*(_BYTE *)(a1 + 100) )
    goto LABEL_26;
  v12 = *(_QWORD **)(a1 + 80);
  v13 = *(unsigned int *)(a1 + 92);
  v14 = &v12[v13];
  if ( v12 != v14 )
  {
    result = *(_QWORD **)(a1 + 80);
    if ( a2 == *v12 )
      goto LABEL_25;
    do
    {
      if ( v14 == ++result )
        break;
    }
    while ( a2 != *result );
  }
  if ( (unsigned int)v13 < *(_DWORD *)(a1 + 88) )
  {
    *(_DWORD *)(a1 + 92) = v13 + 1;
    *v14 = a2;
    v12 = *(_QWORD **)(a1 + 80);
    result = &v12[v13];
  }
  else
  {
LABEL_26:
    result = (_QWORD *)sub_2236760(a1 + 80, a2);
    v12 = *(_QWORD **)(a1 + 80);
    if ( !*(_BYTE *)(a1 + 100) )
    {
      v16 = &v12[*(unsigned int *)(a1 + 88)];
      goto LABEL_28;
    }
  }
LABEL_25:
  v16 = &v12[*(unsigned int *)(a1 + 92)];
LABEL_28:
  if ( result != v16 && *result >= 0xFFFFFFFFFFFFFFFELL )
  {
    ++result;
    do
    {
      v17 = result;
      if ( v16 == result )
        break;
      ++result;
    }
    while ( *v17 >= 0xFFFFFFFFFFFFFFFELL );
  }
  return result;
}
