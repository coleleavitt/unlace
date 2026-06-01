/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1CD58
// Address: 0x0001CD58

//----- (0001CD58) --------------------------------------------------------
int __fastcall sub_1CD58(int a1, int a2, int a3)
{
  int v3; // r6
  int v4; // r7
  _DWORD *v5; // r5
  __pid_t v6; // r4
  int *v7; // r0
  __pid_t v8; // r3
  int v9; // r0
  __pid_t v10; // r4
  unsigned int v11; // r1
  void *v12; // r0
  void *v13; // r1
  unsigned int v14; // r2
  char *v15; // r0
  __pid_t *v16; // r6
  int v17; // r0
  _BYTE *v18; // r3
  _DWORD *v19; // r0
  _DWORD *v20; // r0
  bool v21; // zf
  int v22; // r1
  char *v23; // r0
  int v24; // r0
  int (__fastcall **v25)(_DWORD, int); // r1
  _DWORD *v26; // r5
  int v27; // r2
  _DWORD *v28; // r3
  char *v29; // r0
  int v30; // r4
  unsigned int i; // r5
  int *v33; // [sp+Ch] [bp-38h]
  __pid_t *v37; // [sp+24h] [bp-20h] BYREF
  void *ptr; // [sp+28h] [bp-1Ch] BYREF
  unsigned int v39; // [sp+2Ch] [bp-18h]
  unsigned int v40; // [sp+30h] [bp-14h]
  void *v41; // [sp+34h] [bp-10h] BYREF
  int v42; // [sp+38h] [bp-Ch]
  unsigned int v43; // [sp+3Ch] [bp-8h]

  v3 = a1;
  v42 = 0;
  v41 = nullptr;
  v43 = 0;
  v39 = 0;
  ptr = nullptr;
  v40 = 0;
  v4 = a1 + 916;
  v5 = *(_DWORD **)(a1 + 912);
  if ( v5 == (_DWORD *)(a1 + 916) )
    goto LABEL_50;
  do
  {
    if ( (v5[4] != a2) != a3 )
      goto LABEL_30;
    v16 = v5 + 5;
    if ( v5[10] || *((_BYTE *)v5 + 44) || *((_BYTE *)v5 + 45) )
      goto LABEL_29;
    v6 = *v16;
    v7 = (int *)_errno(*((unsigned __int8 *)v5 + 45));
    v8 = v6;
    v33 = v7;
    *v7 = 0;
    if ( !byte_DE330 )
    {
      v9 = syscall(238, v6, 19);
      if ( v9 && *v33 == 38 )
      {
        *v33 = 0;
        byte_DE330 = 1;
        v8 = v6;
      }
      else
      {
        v8 = v6;
        if ( byte_DE330 != 1 )
          goto LABEL_9;
      }
    }
    v9 = kill(v8, 19);
LABEL_9:
    if ( !v9 )
    {
      v37 = v5 + 5;
      v13 = v41;
      v14 = v42 + 1;
      if ( v41 > &v37 || (char *)v41 + 4 * v43 <= (char *)&v37 )
      {
        if ( v43 < v14 )
        {
          v13 = qvector_reserve((int)&v41, v41, v14, 4u);
          v41 = v13;
          v16 = v37;
          goto LABEL_20;
        }
      }
      else if ( v43 < v14 )
      {
        v13 = qvector_reserve((int)&v41, v41, v14, 4u);
        v41 = v13;
LABEL_20:
        v17 = v42;
        v18 = v5 + 11;
LABEL_22:
        *((_DWORD *)v13 + v17) = v16;
        ++v42;
        *v18 = 1;
LABEL_29:
        ++v5[6];
        goto LABEL_30;
      }
      v18 = v5 + 11;
      v17 = v42;
      goto LABEL_22;
    }
    v10 = *v16;
    if ( *v33 == 3 )
    {
      v11 = v39;
      if ( v40 >= v39 + 1 )
      {
        v12 = ptr;
      }
      else
      {
        v12 = qvector_reserve((int)&ptr, ptr, v39 + 1, 4u);
        ptr = v12;
        v11 = v39;
      }
      *((_DWORD *)v12 + v11) = v10;
      ++v39;
    }
    else
    {
      v15 = strerror(*v33);
      sub_1BC48(a1, "failed to send SIGSTOP to thread %d: %s\n", v10, v15);
    }
LABEL_30:
    v19 = (_DWORD *)v5[1];
    if ( v19 )
    {
      do
      {
        v5 = v19;
        v19 = (_DWORD *)*v19;
      }
      while ( v19 );
    }
    else
    {
      v20 = v5 + 2;
      v21 = *(_DWORD *)v5[2] == (_DWORD)v5;
      v5 = (_DWORD *)v5[2];
      if ( !v21 )
      {
        do
        {
          v22 = *v20;
          v20 = (_DWORD *)(*v20 + 8);
          v5 = *(_DWORD **)(v22 + 8);
        }
        while ( *v5 != v22 );
      }
    }
  }
  while ( v5 != (_DWORD *)v4 );
  v3 = a1;
  if ( v42 )
  {
    do
    {
      v37 = nullptr;
      v25 = (int (__fastcall **)(_DWORD, int))sub_2781C(v3, (__time_t *)&v37, -1, -(*(_BYTE *)(a1 + 977) & 1));
      if ( (int)v25 >= 1 )
      {
        v26 = v41;
        v23 = (char *)v41 + 4 * v42;
        if ( 4 * v42 )
        {
          v27 = 4 * v42;
          while ( 1 )
          {
            v28 = (_DWORD *)*v26;
            if ( *(int (__fastcall ***)(_DWORD, int))*v26 == v25 )
              break;
            v27 -= 4;
            ++v26;
            if ( !v27 )
              goto LABEL_47;
          }
          if ( ((unsigned __int16)v37 & 0xFF7F) == 0x137F )
          {
            v28[5] = 1;
            *((_BYTE *)v28 + 24) = 0;
            v3 = a1;
          }
          else
          {
            v3 = a1;
            sub_1E384(a1, v25, (int (__fastcall **)(_DWORD, int))v37);
            v23 = (char *)v41 + 4 * v42;
          }
          memmove(v26, v26 + 1, (unsigned int)&v23[-4 - (_DWORD)v26] & 0xFFFFFFFC);
          v24 = --v42;
          continue;
        }
LABEL_47:
        v3 = a1;
        sub_1E384(a1, v25, (int (__fastcall **)(_DWORD, int))v37);
      }
      v24 = v42;
    }
    while ( v24 );
  }
LABEL_50:
  v29 = (char *)ptr;
  if ( v39 )
  {
    v30 = 0;
    for ( i = 0; i < v39; ++i )
    {
      sub_1C868(v3, *(_DWORD *)&v29[v30], 3);
      v30 += 4;
      v29 = (char *)ptr;
    }
  }
  if ( v29 )
  {
    v39 = 0;
    qfree(v29);
    v40 = 0;
    ptr = nullptr;
  }
  if ( v41 )
  {
    v42 = 0;
    qfree(v41);
    v43 = 0;
    v41 = nullptr;
  }
  return 1;
}
// 192F8: using guessed type int __fastcall _errno(_DWORD);
// DE330: using guessed type char byte_DE330;
