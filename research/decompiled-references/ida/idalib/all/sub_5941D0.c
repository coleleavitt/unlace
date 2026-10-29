unsigned __int64 __fastcall sub_5941D0(_QWORD *a1, __int64 a2, char a3)
{
  __int64 v4; // r13
  size_t v6; // rax
  size_t v7; // r12
  const char *v8; // r12
  __int64 v9; // rax
  size_t v10; // rax
  size_t v11; // r12
  int v13; // eax
  int v14; // r9d
  size_t v15; // rax
  size_t v16; // r12
  void *v17; // rdi
  size_t v18; // r14
  void *v19; // rdi
  size_t v20; // r13
  void *v21; // rdi
  size_t v22; // r13
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  char _0[4104]; // [rsp+0h] [rbp+0h] BYREF
  unsigned __int64 vars1008; // [rsp+1008h] [rbp+1008h]

  v4 = a1[209];
  vars1008 = __readfsqword(0x28u);
  qmake_full_path(_0, 4096, a2);
  if ( !a3 )
    sub_593F40(_0, 4096, _0, "i64");
  v6 = strlen(_0);
  v7 = v6;
  if ( !v6 )
  {
    a1[4] = 0;
LABEL_5:
    v8 = haystack;
    goto LABEL_6;
  }
  v17 = (void *)a1[3];
  v18 = v6 + 1;
  if ( a1[5] < v6 + 1 )
  {
    v24 = qvector_reserve(a1 + 3, a1[3], v18, 1);
    a1[3] = v24;
    v17 = (void *)v24;
  }
  a1[4] = v18;
  memmove(v17, _0, v7);
  *(_BYTE *)(a1[3] + v7) = 0;
  if ( !a1[4] )
    goto LABEL_5;
  v8 = (const char *)a1[3];
LABEL_6:
  if ( *(_QWORD *)(v4 + 384) <= 1u )
    goto LABEL_7;
  qmake_full_path(_0, 4096, *(_QWORD *)(v4 + 376));
  v13 = qbasename(v8);
  qmakepath((unsigned int)_0, 4096, (unsigned int)_0, v13, 0, v14);
  v15 = strlen(_0);
  v16 = v15;
  if ( !v15 )
  {
    a1[7] = 0;
LABEL_12:
    v8 = haystack;
    goto LABEL_7;
  }
  v21 = (void *)a1[6];
  v22 = v15 + 1;
  if ( a1[8] < v15 + 1 )
  {
    v25 = qvector_reserve(a1 + 6, a1[6], v22, 1);
    a1[6] = v25;
    v21 = (void *)v25;
  }
  a1[7] = v22;
  memmove(v21, _0, v16);
  *(_BYTE *)(a1[6] + v16) = 0;
  if ( !a1[7] )
    goto LABEL_12;
  v8 = (const char *)a1[6];
LABEL_7:
  v9 = sub_72B5B0(0);
  set_file_ext(_0, 4096, v8, v9);
  v10 = strlen(_0);
  v11 = v10;
  if ( v10 )
  {
    v19 = (void *)a1[6];
    v20 = v10 + 1;
    if ( a1[8] < v10 + 1 )
    {
      v23 = qvector_reserve(a1 + 6, a1[6], v20, 1);
      a1[6] = v23;
      v19 = (void *)v23;
    }
    a1[7] = v20;
    memmove(v19, _0, v11);
    *(_BYTE *)(a1[6] + v11) = 0;
  }
  else
  {
    a1[7] = 0;
  }
  qword_2CD46D8 = (__int64)sub_597520;
  qword_2CD46D0 = (__int64)sub_590E90;
  return vars1008 - __readfsqword(0x28u);
}
