__int64 __fastcall sub_778630(_QWORD *a1, __int64 a2, const char **a3, __int64 a4)
{
  unsigned __int64 v6; // rsi
  __int64 v7; // rax
  int v8; // edx
  char *v10; // r15
  char *v11; // rbx
  const char *v12; // r14
  const char *v13; // rsi
  char *v14; // r13
  const char *v15; // rdi
  int v16; // eax
  char *v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rcx
  const char *v20; // rsi
  const char *v21; // rdi
  __int64 v23[9]; // [rsp+10h] [rbp-48h] BYREF

  v6 = *(int *)(a2 + 52);
  for ( v23[1] = __readfsqword(0x28u); (_DWORD)v6; v6 = *(int *)(v7 + 48) )
  {
    v7 = sub_76D4A0(a1[1], v6);
    v8 = *(_DWORD *)(v7 + 84);
    if ( v8 != -1 )
      return sub_7782A0(a1, a2, v8, (__int64)a3, a4, 0);
  }
  v10 = *(char **)(a2 + 16);
  v11 = (char *)(a2 + 8);
  if ( !v10 )
    goto LABEL_24;
  v12 = a3[1];
  v11 = (char *)(a2 + 8);
  while ( 1 )
  {
    v18 = *((_QWORD *)v10 + 5);
    if ( !v12 )
      break;
    v13 = *a3;
    v14 = v10;
    v15 = haystack;
    if ( v18 )
      goto LABEL_9;
LABEL_10:
    v16 = strcmp(v15, v13);
    v17 = *((char **)v10 + 2);
    v10 = *((char **)v10 + 3);
    if ( v16 >= 0 )
    {
      v11 = v14;
      v10 = v17;
    }
    if ( !v10 )
      goto LABEL_19;
  }
  if ( v18 )
  {
LABEL_17:
    v13 = haystack;
LABEL_9:
    v15 = *((const char **)v10 + 4);
    v14 = v10;
    goto LABEL_10;
  }
  while ( 1 )
  {
    v19 = *((_QWORD *)v10 + 2);
    if ( !v19 )
      break;
    v11 = v10;
    v10 = *((char **)v10 + 2);
    if ( *(_QWORD *)(v19 + 40) )
      goto LABEL_17;
  }
  v11 = v10;
LABEL_19:
  if ( v11 == (char *)(a2 + 8) )
    goto LABEL_24;
  if ( *((_QWORD *)v11 + 5) )
  {
    v20 = *((const char **)v11 + 4);
    v21 = haystack;
    if ( v12 )
      v21 = *a3;
LABEL_23:
    if ( strcmp(v21, v20) < 0 )
    {
LABEL_24:
      v23[0] = (__int64)a3;
      v11 = (char *)sub_775E70((_QWORD *)a2, v11, v23);
    }
  }
  else
  {
    v20 = haystack;
    if ( v12 )
    {
      v21 = *a3;
      goto LABEL_23;
    }
  }
  copy_idcv(v11 + 56);
  return 1;
}

