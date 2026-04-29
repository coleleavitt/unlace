__int64 __fastcall sub_278E40(_QWORD *a1, _QWORD *a2)
{
  _QWORD *v4; // rax
  unsigned __int64 v5; // rbp
  int v6; // edi
  int v7; // esi
  int v8; // r12d
  unsigned __int64 v9; // rdx
  _QWORD *v10; // rcx
  _QWORD *v11; // rdx
  _QWORD *i; // rax
  _QWORD *v14; // rax
  __int64 v15; // rdx
  _QWORD *v16; // rcx
  _QWORD *v17; // rax
  __int64 v18; // rdx
  unsigned __int64 v19; // rsi

  if ( a2 )
    clear_tinfo_t(a2);
  v4 = (_QWORD *)*a1;
  if ( *a1 )
  {
    if ( a1[1] )
    {
      v5 = v4[1];
      if ( v4 != (_QWORD *)v5 )
      {
        v6 = -1;
        while ( 1 )
        {
          while ( 1 )
          {
            v7 = *(_DWORD *)(v5 + 56);
            if ( v7 > 0 && (*(_DWORD *)(v5 + 44) % v7 || *(_DWORD *)(v5 + 40) % v7) )
              return (unsigned int)-1;
            v8 = *(_DWORD *)(v5 + 56);
            if ( v8 > 0 )
            {
              if ( v6 != -1 && v8 != v6 )
                return (unsigned int)-1;
              if ( a2 && (unsigned int)sub_278680(a2, (_QWORD *)(v5 + 48)) == -1 )
              {
                copy_tinfo_t(a2, v5 + 48);
                set_tinfo_property(a2, 6, 192);
              }
              v6 = v8;
            }
            if ( (*(_QWORD *)v5 & 2) == 0 )
              break;
LABEL_20:
            if ( *a1 == v5 )
              goto LABEL_21;
          }
          v9 = *(_QWORD *)(v5 + 16);
          if ( (*(_BYTE *)v9 & 2) == 0 )
          {
            do
            {
              v5 = v9;
              v9 = *(_QWORD *)(v9 + 8);
            }
            while ( (*(_BYTE *)v9 & 2) == 0 );
            goto LABEL_20;
          }
          v14 = (_QWORD *)(*(_QWORD *)v5 & 0xFFFFFFFFFFFFFFFCLL);
          v15 = *v14;
          if ( (*v14 & 2) == 0 && v14[2] == v5 )
          {
            do
            {
              v5 = v15 & 0xFFFFFFFFFFFFFFFCLL;
              v15 = *(_QWORD *)(v15 & 0xFFFFFFFFFFFFFFFCLL);
              if ( (v15 & 2) != 0 )
                goto LABEL_20;
              v16 = v14;
              v14 = (_QWORD *)v5;
            }
            while ( *(_QWORD **)(v5 + 16) == v16 );
          }
          v5 = (unsigned __int64)v14;
          if ( (_QWORD *)*a1 == v14 )
          {
LABEL_21:
            if ( v6 > 0 && v5 && a1[1] )
            {
              v10 = *(_QWORD **)(v5 + 8);
LABEL_25:
              while ( v10 != (_QWORD *)v5 )
              {
                if ( *((_DWORD *)v10 + 11) % v6 )
                  return (unsigned int)-1;
                if ( (*v10 & 2) != 0 )
                {
                  while ( 1 )
                    ;
                }
                v11 = (_QWORD *)v10[2];
                if ( (*(_BYTE *)v11 & 2) != 0 )
                {
                  v17 = (_QWORD *)(*v10 & 0xFFFFFFFFFFFFFFFCLL);
                  v18 = *v17;
                  if ( (*v17 & 2) == 0 )
                  {
                    while ( (_QWORD *)v17[2] == v10 )
                    {
                      v10 = v17;
                      v19 = v18 & 0xFFFFFFFFFFFFFFFCLL;
                      v18 = *(_QWORD *)(v18 & 0xFFFFFFFFFFFFFFFCLL);
                      if ( (v18 & 2) != 0 )
                      {
                        v10 = (_QWORD *)v19;
                        goto LABEL_25;
                      }
                      v17 = (_QWORD *)v19;
                    }
                  }
                  v10 = v17;
                }
                else
                {
                  for ( i = (_QWORD *)v11[1]; (*(_BYTE *)i & 2) == 0; i = (_QWORD *)i[1] )
                    v11 = i;
                  v10 = v11;
                }
              }
            }
            return (unsigned int)v6;
          }
        }
      }
    }
  }
  return (unsigned int)-1;
}
