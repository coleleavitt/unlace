__int64 __fastcall sub_523930(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 *v3; // rbp
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rbp
  char *v7; // rdx
  __int64 v8; // r12
  __int64 v9; // rbx
  char *v10; // rax
  void *v11; // rdi
  char *v12; // rdx
  void *v13; // r12
  void *v14; // rbx
  char *v15; // rax
  void *v16; // rdi
  char *v18; // r13
  char *v19; // r12
  _QWORD *v20; // rbp
  __int64 *v21; // rbx
  const char *v22; // rsi
  const char *v23; // rdi
  __int64 v24; // rax
  void *v25; // [rsp+0h] [rbp-68h] BYREF
  void *v26[2]; // [rsp+8h] [rbp-60h]
  void *ptr; // [rsp+20h] [rbp-48h] BYREF
  __int128 v28; // [rsp+28h] [rbp-40h]
  unsigned __int64 v29; // [rsp+38h] [rbp-30h]

  v29 = __readfsqword(0x28u);
  if ( a3 >= *(_QWORD *)(a1 + 48)
    || (v3 = (__int64 *)(8 * a3 + *(_QWORD *)(a1 + 40)), !*v3)
    || (v4 = *(_QWORD *)(a2 + 40) + 8 * a3, !*(_QWORD *)v4) )
  {
    if ( !under_debugger )
      interr(1936);
    BUG();
  }
  v25 = nullptr;
  *(_OWORD *)v26 = 0;
  sub_5200A0((__int64 *)&v25, *v3 + 32);
  ptr = nullptr;
  v28 = 0;
  sub_5200A0((__int64 *)&ptr, *(_QWORD *)v4 + 32LL);
  v5 = *v3;
  v6 = 1;
  if ( *(_QWORD *)(*(_QWORD *)(v5 + 24) + 16LL) == *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v4 + 24LL) + 16LL) )
  {
    v18 = (char *)v26[0];
    if ( v26[0] == (void *)v28 )
    {
      if ( v26[0] )
      {
        v19 = nullptr;
        v20 = (char *)ptr + 8;
        v21 = (__int64 *)((char *)v25 + 8);
        while ( 1 )
        {
          v24 = *v21;
          if ( *v20 )
            break;
          v22 = haystack;
          if ( v24 )
            goto LABEL_24;
LABEL_26:
          ++v19;
          v20 += 3;
          v21 += 3;
          if ( v18 == v19 )
          {
            v6 = 0;
LABEL_31:
            v7 = (char *)ptr;
            if ( ptr )
            {
              v8 = v28;
              goto LABEL_7;
            }
            goto LABEL_12;
          }
        }
        v22 = (const char *)*(v20 - 1);
        v23 = haystack;
        if ( v24 )
LABEL_24:
          v23 = (const char *)*(v21 - 1);
        if ( strcmp(v23, v22) )
        {
          v6 = 1;
          goto LABEL_31;
        }
        goto LABEL_26;
      }
      v6 = 0;
    }
  }
  v7 = (char *)ptr;
  if ( ptr )
  {
    v8 = v28;
    if ( (_QWORD)v28 )
    {
LABEL_7:
      v9 = 0;
      do
      {
        v10 = &v7[24 * v9];
        v11 = *(void **)v10;
        if ( *(_QWORD *)v10 )
        {
          *((_QWORD *)v10 + 1) = 0;
          qfree(v11);
          v7 = (char *)ptr;
        }
        ++v9;
      }
      while ( v9 != v8 );
    }
    *(_QWORD *)&v28 = 0;
    qfree(v7);
  }
LABEL_12:
  v12 = (char *)v25;
  if ( v25 )
  {
    v13 = v26[0];
    if ( v26[0] )
    {
      v14 = nullptr;
      do
      {
        v15 = &v12[24 * (_QWORD)v14];
        v16 = *(void **)v15;
        if ( *(_QWORD *)v15 )
        {
          *((_QWORD *)v15 + 1) = 0;
          qfree(v16);
          v12 = (char *)v25;
        }
        v14 = (char *)v14 + 1;
      }
      while ( v13 != v14 );
    }
    v26[0] = nullptr;
    qfree(v12);
  }
  return v6;
}
