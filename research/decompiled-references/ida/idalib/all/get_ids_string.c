__int64 __fastcall get_ids_string(__int64 a1)
{
  _BYTE *v1; // rax
  _BYTE *v3; // rax
  _BYTE *v4; // rax
  int v5; // edx
  __int64 v6; // rax
  __int64 v7; // rbp
  unsigned int v8; // edx
  int v9; // eax
  __int64 v10; // rax
  __int64 v11; // rax
  unsigned int v12; // eax
  __int64 v13; // rsi
  __int64 v14; // rcx
  unsigned __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rdi
  __int64 v18; // rax
  FILE *v19; // rdi
  char v20; // dl
  unsigned int v21; // r12d
  unsigned __int8 v22; // al
  unsigned __int8 v23; // al
  char *v24; // r13
  char v25; // dl
  int v26; // eax
  int v27; // r14d
  int v28; // eax
  int v30; // eax
  int v31; // eax
  int v32; // eax
  size_t v33; // r13
  size_t v34; // r14
  FILE *v35; // rdi
  unsigned int v36; // eax
  __int64 v37; // rdi
  __int16 v38; // ax
  size_t v39; // rax
  char v40; // [rsp+3h] [rbp-35h] BYREF
  unsigned int ptr; // [rsp+4h] [rbp-34h] BYREF
  unsigned __int64 v42; // [rsp+8h] [rbp-30h]

  v42 = __readfsqword(0x28u);
  if ( !a1 )
    return (unsigned int)-1;
  v1 = *(_BYTE **)(a1 + 8);
  if ( !v1 || !*(_WORD *)(a1 + 48) || !*(_QWORD *)(a1 + 56) && !*(_QWORD *)(a1 + 64) )
    return (unsigned int)-1;
  *v1 = 0;
  v3 = *(_BYTE **)(a1 + 32);
  if ( v3 )
    *v3 = 0;
  v4 = *(_BYTE **)(a1 + 24);
  if ( v4 )
    *v4 = 0;
  v5 = *(_DWORD *)a1;
  *(_QWORD *)(a1 + 16) = -1;
  ptr = 0;
  if ( !v5 )
  {
    v6 = *(_QWORD *)(a1 + 72);
    if ( v6 != *(_DWORD *)(a1 + 84) )
    {
      v7 = (unsigned int)v6;
      *(_QWORD *)(a1 + 72) = v6 + 1;
      goto LABEL_15;
    }
    return (unsigned int)-15;
  }
  v7 = 0;
  while ( 1 )
  {
LABEL_15:
    v10 = *(_QWORD *)(a1 + 64);
    if ( v10 )
    {
      v8 = *(_DWORD *)(v10 + 4LL * (unsigned int)(2 * v7));
      v9 = *(_DWORD *)a1;
      ptr = v8;
      if ( !v9 )
        break;
      goto LABEL_13;
    }
    qfseek(*(_QWORD *)(a1 + 56), 8LL * (unsigned int)v7, 0);
    if ( qfread(*(FILE **)(a1 + 56), &ptr) != 4 )
      return (unsigned int)-9;
    v9 = *(_DWORD *)a1;
    v8 = ptr;
    if ( !*(_DWORD *)a1 )
      break;
LABEL_13:
    if ( v9 == v8 )
      break;
    v7 = (unsigned int)(v7 + 1);
    if ( *(_DWORD *)(a1 + 84) == (_DWORD)v7 )
      return (unsigned int)-10;
  }
  v11 = *(_QWORD *)(a1 + 64);
  *(_DWORD *)a1 = v8;
  if ( !v11 )
  {
    if ( qfread(*(FILE **)(a1 + 56), &ptr) == 4 )
    {
      v12 = ptr;
      goto LABEL_20;
    }
    return (unsigned int)-9;
  }
  v12 = *(_DWORD *)(v11 + 4LL * (unsigned int)(2 * v7) + 4);
  ptr = v12;
LABEL_20:
  v13 = v12;
  v14 = v12;
  v15 = *(unsigned int *)(a1 + 84);
  if ( (unsigned __int64)v12 >> 3 < v15 )
    return (unsigned int)-4;
  v16 = *(unsigned int *)(a1 + 80);
  if ( v12 >= (unsigned int)v16 )
    return (unsigned int)-4;
  v17 = *(_QWORD *)(a1 + 56);
  if ( !v17 )
  {
    if ( v16 - 1 < (unsigned __int64)v12 )
      return (unsigned int)-4;
    goto LABEL_46;
  }
  if ( *(_QWORD *)(a1 + 64) )
  {
    v18 = (unsigned int)(8 * v15);
    v7 = v18;
  }
  else
  {
    v18 = 0;
    v7 = 0;
  }
  qfseek(v17, v13 - v18, 0);
  v14 = ptr;
  v12 = ptr;
  if ( (unsigned __int64)*(unsigned int *)(a1 + 80) - 1 < ptr )
    return (unsigned int)-4;
  v19 = *(FILE **)(a1 + 56);
  if ( !v19 )
  {
LABEL_46:
    v21 = 0;
    v20 = *(_BYTE *)(*(_QWORD *)(a1 + 64) + v14);
    ptr = v12 + 1;
    v40 = v20;
    if ( (v20 & 0x10) != 0 )
      goto LABEL_47;
LABEL_29:
    v22 = v20 & 3;
    if ( (v20 & 3) == 0 )
      goto LABEL_30;
LABEL_49:
    v30 = sub_5E0AB0(a1, v22, &ptr);
    *(_DWORD *)(a1 + 16) = v30;
    if ( v30 != -1 )
    {
      v20 = v40;
      v23 = v40 & 0xC;
      if ( (v40 & 0xC) == 0 )
        goto LABEL_31;
      goto LABEL_51;
    }
    return (unsigned int)-3;
  }
  if ( qfread(v19, &v40) != 1 )
    return (unsigned int)-9;
  v20 = v40;
  v21 = 0;
  ++ptr;
  if ( (v40 & 0x10) == 0 )
    goto LABEL_29;
LABEL_47:
  v21 = sub_5E0930(a1, *(void **)(a1 + 8), (int *)&ptr, *(_WORD *)(a1 + 48));
  if ( (v21 & 0x80000000) != 0 )
    return v21;
  v20 = v40;
  v22 = v40 & 3;
  if ( (v40 & 3) != 0 )
    goto LABEL_49;
LABEL_30:
  v23 = v20 & 0xC;
  if ( (v20 & 0xC) == 0 )
  {
LABEL_31:
    if ( !*(_DWORD *)(a1 + 16) )
      *(_DWORD *)(a1 + 20) = 0;
    if ( (v20 & 0x20) == 0 )
      goto LABEL_34;
    goto LABEL_53;
  }
LABEL_51:
  v31 = sub_5E0AB0(a1, (int)v23 >> 2, &ptr);
  *(_DWORD *)(a1 + 20) = v31;
  if ( v31 == -1 )
    return (unsigned int)-3;
  if ( (v40 & 0x20) == 0 )
    goto LABEL_34;
LABEL_53:
  v32 = sub_5E0930(a1, *(void **)(a1 + 32), (int *)&ptr, *(_WORD *)(a1 + 48));
  if ( v32 < 0 )
    return (unsigned int)v32;
LABEL_34:
  v24 = *(char **)(a1 + 24);
  if ( !v24 )
    return v21;
  v25 = v40;
  if ( (v40 & 0x40) == 0 )
  {
    *(_DWORD *)(a1 + 40) = 0;
    v28 = *v24;
    if ( *v24 > 31 || !(_BYTE)v28 )
      goto LABEL_57;
    v27 = 0;
    goto LABEL_77;
  }
  v26 = sub_5E0930(a1, *(void **)(a1 + 24), (int *)&ptr, *(_WORD *)(a1 + 48));
  v27 = v26;
  if ( v26 < 0 )
    return (unsigned int)v26;
  v24 = *(char **)(a1 + 24);
  *(_DWORD *)(a1 + 40) = 0;
  v28 = *v24;
  if ( *v24 && (char)v28 <= 31 )
  {
LABEL_77:
    *(_DWORD *)(a1 + 40) = v28;
    v39 = strlen(v24);
    memmove(v24, v24 + 1, v39);
  }
  if ( v27 )
    return v21;
  v25 = v40;
LABEL_57:
  if ( v25 < 0 )
  {
    v33 = strlen(*(const char **)(a1 + 24));
    v34 = v33;
    if ( v33 < *(unsigned __int16 *)(a1 + 48) - 2 )
    {
      v35 = *(FILE **)(a1 + 56);
      if ( !v35 )
      {
        v36 = *(_DWORD *)(*(_QWORD *)(a1 + 64) + ptr);
        ptr = v36;
        goto LABEL_62;
      }
      if ( qfread(v35, &ptr) == 4 )
      {
        v36 = ptr;
LABEL_62:
        if ( (unsigned __int64)v36 >> 3 >= *(unsigned int *)(a1 + 84) && v36 < *(_DWORD *)(a1 + 80) )
        {
          if ( *(_BYTE *)(a1 + 51) == 0xFF )
          {
            *(_DWORD *)(a1 + 48) = v36;
            return (unsigned int)-17;
          }
          else
          {
            v37 = *(_QWORD *)(a1 + 56);
            if ( v37 )
              qfseek(v37, v36 - v7, 0);
            v38 = 0;
            if ( v33 )
            {
              v34 = v33 + 1;
              *(_BYTE *)(*(_QWORD *)(a1 + 24) + v33) = 32;
              v38 = v33 + 1;
            }
            return (unsigned int)sub_5E0930(
                                   a1,
                                   (void *)(v34 + *(_QWORD *)(a1 + 24)),
                                   (int *)&ptr,
                                   *(_WORD *)(a1 + 48) - v38);
          }
        }
        return (unsigned int)-4;
      }
      return (unsigned int)-9;
    }
  }
  return v21;
}
