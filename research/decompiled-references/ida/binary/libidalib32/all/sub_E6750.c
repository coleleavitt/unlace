unsigned __int64 __fastcall sub_E6750(_BYTE *a1, const char *a2, char a3)
{
  size_t v3; // rax
  size_t v4; // rbp
  size_t v5; // rbx
  int *v6; // r13
  int *v7; // rbx
  char *v8; // r14
  char *v9; // r15
  int *v10; // r12
  char *v11; // rsi
  const char *v12; // rdi
  int v13; // eax
  int *v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rcx
  const char *v17; // rsi
  size_t v18; // rax
  size_t v19; // rbp
  void *v21; // rdi
  size_t v22; // r12
  __int64 v23; // rax
  char **p_s2; // [rsp+28h] [rbp-60h] BYREF
  char *s2; // [rsp+30h] [rbp-58h] BYREF
  __int128 v28; // [rsp+38h] [rbp-50h]
  unsigned __int64 v29; // [rsp+48h] [rbp-40h]

  v29 = __readfsqword(0x28u);
  v28 = 0;
  v3 = strlen(a2);
  v4 = v3 + 1;
  v5 = v3;
  s2 = (char *)qvector_reserve();
  *(_QWORD *)&v28 = v4;
  memmove(s2, a2, v5);
  s2[v5] = 0;
  v6 = (int *)qword_251130;
  v7 = &dword_251128;
  if ( !qword_251130 )
    goto LABEL_21;
  v8 = s2;
  v9 = (char *)s1;
  v7 = &dword_251128;
  if ( (_QWORD)v28 )
    v9 = s2;
  while ( 1 )
  {
    v15 = *((_QWORD *)v6 + 5);
    if ( !(_QWORD)v28 )
      break;
    if ( v15 )
      goto LABEL_14;
    v10 = v6;
    v11 = s2;
    v12 = s1;
LABEL_7:
    v13 = strcmp(v12, v11);
    v14 = *((int **)v6 + 2);
    v6 = *((int **)v6 + 3);
    if ( v13 >= 0 )
    {
      v7 = v10;
      v6 = v14;
    }
    if ( !v6 )
      goto LABEL_16;
  }
  if ( v15 )
  {
LABEL_14:
    v12 = *((const char **)v6 + 4);
    v10 = v6;
    v11 = v9;
    goto LABEL_7;
  }
  while ( 1 )
  {
    v16 = *((_QWORD *)v6 + 2);
    if ( !v16 )
      break;
    v7 = v6;
    v6 = *((int **)v6 + 2);
    if ( *(_QWORD *)(v16 + 40) )
      goto LABEL_14;
  }
  v7 = v6;
LABEL_16:
  if ( v7 == &dword_251128 )
    goto LABEL_21;
  if ( *((_QWORD *)v7 + 5) )
  {
    v17 = *((const char **)v7 + 4);
    if ( !(_QWORD)v28 )
      v8 = (char *)s1;
LABEL_20:
    if ( strcmp(v8, v17) < 0 )
    {
LABEL_21:
      p_s2 = &s2;
      v7 = (int *)sub_E6630(&qword_251120, v7, (__int64 **)&p_s2);
    }
  }
  else
  {
    v17 = s1;
    if ( (_QWORD)v28 )
      goto LABEL_20;
  }
  if ( a1 && (v18 = strlen(a1), (v19 = v18) != 0) )
  {
    v21 = *((void **)v7 + 7);
    v22 = v18 + 1;
    if ( *((_QWORD *)v7 + 9) < v18 + 1 )
    {
      v23 = qvector_reserve();
      *((_QWORD *)v7 + 7) = v23;
      v21 = (void *)v23;
    }
    *((_QWORD *)v7 + 8) = v22;
    memmove(v21, a1, v19);
    *(_BYTE *)(*((_QWORD *)v7 + 7) + v19) = 0;
  }
  else
  {
    *((_QWORD *)v7 + 8) = 0;
  }
  if ( s2 )
  {
    *(_QWORD *)&v28 = 0;
    qfree();
  }
  if ( (unsigned __int8)netnode_inited() )
  {
    LODWORD(p_s2) = -1;
    netnode_check();
    if ( a1 && (a3 || *a1) )
    {
      netnode_check();
      strlen(a1);
      netnode_hashset();
    }
    else
    {
      netnode_check();
      netnode_hashdel();
    }
  }
  return v29 - __readfsqword(0x28u);
}

