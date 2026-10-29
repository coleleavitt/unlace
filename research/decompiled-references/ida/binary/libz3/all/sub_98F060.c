__int64 __fastcall sub_98F060(__int64 *a1, __int64 *a2, __int64 *a3, __int64 *a4, __int64 a5)
{
  __int64 v6; // rax
  unsigned int v7; // ecx
  unsigned int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rsi
  __int64 result; // rax
  __int64 v12; // rcx
  __int64 v13; // r10
  __int64 v14; // r9
  __int64 v15; // rsi
  __int64 v16; // rcx
  __int64 v17; // rdi

  for ( ; a2 != a1; *(_QWORD *)(a5 - 16) = v6 )
  {
    if ( a4 == a3 )
      break;
    while ( 1 )
    {
      v7 = *((_DWORD *)a3 + 2);
      v8 = *((_DWORD *)a1 + 2);
      if ( v8 < v7 )
        break;
      v9 = *a1;
      a5 += 16;
      *(_DWORD *)(a5 - 8) = v8;
      a1 += 2;
      *(_QWORD *)(a5 - 16) = v9;
      if ( a4 == a3 || a2 == a1 )
        goto LABEL_8;
    }
    v6 = *a3;
    a5 += 16;
    *(_DWORD *)(a5 - 8) = v7;
    a3 += 2;
  }
LABEL_8:
  v10 = (char *)a2 - (char *)a1;
  result = a5;
  v12 = v10 >> 4;
  if ( v10 > 0 )
  {
    do
    {
      v13 = *a1;
      result += 16;
      a1 += 2;
      *(_QWORD *)(result - 16) = v13;
      *(_DWORD *)(result - 8) = *((_DWORD *)a1 - 2);
      --v12;
    }
    while ( v12 );
    result = a5 + v10;
  }
  v14 = (char *)a4 - (char *)a3;
  v15 = v14 >> 4;
  if ( v14 > 0 )
  {
    v16 = result;
    do
    {
      v17 = *a3;
      v16 += 16;
      a3 += 2;
      *(_QWORD *)(v16 - 16) = v17;
      *(_DWORD *)(v16 - 8) = *((_DWORD *)a3 - 2);
      --v15;
    }
    while ( v15 );
    result += v14;
  }
  return result;
}

