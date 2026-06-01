__int64 __fastcall sub_D5C60(_QWORD *a1, __int64 a2, char *a3)
{
  int v4; // ebp
  __int64 v5; // r13
  char *v6; // rsi
  const char *v7; // rdi
  __int64 v8; // r12
  __int64 v9; // rax
  char *v10; // rsi
  const char *v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rcx
  char *v14; // r13
  __int64 v15; // r12
  __int64 v16; // r15
  const char **v17; // rbx
  __int64 v18; // rax
  char v20; // al
  __int64 tinfo_property; // [rsp+28h] [rbp-60h] BYREF
  char *s2; // [rsp+30h] [rbp-58h] BYREF
  __int128 v25; // [rsp+38h] [rbp-50h]
  unsigned __int64 v26; // [rsp+48h] [rbp-40h]

  v26 = __readfsqword(0x28u);
  if ( !a1[4] )
    return 0;
  *a3 = 0;
  v4 = a1[4] - 1;
  if ( v4 < 0 )
  {
LABEL_26:
    s2 = 0;
    v25 = 0;
    sub_332E10(&tinfo_property, a1);
    v8 = 0;
    if ( (unsigned __int8)sub_1CFF30(&s2, *a1, 0, &tinfo_property) )
    {
      v14 = s2;
      v15 = *(_QWORD *)(a2 + 768);
      v16 = 0;
      v17 = (const char **)&off_4DC940;
      do
      {
        if ( !strcmp(*v17, v14)
          || (v18 = *(_QWORD *)(v15 + 168) + 24 * v16, *(_QWORD *)(v18 + 8) > 1u) && !strcmp(*(const char **)v18, v14) )
        {
          *a3 = (char)(&off_4DC940)[2 * (int)v16 + 1];
          v8 = a1[3] + 80LL * a1[4] - 80;
          goto LABEL_32;
        }
        ++v16;
        v17 += 2;
      }
      while ( v16 != 16 );
      v8 = 0;
    }
LABEL_32:
    clear_tinfo_t();
    if ( s2 )
    {
      *(_QWORD *)&v25 = 0;
      qfree();
    }
    return v8;
  }
  v5 = 80LL * (unsigned int)v4;
  while ( 1 )
  {
    v8 = v5 + a1[3];
    if ( *(_QWORD *)(*(_QWORD *)(a2 + 768) + 152LL) <= 1u && (*(_QWORD *)(a2 + 248) & 0x100) != 0 )
      get_tinfo_pdata();
    s2 = 0;
    v25 = 0;
    if ( (*(_QWORD *)(v8 + 24) & 0x100) == 0 )
    {
      v9 = *(_QWORD *)(a2 + 768);
LABEL_12:
      if ( !*(_QWORD *)(v9 + 152) )
        goto LABEL_35;
      v10 = (char *)s1;
LABEL_14:
      v11 = *(const char **)(v9 + 144);
      goto LABEL_15;
    }
    get_tinfo_pdata();
    v9 = *(_QWORD *)(a2 + 768);
    if ( !(_QWORD)v25 )
      goto LABEL_12;
    v10 = s2;
    v11 = s1;
    if ( *(_QWORD *)(v9 + 152) )
      goto LABEL_14;
LABEL_15:
    if ( !strcmp(v11, v10) )
    {
LABEL_35:
      v20 = 0;
      goto LABEL_36;
    }
    tinfo_property = get_tinfo_property();
    if ( (tinfo_property & 0x100) != 0 )
      get_tinfo_pdata();
    clear_tinfo_t();
    v12 = *(_QWORD *)(a2 + 768);
    v13 = *(_QWORD *)(v12 + 152);
    if ( !(_QWORD)v25 )
    {
      if ( !v13 )
        break;
      v6 = (char *)s1;
LABEL_6:
      v7 = *(const char **)(v12 + 144);
      goto LABEL_7;
    }
    v6 = s2;
    v7 = s1;
    if ( v13 )
      goto LABEL_6;
LABEL_7:
    if ( !strcmp(v7, v6) )
      break;
    --v4;
    v5 -= 80;
    if ( v4 == -1 )
      goto LABEL_26;
  }
  v20 = 1;
LABEL_36:
  *a3 = v20;
  return v8;
}
