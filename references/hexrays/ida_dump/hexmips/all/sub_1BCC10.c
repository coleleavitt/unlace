unsigned __int64 __fastcall sub_1BCC10(char *a1, char *a2, unsigned __int64 a3, __int64 a4)
{
  char *v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rsi
  _QWORD *v9; // r15
  __int64 i; // r12
  __int64 v11; // rcx
  int v12; // r9d
  void *v13; // rax
  void *v14; // rax
  char *v15; // r14
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rdi
  __int64 v19; // rdx
  __int64 v20; // rdi
  _QWORD *v21; // rax
  int v22; // eax
  int v23; // r15d
  __int64 v24; // rcx
  __int64 v25; // r12
  void *v26; // rax
  const void *v27; // rsi
  void *v28; // rax
  void *v30; // rax
  void *v31; // rax
  void *src; // [rsp+20h] [rbp-88h]
  __int64 n; // [rsp+28h] [rbp-80h]
  int na; // [rsp+28h] [rbp-80h]
  __int64 v36; // [rsp+30h] [rbp-78h]
  int v37; // [rsp+3Ch] [rbp-6Ch]
  __int64 v38; // [rsp+40h] [rbp-68h] BYREF
  __int128 v39; // [rsp+48h] [rbp-60h]
  _QWORD *v40; // [rsp+58h] [rbp-50h]
  unsigned __int64 v41; // [rsp+68h] [rbp-40h]

  v5 = a2;
  v6 = a2 - a1;
  v7 = *(_QWORD *)(a4 + 8);
  v41 = __readfsqword(0x28u);
  v36 = v6;
  if ( v7 )
  {
    n = 4 * v7;
    src = (void *)qalloc_or_throw(4 * v7);
    memcpy(src, *(const void **)a4, 4 * v7);
    v9 = *(_QWORD **)(a4 + 24);
    if ( v36 > 4 )
      goto LABEL_4;
    if ( (unsigned __int64)v5 >= a3 )
    {
      if ( src )
        qfree(src);
      return v41 - __readfsqword(0x28u);
    }
  }
  else
  {
    v9 = *(_QWORD **)(a4 + 24);
    if ( v6 > 4 )
    {
      n = 0;
      src = nullptr;
LABEL_4:
      for ( i = ((v36 >> 2) - 2) / 2; ; --i )
      {
        v11 = 0;
        v12 = *(_DWORD *)&a1[4 * i];
        v39 = 0;
        if ( v7 )
        {
          v37 = v12;
          v13 = (void *)qalloc_or_throw(n);
          *((_QWORD *)&v39 + 1) = v7;
          v14 = memcpy(v13, src, n);
          *(_QWORD *)&v39 = v7;
          v12 = v37;
          v11 = (__int64)v14;
        }
        v38 = v11;
        v40 = v9;
        sub_1BCA40((__int64)a1, i, v36 >> 2, v12, &v38);
        if ( v38 )
          qfree(v38);
        if ( !i )
          break;
      }
      if ( (unsigned __int64)v5 >= a3 )
      {
        if ( src )
          qfree(src);
        do
        {
LABEL_28:
          v22 = *(_DWORD *)a1;
          v23 = *((_DWORD *)v5 - 1);
          v5 -= 4;
          v39 = 0;
          v24 = 0;
          *(_DWORD *)v5 = v22;
          v25 = *(_QWORD *)(a4 + 8);
          if ( v25 )
          {
            v26 = (void *)qalloc_or_throw(4 * v25);
            v27 = *(const void **)a4;
            *((_QWORD *)&v39 + 1) = v25;
            v28 = memcpy(v26, v27, 4 * v25);
            *(_QWORD *)&v39 = v25;
            v24 = (__int64)v28;
          }
          v21 = *(_QWORD **)(a4 + 24);
          v38 = v24;
          v40 = v21;
          sub_1BCA40((__int64)a1, 0, (v5 - a1) >> 2, v23, &v38);
          if ( v38 )
            qfree(v38);
        }
        while ( v5 - a1 > 4 );
        return v41 - __readfsqword(0x28u);
      }
      goto LABEL_12;
    }
    src = nullptr;
    if ( (unsigned __int64)v5 >= a3 )
      return v41 - __readfsqword(0x28u);
  }
LABEL_12:
  v15 = v5;
  do
  {
    while ( 1 )
    {
      v16 = *(int *)v15;
      v17 = *v9 + 24 * v16;
      if ( *(_QWORD *)(v17 + 8) )
      {
        v18 = *(int *)a1;
        v19 = *v9 + 24 * v18;
        if ( !*(_QWORD *)(v19 + 8) || **(_QWORD **)v17 < **(_QWORD **)v19 )
        {
          *(_DWORD *)v15 = v18;
          v20 = 0;
          v39 = 0;
          if ( v7 )
          {
            na = v16;
            v30 = (void *)qalloc_or_throw(4 * v7);
            *((_QWORD *)&v39 + 1) = v7;
            v31 = memcpy(v30, src, 4 * v7);
            LODWORD(v16) = na;
            v20 = (__int64)v31;
            *(_QWORD *)&v39 = v7;
          }
          v38 = v20;
          v40 = v9;
          sub_1BCA40((__int64)a1, 0, v36 >> 2, v16, &v38);
          if ( v38 )
            break;
        }
      }
      v15 += 4;
      if ( (unsigned __int64)v15 >= a3 )
        goto LABEL_21;
    }
    qfree(v38);
    v15 += 4;
  }
  while ( (unsigned __int64)v15 < a3 );
LABEL_21:
  if ( src )
    qfree(src);
  if ( v36 > 4 )
    goto LABEL_28;
  return v41 - __readfsqword(0x28u);
}
