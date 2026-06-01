__int64 __fastcall sub_BD93E0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  unsigned __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  unsigned __int64 *v7; // rax
  unsigned __int64 v8; // rax
  __int64 *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rdx
  unsigned __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // r12
  unsigned __int64 *v18; // rax
  unsigned __int64 v19; // rax
  __int64 i; // rax
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rbx
  __int64 v27; // rdi
  __int64 **v28; // rax
  __int64 *v29; // rcx
  unsigned __int64 v30; // rax
  __int64 *v31; // rdx
  __int64 *v32; // rcx
  __int64 v33; // rdx
  __int64 *v35; // rax
  __int64 v36; // rdx
  __int64 *v37; // rax
  __int64 v38; // rdx
  __int64 *v39; // rax
  __int64 v40; // rdx

  v2 = sub_BD7F30(*(_QWORD *)(a1 + 32));
  if ( !v2 || (*(_BYTE *)(v2 + 29) & 1) == 0 )
    goto LABEL_9;
  v7 = sub_B68690(v2, a2, v3, v4, v5, v6);
  v4 = *v7;
  v8 = *v7 + 8LL * *((unsigned int *)v7 + 2);
  if ( v4 < v8 )
  {
    v3 = v4;
    while ( *(_WORD *)(*(_QWORD *)v3 + 36LL) != 398 )
    {
      v3 += 8;
      if ( v8 == v3 )
        goto LABEL_9;
    }
    if ( v8 == v3 )
    {
LABEL_9:
      v11 = sub_BD7980(a1, a2, v3, v4);
      v12 = sub_F3F480(*(_QWORD *)(v11 & 0xFFFFFFFFFFFFFFF0LL), a2);
      v17 = v12;
      if ( !v12 || (*(_BYTE *)(v12 + 29) & 1) == 0 )
        goto LABEL_15;
      v18 = sub_B68690(v12, a2, v13, v14, v15, v16);
      v14 = *v18;
      v19 = *v18 + 8LL * *((unsigned int *)v18 + 2);
      if ( v14 >= v19 )
      {
        if ( v14 == v19 )
          goto LABEL_15;
        if ( *(_WORD *)(*(_QWORD *)v19 + 36LL) != 398 )
        {
          v39 = (__int64 *)(v19 + 8);
          while ( 1 )
          {
            v13 = (__int64)v39;
            if ( (__int64 *)v14 == v39 )
              break;
            v40 = *v39++;
            if ( *(_WORD *)(v40 + 36) == 398 )
              goto LABEL_47;
          }
LABEL_15:
          for ( i = sub_BD7980(a1, a2, v13, v14); ; i = sub_F39D80(v26) )
          {
            v21 = sub_F46EC0(*(_QWORD *)(i & 0xFFFFFFFFFFFFFFF0LL));
            v26 = v21;
            if ( !v21 )
              return 0;
            v27 = *(_QWORD *)(v21 + 32);
            if ( (*(_BYTE *)(v27 + 29) & 1) != 0 )
            {
              v28 = (__int64 **)sub_B68690(v27, a2, v22, v23, v24, v25);
              v29 = *v28;
              v30 = (unsigned __int64)&(*v28)[*((unsigned int *)v28 + 2)];
              if ( (unsigned __int64)v29 >= v30 )
              {
                if ( v29 != (__int64 *)v30 )
                {
                  if ( *(_WORD *)(*(_QWORD *)v30 + 36LL) == 398 )
                    goto LABEL_24;
                  v35 = (__int64 *)(v30 + 8);
                  while ( v29 != v35 )
                  {
                    v36 = *v35++;
                    if ( *(_WORD *)(v36 + 36) == 398 )
                      goto LABEL_24;
                  }
                }
              }
              else
              {
                v31 = v29;
                while ( 1 )
                {
                  a2 = *v31;
                  if ( *(_WORD *)(*v31 + 36) == 398 )
                    break;
                  if ( (__int64 *)v30 == ++v31 )
                    goto LABEL_33;
                }
                if ( (__int64 *)v30 != v31 )
                {
LABEL_24:
                  if ( *(_WORD *)(*v29 + 36) != 398 )
                  {
                    v32 = v29 + 1;
                    do
                      v33 = *v32++;
                    while ( *(_WORD *)(v33 + 36) != 398 );
                  }
                  return *(_QWORD *)(v26 + 32);
                }
              }
            }
LABEL_33:
            ;
          }
        }
      }
      else
      {
        v13 = v14;
        while ( *(_WORD *)(*(_QWORD *)v13 + 36LL) != 398 )
        {
          v13 += 8;
          if ( v19 == v13 )
            goto LABEL_15;
        }
        if ( v19 == v13 )
          goto LABEL_15;
      }
LABEL_47:
      while ( *(_WORD *)(*(_QWORD *)v14 + 36LL) != 398 )
        v14 += 8LL;
      return v17;
    }
  }
  else
  {
    if ( v4 == v8 )
      goto LABEL_9;
    if ( *(_WORD *)(*(_QWORD *)v8 + 36LL) != 398 )
    {
      v9 = (__int64 *)(v8 + 8);
      do
      {
        v3 = (__int64)v9;
        if ( (__int64 *)v4 == v9 )
          goto LABEL_9;
        v10 = *v9++;
      }
      while ( *(_WORD *)(v10 + 36) != 398 );
    }
  }
  if ( *(_WORD *)(*(_QWORD *)v4 + 36LL) != 398 )
  {
    v37 = (__int64 *)(v4 + 8);
    do
      v38 = *v37++;
    while ( *(_WORD *)(v38 + 36) != 398 );
  }
  return 0;
}

