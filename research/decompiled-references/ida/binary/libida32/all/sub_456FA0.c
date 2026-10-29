__int64 __fastcall sub_456FA0(__int64 a1, int a2, unsigned __int16 a3, int a4, unsigned __int16 a5, unsigned int a6)
{
  __int64 v9; // rbx
  __int64 v10; // rdi
  char *v12; // rbx
  unsigned int v13; // ebp
  char *v15; // rsi
  char *v16; // rdi
  const char *v17; // rsi
  char *v18; // rdi
  int v19; // [rsp+0h] [rbp-B8h] BYREF
  char *s1; // [rsp+8h] [rbp-B0h]
  __int128 v21; // [rsp+10h] [rbp-A8h]
  char *v22; // [rsp+20h] [rbp-98h]
  __int128 v23; // [rsp+28h] [rbp-90h]
  int v24; // [rsp+40h] [rbp-78h] BYREF
  char *s2; // [rsp+48h] [rbp-70h]
  __int128 v26; // [rsp+50h] [rbp-68h]
  void *ptr; // [rsp+60h] [rbp-58h]
  __int128 v28; // [rsp+68h] [rbp-50h]
  unsigned __int64 v29; // [rsp+78h] [rbp-40h]

  v9 = a4;
  v10 = *(int *)(a1 + 4LL * a2 + 16);
  v29 = __readfsqword(0x28u);
  switch_dbctx(v10);
  v19 = 0;
  s1 = nullptr;
  v22 = nullptr;
  v21 = 0;
  v23 = 0;
  sub_456A50(&v19, a6, a3);
  switch_dbctx(*(int *)(a1 + 4 * v9 + 16));
  v26 = 0;
  v24 = 0;
  s2 = nullptr;
  ptr = nullptr;
  v28 = 0;
  sub_456A50(&v24, a6, a5);
  v12 = (char *)ptr;
  v13 = 0;
  if ( v19 != v24 )
    goto LABEL_2;
  if ( (_QWORD)v26 )
  {
    v15 = s2;
    v16 = (char *)haystack;
    if ( !(_QWORD)v21 )
      goto LABEL_14;
    goto LABEL_13;
  }
  v15 = (char *)haystack;
  if ( (_QWORD)v21 )
  {
LABEL_13:
    v16 = s1;
LABEL_14:
    v13 = 0;
    if ( strcmp(v16, v15) )
      goto LABEL_2;
  }
  v17 = v12;
  if ( !(_QWORD)v28 )
    v17 = haystack;
  v18 = (char *)haystack;
  if ( (_QWORD)v23 )
    v18 = v22;
  LOBYTE(v13) = strcmp(v18, v17) == 0;
LABEL_2:
  if ( v12 )
  {
    *(_QWORD *)&v28 = 0;
    qfree(v12);
  }
  if ( s2 )
  {
    *(_QWORD *)&v26 = 0;
    qfree(s2);
  }
  if ( v22 )
  {
    *(_QWORD *)&v23 = 0;
    qfree(v22);
  }
  if ( s1 )
  {
    *(_QWORD *)&v21 = 0;
    qfree(s1);
  }
  return v13;
}

