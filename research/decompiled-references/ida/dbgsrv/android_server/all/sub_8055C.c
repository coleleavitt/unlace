/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8055C
// Address: 0x000000000008055C

//----- (000000000008055C) ----------------------------------------------------
__int64 __fastcall sub_8055C(__int64 a1, __int64 a2)
{
  __int64 v4; // x22
  char *v5; // x8
  const char *v6; // x21
  const char *v7; // x0
  int v8; // w21
  const char *v9; // x0
  char *i; // x26
  int v11; // w8
  int v12; // w23
  int v13; // w8
  unsigned int v14; // w22
  unsigned __int8 *j; // x8
  int v16; // w9
  char *v17; // x1
  __int64 v18; // x8
  int v19; // w8
  int v20; // w21
  int v21; // w0
  _BYTE *v22; // x1
  int v23; // w8
  char *v24; // x8
  __int16 v25; // w10
  unsigned int count; // w11
  __int64 v27; // x8
  __int64 v28; // x22
  _BYTE *v29; // x0
  const void *v30; // x20
  size_t v31; // x0
  unsigned __int64 v32; // x22
  size_t v33; // x21
  void *v34; // x0
  int k; // w8
  char v36; // w26
  void *v37; // x1
  unsigned __int64 v38; // x27
  unsigned __int64 v39; // x23
  int v40; // w20
  void *v41; // x0
  __int16 v42; // w8
  unsigned __int8 *v43; // x8
  char *v45; // x1
  unsigned __int8 *v46; // x3
  pthread_mutex_t *v47; // x0
  void *ptr; // [xsp+10h] [xbp-1080h] BYREF
  unsigned __int64 v49; // [xsp+18h] [xbp-1078h]
  unsigned __int64 v50; // [xsp+20h] [xbp-1070h]
  pthread_mutex_t v51; // [xsp+28h] [xbp-1068h] BYREF
  __int64 v52; // [xsp+1028h] [xbp-68h]

  v52 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v4 = *(_QWORD *)(a2 + 8);
  if ( v4 )
    v5 = *(char **)a2;
  else
    v5 = &byte_166A39;
  if ( *v5 == 95 && *(_BYTE *)(*(_QWORD *)a2 + 1LL) == 95 )
  {
    if ( v4 )
      v6 = *(const char **)a2;
    else
      v6 = &byte_F154B;
    if ( !strcmp(v6, "__LINE__") )
    {
      v18 = *(int *)(a1 + 288);
      *(_WORD *)(a2 + 24) = 3;
      v14 = 1;
      *(_QWORD *)(a2 + 32) = v18;
      return v14;
    }
    if ( !strcmp(v6, "__FILE__") )
    {
      v30 = *(const void **)(a1 + 280);
      if ( v30 && (v31 = strlen((const char *)v30)) != 0 )
      {
        v32 = v31 + 1;
        v33 = v31;
        if ( *(_QWORD *)(a2 + 16) >= v31 + 1 )
        {
          v34 = *(void **)a2;
        }
        else
        {
          v34 = qvector_reserve((pthread_mutex_t *)a2, *(void **)a2, v32, 1u);
          *(_QWORD *)a2 = v34;
        }
        *(_QWORD *)(a2 + 8) = v32;
        memmove(v34, v30, v33);
        *(_BYTE *)(*(_QWORD *)a2 + v33) = 0;
      }
      else
      {
        *(_QWORD *)(a2 + 8) = 0;
      }
    }
    else
    {
      if ( strcmp(v6, "__DATE__") && strcmp(v6, "__TIME__") )
        goto LABEL_13;
      v21 = time(nullptr);
      qctime(&v51, 0x28u, v21);
      v22 = *(_BYTE **)a2;
      v23 = *(unsigned __int8 *)(*(_QWORD *)a2 + 2LL);
      *(_QWORD *)(a2 + 8) = 0;
      if ( v23 == 68 )
      {
        if ( *(_QWORD *)(a2 + 16) <= 7u )
        {
          v22 = qvector_reserve((pthread_mutex_t *)a2, v22, 8u, 1u);
          *(_QWORD *)a2 = v22;
        }
        *(_QWORD *)(a2 + 8) = 8;
        v22[7] = 0;
        v24 = *(char **)a2;
        v25 = *((_WORD *)&v51.__align + 4);
        count = v51.__count;
        v24[6] = v51.__size[10];
        *((_WORD *)v24 + 2) = v25;
        *(_DWORD *)v24 = count;
        v27 = *(_QWORD *)(a2 + 8);
        if ( v27 )
          v28 = v27 - 1;
        else
          v28 = 0;
        if ( *(_QWORD *)(a2 + 16) >= (unsigned __int64)(v28 + 5) )
        {
          v29 = *(_BYTE **)a2;
        }
        else
        {
          v29 = qvector_reserve((pthread_mutex_t *)a2, *(void **)a2, v28 + 5, 1u);
          *(_QWORD *)a2 = v29;
        }
        *(_QWORD *)(a2 + 8) = v28 + 5;
        v29[v28 + 4] = 0;
        *(_DWORD *)(*(_QWORD *)a2 + v28) = v51.__spins;
      }
      else
      {
        if ( *(_QWORD *)(a2 + 16) <= 8u )
        {
          v22 = qvector_reserve((pthread_mutex_t *)a2, v22, 9u, 1u);
          *(_QWORD *)a2 = v22;
        }
        *(_QWORD *)(a2 + 8) = 9;
        v22[8] = 0;
        **(_QWORD **)a2 = *(__int64 *)((char *)&v51.__align + 11);
      }
    }
    v42 = 4;
    *(_BYTE *)(a2 + 40) = 0;
    goto LABEL_93;
  }
LABEL_13:
  if ( !*(_BYTE *)(a1 + 84) )
    return 0;
  v7 = v4 ? *(const char **)a2 : &byte_F154B;
  v8 = strcmp(v7, "defined");
  if ( v8 )
  {
    v9 = v4 ? *(const char **)a2 : &byte_F154B;
    if ( strcmp(v9, "__has_include") )
      return 0;
  }
  for ( i = (char *)(*(_QWORD *)(a1 + 8) + 1LL); ; ++i )
  {
    v11 = (unsigned __int8)*(i - 1);
    if ( (unsigned int)(v11 - 9) >= 5 && v11 != 32 )
      break;
    *(_QWORD *)(a1 + 8) = i;
  }
  *(_QWORD *)(a1 + 8) = i;
  v12 = (unsigned __int8)*(i - 1);
  if ( v12 == 40 )
  {
    do
    {
      do
      {
        *(_QWORD *)(a1 + 8) = ++i;
        v13 = (unsigned __int8)*(i - 1);
      }
      while ( (unsigned int)(v13 - 9) < 5 );
    }
    while ( v13 == 32 );
    v14 = 1;
    if ( !v8 )
    {
LABEL_30:
      sub_8005C((void *)a1, a2);
      if ( !v14 )
        goto LABEL_108;
      for ( j = *(unsigned __int8 **)(a1 + 8); ; *(_QWORD *)(a1 + 8) = j )
      {
        v16 = *j++;
        if ( (unsigned int)(v16 - 9) >= 5 && v16 != 32 )
          break;
      }
      *(_QWORD *)(a1 + 8) = j;
      if ( *(j - 1) == 41 )
      {
LABEL_108:
        if ( *(_QWORD *)(a2 + 8) )
          v17 = *(char **)a2;
        else
          v17 = &byte_F154B;
        *(_QWORD *)(a2 + 32) = sub_7DB0C(a1, v17) != nullptr;
        goto LABEL_83;
      }
      return 0;
    }
    goto LABEL_46;
  }
  if ( ((char)v12 & 0x80000000) == 0 && isalpha(v12) )
  {
    v14 = 0;
    if ( !v8 )
      goto LABEL_30;
LABEL_46:
    v19 = (unsigned __int8)*(i - 1);
    if ( v19 == 60 )
    {
      v20 = 62;
LABEL_62:
      ptr = nullptr;
      v49 = 0;
      v50 = 0;
      for ( k = (unsigned __int8)*i; *i; k = (unsigned __int8)*i )
      {
        if ( k == 41 )
          break;
        *(_QWORD *)(a1 + 8) = i + 1;
        v36 = *i;
        v37 = ptr;
        if ( v49 )
          v38 = v49 - 1;
        else
          v38 = 0;
        if ( v50 < v38 + 2 )
        {
          v37 = qvector_reserve((pthread_mutex_t *)&ptr, ptr, v38 + 2, 1u);
          ptr = v37;
        }
        v49 = v38 + 2;
        *((_BYTE *)v37 + v38) = v36;
        *((_BYTE *)ptr + v38 + 1) = 0;
        i = *(char **)(a1 + 8);
      }
      if ( !v14 || (*(_QWORD *)(a1 + 8) = i + 1, *i != 41) || (v39 = v49, v49 < 2) )
      {
        v40 = 1;
        v41 = ptr;
        if ( !ptr )
          goto LABEL_75;
        goto LABEL_74;
      }
      v41 = ptr;
      if ( (unsigned __int8)*((char *)ptr + v49 - 2) == v20 )
      {
        if ( (__int64)(v49 - 1) > 1 )
        {
          v45 = (char *)ptr;
          if ( v50 < v49 - 1 )
          {
            v45 = (char *)qvector_reserve((pthread_mutex_t *)&ptr, ptr, v49 - 1, 1u);
            ptr = v45;
          }
          v49 = v39 - 1;
          v45[v39 - 2] = 0;
          v43 = (unsigned __int8 *)ptr;
        }
        else if ( ptr )
        {
          v49 = 0;
          qfree(ptr);
          v43 = nullptr;
          ptr = nullptr;
          v50 = 0;
        }
        else
        {
          v43 = nullptr;
        }
        if ( v49 )
          v46 = v43;
        else
          v46 = (unsigned __int8 *)&byte_F154B;
        v47 = sub_80B70(a1, &v51, 0x1000u, v46, v20, 0);
        v40 = 0;
        *(_QWORD *)(a2 + 32) = v47 != nullptr;
        v41 = ptr;
        if ( !ptr )
        {
LABEL_75:
          if ( !v40 )
          {
LABEL_83:
            v42 = 3;
LABEL_93:
            *(_WORD *)(a2 + 24) = v42;
            return 1;
          }
          return 0;
        }
      }
      else
      {
        v40 = 1;
        if ( !ptr )
          goto LABEL_75;
      }
LABEL_74:
      v49 = 0;
      qfree(v41);
      ptr = nullptr;
      v50 = 0;
      goto LABEL_75;
    }
    if ( v19 == 34 )
    {
      v20 = 34;
      goto LABEL_62;
    }
    return 0;
  }
  v14 = 0;
  if ( v12 == 36 || v12 == 95 )
  {
    if ( !v8 )
      goto LABEL_30;
    goto LABEL_46;
  }
  return v14;
}
// F154B: using guessed type char byte_F154B;
// 166A39: using guessed type char byte_166A39;
