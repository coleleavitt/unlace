char __fastcall sub_B51930(_BYTE *a1)
{
  __int64 v2; // rax
  __int64 *v3; // rdx
  unsigned __int64 v4; // rcx
  __int64 *v5; // rax
  __int64 v6; // rax
  __int64 *v7; // rdx
  unsigned __int64 v8; // rcx
  __int64 *v9; // rax
  __int64 *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  _QWORD *v13; // rdx
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rax
  unsigned __int64 j; // rcx
  __int64 *v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  _QWORD *v20; // rdx
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rax
  unsigned __int64 i; // rcx
  _QWORD *v24; // rcx
  __int64 v25; // rbx
  __int64 *v26; // rax
  size_t v27; // rax
  _QWORD *v28; // rcx
  __int64 v29; // rbp
  __int64 *v30; // rax
  size_t v31; // rbx
  unsigned __int64 v32; // rax
  unsigned __int64 v33; // rbp
  size_t v34; // r12
  unsigned __int64 v35; // rdx
  unsigned __int64 v36; // rax
  unsigned __int64 v37; // rax
  unsigned __int64 v38; // rax
  void *s1; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v40; // [rsp+8h] [rbp-30h]
  __int64 v41; // [rsp+10h] [rbp-28h] BYREF
  unsigned __int64 v42; // [rsp+18h] [rbp-20h]

  if ( *(char *)((*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 32LL))(a1) + 84) >= 0 || (a1[29] & 1) == 0 )
    return 0;
  v2 = sub_B68690(a1);
  v3 = *(__int64 **)v2;
  v4 = *(_QWORD *)v2 + 8LL * *(unsigned int *)(v2 + 8);
  if ( *(_QWORD *)v2 >= v4 )
  {
    if ( v3 != (__int64 *)v4 )
    {
      if ( *(_WORD *)(*(_QWORD *)v4 + 36LL) == 376 )
        goto LABEL_21;
      v10 = (__int64 *)(v4 + 8);
      while ( v3 != v10 )
      {
        v11 = *v10++;
        if ( *(_WORD *)(v11 + 36) == 376 )
          goto LABEL_21;
      }
    }
LABEL_8:
    if ( (a1[29] & 1) != 0 )
    {
      v6 = sub_B68690(a1);
      v7 = *(__int64 **)v6;
      v8 = *(_QWORD *)v6 + 8LL * *(unsigned int *)(v6 + 8);
      if ( *(_QWORD *)v6 < v8 )
      {
        v9 = *(__int64 **)v6;
        while ( *(_WORD *)(*v9 + 36) != 378 )
        {
          if ( (__int64 *)v8 == ++v9 )
            return 0;
        }
        if ( (__int64 *)v8 == v9 )
          return 0;
LABEL_36:
        if ( (a1[29] & 1) != 0 )
        {
          v19 = sub_B68690(a1);
          v20 = *(_QWORD **)v19;
          v21 = *(_QWORD *)v19 + 8LL * *(unsigned int *)(v19 + 8);
          if ( (unsigned __int64)v20 < v21 )
          {
            v28 = v20;
            while ( *(_WORD *)(*v28 + 36LL) != 378 )
            {
              if ( (_QWORD *)v21 == ++v28 )
                goto LABEL_74;
            }
            if ( (_QWORD *)v21 != v28 )
            {
LABEL_58:
              v29 = *v20;
              if ( *(_WORD *)(*v20 + 36LL) != 378 )
              {
                v30 = v20 + 1;
                do
                  v29 = *v30++;
                while ( *(_WORD *)(v29 + 36) != 378 );
              }
              v31 = j__strlen("default");
              v41 = *(_QWORD *)(v29 + 48);
              v32 = *(unsigned int *)(v29 + 40);
              v33 = 0;
              v42 = v32;
              v34 = j__strlen(asc_22BE270);
              v35 = sub_2223270(&v41, asc_22BE270, v34, 0);
              v36 = v42;
              if ( v35 < v42 )
              {
                v33 = v42 - v35;
                v36 = v35;
              }
              v40 = v33;
              s1 = (void *)(v41 + v36);
              v37 = sub_22233F0(&s1, asc_22BE270, v34, -1) + 1;
              if ( v37 > v40 )
                v37 = v40;
              v38 = v40 - v33 + v37;
              if ( v38 > v40 )
                v38 = v40;
              return v31 == v38 && (!v31 || !memcmp(s1, "default", v31));
            }
          }
          else if ( v20 != (_QWORD *)v21 )
          {
            if ( *(_WORD *)(*(_QWORD *)v21 + 36LL) == 378 )
              goto LABEL_58;
            v22 = v21 + 8;
            for ( i = v22; v20 != (_QWORD *)v22; i = v22 )
            {
              v22 += 8LL;
              if ( *(_WORD *)(*(_QWORD *)i + 36LL) == 378 )
                goto LABEL_58;
            }
          }
        }
LABEL_74:
        BUG();
      }
      if ( v7 != (__int64 *)v8 )
      {
        if ( *(_WORD *)(*(_QWORD *)v8 + 36LL) != 378 )
        {
          v17 = (__int64 *)(v8 + 8);
          while ( v7 != v17 )
          {
            v18 = *v17++;
            if ( *(_WORD *)(v18 + 36) == 378 )
              goto LABEL_36;
          }
          return 0;
        }
        goto LABEL_36;
      }
    }
    return 0;
  }
  v5 = *(__int64 **)v2;
  while ( *(_WORD *)(*v5 + 36) != 376 )
  {
    if ( (__int64 *)v4 == ++v5 )
      goto LABEL_8;
  }
  if ( (__int64 *)v4 == v5 )
    goto LABEL_8;
LABEL_21:
  if ( (a1[29] & 1) == 0 )
    goto LABEL_73;
  v12 = sub_B68690(a1);
  v13 = *(_QWORD **)v12;
  v14 = *(_QWORD *)v12 + 8LL * *(unsigned int *)(v12 + 8);
  if ( (unsigned __int64)v13 >= v14 )
  {
    if ( v13 != (_QWORD *)v14 )
    {
      if ( *(_WORD *)(*(_QWORD *)v14 + 36LL) == 376 )
        goto LABEL_48;
      v15 = v14 + 8;
      for ( j = v15; v13 != (_QWORD *)v15; j = v15 )
      {
        v15 += 8LL;
        if ( *(_WORD *)(*(_QWORD *)j + 36LL) == 376 )
          goto LABEL_48;
      }
    }
LABEL_73:
    BUG();
  }
  v24 = v13;
  while ( *(_WORD *)(*v24 + 36LL) != 376 )
  {
    if ( (_QWORD *)v14 == ++v24 )
      goto LABEL_73;
  }
  if ( (_QWORD *)v14 == v24 )
    goto LABEL_73;
LABEL_48:
  v25 = *v13;
  if ( *(_WORD *)(*v13 + 36LL) != 376 )
  {
    v26 = v13 + 1;
    do
      v25 = *v26++;
    while ( *(_WORD *)(v25 + 36) != 376 );
  }
  v27 = j__strlen("default");
  if ( v27 != *(_DWORD *)(v25 + 40) )
    return 0;
  if ( v27 )
    return memcmp(*(const void **)(v25 + 48), "default", v27) == 0;
  return 1;
}

