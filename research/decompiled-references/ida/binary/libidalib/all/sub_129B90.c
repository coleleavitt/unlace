__int64 __fastcall sub_129B90(__int64 a1)
{
  _QWORD *v1; // rbx
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rbp
  const char *v5; // r12
  size_t v6; // rbp
  char *v7; // rax
  signed __int64 v8; // rdx
  __int64 v9; // rbp
  _DWORD *v10; // rdi
  int v11; // esi
  unsigned int v12; // ebp
  _DWORD *v13; // rdx
  __int64 v14; // rax
  char *v15; // rax
  int v16; // eax
  _DWORD *v17; // rcx
  const char *v19; // r12
  size_t v20; // rbp
  char *v21; // rax
  signed __int64 v22; // rdx
  const char *v23; // rsi
  const char *v24; // rbp
  int v25; // r12d
  char *s1; // [rsp+0h] [rbp-68h]
  size_t v27; // [rsp+8h] [rbp-60h]
  char *v28; // [rsp+20h] [rbp-48h] BYREF
  __int128 v29; // [rsp+28h] [rbp-40h]
  unsigned __int64 v30; // [rsp+38h] [rbp-30h]

  v30 = __readfsqword(0x28u);
  v2 = *(int *)(a1 + 144);
  if ( (int)v2 < 0 || (v1 = (_QWORD *)a1, (int)v2 >= *(_DWORD *)(a1 + 8)) )
  {
    if ( under_debugger )
      goto LABEL_48;
    a1 = 40501;
    v2 = interr();
  }
  v3 = *(_QWORD *)a1 + 24 * v2;
  v4 = *(_QWORD *)(v3 + 8);
  if ( v4 )
  {
    v5 = *(const char **)v3;
    v6 = v4 - 1;
    v7 = strchr(*(const char **)v3, 45);
    v28 = nullptr;
    v29 = 0;
    v8 = v7 - v5;
    if ( v6 <= v7 - v5 )
      v8 = v6;
    if ( v7 )
      v6 = v8;
    if ( v6 )
    {
      v28 = (char *)qvector_reserve();
      *(_QWORD *)&v29 = v6 + 1;
      memmove(v28, v5, v6);
      v28[v6] = 0;
    }
  }
  else
  {
    v28 = nullptr;
    v29 = 0;
  }
  v9 = v1[13];
  if ( v9 )
  {
    v19 = (const char *)v1[12];
    v20 = v9 - 1;
    v21 = strchr(v19, 45);
    v27 = 0;
    v22 = v21 - v19;
    if ( v20 <= v21 - v19 )
      v22 = v20;
    if ( v21 )
      v20 = v22;
    if ( v20 )
    {
      s1 = (char *)qvector_reserve();
      v27 = v20 + 1;
      memmove(s1, v19, v20);
      v23 = ::s1;
      s1[v20] = 0;
      v24 = s1;
      if ( !(_QWORD)v29 )
        goto LABEL_33;
      goto LABEL_42;
    }
  }
  else
  {
    v27 = 0;
  }
  if ( (_QWORD)v29 )
  {
    v24 = nullptr;
LABEL_42:
    v23 = v28;
LABEL_33:
    if ( v27 )
      v25 = strcmp(v24, v23);
    else
      v25 = -*(unsigned __int8 *)v23;
    if ( v24 )
      qfree();
    if ( v28 )
    {
      *(_QWORD *)&v29 = 0;
      qfree();
    }
    v12 = 0;
    if ( v25 )
      return v12;
    goto LABEL_17;
  }
  if ( v28 )
    qfree();
LABEL_17:
  v28 = nullptr;
  v29 = 0;
  sub_1290D0((__int64)v1, (__int64 *)&v28, (__int64)(v1 + 12));
  if ( (_QWORD)v29 )
  {
    v10 = (_DWORD *)v1[9];
    v11 = 0;
    v12 = 0;
    v13 = &v10[v1[10]];
    v14 = 0;
    while ( 1 )
    {
      v15 = &v28[4 * v14];
      if ( v10 == v13 )
        break;
      v16 = *(_DWORD *)v15;
      v17 = (_DWORD *)v1[9];
      while ( v16 != *v17 )
      {
        if ( v13 == ++v17 )
          goto LABEL_46;
      }
      ++v11;
      v12 |= 1 << (v17 - v10);
      v14 = v11;
      if ( v11 >= (unsigned __int64)v29 )
        goto LABEL_24;
    }
LABEL_46:
    if ( !under_debugger )
      interr();
LABEL_48:
    BUG();
  }
  v12 = 0;
LABEL_24:
  if ( v28 )
  {
    *(_QWORD *)&v29 = 0;
    qfree();
  }
  return v12;
}

