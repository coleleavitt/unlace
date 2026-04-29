__int64 __fastcall sub_1C4F70(__int64 a1, char *a2)
{
  __int64 v2; // rbx
  char v4; // al
  __int64 v5; // rdx
  char *v6; // r13
  char v7; // al
  __int64 v8; // rbp
  char v9; // al
  __int64 v10; // r13
  char *v11; // r14
  char v12; // al
  __int64 v13; // r15

  v2 = sub_1F8090(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 800LL), a2);
  if ( !v2 )
  {
    v4 = *a2;
    if ( *a2 != 14 )
    {
      v5 = *(_QWORD *)(a1 + 8);
      if ( (*(_BYTE *)(v5 + 2) & 1) == 0 )
      {
        if ( v4 == 6 )
          goto LABEL_19;
        if ( v4 == 1 )
        {
          if ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v5 + 1504) + 264LL))(
                 *(_QWORD *)(v5 + 1504),
                 *((unsigned int *)a2 + 2)) )
          {
            goto LABEL_19;
          }
          if ( *a2 == 14 )
          {
            v6 = *((char **)a2 + 1);
            v7 = *v6;
            if ( *v6 == 6 )
              goto LABEL_19;
            if ( v7 == 1 )
            {
              if ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 8) + 1504LL)
                                                                     + 264LL))(
                     *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1504LL),
                     *((unsigned int *)v6 + 2)) )
              {
                goto LABEL_19;
              }
              v7 = *v6;
            }
            if ( v7 == 14 )
            {
              v11 = *((char **)v6 + 1);
              v12 = *v11;
              if ( *v11 == 6 )
                goto LABEL_19;
              if ( v12 == 1 )
              {
                if ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 8) + 1504LL)
                                                                       + 264LL))(
                       *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1504LL),
                       *((unsigned int *)v11 + 2)) )
                {
                  goto LABEL_19;
                }
                v12 = *v11;
              }
              if ( v12 == 14 )
              {
                v13 = *((_QWORD *)v11 + 1);
                if ( *(_BYTE *)v13 == 6
                  || *(_BYTE *)v13 == 1
                  && (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 8) + 1504LL)
                                                                       + 264LL))(
                       *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1504LL),
                       *(unsigned int *)(v13 + 8)) )
                {
                  goto LABEL_19;
                }
                if ( *(_BYTE *)v13 == 14
                  && (!(unsigned __int8)sub_1C4E90(a1, *(char **)(v13 + 8))
                   || !(unsigned __int8)sub_1C4E90(a1, (char *)(*(_QWORD *)(v13 + 8) + 16LL)))
                  || !(unsigned __int8)sub_1C4E90(a1, (char *)(*((_QWORD *)v11 + 1) + 16LL)) )
                {
                  goto LABEL_19;
                }
              }
              if ( !(unsigned __int8)sub_1C4E90(a1, (char *)(*((_QWORD *)v6 + 1) + 16LL)) )
                goto LABEL_19;
            }
            v8 = *((_QWORD *)a2 + 1);
            v9 = *(_BYTE *)(v8 + 16);
            if ( v9 == 6 )
              goto LABEL_19;
            if ( v9 == 1 )
            {
              if ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 8) + 1504LL)
                                                                     + 264LL))(
                     *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1504LL),
                     *(unsigned int *)(v8 + 24)) )
              {
                goto LABEL_19;
              }
              v9 = *(_BYTE *)(v8 + 16);
            }
            if ( v9 == 14 )
            {
              if ( (v10 = *(_QWORD *)(v8 + 24), *(_BYTE *)v10 == 6)
                || *(_BYTE *)v10 == 1
                && (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 8) + 1504LL)
                                                                     + 264LL))(
                     *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1504LL),
                     *(unsigned int *)(v10 + 8))
                || *(_BYTE *)v10 == 14
                && (!(unsigned __int8)sub_1C4E90(a1, *(char **)(v10 + 8))
                 || !(unsigned __int8)sub_1C4E90(a1, (char *)(*(_QWORD *)(v10 + 8) + 16LL)))
                || !(unsigned __int8)sub_1C4E90(a1, (char *)(*(_QWORD *)(v8 + 24) + 16LL)) )
              {
LABEL_19:
                sub_1C4850();
              }
            }
          }
        }
      }
    }
  }
  return v2;
}
