unsigned __int64 __fastcall sub_43B2E0(__int64 *a1, unsigned int a2, __int64 a3, int a4)
{
  int v4; // ebx
  unsigned int v6; // r13d
  const char *v7; // r8
  const char *v8; // rdx
  __int64 v9; // r15
  unsigned int v10; // esi
  int v11; // eax
  char *v13; // rdx
  void *v14; // rdi
  __int64 v15; // rsi
  char *v16; // rsi
  const char *v17; // rdi
  char *v18; // rdx
  char *v19; // rdx
  int v20; // [rsp-8h] [rbp-D8h]
  const char *v21; // [rsp+0h] [rbp-D0h]
  const char *v22; // [rsp+8h] [rbp-C8h]
  int v23; // [rsp+10h] [rbp-C0h]
  void *v24; // [rsp+18h] [rbp-B8h] BYREF
  __int128 v25; // [rsp+20h] [rbp-B0h]
  int v26; // [rsp+30h] [rbp-A0h]
  void *v27; // [rsp+38h] [rbp-98h] BYREF
  __int128 v28; // [rsp+40h] [rbp-90h]
  int v29; // [rsp+50h] [rbp-80h]
  char *s2; // [rsp+58h] [rbp-78h] BYREF
  int v31[4]; // [rsp+60h] [rbp-70h]
  __int64 v32; // [rsp+70h] [rbp-60h]
  void *ptr; // [rsp+78h] [rbp-58h] BYREF
  int v34[4]; // [rsp+80h] [rbp-50h]
  unsigned __int64 v35; // [rsp+90h] [rbp-40h]

  v4 = (int)a1;
  v35 = __readfsqword(0x28u);
  v24 = nullptr;
  v25 = 0;
  sub_43ADF0((__int64)a1, (__int64)&v24, a2 - a4, 0, nullptr);
  v28 = 0;
  v27 = nullptr;
  sub_43ADF0((__int64)a1, (__int64)&v27, a2, 0, nullptr);
  v6 = *(_DWORD *)(a3 + 16);
  if ( v6 != -1 )
  {
    v7 = haystack;
    if ( (_QWORD)v25 )
    {
      v7 = (const char *)v24;
      v8 = haystack;
      if ( !(_QWORD)v28 )
        goto LABEL_4;
    }
    else
    {
      v8 = haystack;
      if ( !(_QWORD)v28 )
      {
LABEL_4:
        sub_437DE0(a1, v6, v8, 0, v7);
        v6 = *(_DWORD *)(a3 + 16);
        goto LABEL_5;
      }
    }
    v8 = (const char *)v27;
    goto LABEL_4;
  }
LABEL_5:
  v21 = haystack;
  if ( (_QWORD)v28 )
    v21 = (const char *)v27;
  v22 = haystack;
  if ( (_QWORD)v25 )
    v22 = (const char *)v24;
  v9 = *a1;
  BYTE4(ptr) = 0;
  LODWORD(ptr) = -1;
  sub_3DD450(a1, (__int64)&ptr, a2);
  while ( (_DWORD)ptr != -1 )
  {
    if ( BYTE4(ptr) == 19 && v6 != (_DWORD)ptr )
      sub_437DE0(*(_QWORD **)(v9 + 1480), (unsigned int)ptr, v21, 0, v22);
    sub_3DD610(a1, (__int64)&ptr, a2);
  }
  v10 = *(_DWORD *)(a3 + 16);
  if ( v10 != -1 && (sub_3B9AA0((__int64)a1, v10, 4) & 0x4000) != 0 )
  {
    *(_OWORD *)v31 = 0;
    s2 = nullptr;
    sub_3573A0(&s2);
    v15 = *(unsigned int *)(a3 + 16);
    *(_OWORD *)v34 = 0;
    ptr = nullptr;
    if ( get_ea_name(&ptr, v15, 0, 0) <= 0 )
    {
LABEL_35:
      if ( ptr )
      {
        *(_QWORD *)v34 = 0;
        qfree(ptr);
      }
      if ( s2 )
      {
        *(_QWORD *)v31 = 0;
        qfree(s2);
      }
      goto LABEL_17;
    }
    if ( *(_QWORD *)v31 )
    {
      v16 = s2;
      v17 = haystack;
      if ( !*(_QWORD *)v34 )
        goto LABEL_34;
    }
    else
    {
      v16 = (char *)haystack;
      if ( !*(_QWORD *)v34 )
        goto LABEL_45;
    }
    v17 = (const char *)ptr;
LABEL_34:
    if ( strcmp(v17, v16) )
      goto LABEL_35;
LABEL_45:
    sub_3573A0(&s2);
    v19 = (char *)haystack;
    if ( *(_QWORD *)v31 )
      v19 = s2;
    sub_4C0DE0(
      v4,
      *(_DWORD *)(a3 + 16),
      v19,
      v20,
      (int)v21,
      (int)v22,
      v23,
      (int)v24,
      (void *)v25,
      *((__int64 *)&v25 + 1),
      v26,
      (int)v27,
      (void *)v28,
      *((__int64 *)&v28 + 1),
      v29,
      (int)s2,
      v31[0],
      v31[2],
      v32,
      (int)ptr,
      v34[0],
      *(__int64 *)&v34[2]);
    goto LABEL_35;
  }
LABEL_17:
  v11 = sub_4393D0(*(unsigned int *)(a3 + 8));
  if ( v11 == 1 )
  {
    *(_OWORD *)v34 = 0;
    ptr = nullptr;
    sub_3573A0((char **)&ptr);
    v18 = (char *)haystack;
    if ( *(_QWORD *)v34 )
      v18 = (char *)ptr;
    sub_4C0DE0(
      v4,
      *(_DWORD *)(a3 + 8),
      v18,
      v20,
      (int)v21,
      (int)v22,
      v23,
      (int)v24,
      (void *)v25,
      *((__int64 *)&v25 + 1),
      v26,
      (int)v27,
      (void *)v28,
      *((__int64 *)&v28 + 1),
      v29,
      (int)s2,
      v31[0],
      v31[2],
      v32,
      (int)ptr,
      v34[0],
      *(__int64 *)&v34[2]);
    v14 = ptr;
    if ( ptr )
      goto LABEL_27;
  }
  else if ( v11 == 2 )
  {
    *(_OWORD *)v34 = 0;
    ptr = nullptr;
    sub_3573A0((char **)&ptr);
    v13 = (char *)haystack;
    if ( *(_QWORD *)v34 )
      v13 = (char *)ptr;
    sub_4C0DE0(
      v4,
      *(_DWORD *)(a3 + 8),
      v13,
      v20,
      (int)v21,
      (int)v22,
      v23,
      (int)v24,
      (void *)v25,
      *((__int64 *)&v25 + 1),
      v26,
      (int)v27,
      (void *)v28,
      *((__int64 *)&v28 + 1),
      v29,
      (int)s2,
      v31[0],
      v31[2],
      v32,
      (int)ptr,
      v34[0],
      *(__int64 *)&v34[2]);
    v14 = ptr;
    if ( ptr )
    {
LABEL_27:
      *(_QWORD *)v34 = 0;
      qfree(v14);
    }
  }
  if ( v27 )
  {
    *(_QWORD *)&v28 = 0;
    qfree(v27);
  }
  if ( v24 )
  {
    *(_QWORD *)&v25 = 0;
    qfree(v24);
  }
  return v35 - __readfsqword(0x28u);
}

