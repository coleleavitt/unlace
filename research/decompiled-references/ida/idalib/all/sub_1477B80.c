__int64 __fastcall sub_1477B80(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v5; // rbx
  __int64 i; // r10
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // r10
  __int64 v11; // r8
  __int64 v12; // rax

  result = a3 - 1;
  v5 = (a3 - 1) / 2;
  if ( a2 < v5 )
  {
    for ( i = a2; ; i = v7 )
    {
      v7 = 2 * (i + 1);
      v8 = a1 + 16 * (i + 1);
      if ( *(_DWORD *)(*(_QWORD *)v8 + 24LL) < *(_DWORD *)(*(_QWORD *)(v8 - 8) + 24LL) )
      {
        --v7;
        v8 = a1 + 8 * v7;
        *(_QWORD *)(a1 + 8 * i) = *(_QWORD *)v8;
        if ( v7 >= v5 )
          goto LABEL_7;
      }
      else
      {
        *(_QWORD *)(a1 + 8 * i) = *(_QWORD *)v8;
        if ( v7 >= v5 )
        {
LABEL_7:
          if ( (a3 & 1) != 0 )
            goto LABEL_8;
          goto LABEL_16;
        }
      }
    }
  }
  v8 = a1 + 8 * a2;
  if ( (a3 & 1) == 0 )
  {
    v7 = a2;
LABEL_16:
    if ( v7 == (a3 - 2) / 2 )
    {
      v11 = 2 * v7 + 2;
      v12 = *(_QWORD *)(a1 + 8 * v11 - 8);
      v7 = v11 - 1;
      *(_QWORD *)v8 = v12;
      v8 = a1 + 8 * v7;
    }
LABEL_8:
    result = v7 - 1;
    v9 = (v7 - 1) / 2;
    if ( v7 > a2 )
    {
      v10 = *(_QWORD *)(a1 + 8 * v9);
      result = *(unsigned int *)(v10 + 24);
      if ( *(_DWORD *)(a4 + 24) > (unsigned int)result )
      {
        do
        {
          *(_QWORD *)(a1 + 8 * v7) = v10;
          v8 = a1 + 8 * v9;
          result = (v9 - 1) / 2;
          if ( a2 >= v9 )
            break;
          v10 = *(_QWORD *)(a1 + 8 * result);
          v7 = v9;
          v9 = (v9 - 1) / 2;
          result = *(unsigned int *)(a4 + 24);
        }
        while ( *(_DWORD *)(v10 + 24) < (unsigned int)result );
      }
    }
  }
  *(_QWORD *)v8 = a4;
  return result;
}
