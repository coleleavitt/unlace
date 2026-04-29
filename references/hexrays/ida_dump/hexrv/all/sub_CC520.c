__int64 __fastcall sub_CC520(_QWORD *a1, __int64 a2, char *a3)
{
  int v4; // ebp
  __int64 v5; // r13
  char *v6; // rsi
  const char *v7; // rdi
  __int64 v8; // rdi
  __int64 v9; // r12
  __int64 v10; // rsi
  __int64 v11; // rax
  char *v12; // rsi
  const char *v13; // rdi
  __int64 tinfo_property; // rax
  char *v15; // r15
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rsi
  char *v19; // r13
  __int64 v20; // r12
  __int64 v21; // r15
  const char **v22; // rbx
  __int64 v23; // rax
  char v25; // al
  __int64 v28; // [rsp+28h] [rbp-60h] BYREF
  char *s2; // [rsp+30h] [rbp-58h] BYREF
  __int128 v30; // [rsp+38h] [rbp-50h]
  unsigned __int64 v31; // [rsp+48h] [rbp-40h]

  v31 = __readfsqword(0x28u);
  if ( !a1[4] )
    return 0;
  *a3 = 0;
  v4 = a1[4] - 1;
  if ( v4 < 0 )
  {
LABEL_28:
    s2 = nullptr;
    v30 = 0;
    sub_330CF0(&v28, a1);
    v9 = 0;
    if ( (unsigned __int8)sub_1CE5D0(&s2, *a1, 0, &v28) )
    {
      v19 = s2;
      v20 = *(_QWORD *)(a2 + 776);
      v21 = 0;
      v22 = (const char **)&off_4AF6A0;
      do
      {
        if ( !strcmp(*v22, v19)
          || (v23 = *(_QWORD *)(v20 + 168) + 24 * v21, *(_QWORD *)(v23 + 8) > 1u) && !strcmp(*(const char **)v23, v19) )
        {
          *a3 = (char)(&off_4AF6A0)[2 * (int)v21 + 1];
          v9 = a1[3] + 80LL * a1[4] - 80;
          goto LABEL_34;
        }
        ++v21;
        v22 += 2;
      }
      while ( v21 != 16 );
      v9 = 0;
    }
LABEL_34:
    clear_tinfo_t(&v28);
    if ( s2 )
    {
      *(_QWORD *)&v30 = 0;
      qfree(s2);
    }
    return v9;
  }
  v5 = 80LL * (unsigned int)v4;
  while ( 1 )
  {
    v8 = *(_QWORD *)(a2 + 776);
    v9 = v5 + a1[3];
    if ( *(_QWORD *)(v8 + 152) <= 1u )
    {
      v18 = *(_QWORD *)(a2 + 248);
      if ( (v18 & 0x100) != 0 )
        get_tinfo_pdata(v8 + 144, v18, 2);
    }
    s2 = nullptr;
    v30 = 0;
    v10 = *(_QWORD *)(v9 + 24);
    if ( (v10 & 0x100) == 0 )
    {
      v11 = *(_QWORD *)(a2 + 776);
LABEL_14:
      if ( !*(_QWORD *)(v11 + 152) )
        goto LABEL_37;
      v12 = (char *)s1;
LABEL_16:
      v13 = *(const char **)(v11 + 144);
      goto LABEL_17;
    }
    get_tinfo_pdata(&s2, v10, 2);
    v11 = *(_QWORD *)(a2 + 776);
    if ( !(_QWORD)v30 )
      goto LABEL_14;
    v12 = s2;
    v13 = s1;
    if ( *(_QWORD *)(v11 + 152) )
      goto LABEL_16;
LABEL_17:
    if ( !strcmp(v13, v12) )
    {
LABEL_37:
      v15 = s2;
      v25 = 0;
      goto LABEL_38;
    }
    v28 = 0;
    tinfo_property = get_tinfo_property(*(_QWORD *)(v9 + 24), 10);
    v28 = tinfo_property;
    if ( (tinfo_property & 0x100) != 0 )
      get_tinfo_pdata(&s2, tinfo_property, 2);
    clear_tinfo_t(&v28);
    v15 = s2;
    v16 = *(_QWORD *)(a2 + 776);
    v17 = *(_QWORD *)(v16 + 152);
    if ( !(_QWORD)v30 )
    {
      if ( !v17 )
        break;
      v6 = (char *)s1;
LABEL_6:
      v7 = *(const char **)(v16 + 144);
      goto LABEL_7;
    }
    v6 = s2;
    v7 = s1;
    if ( v17 )
      goto LABEL_6;
LABEL_7:
    if ( !strcmp(v7, v6) )
      break;
    if ( v15 )
    {
      *(_QWORD *)&v30 = 0;
      qfree(v15);
    }
    --v4;
    v5 -= 80;
    if ( v4 == -1 )
      goto LABEL_28;
  }
  v25 = 1;
LABEL_38:
  *a3 = v25;
  if ( v15 )
  {
    *(_QWORD *)&v30 = 0;
    qfree(v15);
  }
  return v9;
}
