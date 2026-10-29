__int64 __fastcall sub_444BA0(__int64 a1, int a2, __int64 a3)
{
  int v4; // ebp
  int v5; // r12d
  _QWORD *v6; // r14
  void *v7; // rdi
  __int64 v8; // rbx
  __int64 v9; // r13
  __int64 *v10; // rax
  _WORD *v11; // rbx
  unsigned __int8 *v12; // rax
  int v13; // esi
  unsigned __int8 *v14; // rcx
  unsigned __int8 *v15; // rcx
  int v16; // edx
  int v17; // eax
  bool v18; // zf
  __int64 v19; // rdi
  int i; // r11d
  __int64 v21; // rax
  __int64 *v22; // rdi
  char v23; // al
  int v24; // r12d
  int v25; // r11d
  unsigned int v26; // ebx
  void *v27; // rax
  __int64 *v28; // r9
  __int64 *v29; // rdi
  int v30; // r11d
  _QWORD *v31; // rbx
  int j; // esi
  __int64 v33; // rax
  int v34; // edx
  __int64 v35; // rax
  _QWORD *v36; // rcx
  _QWORD *v37; // rcx
  __int64 v38; // rax
  int k; // esi
  int m; // r11d
  int v41; // eax
  _QWORD *v43; // rax
  int v44; // edi
  char *v45; // rsi
  int v46; // r8d
  int v47; // ecx
  int v48; // [rsp+10h] [rbp-268h]
  int v49; // [rsp+14h] [rbp-264h]
  char *endptr; // [rsp+28h] [rbp-250h] BYREF
  _QWORD v53[5]; // [rsp+30h] [rbp-248h] BYREF
  int v54; // [rsp+58h] [rbp-220h]
  _BYTE s[256]; // [rsp+60h] [rbp-218h] BYREF
  char *nptr[35]; // [rsp+160h] [rbp-118h] BYREF

  sub_49EDC0(nptr);
  sub_463330(a3, nptr);
  endptr = nptr[0];
  v4 = __strtol_internal(nptr[0], &endptr, 16, 0);
  v48 = __strtol_internal(endptr, &endptr, 10, 0);
  v5 = __strtol_internal(endptr, &endptr, 10, 0);
  sub_49F100(nptr);
  if ( v5 < 0 )
  {
    v5 = 0;
  }
  else if ( v5 >= 257 )
  {
    v5 = 256;
  }
  memset(s, 0, sizeof(s));
  v6 = (_QWORD *)sub_40FB00(280);
  memset(v6, 0, 0x118u);
  *(_DWORD *)v6 = v4;
  v7 = (void *)sub_40FB00((v5 << 9) + 2048);
  v6[33] = v7;
  memset(v7, 0, (unsigned int)((v5 << 9) + 2048));
  v8 = v6[33];
  v49 = 0;
  v9 = sub_496740(v7, 0);
  v10 = off_656088;
  v11 = (_WORD *)(v8 + 2048);
  *(_DWORD *)(v9 + 16) = 0;
  *(_QWORD *)(v9 + 24) = 0;
  *(_DWORD *)v9 = 1;
  for ( *(_QWORD *)(v9 + 8) = v10; v49 < v5; ++v49 )
  {
    sub_4624C0(a3, v9, 1043, 0);
    v12 = (unsigned __int8 *)sub_47B3B0(v9);
    v13 = 0;
    v14 = v12 + 2;
    *(_QWORD *)(v6[33] + 8LL * (16 * *((char *)qword_509DE0 + *v12) + *((char *)qword_509DE0 + v12[1]))) = v11;
    do
    {
      v15 = &v14[(v13 & 0xF) == 0];
      v16 = *((char *)qword_509DE0 + v15[3])
          + 16 * *((char *)qword_509DE0 + v15[2])
          + (*((char *)qword_509DE0 + v15[1]) << 8)
          + (*((char *)qword_509DE0 + *v15) << 12);
      if ( v16 )
        s[v16 >> 8] = 1;
      ++v13;
      *v11 = v16;
      v14 = v15 + 4;
      ++v11;
    }
    while ( v13 <= 255 );
  }
  v17 = *(_DWORD *)v9 - 1;
  v18 = *(_DWORD *)v9 == 1;
  *(_DWORD *)v9 = v17;
  if ( v17 < 0 || v18 )
  {
    v21 = *(_QWORD *)(v9 + 24);
    if ( v21 && *(_QWORD *)(v21 + 8) )
    {
      sub_47B120(v9);
    }
    else
    {
      v22 = *(__int64 **)(v9 + 8);
      if ( v22 && v22 != off_656088 )
        Tcl_Free((__int64)v22);
      *(_DWORD *)(v9 + 16) = -1;
      sub_496830(v9);
    }
  }
  if ( a2 == 1 )
  {
    memset((char *)v6 + 4, 1, 0x100u);
  }
  else
  {
    v19 = v6[33];
    for ( i = 1; i <= 255; ++i )
    {
      if ( *(_QWORD *)(v19 + 8LL * i) )
        *((_BYTE *)v6 + i + 4) = 1;
    }
  }
  v23 = 1;
  if ( !v48 )
    v23 = s[0];
  v24 = 0;
  v25 = 0;
  s[0] = v23;
  do
    v24 -= (s[v25++] == 0) - 1;
  while ( v25 <= 255 );
  v26 = (v24 << 9) + 2048;
  v27 = (void *)sub_40FB00(v26);
  v6[34] = v27;
  memset(v27, 0, v26);
  v28 = (__int64 *)v6[34];
  v29 = (__int64 *)v6[33];
  v30 = 0;
  v31 = v28 + 256;
  do
  {
    if ( v29[v30] )
    {
      for ( j = 0; j <= 255; ++j )
      {
        v33 = v29[v30];
        v34 = *(unsigned __int16 *)(v33 + 2LL * j);
        if ( *(_WORD *)(v33 + 2LL * j) )
        {
          v35 = v34 >> 8;
          v36 = (_QWORD *)v28[v35];
          if ( !v36 )
          {
            v36 = v31;
            v31 += 64;
            v28[v35] = (__int64)v36;
          }
          *((_WORD *)v36 + (unsigned __int8)v34) = ((_WORD)v30 << 8) + j;
        }
      }
    }
    else
    {
      v29[v30] = (__int64)qword_65A5C0;
    }
    ++v30;
  }
  while ( v30 <= 255 );
  if ( a2 == 2 )
  {
    v43 = (_QWORD *)*v28;
    if ( *v28 )
    {
      if ( !*((_WORD *)v43 + 92) )
        *((_WORD *)v43 + 92) = 92;
    }
  }
  if ( v48 )
  {
    v37 = (_QWORD *)*v28;
    if ( !*v28 )
    {
      v37 = v31;
      *v28 = (__int64)v31;
    }
    v38 = *v29;
    for ( k = 0; k <= 255; ++k )
    {
      if ( *(_WORD *)(v38 + 2LL * k) )
        *((_WORD *)v37 + k) = k;
    }
  }
  for ( m = 0; m <= 255; ++m )
  {
    if ( !v28[m] )
      v28[m] = (__int64)qword_65A5C0;
  }
  sub_49EDC0(nptr);
  do
    v41 = sub_463330(a3, nptr);
  while ( !v41 );
  if ( v41 >= 0 )
  {
    endptr = nptr[0];
    if ( *nptr[0] == 82 )
    {
      while ( 1 )
      {
        sub_49F040(nptr, 0);
        v44 = sub_463330(a3, nptr);
        if ( v44 < 0 )
          break;
        if ( v44 > 4 )
        {
          v45 = nptr[0];
          v46 = *((char *)qword_509DE0 + *((unsigned __int8 *)nptr[0] + 3))
              + 16 * *((char *)qword_509DE0 + *((unsigned __int8 *)nptr[0] + 2))
              + (*((char *)qword_509DE0 + *((unsigned __int8 *)nptr[0] + 1)) << 8)
              + (*((char *)qword_509DE0 + (unsigned __int8)*nptr[0]) << 12);
          if ( v46 )
          {
            while ( 1 )
            {
              v45 += 5;
              v44 -= 5;
              if ( v44 < 0 || !*v45 )
                break;
              v47 = *((char *)qword_509DE0 + (unsigned __int8)v45[3])
                  + 16 * *((char *)qword_509DE0 + (unsigned __int8)v45[2])
                  + (*((char *)qword_509DE0 + (unsigned __int8)v45[1]) << 8)
                  + (*((char *)qword_509DE0 + (unsigned __int8)*v45) << 12);
              if ( v47 )
                *(_WORD *)(*(_QWORD *)(v6[34] + 8LL * (v47 >> 8)) + 2LL * (unsigned __int8)v47) = v46;
            }
          }
        }
      }
    }
  }
  sub_49F100(nptr);
  v53[0] = a1;
  v53[4] = v6;
  v53[1] = sub_446230;
  v53[2] = sub_4463A0;
  v53[3] = sub_446750;
  v54 = (a2 == 1) + 1;
  return sub_4444E0(v53);
}

