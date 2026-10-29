__int64 __fastcall sub_4CBF70(__int64 a1, __int64 a2, const char *a3)
{
  unsigned int v4; // ebx
  __int64 v6; // r14
  unsigned __int64 v7; // rbp
  __int64 v8; // r12
  int v9; // r15d
  __int64 v10; // r13
  __int64 v11; // rax
  const char *v12; // rsi
  const char *v13; // rdi
  __int64 v14; // rax
  int v15; // eax
  char *v16; // r12
  unsigned __int64 v17; // rbp
  __int64 v18; // r13
  __int64 v19; // rbx
  int v20; // r15d
  __int64 v21; // rax
  const char *v22; // rsi
  const char *v23; // rdi
  __int64 v24; // rax
  char *v25; // [rsp+8h] [rbp-90h]
  const char *v26; // [rsp+18h] [rbp-80h]
  void *v27; // [rsp+20h] [rbp-78h] BYREF
  __int128 v28; // [rsp+28h] [rbp-70h]
  void *ptr; // [rsp+40h] [rbp-58h] BYREF
  __int128 v30; // [rsp+48h] [rbp-50h]
  unsigned __int64 v31; // [rsp+58h] [rbp-40h]

  v31 = __readfsqword(0x28u);
  if ( a3 && *a3 && (v6 = *(_QWORD *)(a1 + 1720), (getinf(10) & 0x4000) != 0) )
  {
    v26 = sub_4C9CA0(*(_QWORD *)(a1 + 1672), a2, a3);
    v27 = nullptr;
    v28 = 0;
    v4 = cleanup_name((__int64)&v27, a2, v26, 0);
    if ( (_BYTE)v4 )
    {
      v7 = *(_QWORD *)(v6 + 328);
      if ( v7 )
      {
        v8 = *(_QWORD *)(v6 + 320);
        v9 = 0;
        v10 = v28;
        v25 = (char *)v27;
        v11 = 0;
        while ( 1 )
        {
          v14 = v8 + 24 * v11;
          if ( !*(_QWORD *)(v14 + 8) )
            break;
          v12 = *(const char **)v14;
          v13 = haystack;
          if ( v10 )
            goto LABEL_15;
LABEL_10:
          if ( !strcmp(v13, v12) )
            goto LABEL_20;
          v11 = ++v9;
          if ( v9 >= v7 )
            goto LABEL_22;
        }
        if ( !v10 )
          goto LABEL_20;
        v12 = haystack;
LABEL_15:
        v13 = v25;
        goto LABEL_10;
      }
    }
LABEL_22:
    v30 = 0;
    ptr = nullptr;
    v15 = demangle_name(&ptr, v26, 8, 2);
    v16 = (char *)ptr;
    v4 = 0;
    if ( v15 > 0 )
    {
      v17 = *(_QWORD *)(v6 + 328);
      if ( v17 )
      {
        v18 = *(_QWORD *)(v6 + 320);
        v19 = v30;
        v20 = 0;
        v21 = 0;
        while ( 1 )
        {
          v24 = v18 + 24 * v21;
          if ( !*(_QWORD *)(v24 + 8) )
            break;
          v22 = *(const char **)v24;
          v23 = haystack;
          if ( v19 )
            goto LABEL_31;
LABEL_26:
          if ( !strcmp(v23, v22) )
            goto LABEL_16;
          v21 = ++v20;
          if ( v20 >= v17 )
          {
            v4 = 0;
            goto LABEL_17;
          }
        }
        if ( !v19 )
        {
LABEL_16:
          v4 = 1;
          goto LABEL_17;
        }
        v22 = haystack;
LABEL_31:
        v23 = v16;
        goto LABEL_26;
      }
    }
LABEL_17:
    if ( v16 )
    {
      *(_QWORD *)&v30 = 0;
      qfree(v16);
    }
    v25 = (char *)v27;
LABEL_20:
    if ( v25 )
    {
      *(_QWORD *)&v28 = 0;
      qfree(v25);
    }
  }
  else
  {
    return 0;
  }
  return v4;
}
