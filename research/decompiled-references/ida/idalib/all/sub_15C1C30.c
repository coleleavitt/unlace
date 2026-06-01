__int64 __fastcall sub_15C1C30(__int64 a1, char *a2, __int64 a3)
{
  unsigned __int64 v4; // rsi
  __int64 v5; // rbx
  unsigned __int64 v6; // rbx
  char **v7; // r12
  __int64 v8; // rax
  __int64 v9; // r13
  char *v10; // rdi
  int v11; // eax
  __int64 v12; // rax
  _QWORD *v13; // rdi
  int v15; // eax
  unsigned __int64 v16; // rax
  __int64 v17; // rdi
  unsigned __int64 v18; // r12
  unsigned __int64 v19; // rdi
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rcx
  bool v22; // zf
  __int64 v23; // rax
  unsigned __int64 v24; // rdx
  unsigned __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rdx
  char **v28; // rsi
  unsigned __int64 v29; // r8
  __int64 v30; // rax
  __int64 v31; // rcx
  char **v32; // r13
  unsigned __int64 v33; // rdx
  char **v34; // rdi
  unsigned __int64 v35; // rcx
  __int64 v36; // rax
  __int64 v37[6]; // [rsp+8h] [rbp-30h] BYREF

  v37[0] = a3;
  if ( (a3 & 7) == 0 )
  {
    v4 = a3 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (a3 & 0xFFFFFFFFFFFFFFF8LL) == 0 || (*(_BYTE *)(v4 + 4) & 0x10) == 0 )
    {
LABEL_6:
      v5 = *(_QWORD *)(v4 + 8);
      if ( v5 )
        goto LABEL_7;
LABEL_52:
      *(_QWORD *)(v4 + 8) = a2;
      return 1;
    }
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 8) + 120LL) + 24LL))(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 120LL));
    if ( (v37[0] & 7) == 0 )
    {
      v4 = v37[0] & 0xFFFFFFFFFFFFFFF8LL;
      goto LABEL_6;
    }
  }
  v5 = sub_B85750(v37);
  if ( !v5 )
  {
    if ( (v37[0] & 7) != 0 )
      goto LABEL_36;
    v4 = v37[0] & 0xFFFFFFFFFFFFFFF8LL;
    goto LABEL_52;
  }
