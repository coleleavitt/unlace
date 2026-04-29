unsigned __int64 __fastcall sub_29C0(__int64 a1, __int64 **a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v8; // r13
  __int64 v9; // r12
  char v10; // al
  unsigned __int16 v11; // ax
  int v12; // r13d
  char *v13; // rbp
  __int64 *v14; // r14
  char *v15; // r13
  size_t v16; // rax
  size_t v17; // r12
  __int64 *v18; // r12
  size_t v19; // rax
  size_t v20; // rbx
  char v22; // al
  void *v23; // rdi
  size_t v24; // r13
  void *v25; // rdi
  size_t v26; // r15
  char *v27; // rax
  char *v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  char *s; // [rsp+0h] [rbp-58h] BYREF
  __int128 v32; // [rsp+8h] [rbp-50h]
  unsigned __int64 v33; // [rsp+18h] [rbp-40h]

  v6 = *(_QWORD *)(a1 + 216);
  v7 = *(_QWORD *)(a1 + 184);
  v33 = __readfsqword(0x28u);
  v8 = *(unsigned int *)(v6 + 4 * a5);
  v9 = v8 - 4;
  v10 = netnode_charval(v7, v8, 322);
  if ( (v10 & 0x10) == 0 )
    v9 = v8;
  if ( *(_BYTE *)(a1 + 192) )
  {
    v22 = v10 & 5;
    LOBYTE(v12) = 6;
    if ( v22 != 1 )
    {
      LOBYTE(v12) = 7;
      if ( v22 == 4 )
        goto LABEL_22;
    }
  }
  else if ( (v10 & 8) != 0 )
  {
    v11 = get_word(v8 + 4) & 0x14FF;
    if ( v11 == 32 )
      goto LABEL_43;
    if ( v11 <= 0x20u )
    {
      LOBYTE(v12) = 0;
      if ( v11 == 3 )
        goto LABEL_10;
      LOBYTE(v12) = 1;
      if ( v11 == 16 )
        goto LABEL_10;
      LOBYTE(v12) = 4;
      if ( v11 == 1 )
        goto LABEL_10;
LABEL_22:
      LOBYTE(v12) = 5;
      goto LABEL_10;
    }
    if ( v11 == 160 )
    {
LABEL_43:
      LOBYTE(v12) = 2;
      goto LABEL_10;
    }
    LOBYTE(v12) = 3;
    if ( v11 != 1024 )
    {
      LOBYTE(v12) = 1;
      if ( v11 != 144 )
        goto LABEL_22;
    }
  }
  else
  {
    v12 = get_byte(v8) + 8;
    if ( (unsigned __int8)v12 >= 0x1Eu )
      LOBYTE(v12) = 8;
  }
LABEL_10:
  s = nullptr;
  v32 = 0;
  if ( (get_flags_ex(v9, 4) & 0x4000) != 0 )
  {
    if ( get_ea_name(&s, v9, 21, 0) > 0 )
    {
      v27 = strchr(s, 91);
      if ( v27 )
      {
        v13 = v27 + 1;
        v28 = strchr(v27 + 1, 93);
        if ( v28 )
        {
          if ( v13 != v28 )
          {
            *v28 = 0;
            goto LABEL_12;
          }
        }
      }
    }
    get_ea_name(&s, v9, 1, 0);
    v13 = s;
    if ( s )
      goto LABEL_12;
  }
  v13 = (char *)&src;
LABEL_12:
  sub_28F0(*a2, v9);
  v14 = *a2;
  v15 = off_6BC0[(unsigned __int8)v12];
  if ( v15 && (v16 = strlen(v15), (v17 = v16) != 0) )
  {
    v25 = (void *)v14[3];
    v26 = v16 + 1;
    if ( v14[5] < v16 + 1 )
    {
      v30 = qvector_reserve(v14 + 3, v14[3], v26, 1);
      v14[3] = v30;
      v25 = (void *)v30;
    }
    v14[4] = v26;
    memmove(v25, v15, v17);
    *(_BYTE *)(v14[3] + v17) = 0;
    v18 = *a2;
  }
  else
  {
    v14[4] = 0;
    v18 = *a2;
  }
  v19 = strlen(v13);
  v20 = v19;
  if ( v19 )
  {
    v23 = (void *)v18[6];
    v24 = v19 + 1;
    if ( v18[8] < v19 + 1 )
    {
      v29 = qvector_reserve(v18 + 6, v18[6], v24, 1);
      v18[6] = v29;
      v23 = (void *)v29;
    }
    v18[7] = v24;
    memmove(v23, v13, v20);
    *(_BYTE *)(v18[6] + v20) = 0;
  }
  else
  {
    v18[7] = 0;
  }
  if ( s )
  {
    *(_QWORD *)&v32 = 0;
    qfree(s);
  }
  return v33 - __readfsqword(0x28u);
}
