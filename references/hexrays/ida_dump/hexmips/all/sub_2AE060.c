_QWORD *__fastcall sub_2AE060(__int64 a1, __int64 *a2)
{
  __int64 v2; // rdx
  __int64 v3; // r13
  _QWORD *result; // rax
  unsigned __int64 v5; // r12
  __int64 v6; // rax
  int v7; // ebx
  __int64 v8; // rax
  unsigned __int64 v9; // rdx
  unsigned __int64 i; // rax
  _QWORD *v11; // rax
  __int64 v12; // rdx
  _QWORD *v13; // rcx

  sub_2ACAA0(a2, 1);
  sub_32D120(a2, *(unsigned int *)(*(_QWORD *)(a1 + 24) + 8LL));
  v2 = *(_QWORD *)(a1 + 24);
  v3 = *(_QWORD *)(a1 + 8);
  result = *(_QWORD **)v2;
  if ( *(_QWORD *)v2 )
  {
    if ( *(_QWORD *)(v2 + 8) )
    {
      v5 = result[1];
      if ( result != (_QWORD *)v5 )
      {
        do
        {
          v6 = v3;
          v3 = *(_QWORD *)(v5 + 24);
          sub_32D3E0(a2, v3 - v6);
          sub_32D120(a2, *(unsigned int *)(v5 + 40));
          if ( *(_QWORD *)(v5 + 40) )
          {
            v7 = 0;
            v8 = 0;
            do
            {
              ++v7;
              sub_32D120(a2, *(unsigned int *)(*(_QWORD *)(v5 + 32) + 4 * v8));
              v8 = v7;
            }
            while ( (unsigned __int64)v7 < *(_QWORD *)(v5 + 40) );
          }
          if ( (*(_QWORD *)v5 & 2) == 0 )
          {
            v9 = *(_QWORD *)(v5 + 16);
            if ( (*(_BYTE *)v9 & 2) != 0 )
            {
              v11 = (_QWORD *)(*(_QWORD *)v5 & 0xFFFFFFFFFFFFFFFCLL);
              v12 = *v11;
              if ( (*v11 & 2) == 0 )
              {
                while ( v11[2] == v5 )
                {
                  v5 = v12 & 0xFFFFFFFFFFFFFFFCLL;
                  v12 = *(_QWORD *)(v12 & 0xFFFFFFFFFFFFFFFCLL);
                  if ( (v12 & 2) != 0 )
                    goto LABEL_12;
                  v13 = v11;
                  v11 = (_QWORD *)v5;
                  v5 = (unsigned __int64)v13;
                }
              }
              v5 = (unsigned __int64)v11;
            }
            else
            {
              for ( i = *(_QWORD *)(v9 + 8); (*(_BYTE *)i & 2) == 0; i = *(_QWORD *)(i + 8) )
                v9 = i;
              v5 = v9;
            }
          }
LABEL_12:
          result = *(_QWORD **)(a1 + 24);
        }
        while ( *result != v5 );
      }
    }
  }
  return result;
}
