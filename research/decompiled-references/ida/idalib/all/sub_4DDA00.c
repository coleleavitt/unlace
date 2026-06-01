__int64 __fastcall sub_4DDA00(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, __int64 a5)
{
  __int64 result; // rax
  __int64 v6; // r10
  __int64 v8; // r13
  __int64 v9; // rbx
  unsigned int *v10; // rdx
  __int64 v11; // r9
  __int64 v12; // r9
  __int64 v13; // rsi
  __int64 v14; // rdx
  unsigned int *v15; // rbx
  __int64 v16; // [rsp+0h] [rbp-40h]
  __int64 v17; // [rsp+8h] [rbp-38h]

  result = a3 - 1;
  v6 = a2;
  v8 = (a3 - 1) / 2;
  v9 = a3 & 1;
  if ( a2 >= v8 )
  {
    v10 = (unsigned int *)(a1 + 4 * a2);
    if ( v9 )
      goto LABEL_14;
    result = (a3 - 2) / 2;
    if ( a2 != result )
      goto LABEL_14;
    result = a2;
  }
  else
  {
    v16 = a3 & 1;
    v17 = a2;
    while ( 1 )
    {
      result = 2 * (a2 + 1);
      v10 = (unsigned int *)(a1 + 8 * (a2 + 1));
      v11 = *v10;
      if ( *(_QWORD *)(*(_QWORD *)(a5 + 104) + 8 * v11) < *(_QWORD *)(*(_QWORD *)(a5 + 104)
                                                                    + 8LL * *(unsigned int *)(a1 + 4 * (result - 1))) )
      {
        LODWORD(v11) = *(_DWORD *)(a1 + 4 * (result - 1));
        v10 = (unsigned int *)(a1 + 4 * --result);
      }
      *(_DWORD *)(a1 + 4 * a2) = v11;
      if ( v8 <= result )
        break;
      a2 = result;
    }
    v6 = v17;
    if ( v16 || (a3 - 2) / 2 != result )
    {
      v12 = result - 1;
      goto LABEL_9;
    }
  }
  v12 = 2 * result;
  result = 2 * result + 1;
  *v10 = *(_DWORD *)(a1 + 4 * result);
  v10 = (unsigned int *)(a1 + 4 * result);
LABEL_9:
  v13 = v12 / 2;
  if ( result > v6 )
  {
    v14 = result;
    while ( 1 )
    {
      v15 = (unsigned int *)(a1 + 4 * v13);
      v10 = (unsigned int *)(a1 + 4 * v14);
      result = *v15;
      if ( *(_QWORD *)(*(_QWORD *)(a5 + 104) + 8 * result) >= *(_QWORD *)(*(_QWORD *)(a5 + 104) + 8LL * a4) )
        break;
      *v10 = result;
      v14 = v13;
      result = (v13 - 1) / 2;
      if ( v6 >= v13 )
      {
        *v15 = a4;
        return result;
      }
      v13 = (v13 - 1) / 2;
    }
  }
LABEL_14:
  *v10 = a4;
  return result;
}
