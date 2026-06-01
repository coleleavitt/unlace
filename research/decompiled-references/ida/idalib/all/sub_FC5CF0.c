unsigned int *__fastcall sub_FC5CF0(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, unsigned __int64 a5)
{
  __int64 v5; // rbp
  __int64 v6; // r9
  unsigned __int64 v7; // r13
  unsigned int v8; // ebx
  unsigned int *result; // rax
  __int64 v10; // r10
  __int64 v11; // r9
  unsigned int *v12; // r11
  __int64 v13; // rdx
  unsigned int v14; // r9d
  unsigned __int64 v15; // r11
  __int64 v16; // r10
  unsigned int *v17; // rdx

  v5 = (a3 - 1) / 2;
  if ( a2 >= v5 )
  {
    v10 = a2;
    result = (unsigned int *)(a1 + 16 * a2);
    if ( (a3 & 1) != 0 )
      goto LABEL_17;
    goto LABEL_20;
  }
  v6 = a2;
  do
  {
    v10 = 2 * (v6 + 1);
    result = (unsigned int *)(a1 + 32 * (v6 + 1));
    v8 = *result;
    v12 = (unsigned int *)(a1 + 16 * (v10 - 1));
    if ( *result < *v12 )
    {
      v7 = *((_QWORD *)v12 + 1);
      v8 = *v12;
      result = (unsigned int *)(a1 + 16 * --v10);
    }
    else
    {
      v7 = *((_QWORD *)result + 1);
      if ( v8 == *v12 && *((_QWORD *)v12 + 1) > v7 )
      {
        v7 = *((_QWORD *)v12 + 1);
        result = (unsigned int *)(a1 + 16 * --v10);
      }
    }
    v11 = a1 + 16 * v6;
    *(_DWORD *)v11 = v8;
    *(_QWORD *)(v11 + 8) = v7;
    v6 = v10;
  }
  while ( v10 < v5 );
  if ( (a3 & 1) == 0 )
  {
LABEL_20:
    if ( (a3 - 2) / 2 == v10 )
    {
      v10 = 2 * v10 + 1;
      v17 = (unsigned int *)(a1 + 16 * v10);
      *result = *v17;
      *((_QWORD *)result + 1) = *((_QWORD *)v17 + 1);
      result = v17;
    }
  }
  v13 = (v10 - 1) / 2;
  if ( v10 > a2 )
  {
    while ( 1 )
    {
      result = (unsigned int *)(a1 + 16 * v13);
      v14 = *result;
      if ( a4 > *result )
      {
        v15 = *((_QWORD *)result + 1);
      }
      else if ( a4 != v14 || (v15 = *((_QWORD *)result + 1), a5 <= v15) )
      {
        result = (unsigned int *)(a1 + 16 * v10);
        break;
      }
      v16 = a1 + 16 * v10;
      *(_DWORD *)v16 = v14;
      *(_QWORD *)(v16 + 8) = v15;
      v10 = v13;
      if ( a2 >= v13 )
        break;
      v13 = (v13 - 1) / 2;
    }
  }
LABEL_17:
  *result = a4;
  *((_QWORD *)result + 1) = a5;
  return result;
}
