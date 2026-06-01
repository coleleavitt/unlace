__int64 __fastcall sub_11BAA70(char *a1, size_t a2, __int64 a3, _QWORD *a4, _QWORD *a5)
{
  _BYTE *v9; // rax
  signed __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rbp
  _DWORD *v13; // r12
  size_t v14; // rdx
  const char *v15; // rbp
  size_t v16; // rax
  signed __int64 v17; // r12
  size_t v18; // rbx
  char *v19; // rbp
  signed __int64 v20; // r14
  char *v21; // rbx
  __int64 result; // rax
  const char *v23; // rdi
  size_t v24; // [rsp+8h] [rbp-90h]
  unsigned __int8 *v25[17]; // [rsp+10h] [rbp-88h] BYREF

  if ( !a2 || (v9 = memchr(a1, 58, a2)) == nullptr )
  {
    *a5 = -1;
    return 1;
  }
  v10 = v9 - a1;
  *a5 = v9 - a1;
  if ( v9 - a1 == -1 )
    return 1;
  v11 = a4[1];
  v12 = **(_QWORD **)(v11 + 8);
  v13 = (_DWORD *)(*(_QWORD *)(v11 + 32) + 80LL * (unsigned int)(*(_DWORD *)(*a4 + 40LL) - 1));
  if ( *v13 )
  {
    v14 = 0;
    v23 = (const char *)(v12 + *(unsigned int *)(*(_QWORD *)(v11 + 16) + 4LL * (unsigned int)(*v13 + 1)));
    if ( v23 )
      v14 = (unsigned int)j__strlen(v23);
    v16 = 0;
    v15 = (const char *)((unsigned int)v13[1] + v12);
    if ( !v15 )
    {
LABEL_7:
      v17 = 0;
      if ( v14 > v16 )
        goto LABEL_9;
      goto LABEL_8;
    }
LABEL_6:
    v24 = v14;
    v16 = strlen(v15);
    v14 = v24;
    goto LABEL_7;
  }
  v14 = 0;
  v15 = (const char *)((unsigned int)v13[1] + v12);
  if ( v15 )
    goto LABEL_6;
  v14 = 0;
  v16 = 0;
LABEL_8:
  v17 = v16 - v14;
  v16 = v14;
LABEL_9:
  v18 = v10 + 1;
  v19 = (char *)&v15[v16];
  if ( v18 > a2 )
  {
    v21 = &a1[a2];
    v20 = 0;
    goto LABEL_11;
  }
  v20 = a2 - v18;
  v21 = &a1[v18];
  if ( v20 != 1 )
  {
LABEL_11:
    sub_FC70B0((__int64)v25, a3, 0, 400);
    sub_AEC220(v25, v19, v17);
    sub_AEC220(v25, v21, v20);
    sub_AEA040((__int64)v25);
    return 0;
  }
  result = 1;
  if ( (unsigned __int8)(*v21 - 48) > 9u )
  {
    sub_FC70B0((__int64)v25, a3, 0, 400);
    sub_AEC220(v25, v19, v17);
    sub_AEC220(v25, v21, 1);
    sub_AEA040((__int64)v25);
    return 0;
  }
  return result;
}
