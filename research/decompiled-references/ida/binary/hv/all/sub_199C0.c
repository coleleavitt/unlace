unsigned __int64 __fastcall sub_199C0(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6)
{
  __int64 v6; // rax
  _QWORD *v8; // r15
  unsigned __int64 v9; // rbp
  __int64 v10; // rax
  unsigned __int64 v11; // rax
  _QWORD *v12; // rcx
  unsigned __int64 v13; // rbx
  _QWORD *v15; // r13
  __int64 i; // rbx
  const char *v17; // rdi
  __int64 v18; // rax
  unsigned __int64 v19; // rax
  int *v20; // rdx
  _QWORD *v21; // [rsp+8h] [rbp-60h]
  void *ptr; // [rsp+10h] [rbp-58h] BYREF
  __int128 v23; // [rsp+18h] [rbp-50h]
  unsigned __int64 v24; // [rsp+28h] [rbp-40h]

  v24 = __readfsqword(0x28u);
  v6 = a1[1];
  if ( !v6 || v6 == 1 && a1[4] )
    return v24 - __readfsqword(0x28u);
  ptr = nullptr;
  v8 = (_QWORD *)*a1;
  v23 = 0;
  v9 = v8[1];
  if ( v9 )
  {
    ptr = (void *)sub_96080(&ptr, 0, v8[1], 4);
    v10 = v23;
    if ( (unsigned __int64)v23 < v9 )
    {
      *((_DWORD *)ptr + v23) = 0;
      v11 = v10 + 1;
      if ( v11 < v9 )
      {
        do
          *((_DWORD *)ptr + v11++) = 0;
        while ( v9 != v11 );
      }
    }
    v6 = a1[1];
    v8 = (_QWORD *)*a1;
    *(_QWORD *)&v23 = v9;
    v12 = &v8[3 * v6];
    v21 = v12;
    if ( v12 == v8 )
      goto LABEL_9;
    goto LABEL_16;
  }
  v12 = &v8[3 * v6];
  v21 = v12;
  if ( v12 != v8 )
  {
LABEL_16:
    v15 = v8;
    if ( v9 != v8[1] )
    {
LABEL_26:
      if ( !byte_1671A1 )
        sub_96F80(2736);
      BUG();
    }
    if ( v9 )
    {
      while ( 1 )
      {
        for ( i = 0; i != v9; ++i )
        {
          v17 = haystack;
          v18 = *v8 + 24 * i;
          if ( *(_QWORD *)(v18 + 8) )
            v17 = *(const char **)v18;
          v19 = sub_8F680(v17);
          v20 = (int *)((char *)ptr + 4 * i);
          if ( *v20 < v19 )
            *v20 = v19;
        }
        v15 += 3;
        v8 = v15;
        if ( v15 == v21 )
          break;
        if ( v9 != v15[1] )
          goto LABEL_26;
      }
      v6 = a1[1];
    }
    else
    {
      while ( 1 )
      {
        v15 += 3;
        if ( v21 == v15 )
          break;
        if ( v15[1] )
          goto LABEL_26;
      }
    }
LABEL_9:
    if ( !v6 )
      goto LABEL_12;
  }
  v13 = 0;
  do
    sub_19560(a1, &ptr, v13++, (int)v12, a5, a6);
  while ( v13 < a1[1] );
LABEL_12:
  if ( ptr )
  {
    *(_QWORD *)&v23 = 0;
    j__free(ptr);
  }
  return v24 - __readfsqword(0x28u);
}