LABEL_7:
  if ( (v5 & 1) == 0 )
  {
    if ( a2 == (char *)v5 )
      return 0;
    if ( (*(_BYTE *)(v5 + 28) & 0x7F) != (a2[28] & 0x7F) )
    {
LABEL_24:
      if ( (v37[0] & 7) != 0 )
        sub_B857B0(v37, 0);
      else
        *(_QWORD *)((v37[0] & 0xFFFFFFFFFFFFFFF8LL) + 8) = 0;
      v16 = sub_15C16D0(*(_QWORD *)(a1 + 16), v37[0]);
      v17 = *(_QWORD *)(v5 + 16);
      v18 = v16;
      if ( (v17 & 4) != 0 )
        v19 = *(_QWORD *)(v17 & 0xFFFFFFFFFFFFFFF8LL);
      else
        v19 = v17 & 0xFFFFFFFFFFFFFFF8LL;
      v20 = sub_B8EAA0(v19);
      v21 = *(unsigned int *)(v18 + 12);
      v22 = (*(_BYTE *)(v20 + 8) & 0x7F) == 0;
      v23 = *(unsigned int *)(v18 + 8);
      v24 = v23 + 1;
      if ( v22 )
      {
        if ( v24 > v21 )
        {
          sub_2237220(v18, v18 + 16, v24, 8);
          v23 = *(unsigned int *)(v18 + 8);
        }
        *(_QWORD *)(*(_QWORD *)v18 + 8 * v23) = v5;
        v35 = *(unsigned int *)(v18 + 12);
        v36 = (unsigned int)(*(_DWORD *)(v18 + 8) + 1);
        *(_DWORD *)(v18 + 8) = v36;
        if ( v36 + 1 > v35 )
        {
          sub_2237220(v18, v18 + 16, v36 + 1, 8);
          v36 = *(unsigned int *)(v18 + 8);
        }
        *(_QWORD *)(*(_QWORD *)v18 + 8 * v36) = a2;
        ++*(_DWORD *)(v18 + 8);
        return 1;
      }
      else
      {
        if ( v24 > v21 )
        {
          sub_2237220(v18, v18 + 16, v24, 8);
          v23 = *(unsigned int *)(v18 + 8);
        }
        *(_QWORD *)(*(_QWORD *)v18 + 8 * v23) = a2;
        v25 = *(unsigned int *)(v18 + 12);
        v26 = (unsigned int)(*(_DWORD *)(v18 + 8) + 1);
        *(_DWORD *)(v18 + 8) = v26;
        if ( v26 + 1 > v25 )
        {
          sub_2237220(v18, v18 + 16, v26 + 1, 8);
          v26 = *(unsigned int *)(v18 + 8);
        }
        *(_QWORD *)(*(_QWORD *)v18 + 8 * v26) = v5;
        ++*(_DWORD *)(v18 + 8);
        return 1;
      }
    }
    v15 = sub_15C1070((char *)v5, a2);
    if ( v15 != 1 )
    {
      if ( v15 == 2 )
        return 0;
      goto LABEL_24;
    }
    if ( (v37[0] & 7) == 0 )
    {
      *(_QWORD *)((v37[0] & 0xFFFFFFFFFFFFFFF8LL) + 8) = a2;
      return 1;
    }
LABEL_36:
    sub_B857B0(v37, (__int64)a2);
    return 1;
  }
  v6 = v5 & 0xFFFFFFFFFFFFFFFELL;
  v7 = *(char ***)v6;
  v8 = *(unsigned int *)(v6 + 8);
  v9 = *(_QWORD *)v6 + 8 * v8;
  if ( v9 == *(_QWORD *)v6 )
  {
LABEL_56:
    if ( v8 + 1 > (unsigned __int64)*(unsigned int *)(v6 + 12) )
    {
      sub_2237220(v6, v6 + 16, v8 + 1, 8);
      v8 = *(unsigned int *)(v6 + 8);
    }
    *(_QWORD *)(*(_QWORD *)v6 + 8 * v8) = a2;
    ++*(_DWORD *)(v6 + 8);
    return 1;
  }
  v10 = *v7;
  if ( a2 == *v7 )
    return 0;
  while ( 1 )
  {
    if ( (v10[28] & 0x7F) == (a2[28] & 0x7F) )
    {
      v11 = sub_15C1070(v10, a2);
      if ( v11 == 1 )
        goto LABEL_44;
      if ( v11 == 2 )
        return 0;
      v10 = *v7;
    }
    v12 = *((_QWORD *)v10 + 2);
    v13 = (_QWORD *)(v12 & 0xFFFFFFFFFFFFFFF8LL);
    if ( (v12 & 4) != 0 )
      v13 = (_QWORD *)*v13;
    if ( (*(_BYTE *)(sub_B8EAA0((__int64)v13) + 8) & 0x7F) != 0 )
      break;
    if ( ++v7 == (char **)v9 )
    {
      v8 = *(unsigned int *)(v6 + 8);
      goto LABEL_56;
    }
    v10 = *v7;
    if ( *v7 == a2 )
      return 0;
  }
  v27 = *(unsigned int *)(v6 + 8);
  v28 = *(char ***)v6;
  v29 = *(unsigned int *)(v6 + 12);
  v30 = 8 * v27;
  LODWORD(v31) = *(_DWORD *)(v6 + 8);
  v32 = *(char ***)v6;
  v33 = v27 + 1;
  v34 = (char **)(*(_QWORD *)v6 + v30);
  if ( v34 != v7 )
  {
    if ( v33 > v29 )
    {
      sub_2237220(v6, v6 + 16, v33, 8);
      v31 = *(unsigned int *)(v6 + 8);
      v30 = 8 * v31;
      v7 = (char **)(*(_QWORD *)v6 + (char *)v7 - (char *)v32);
      v32 = *(char ***)v6;
      v34 = (char **)(*(_QWORD *)v6 + 8 * v31);
    }
    *v34 = v32[(unsigned __int64)v30 / 8 - 1];
    if ( (char **)(*(_QWORD *)v6 + v30 - 8) != v7 )
    {
      memmove((char *)v7 + *(_QWORD *)v6 - *(_QWORD *)v6 + 8, v7, *(_QWORD *)v6 + v30 - 8 - (_QWORD)v7);
      LODWORD(v31) = *(_DWORD *)(v6 + 8);
    }
    *(_DWORD *)(v6 + 8) = v31 + 1;
LABEL_44:
    *v7 = a2;
    return 1;
  }
  if ( v33 > v29 )
  {
    sub_2237220(v6, v6 + 16, v33, 8);
    v28 = *(char ***)v6;
  }
  v28[(*(_DWORD *)(v6 + 8))++] = a2;
  return 1;
}
