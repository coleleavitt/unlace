_QWORD *__fastcall sub_3BF260(__int64 a1, char a2)
{
  __int64 v2; // r12
  _QWORD *v3; // r15
  _QWORD *v6; // r14
  _QWORD *v7; // rax
  __int64 v8; // r13
  _QWORD **v9; // r12
  _QWORD *v10; // rbx
  _BYTE *v11; // rdx
  int v12; // esi
  _BYTE *v13; // rax
  _QWORD *v14; // rdx
  _QWORD *i; // rax
  _QWORD *v16; // rax
  __int64 v17; // rdx
  unsigned __int64 v18; // rsi
  _QWORD *v19; // [rsp+0h] [rbp-68h]

  if ( a1 )
  {
    if ( *(_DWORD *)(a1 + 80) == 1 )
    {
      v2 = *(_QWORD *)(a1 + 88);
      if ( *(_DWORD *)(v2 + 8) == 68 && !strcmp(*(const char **)(v2 + 24), "CONTAINING_RECORD") )
      {
        v6 = *(_QWORD **)(a1 + 32);
        v7 = (_QWORD *)sub_2542B0(v6 + 2, v2);
        v3 = v7;
        if ( v7 )
        {
          v8 = *v7;
          v9 = (_QWORD **)v6[10];
          v10 = *v9;
          if ( *v9 )
          {
            v11 = (_BYTE *)(*v10 & 0xFFFFFFFFFFFFFFFCLL);
            if ( !v11 )
            {
              v10 = 0;
              goto LABEL_16;
            }
            if ( (*v11 & 2) == 0 )
            {
              while ( 1 )
              {
                v19 = v11;
                v12 = sub_255180(v11 + 24);
                v13 = (_BYTE *)v19[1];
                if ( v12 < 0 )
                  v13 = (_BYTE *)v19[2];
                else
                  v10 = v19;
                if ( (*v13 & 2) != 0 )
                  break;
                v11 = v13;
              }
              if ( *v9 != v10 )
              {
LABEL_16:
                while ( v8 == v10[3] )
                {
                  if ( (unsigned __int8)is_stroff() )
                  {
                    if ( a2 )
                    {
                      sub_342930(v9, v10);
                      sub_2B3630(*(_QWORD *)(v6[27] + 112LL), *v6, v6[10]);
                    }
                    return v3;
                  }
                  if ( (*v10 & 2) == 0 )
                  {
                    v14 = (_QWORD *)v10[2];
                    if ( (*(_BYTE *)v14 & 2) != 0 )
                    {
                      v16 = (_QWORD *)(*v10 & 0xFFFFFFFFFFFFFFFCLL);
                      v17 = *v16;
                      if ( (*v16 & 2) == 0 )
                      {
                        while ( (_QWORD *)v16[2] == v10 )
                        {
                          v10 = v16;
                          v18 = v17 & 0xFFFFFFFFFFFFFFFCLL;
                          v17 = *(_QWORD *)(v17 & 0xFFFFFFFFFFFFFFFCLL);
                          if ( (v17 & 2) != 0 )
                          {
                            v10 = (_QWORD *)v18;
                            goto LABEL_23;
                          }
                          v16 = (_QWORD *)v18;
                        }
                      }
                      v10 = v16;
                    }
                    else
                    {
                      for ( i = (_QWORD *)v14[1]; (*(_BYTE *)i & 2) == 0; i = (_QWORD *)i[1] )
                        v14 = i;
                      v10 = v14;
                    }
                  }
LABEL_23:
                  if ( v10 == *v9 )
                    return 0;
                }
              }
            }
          }
        }
      }
    }
  }
  return 0;
}
