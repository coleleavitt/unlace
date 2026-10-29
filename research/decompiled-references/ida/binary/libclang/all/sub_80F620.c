__int64 __fastcall sub_80F620(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  _QWORD *v3; // rax
  _QWORD *v4; // rdx
  unsigned __int64 v5; // rax
  _QWORD *v6; // rcx
  __int64 *v7; // rdx
  __int64 v8; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // r12
  _QWORD *v13; // rax
  _QWORD *v14; // rdx
  unsigned __int64 v15; // rax
  _QWORD *v16; // rcx
  __int64 *v17; // rdx
  __int64 v18; // rax
  __int64 i; // rax
  __int64 v20; // rax
  __int64 v21; // rbx
  __int64 v22; // rdi
  __int64 *v23; // rax
  __int64 *v24; // rdx
  unsigned __int64 v25; // rcx
  __int64 *v26; // rdx
  __int64 v27; // rax

  v2 = sub_80F4C0(*(_QWORD *)(a1 + *(unsigned __int8 *)(a1 + 3)));
  if ( !v2 || (*(_BYTE *)(v2 + 29) & 1) == 0 )
    goto LABEL_12;
  v3 = sub_79A2B0(v2);
  v4 = (_QWORD *)*v3;
  v5 = *v3 + 8LL * *((unsigned int *)v3 + 2);
  if ( (unsigned __int64)v4 >= v5 )
  {
    if ( v4 == (_QWORD *)v5 )
      goto LABEL_12;
    while ( *(_WORD *)(*(_QWORD *)v5 + 32LL) != 388 )
    {
      v5 += 8LL;
      if ( v4 == (_QWORD *)v5 )
        goto LABEL_12;
    }
    v6 = v4;
  }
  else
  {
    v6 = v4;
    while ( *(_WORD *)(*v6 + 32LL) != 388 )
    {
      if ( (_QWORD *)v5 == ++v6 )
        goto LABEL_12;
    }
  }
  if ( v6 == (_QWORD *)v5 )
  {
LABEL_12:
    v10 = sub_80ED30(a1, a2);
    v11 = sub_B0D8A0(*(_QWORD *)(v10 & 0xFFFFFFFFFFFFFFF0LL));
    v12 = v11;
    if ( v11 && (*(_BYTE *)(v11 + 29) & 1) != 0 )
    {
      v13 = sub_79A2B0(v11);
      v14 = (_QWORD *)*v13;
      v15 = *v13 + 8LL * *((unsigned int *)v13 + 2);
      if ( (unsigned __int64)v14 < v15 )
      {
        v16 = v14;
        while ( *(_WORD *)(*v16 + 32LL) != 388 )
        {
          if ( (_QWORD *)v15 == ++v16 )
            goto LABEL_23;
        }
        goto LABEL_18;
      }
      if ( v14 != (_QWORD *)v15 )
      {
        while ( *(_WORD *)(*(_QWORD *)v15 + 32LL) != 388 )
        {
          v15 += 8LL;
          if ( v14 == (_QWORD *)v15 )
            goto LABEL_23;
        }
        v16 = v14;
LABEL_18:
        if ( v16 != (_QWORD *)v15 )
        {
          if ( *(_WORD *)(*v14 + 32LL) == 388 )
            return v12;
          v17 = v14 + 1;
          do
            v18 = *v17++;
          while ( *(_WORD *)(v18 + 32) != 388 );
          return v12;
        }
      }
    }
LABEL_23:
    for ( i = sub_80ED30(a1, a2); ; i = sub_B0CB60(v21) )
    {
      v20 = sub_B10DA0(*(_QWORD *)(i & 0xFFFFFFFFFFFFFFF0LL), a2);
      v21 = v20;
      if ( !v20 )
        return 0;
      v22 = *(_QWORD *)(v20 + 32);
      if ( (*(_BYTE *)(v22 + 29) & 1) != 0 )
      {
        v23 = sub_79A2B0(v22);
        v24 = (__int64 *)*v23;
        v25 = *v23 + 8LL * *((unsigned int *)v23 + 2);
        if ( *v23 >= v25 )
        {
          if ( v24 == (__int64 *)v25 )
            continue;
          while ( *(_WORD *)(*(_QWORD *)v25 + 32LL) != 388 )
          {
            v25 += 8LL;
            if ( v24 == (__int64 *)v25 )
              goto LABEL_36;
          }
          a2 = *v23;
        }
        else
        {
          a2 = *v23;
          while ( *(_WORD *)(*(_QWORD *)a2 + 32LL) != 388 )
          {
            a2 += 8;
            if ( v25 == a2 )
              goto LABEL_36;
          }
        }
        if ( a2 != v25 )
        {
          if ( *(_WORD *)(*v24 + 32) != 388 )
          {
            v26 = v24 + 1;
            do
              v27 = *v26++;
            while ( *(_WORD *)(v27 + 32) != 388 );
          }
          return *(_QWORD *)(v21 + 32);
        }
      }
LABEL_36:
      ;
    }
  }
  if ( *(_WORD *)(*v4 + 32LL) != 388 )
  {
    v7 = v4 + 1;
    do
      v8 = *v7++;
    while ( *(_WORD *)(v8 + 32) != 388 );
  }
  return 0;
}

