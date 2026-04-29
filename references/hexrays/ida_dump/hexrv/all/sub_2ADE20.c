_QWORD *__fastcall sub_2ADE20(__int64 a1, __int64 *a2)
{
  __int64 v3; // rdx
  _QWORD *result; // rax
  _QWORD *v5; // rbp
  __int64 v6; // r12
  int v7; // r9d
  unsigned __int64 v8; // r14
  __int64 v9; // r8
  __int64 v10; // rsi
  _QWORD *v11; // rdx
  __int64 v12; // rax
  _QWORD *v13; // rax
  __int64 v14; // rdx
  unsigned __int64 v15; // rcx
  __int64 v16; // [rsp+0h] [rbp-48h]
  int v17; // [rsp+Ch] [rbp-3Ch]

  sub_2AC720(a2, 2);
  sub_32CDA0(a2, *(unsigned int *)(*(_QWORD *)(a1 + 24) + 8LL));
  v3 = *(_QWORD *)(a1 + 24);
  result = *(_QWORD **)v3;
  if ( *(_QWORD *)v3 )
  {
    if ( *(_QWORD *)(v3 + 8) )
    {
      v5 = (_QWORD *)result[1];
      if ( result != v5 )
      {
        while ( 1 )
        {
LABEL_4:
          sub_32D060(a2, v5[3] - *(_QWORD *)(a1 + 8));
          v6 = a2[1];
          v7 = *((_DWORD *)v5 + 8);
          if ( v6 )
          {
            v8 = v6 + 1;
            v9 = a2[1];
            v10 = *a2;
            --v6;
            if ( a2[2] < v8 )
              goto LABEL_12;
          }
          else
          {
            v10 = *a2;
            v9 = 1;
            v8 = 2;
            if ( (unsigned __int64)a2[2] < 2 )
            {
LABEL_12:
              v17 = *((_DWORD *)v5 + 8);
              v16 = v9;
              v12 = qvector_reserve(a2, v10, v8, 1);
              LOBYTE(v7) = v17;
              v9 = v16;
              *a2 = v12;
              v10 = v12;
            }
          }
          a2[1] = v8;
          *(_BYTE *)(v10 + v6) = v7;
          *(_BYTE *)(*a2 + v9) = 0;
          sub_32CDA0(a2, *((unsigned int *)v5 + 10));
          if ( (*v5 & 2) != 0 )
          {
LABEL_9:
            result = *(_QWORD **)(a1 + 24);
            if ( (_QWORD *)*result == v5 )
              return result;
          }
          else
          {
            v11 = (_QWORD *)v5[2];
            if ( (*(_BYTE *)v11 & 2) == 0 )
            {
              do
              {
                v5 = v11;
                v11 = (_QWORD *)v11[1];
              }
              while ( (*(_BYTE *)v11 & 2) == 0 );
              goto LABEL_9;
            }
            v13 = (_QWORD *)(*v5 & 0xFFFFFFFFFFFFFFFCLL);
            v14 = *v13;
            if ( (*v13 & 2) == 0 )
            {
              while ( (_QWORD *)v13[2] == v5 )
              {
                v5 = v13;
                v15 = v14 & 0xFFFFFFFFFFFFFFFCLL;
                v14 = *(_QWORD *)(v14 & 0xFFFFFFFFFFFFFFFCLL);
                if ( (v14 & 2) != 0 )
                {
                  result = *(_QWORD **)(a1 + 24);
                  v5 = (_QWORD *)v15;
                  if ( *result != v15 )
                    goto LABEL_4;
                  return result;
                }
                v13 = (_QWORD *)v15;
              }
            }
            v5 = v13;
            result = *(_QWORD **)(a1 + 24);
            if ( (_QWORD *)*result == v5 )
              return result;
          }
        }
      }
    }
  }
  return result;
}
