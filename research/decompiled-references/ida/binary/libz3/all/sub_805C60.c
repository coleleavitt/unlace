void __fastcall sub_805C60(char *a1, __int64 a2)
{
  __int64 v4; // rcx
  char *v5; // rbp
  __int64 v6; // rbx
  _QWORD *v7; // rbx
  unsigned int v8; // edx
  size_t v9; // rdx
  bool v10; // zf
  __int64 v11; // r14
  __int64 v12; // rax
  __int16 v13; // dx
  __int16 v14; // cx
  _QWORD *v15; // rax
  __int64 v16; // rdx
  _QWORD *v17; // rsi
  __int16 v18; // cx
  unsigned int v19; // edi
  _QWORD *i; // rax
  unsigned int v21; // ecx
  __int64 v22; // rdx
  __int16 v23; // cx
  unsigned int v24; // r8d
  _QWORD *j; // rax
  unsigned int v26; // edi
  __int64 v27; // rdx
  __int16 v28; // cx

  if ( a2 - (__int64)a1 > 112 )
  {
    v4 = (a2 - (__int64)a1) >> 4;
    v5 = &a1[8 * v4];
    v6 = (8 * v4) >> 3;
    sub_805C60(a1, v5);
    sub_805C60(v5, a2);
    sub_805500(a1, v5, a2, v6, (a2 - (__int64)v5) >> 3);
    return;
  }
  if ( (char *)a2 != a1 )
  {
    v7 = a1 + 8;
    if ( (char *)a2 != a1 + 8 )
    {
      while ( 1 )
      {
        v11 = *v7;
        v12 = *(_QWORD *)a1;
        v13 = *(_WORD *)(*v7 + 4LL);
        v14 = *(_WORD *)(*(_QWORD *)a1 + 4LL);
        if ( !v13 )
          break;
        if ( v13 == 2 )
        {
          v19 = *(_DWORD *)(v11 + 40);
          if ( v14 )
          {
            if ( v14 == 2 )
            {
              if ( v19 >= *(_DWORD *)(v12 + 40) )
                goto LABEL_24;
            }
            else if ( v19 )
            {
LABEL_24:
              for ( i = v7; ; --i )
              {
                v22 = *(i - 1);
                v17 = i;
                v23 = *(_WORD *)(v22 + 4);
                if ( v23 )
                  v21 = v23 == 2 ? *(_DWORD *)(v22 + 40) : 1;
                else
                  v21 = *(unsigned __int16 *)(v22 + 28);
                if ( v19 >= v21 )
                  break;
                *i = v22;
              }
              goto LABEL_20;
            }
          }
          else if ( v19 >= *(unsigned __int16 *)(v12 + 28) )
          {
            goto LABEL_24;
          }
LABEL_8:
          v9 = (char *)v7 - a1;
          v10 = (char *)v7 - a1 == 8;
          if ( (char *)v7 - a1 <= 8 )
            goto LABEL_43;
          goto LABEL_9;
        }
        if ( v14 )
        {
          if ( v14 == 2 && *(_DWORD *)(v12 + 40) > 1u )
            goto LABEL_8;
LABEL_15:
          v15 = v7;
          v16 = *(v7 - 1);
          v17 = v7;
          v18 = *(_WORD *)(v16 + 4);
          if ( v18 )
          {
LABEL_16:
            if ( v18 != 2 || *(_DWORD *)(v16 + 40) <= 1u )
              goto LABEL_20;
            goto LABEL_18;
          }
          while ( *(unsigned __int16 *)(v16 + 28) > 1u )
          {
LABEL_18:
            *v15 = v16;
            v16 = *(v15 - 2);
            v17 = --v15;
            v18 = *(_WORD *)(v16 + 4);
            if ( v18 )
              goto LABEL_16;
          }
LABEL_20:
          ++v7;
          *v17 = v11;
          if ( (_QWORD *)a2 == v7 )
            return;
        }
        else
        {
          if ( *(_WORD *)(v12 + 28) <= 1u )
            goto LABEL_15;
          v9 = (char *)v7 - a1;
          v10 = (char *)v7 - a1 == 8;
          if ( (char *)v7 - a1 <= 8 )
          {
LABEL_43:
            if ( v10 )
              *v7 = v12;
            goto LABEL_10;
          }
LABEL_9:
          memmove((char *)v7 + 8 - v9, a1, v9);
LABEL_10:
          ++v7;
          *(_QWORD *)a1 = v11;
          if ( (_QWORD *)a2 == v7 )
            return;
        }
      }
      v8 = *(unsigned __int16 *)(v11 + 28);
      if ( v14 )
      {
        if ( v14 == 2 )
        {
          if ( v8 >= *(_DWORD *)(v12 + 40) )
          {
LABEL_34:
            v24 = *(unsigned __int16 *)(v11 + 28);
            for ( j = v7; ; --j )
            {
              v27 = *(j - 1);
              v17 = j;
              v28 = *(_WORD *)(v27 + 4);
              if ( v28 )
              {
                v26 = 1;
                if ( v28 == 2 )
                  v26 = *(_DWORD *)(v27 + 40);
              }
              else
              {
                v26 = *(unsigned __int16 *)(v27 + 28);
              }
              if ( v24 >= v26 )
                break;
              *j = v27;
            }
            goto LABEL_20;
          }
        }
        else if ( *(_WORD *)(v11 + 28) )
        {
          goto LABEL_34;
        }
      }
      else if ( (unsigned __int16)v8 >= *(_WORD *)(v12 + 28) )
      {
        goto LABEL_34;
      }
      goto LABEL_8;
    }
  }
}

