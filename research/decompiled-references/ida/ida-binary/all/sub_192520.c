__int64 __fastcall sub_192520(_QWORD *a1, char *a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // rdi
  char tinfo_details; // al
  __int64 v7; // r12
  char *v8; // r13
  __int64 v9; // r14
  __int64 v10; // rbp
  __int64 v11; // rbp
  __int64 v12; // rbx
  const char *v13; // rdi
  unsigned int udm_by_fullname; // ebx
  __int64 v15; // rdi
  __int64 v16; // r14
  __int64 v17; // r13
  __int64 v18; // r12
  __int64 *v19; // rbp
  __int64 v20; // rdi
  __int64 v21; // rdi
  __int64 v23; // rdi
  __int64 v24; // r13
  __int64 v25; // r12
  __int64 v26; // rbp
  __int64 *v27; // rbx
  __int64 v28; // rdi
  __int64 v29; // rdi
  char *s2; // [rsp+0h] [rbp-98h] BYREF
  __int128 v31; // [rsp+8h] [rbp-90h]
  __int64 v32; // [rsp+20h] [rbp-78h] BYREF
  __int128 v33; // [rsp+28h] [rbp-70h]
  __int64 v34; // [rsp+38h] [rbp-60h]
  __int128 v35; // [rsp+40h] [rbp-58h]
  int v36; // [rsp+50h] [rbp-48h]
  char v37; // [rsp+54h] [rbp-44h]
  unsigned __int64 v38; // [rsp+58h] [rbp-40h]

  v38 = __readfsqword(0x28u);
  s2 = nullptr;
  v31 = 0;
  if ( !(unsigned __int8)get_tid_name(&s2, a2) || !(unsigned __int8)get_type_by_tid(a1, a2) )
  {
LABEL_41:
    udm_by_fullname = -1;
    goto LABEL_27;
  }
  if ( (get_tinfo_property(*a1, 2) & 0x3F) != 0x2D )
  {
    a2 = s2;
    udm_by_fullname = get_udm_by_fullname(0, s2);
    goto LABEL_27;
  }
  v5 = *a1;
  a2 = (_BYTE *)(&qword_28 + 5);
  v32 = 0;
  v34 = 0;
  v36 = 0;
  v37 = 0x80;
  v33 = 0;
  v35 = 0;
  tinfo_details = get_tinfo_details(v5, 45, &v32);
  v7 = v34;
  if ( !tinfo_details )
  {
    if ( v34 )
    {
      *(_QWORD *)&v35 = 0;
      qfree(v34, 45, v2, v3, v4);
    }
    v23 = v32;
    if ( v32 )
    {
      v24 = v33;
      v25 = 0;
      v26 = 0;
      if ( (_QWORD)v33 )
      {
        do
        {
          v27 = (__int64 *)(v23 + v25);
          v28 = *(_QWORD *)(v23 + v25 + 24);
          if ( v28 )
          {
            v27[4] = 0;
            qfree(v28, 45, v2, v3, v4);
          }
          v29 = *v27;
          if ( *v27 )
          {
            v27[1] = 0;
            qfree(v29, 45, v2, v3, v4);
          }
          ++v26;
          v23 = v32;
          v25 += 56;
        }
        while ( v24 != v26 );
      }
      *(_QWORD *)&v33 = 0;
      qfree(v23, 45, v2, v3, v4);
    }
    goto LABEL_41;
  }
  v8 = s2;
  if ( !(_QWORD)v33 )
    goto LABEL_30;
  v9 = v32;
  v10 = -56;
  if ( (_QWORD)v33 != -1 )
    v10 = 56 * v33;
  v11 = v32 + v10;
  if ( v32 == v11 )
  {
LABEL_30:
    udm_by_fullname = -1;
  }
  else
  {
    v12 = v32;
    while ( 1 )
    {
      v13 = &s1;
      if ( *(_QWORD *)(v12 + 8) )
        v13 = *(const char **)v12;
      a2 = v8;
      if ( !strcmp(v13, v8) )
        break;
      v12 += 56;
      if ( v11 == v12 )
        goto LABEL_30;
    }
    udm_by_fullname = -1227133513 * ((v12 - v9) >> 3);
  }
  if ( v7 )
  {
    *(_QWORD *)&v35 = 0;
    qfree(v7, a2, v2, v3, v4);
  }
  v15 = v32;
  if ( v32 )
  {
    v16 = v33;
    if ( (_QWORD)v33 )
    {
      v17 = 0;
      v18 = 0;
      do
      {
        v19 = (__int64 *)(v15 + v17);
        v20 = *(_QWORD *)(v15 + v17 + 24);
        if ( v20 )
        {
          v19[4] = 0;
          qfree(v20, a2, v2, v3, v4);
        }
        v21 = *v19;
        if ( *v19 )
        {
          v19[1] = 0;
          qfree(v21, a2, v2, v3, v4);
        }
        ++v18;
        v15 = v32;
        v17 += 56;
      }
      while ( v16 != v18 );
    }
    *(_QWORD *)&v33 = 0;
    qfree(v15, a2, v2, v3, v4);
  }
LABEL_27:
  if ( s2 )
  {
    *(_QWORD *)&v31 = 0;
    qfree(s2, a2, v2, v3, v4);
  }
  return udm_by_fullname;
}
