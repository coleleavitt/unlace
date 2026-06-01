unsigned __int64 __fastcall sub_64F160(__int64 a1, const char *a2)
{
  unsigned __int64 v2; // r12
  const char *v3; // r13
  int v4; // ebx
  size_t v5; // rax
  __int64 v6; // rsi
  unsigned __int64 v7; // r13
  __int64 v8; // rax
  unsigned int v9; // ecx
  __int64 v10; // r8
  __int64 v11; // r9
  _DWORD *v12; // rdi
  __int64 v13; // r8
  unsigned int v14; // eax
  int v15; // ecx
  char *v16; // rsi
  __int64 v17; // rdx
  _DWORD *v18; // rdi
  const char *v19; // rsi
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rdx
  unsigned int v23; // r12d
  size_t v24; // rax
  size_t v25; // r14
  void *v26; // rdi
  size_t v27; // r15
  void *dest; // [rsp+10h] [rbp-50h] BYREF
  __int128 v30; // [rsp+18h] [rbp-48h]
  unsigned __int64 v31; // [rsp+28h] [rbp-38h]

  v31 = __readfsqword(0x28u);
  v2 = *(unsigned int *)a2;
  if ( (_DWORD)v2 == 2147483646 )
  {
    if ( !under_debugger )
      interr(145);
LABEL_30:
    BUG();
  }
  if ( !*(_QWORD *)(a1 + 64) )
    return v31 - __readfsqword(0x28u);
  v3 = a2 + 4;
  v4 = (int)a2;
  v5 = strlen(a2 + 4);
  v6 = *(_QWORD *)a1;
  v30 = 0;
  dest = nullptr;
  if ( (unsigned __int8)sub_64EFC0(
                          (__int64)&dest,
                          v6,
                          (__int64)v3,
                          (__int64)&v3[((v2 >> 29) & 4) + 5 + v5],
                          0,
                          0,
                          nullptr) )
  {
LABEL_4:
    v7 = v30 + 8;
    if ( (_QWORD)v30 )
      goto LABEL_5;
    goto LABEL_22;
  }
  v24 = strlen(v3);
  v25 = v24;
  if ( v24 )
  {
    v26 = dest;
    v27 = v24 + 1;
    if ( *((_QWORD *)&v30 + 1) < v24 + 1 )
    {
      dest = (void *)qvector_reserve(&dest, dest, v24 + 1, 1);
      v26 = dest;
    }
    *(_QWORD *)&v30 = v27;
    memmove(v26, v3, v25);
    *((_BYTE *)dest + v25) = 0;
    goto LABEL_4;
  }
  *(_QWORD *)&v30 = 0;
LABEL_22:
  v7 = 9;
LABEL_5:
  v8 = *(unsigned int *)(a1 + 72);
  v9 = *(_DWORD *)(a1 + 76);
  if ( *(_DWORD *)(a1 + 72) - v9 < v7 )
  {
    v23 = (unsigned int)&stru_10000 + v8;
    *(_QWORD *)(a1 + 64) = qrealloc_or_throw(*(_QWORD *)(a1 + 64), v23);
    *(_DWORD *)(a1 + 72) = v23;
    sub_648B00(a1, 0, 0);
    v9 = *(_DWORD *)(a1 + 76);
    v8 = *(unsigned int *)(a1 + 72);
  }
  v10 = *(_QWORD *)(a1 + 64);
  v11 = *(_QWORD *)(a1 + 56);
  *(_DWORD *)(a1 + 76) = v7 + v9;
  v12 = (_DWORD *)(v10 + v9);
  v13 = v8 + v10;
  if ( v11 )
  {
    v14 = 0;
    if ( (_QWORD)v30 )
    {
      v15 = *(char *)dest;
      v16 = (char *)dest + 1;
      if ( *(_BYTE *)dest )
      {
        do
        {
          ++v16;
          v14 = v15 ^ __ROL4__(v14, 5);
          v15 = *(v16 - 1);
        }
        while ( *(v16 - 1) );
      }
    }
    v17 = (int)(v14 % *(_DWORD *)(a1 + 16));
    *v12 = *(_DWORD *)(v11 + 4 * v17);
    *(_DWORD *)(*(_QWORD *)(a1 + 56) + 4 * v17) = (_DWORD)v12 - *(_DWORD *)(a1 + 64);
  }
  else
  {
    *v12 = 0x7FFFFFFF;
  }
  v18 = v12 + 1;
  v19 = haystack;
  if ( (_QWORD)v30 )
    v19 = (const char *)dest;
  v20 = qstpncpy(v18, v19, v13 - (_QWORD)v18) + 5;
  *(_DWORD *)(v20 - 4) = v4 - *(_DWORD *)(a1 + 32);
  v21 = *(_QWORD *)(a1 + 64);
  if ( v21 >= v20 || *(unsigned int *)(a1 + 72) + v21 < v20 )
  {
    if ( !under_debugger )
      interr(146);
    goto LABEL_30;
  }
  if ( dest )
  {
    *(_QWORD *)&v30 = 0;
    qfree(dest);
  }
  return v31 - __readfsqword(0x28u);
}
