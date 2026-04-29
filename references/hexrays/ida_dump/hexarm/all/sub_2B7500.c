unsigned __int64 __fastcall sub_2B7500(__int64 *a1, __int64 a2, const char **a3)
{
  size_t v3; // rax
  size_t v4; // rax
  _QWORD *v5; // rax
  _QWORD *v6; // r12
  const char *v7; // rsi
  size_t v8; // rax
  size_t v9; // r15
  const char *v10; // r14
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  size_t v14; // rax
  unsigned __int64 v15; // rdx
  __int64 v16; // r8
  const char *v17; // r14
  const char *v18; // rax
  const char *v19; // r15
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // rax
  __int64 v22; // rdx
  const char **v23; // r15
  size_t v24; // rax
  __int64 v25; // rdx
  __int64 v26; // r8
  size_t v27; // rcx
  size_t v28; // r14
  const char *v29; // r15
  size_t v30; // rax
  _QWORD *v31; // rdx
  _QWORD *i; // rax
  size_t v34; // rax
  _QWORD *v35; // rax
  __int64 v36; // rdx
  unsigned __int64 v37; // rcx
  size_t v38; // [rsp+10h] [rbp-A8h]
  _QWORD *v40; // [rsp+28h] [rbp-90h]
  __int64 v41; // [rsp+30h] [rbp-88h] BYREF
  __int128 v42; // [rsp+38h] [rbp-80h]
  __int64 v43; // [rsp+48h] [rbp-70h] BYREF
  __int128 v44; // [rsp+50h] [rbp-68h]
  _BYTE v45[5]; // [rsp+6Eh] [rbp-4Ah] BYREF
  _BYTE v46[5]; // [rsp+73h] [rbp-45h] BYREF
  _QWORD v47[8]; // [rsp+78h] [rbp-40h] BYREF

  v47[0] = __readfsqword(0x28u);
  v3 = pack_dd(v45, v46, 1) - (_QWORD)v45;
  if ( v3 )
    sub_2B2BD0(a1, v45, v3);
  v4 = pack_dd(v45, v46, *(unsigned int *)(a2 + 8)) - (_QWORD)v45;
  if ( v4 )
    sub_2B2BD0(a1, v45, v4);
  v5 = *(_QWORD **)a2;
  v40 = *(_QWORD **)a2;
  if ( !*(_QWORD *)a2 )
    return v47[0] - __readfsqword(0x28u);
  if ( !*(_QWORD *)(a2 + 8) )
    return v47[0] - __readfsqword(0x28u);
  v6 = (_QWORD *)v5[1];
  if ( v6 == v5 )
    return v47[0] - __readfsqword(0x28u);
  do
  {
    v7 = (const char *)v47;
    v8 = pack_dq(v45, v47, v6[3]) - (_QWORD)v45;
    if ( v8 )
    {
      v7 = v45;
      sub_2B2BD0(a1, v45, v8);
    }
    v9 = v6[5];
    if ( v9 )
    {
      v10 = (const char *)v6[4];
      if ( v10 )
      {
        v9 = strlen((const char *)v6[4]);
        if ( v9 > 0xFFFFFFFF )
          goto LABEL_69;
LABEL_13:
        v7 = v46;
        v14 = pack_dd(v45, v46, (unsigned int)v9) - (_QWORD)v45;
        if ( v14 )
        {
          v7 = v45;
          sub_2B2BD0(a1, v45, v14);
        }
        if ( v9 )
        {
          v7 = v10;
          sub_2B2BD0(a1, v10, v9);
        }
        goto LABEL_17;
      }
    }
    else
    {
      v10 = s1;
      if ( s1 )
        goto LABEL_13;
    }
    v7 = v46;
    v34 = pack_dd(v45, v46, 0) - (_QWORD)v45;
    if ( v34 )
    {
      v7 = v45;
      sub_2B2BD0(a1, v45, v34);
    }
LABEL_17:
    v41 = 0;
    v43 = 0;
    v42 = 0;
    v44 = 0;
    if ( !a3 )
    {
      v7 = (const char *)&v43;
      if ( (unsigned __int8)serialize_tinfo(&v41, &v43, 0, v6 + 7, 272) )
      {
        v23 = (const char **)&v41;
LABEL_51:
        v20 = (unsigned __int64)v23[1];
        v17 = *v23;
        if ( v20 <= 0xFFFFFFFF )
        {
          v22 = (unsigned int)v20;
          goto LABEL_26;
        }
        if ( under_debugger )
          goto LABEL_74;
        interr(5, v7, v15, v20, v16);
LABEL_67:
        if ( under_debugger )
          goto LABEL_74;
        interr(5, v7, v25, v27, v26);
LABEL_69:
        if ( under_debugger )
LABEL_74:
          BUG();
        interr(4, v7, v11, v12, v13);
      }
      if ( !under_debugger )
        sub_3835A0(51491);
      goto LABEL_74;
    }
    v17 = *a3;
    if ( !*a3 )
    {
      v22 = 0;
      v20 = 0;
      v23 = (const char **)&v41;
      goto LABEL_26;
    }
    v18 = (const char *)(*(_QWORD *)v17 & 0xFFFFFFFFFFFFFFFCLL);
    v19 = v18;
    if ( !v18 )
      goto LABEL_50;
    v20 = *(_QWORD *)v18 & 2LL;
    if ( (*(_QWORD *)v18 & 2) != 0 )
    {
      v22 = 0;
      v20 = 0;
      v17 = nullptr;
      v23 = (const char **)&v41;
      goto LABEL_26;
    }
    v15 = v6[3];
    while ( 1 )
    {
      v21 = *((_QWORD *)v19 + 3);
      if ( v15 >= v21 )
        break;
      v19 = *((const char **)v19 + 1);
LABEL_24:
      if ( (*v19 & 2) != 0 )
      {
        v22 = 0;
        v17 = nullptr;
        v23 = (const char **)&v41;
        goto LABEL_26;
      }
    }
    if ( v21 < v15 )
    {
      v19 = *((const char **)v19 + 2);
      goto LABEL_24;
    }
    if ( v19 != v17 )
    {
LABEL_50:
      v23 = (const char **)(v19 + 32);
      goto LABEL_51;
    }
    v22 = 0;
    v17 = nullptr;
    v23 = (const char **)&v41;
LABEL_26:
    v7 = v46;
    v38 = v20;
    v24 = pack_dd(v45, v46, v22) - (_QWORD)v45;
    v27 = v38;
    if ( v24 )
    {
      v7 = v45;
      sub_2B2BD0(a1, v45, v24);
      v27 = v38;
    }
    if ( v27 )
    {
      v7 = v17;
      sub_2B2BD0(a1, v17, v27);
    }
    v28 = (size_t)v23[4];
    v29 = v23[3];
    if ( v28 > 0xFFFFFFFF )
      goto LABEL_67;
    v30 = pack_dd(v45, v46, (unsigned int)v28) - (_QWORD)v45;
    if ( v30 )
      sub_2B2BD0(a1, v45, v30);
    if ( v28 )
      sub_2B2BD0(a1, v29, v28);
    if ( v43 )
    {
      *(_QWORD *)&v44 = 0;
      qfree(v43);
    }
    if ( v41 )
    {
      *(_QWORD *)&v42 = 0;
      qfree(v41);
    }
    if ( (*v6 & 2) == 0 )
    {
      v31 = (_QWORD *)v6[2];
      if ( (*(_BYTE *)v31 & 2) != 0 )
      {
        v35 = (_QWORD *)(*v6 & 0xFFFFFFFFFFFFFFFCLL);
        v36 = *v35;
        if ( (*v35 & 2) == 0 )
        {
          while ( v6 == (_QWORD *)v35[2] )
          {
            v6 = v35;
            v37 = v36 & 0xFFFFFFFFFFFFFFFCLL;
            v36 = *(_QWORD *)(v36 & 0xFFFFFFFFFFFFFFFCLL);
            if ( (v36 & 2) != 0 )
            {
              v6 = (_QWORD *)v37;
              goto LABEL_44;
            }
            v35 = (_QWORD *)v37;
          }
        }
        v6 = v35;
      }
      else
      {
        for ( i = (_QWORD *)v31[1]; (*(_BYTE *)i & 2) == 0; i = (_QWORD *)i[1] )
          v31 = i;
        v6 = v31;
      }
    }
LABEL_44:
    ;
  }
  while ( v40 != v6 );
  return v47[0] - __readfsqword(0x28u);
}
