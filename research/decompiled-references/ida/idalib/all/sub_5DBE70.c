__int64 __fastcall sub_5DBE70(__int64 *a1)
{
  __int64 v1; // rax
  const char *v2; // rbx
  char *v3; // rax
  size_t v4; // rbp
  const char *v5; // rsi
  const char *v6; // rax
  const char *v7; // rax
  size_t v9; // r14
  void *v10; // rdi
  void *ptr; // [rsp+0h] [rbp-108h] BYREF
  __int128 v12; // [rsp+8h] [rbp-100h]
  void *v13; // [rsp+20h] [rbp-E8h] BYREF
  unsigned __int64 v14; // [rsp+28h] [rbp-E0h]
  void *v15; // [rsp+40h] [rbp-C8h] BYREF
  __int128 v16; // [rsp+48h] [rbp-C0h]
  void *v17; // [rsp+60h] [rbp-A8h] BYREF
  __int128 v18; // [rsp+68h] [rbp-A0h]
  __int64 v19; // [rsp+80h] [rbp-88h] BYREF
  int v20; // [rsp+88h] [rbp-80h]
  const char *v21; // [rsp+90h] [rbp-78h]
  const char *v22; // [rsp+98h] [rbp-70h]
  __int128 v23; // [rsp+A0h] [rbp-68h]
  __int64 v24; // [rsp+B0h] [rbp-58h]
  __int128 v25; // [rsp+B8h] [rbp-50h]
  __int64 v26; // [rsp+C8h] [rbp-40h]
  unsigned __int64 v27; // [rsp+D8h] [rbp-30h]

  v1 = *a1;
  v27 = __readfsqword(0x28u);
  v2 = (const char *)(*(_QWORD *)(v1 + 1624) + 8LL);
  v3 = strchr(v2, 32);
  if ( !v3 )
  {
    ptr = nullptr;
    v4 = strlen(v2);
    v12 = 0;
    v9 = v4 + 1;
    if ( !v4 )
      goto LABEL_3;
LABEL_20:
    ptr = (void *)qvector_reserve(&ptr, 0, v9, 1);
    v10 = ptr;
    goto LABEL_23;
  }
  v4 = v3 - v2;
  ptr = nullptr;
  skip_spaces(v3);
  v12 = 0;
  if ( !v4 )
  {
LABEL_3:
    v5 = haystack;
    goto LABEL_4;
  }
  v9 = v4 + 1;
  if ( v4 != -1 )
    goto LABEL_20;
  v10 = nullptr;
  v4 = -1;
LABEL_23:
  *(_QWORD *)&v12 = v9;
  memmove(v10, v2, v4);
  *((_BYTE *)ptr + v4) = 0;
  if ( !(_QWORD)v12 )
    goto LABEL_3;
  v5 = (const char *)ptr;
LABEL_4:
  sub_5D8460((__int64)&v13, (__int64)v5);
  if ( v14 <= 1 )
    sub_378D50();
  v16 = 0;
  v15 = nullptr;
  sub_35A790((char **)&v15);
  v19 = 80;
  v6 = haystack;
  v23 = -1;
  v20 = 0;
  v24 = -1;
  v26 = 0;
  v25 = 0;
  if ( v14 )
    v6 = (const char *)v13;
  v21 = v6;
  v7 = haystack;
  if ( (_QWORD)v16 )
    v7 = (const char *)v15;
  v22 = v7;
  v17 = nullptr;
  v18 = 0;
  if ( !launch_process(&v19, &v17) )
    sub_378D50();
  if ( v17 )
  {
    *(_QWORD *)&v18 = 0;
    qfree(v17);
  }
  if ( v15 )
  {
    *(_QWORD *)&v16 = 0;
    qfree(v15);
  }
  if ( v13 )
  {
    v14 = 0;
    qfree(v13);
  }
  if ( ptr )
  {
    *(_QWORD *)&v12 = 0;
    qfree(ptr);
  }
  return 0;
}
