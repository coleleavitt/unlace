__int64 __fastcall sub_8EB340(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v6; // rdx
  __int64 v7; // rbp
  __int64 v8; // r14
  unsigned int **v9; // rbp
  unsigned int **i; // r12
  unsigned int v11; // edx
  unsigned int *v12; // r14
  __int64 v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // rax
  _DWORD *v16; // rcx
  char v17[56]; // [rsp+0h] [rbp-38h] BYREF

  result = *(_QWORD *)(a1 + 112);
  if ( *(_BYTE *)(result + 729) )
  {
    *(_QWORD *)v17 = *(_QWORD *)(a1 + 104);
    if ( a2 && !(unsigned __int8)sub_916D30(v17) )
    {
LABEL_9:
      result = sub_1875640("Boogie generated formula that can require multiple '@' labels in a counter-example", v17[0]);
      goto LABEL_10;
    }
    result = *(_QWORD *)(a1 + 1152);
    if ( result )
    {
      v6 = *(unsigned int *)(result - 4);
      if ( (_DWORD)v6 )
      {
        v7 = 0;
        v8 = 24 * v6;
        do
        {
          result = sub_916D30(v17);
          if ( !(_BYTE)result )
            goto LABEL_9;
          v7 += 24;
        }
        while ( v7 != v8 );
      }
    }
  }
LABEL_10:
  v9 = *(unsigned int ***)(a1 + 8560);
  if ( v9 )
  {
    result = *((unsigned int *)v9 - 1);
    for ( i = &v9[result]; i != v9; result = sub_15D3050(v13, v12, a3) )
    {
      while ( 1 )
      {
        v11 = *(_DWORD *)(a1 + 184);
        v12 = *v9;
        result = *(unsigned int *)(*(_QWORD *)(a1 + 112) + 476LL);
        if ( (unsigned int)result > v11 )
          result = v11;
        if ( !(_DWORD)result
          || (result = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)(a1 + 7488) + 56LL))(
                         *(_QWORD *)(a1 + 7488),
                         *v9),
              (_BYTE)result) )
        {
          v13 = *(_QWORD *)(a1 + 104);
          if ( v12 != *(unsigned int **)(v13 + 864) )
          {
            v14 = *(_QWORD *)(a1 + 8832);
            v15 = *(_QWORD *)(a1 + 8848);
            if ( !*((_WORD *)v12 + 2)
              && (v16 = *(_DWORD **)(*((_QWORD *)v12 + 2) + 24LL)) != nullptr
              && !*v16
              && v16[1] == 8
              && v12[6] == 1 )
            {
              result = (unsigned int)-*(char *)(v15
                                              + (unsigned int)(2 * *(_DWORD *)(v14 + 4LL * **((unsigned int **)v12 + 4))));
            }
            else
            {
              result = (unsigned int)*(char *)(v15 + (unsigned int)(2 * *(_DWORD *)(v14 + 4LL * *v12)));
            }
            if ( (_DWORD)result == 1 )
              break;
          }
        }
        if ( i == ++v9 )
          return result;
      }
      ++v9;
    }
  }
  return result;
}

