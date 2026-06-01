__int64 __fastcall sub_8410E0(__int64 a1, __int64 a2, int a3)
{
  int v4; // r8d
  __int64 v5; // rbx
  const void *v6; // rbp
  char *v7; // r12
  size_t v8; // r13
  char *v9; // rbp
  int v10; // r13d
  int v11; // ebx
  char *v12; // r12
  char *v13; // r14
  int v14; // eax
  int v15; // r15d
  int v16; // esi
  void *v17; // rdi
  size_t v18; // r15
  char *v19; // r13
  __int64 v20; // r12
  int v21; // ebx
  _QWORD *v23; // rax
  unsigned __int64 v24; // rcx
  int v25; // edx
  void *s1; // [rsp+0h] [rbp-68h]
  void *s1a; // [rsp+0h] [rbp-68h]
  size_t n; // [rsp+8h] [rbp-60h]
  int nb; // [rsp+8h] [rbp-60h]
  unsigned int na; // [rsp+8h] [rbp-60h]
  int v31; // [rsp+14h] [rbp-54h]
  int v34; // [rsp+28h] [rbp-40h]
  unsigned __int16 v35; // [rsp+2Eh] [rbp-3Ah]

  v4 = 1;
  v5 = a2;
  v6 = *(const void **)a2;
  v7 = *(char **)(a1 + 72);
  v31 = *(unsigned __int16 *)(a2 + 12);
  LOWORD(v8) = *(_WORD *)(a2 + 12);
  if ( *(__int16 *)(a2 + 14) < 0 )
  {
    v23 = (_QWORD *)(a2 + 16);
    v24 = *(_QWORD *)(a1 + 216) + 16LL * *(unsigned __int16 *)(a1 + 208);
    if ( a2 + 16 < v24 )
    {
      do
      {
        v25 = *v23 == (_QWORD)v6;
        v23 += 2;
        v4 += v25;
      }
      while ( (unsigned __int64)v23 < v24 );
    }
  }
  v8 = (unsigned __int16)v8;
  if ( a3 )
  {
    s1 = *(void **)a2;
    n = (unsigned __int16)v8;
    v9 = *(char **)(a1 + 72);
    v10 = 0;
    v11 = a3;
    v34 = v4;
    v35 = *(_WORD *)(a1 + 210);
    v12 = &v7[v31 + 2];
    do
    {
      v13 = v9 + 2;
      v14 = memcmp(s1, v9 + 2, n);
      if ( v14 )
      {
        if ( v14 < 0 )
        {
LABEL_8:
          v15 = v10;
          v7 = v9;
          v8 = n;
          v6 = s1;
          v16 = v11 - v15;
          nb = v11;
          v5 = a2;
          memmove(&v7[v34 * v35], v7, (unsigned int)v35 * v16);
          v4 = v34;
          a3 = nb;
          goto LABEL_9;
        }
      }
      else if ( *v12 )
      {
        goto LABEL_8;
      }
      ++v10;
      v9 += v35;
      v12 += v35;
    }
    while ( v11 != v10 );
    v7 = v9;
    a3 = v11;
    v4 = v34;
    v6 = s1;
    v8 = n;
    v5 = a2;
  }
  v13 = v7 + 2;
LABEL_9:
  v17 = v13;
  na = v4 + a3;
  v18 = v8 + 2;
  s1a = (void *)v8;
  v19 = v7;
  v20 = v5;
  v21 = v4;
  while ( 1 )
  {
    *v19 = BYTE1(*(_DWORD *)(v20 + 8));
    v19[1] = *(_DWORD *)(v20 + 8);
    memcpy(v17, v6, (size_t)s1a);
    memset(&v19[v18], 0, *(unsigned __int16 *)(a1 + 210) - 2 - v31);
    if ( !--v21 )
      break;
    do
      v20 += 16;
    while ( *(const void **)v20 != v6 );
    v19 += *(unsigned __int16 *)(a1 + 210);
    v17 = v19 + 2;
  }
  return na;
}

