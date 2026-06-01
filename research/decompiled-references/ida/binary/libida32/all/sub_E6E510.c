size_t __fastcall sub_E6E510(__int64 a1, int a2, char a3)
{
  __int64 v3; // rax
  char **v4; // rcx
  size_t *v5; // r12
  size_t v6; // rbp
  char *v7; // r14
  __int64 v8; // rbx
  unsigned int v9; // eax
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 *v12; // r15
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // r13
  __int64 v16; // rax
  __int64 v17; // rdi
  __int64 v18; // rdx
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // rcx
  __int64 v23; // rax
  _QWORD *v24; // r13
  char *v25; // rdx
  _QWORD *v26; // rcx
  unsigned int v27; // eax
  _QWORD *v28; // rax
  __int64 v29; // rax
  int v30; // [rsp+Ch] [rbp-4Ch]
  int v31; // [rsp+Ch] [rbp-4Ch]
  __int64 *v32[8]; // [rsp+18h] [rbp-40h] BYREF

  v3 = a1 + 496;
  v4 = off_2C585E0;
  if ( !a3 )
  {
    v3 = a1 + 376;
    v4 = off_2C58660;
  }
  v5 = (size_t *)(v3 + 8LL * a2);
  v6 = *v5;
  if ( !*v5 )
  {
    v7 = v4[a2];
    v8 = *(_QWORD *)(*(_QWORD *)a1 + 17504LL);
    if ( v7 )
      v6 = strlen(v4[a2]);
    v9 = sub_2220DF0(v7, v6);
    v10 = (unsigned int)sub_2220F70(v8, v7, v6, v9);
    v12 = (__int64 *)(*(_QWORD *)v8 + 8 * v10);
    if ( *v12 )
    {
      if ( *v12 != -8 )
      {
        sub_965750(v32, v12, 0);
        v15 = *v32[0];
        v16 = *(_QWORD *)(*v32[0] + 8);
        if ( v16 )
          goto LABEL_23;
        goto LABEL_9;
      }
      --*(_DWORD *)(v8 + 16);
    }
    v23 = *(_QWORD *)(v8 + 24);
    *(_QWORD *)(v8 + 104) += v6 + 17;
    v24 = (_QWORD *)((v23 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    v25 = (char *)v24 + v6 + 17;
    if ( *(_QWORD *)(v8 + 32) >= (unsigned __int64)v25 && v23 )
    {
      *(_QWORD *)(v8 + 24) = v25;
    }
    else
    {
      v31 = v10;
      v29 = sub_962430(v8 + 24, v6 + 17, v6 + 17, 3, v10, v11);
      LODWORD(v10) = v31;
      v24 = (_QWORD *)v29;
    }
    v26 = v24 + 2;
    if ( v6 )
    {
      v30 = v10;
      v28 = memcpy(v24 + 2, v7, v6);
      LODWORD(v10) = v30;
      v26 = v28;
    }
    *((_BYTE *)v26 + v6) = 0;
    *v24 = v6;
    v24[1] = 0;
    *v12 = (__int64)v24;
    ++*(_DWORD *)(v8 + 12);
    v27 = sub_2221390(v8, (unsigned int)v10);
    sub_965750(v32, (__int64 *)(*(_QWORD *)v8 + 8LL * v27), 0);
    v15 = *v32[0];
    v16 = *(_QWORD *)(*v32[0] + 8);
    if ( v16 )
      goto LABEL_23;
LABEL_9:
    v17 = *(_QWORD *)(v8 + 120);
    if ( !v17
      || (v16 = (*(__int64 (__fastcall **)(__int64, char *, size_t))(*(_QWORD *)v17 + 16LL))(v17, v7, v6),
          (*(_QWORD *)(v15 + 8) = v16) == 0) )
    {
      v18 = *(_QWORD *)(v8 + 24);
      *(_QWORD *)(v8 + 104) += 24LL;
      v19 = (v18 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      if ( *(_QWORD *)(v8 + 32) >= v19 + 24 && v18 )
      {
        *(_QWORD *)(v8 + 24) = v19 + 24;
        v20 = (v18 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      }
      else
      {
        v20 = sub_962430(v8 + 24, 24, 24, 3, v13, v14);
        v19 = v20 & 0xFFFFFFFFFFFFFFF8LL;
      }
      v21 = *(_QWORD *)v20 & 0xFFFFF80000000000LL;
      *(_QWORD *)(v20 + 8) = 0;
      *(_QWORD *)v20 = v21 | 0x1FFFC05;
      *(_QWORD *)(v15 + 8) = v20;
      *(_QWORD *)(v20 + 16) = v15;
      *v5 = v19 | 2;
      return *v5;
    }
LABEL_23:
    *v5 = v16 & 0xFFFFFFFFFFFFFFF8LL | 2;
  }
  return *v5;
}

