unsigned __int64 __fastcall sub_38DD50(__int64 a1, __int64 *a2)
{
  char *v3; // rax
  __int64 v4; // rdi
  __int64 v5; // r12
  char *v6; // r14
  char *v7; // rax
  int v8; // r15d
  __int64 v9; // r12
  unsigned __int64 v10; // r13
  __int64 v11; // rsi
  __int64 v12; // r14
  unsigned __int64 v13; // r12
  size_t v14; // r15
  __int64 v15; // r13
  size_t v16; // r8
  __int64 v17; // rsi
  char *v18; // rdi
  __int64 v19; // r12
  __int64 v20; // rbp
  char *v21; // rbx
  __int64 v22; // rdi
  __int64 v23; // rdi
  __int64 v25; // r12
  __int64 v26; // rbp
  char *v27; // rbx
  __int64 v28; // rdi
  __int64 v29; // rdi
  __int64 v30; // rax
  __int64 v31; // rax
  size_t v32; // [rsp+8h] [rbp-D0h]
  char *s; // [rsp+10h] [rbp-C8h] BYREF
  __int128 v34; // [rsp+18h] [rbp-C0h]
  char *tinfo_property; // [rsp+30h] [rbp-A8h] BYREF
  __int128 v36; // [rsp+38h] [rbp-A0h]
  __int64 v37; // [rsp+48h] [rbp-90h]
  __int64 v38; // [rsp+50h] [rbp-88h] BYREF
  __int64 v39; // [rsp+58h] [rbp-80h] BYREF
  __int128 v40; // [rsp+60h] [rbp-78h]
  __int64 v41; // [rsp+70h] [rbp-68h]
  __int128 v42; // [rsp+78h] [rbp-60h]
  char v43; // [rsp+88h] [rbp-50h]
  unsigned __int64 v44; // [rsp+98h] [rbp-40h]

  v44 = __readfsqword(0x28u);
  s = nullptr;
  copy_tinfo_t(&s, a2);
  while ( (get_tinfo_property(s, 2) & 0xF) == 0xA )
  {
    tinfo_property = nullptr;
    tinfo_property = (char *)get_tinfo_property(s, 9);
    if ( !(unsigned int)lexcompare_tinfo(tinfo_property, s, 0) )
    {
      clear_tinfo_t(&tinfo_property);
      break;
    }
    v3 = s;
    s = tinfo_property;
    tinfo_property = v3;
    clear_tinfo_t(&tinfo_property);
  }
  copy_tinfo_t(a2, &s);
  clear_tinfo_t(&s);
  v4 = *a2;
  v36 = 0;
  tinfo_property = nullptr;
  v37 = 0;
  v38 = 0;
  v39 = 0;
  v41 = 0;
  v43 = 16;
  v40 = 0;
  v42 = 0;
  if ( (unsigned __int8)get_tinfo_details(v4, 12, &tinfo_property) )
  {
    s = nullptr;
    v34 = 0;
    dump_func_type_data(&s, &tinfo_property, 2);
    v5 = v34;
    if ( (unsigned __int64)v34 <= 1 )
      goto LABEL_21;
    v6 = s;
    v7 = strchr(s, 10);
    if ( v7 )
    {
      v8 = *(_DWORD *)(a1 + 16) + 1;
      do
      {
        *(_DWORD *)(a1 + 16) = v8++;
        v7 = strchr(v7 + 1, 10);
      }
      while ( v7 );
    }
    if ( v6[v5 - 2] == 10 )
    {
      if ( v5 - 1 <= 1 )
      {
        if ( v6 )
        {
          *(_QWORD *)&v34 = 0;
          qfree(v6);
          s = nullptr;
          *((_QWORD *)&v34 + 1) = 0;
        }
      }
      else
      {
        if ( *((_QWORD *)&v34 + 1) < (unsigned __int64)(v5 - 1) )
        {
          s = (char *)qvector_reserve(&s, v6, v5 - 1, 1);
          v6 = s;
        }
        *(_QWORD *)&v34 = v5 - 1;
        v6[v5 - 2] = 0;
      }
    }
    else
    {
      ++*(_DWORD *)(a1 + 16);
    }
    v9 = *(_QWORD *)(a1 + 80);
    v10 = 2;
    if ( v9 )
    {
      v10 = v9 + 1;
      v11 = *(_QWORD *)(a1 + 72);
      --v9;
      v12 = a1 + 72;
      if ( *(_QWORD *)(a1 + 88) >= v10 )
        goto LABEL_14;
    }
    else
    {
      v11 = *(_QWORD *)(a1 + 72);
      v12 = a1 + 72;
      if ( *(_QWORD *)(a1 + 88) >= 2u )
      {
LABEL_14:
        *(_QWORD *)(a1 + 80) = v10;
        *(_BYTE *)(v11 + v9) = 10;
        *(_BYTE *)(*(_QWORD *)(a1 + 72) + v9 + 1) = 0;
        v13 = v34;
        if ( (_QWORD)v34 )
        {
          v14 = v34 - 1;
          if ( (_QWORD)v34 != 1 )
          {
            v15 = *(_QWORD *)(a1 + 80);
            v16 = v34 - 1;
            if ( v15 )
            {
              --v15;
              v16 = v14 + v15;
              v13 = v34 + v15;
            }
            v17 = *(_QWORD *)(a1 + 72);
            if ( *(_QWORD *)(a1 + 88) < v13 )
            {
              v32 = v16;
              v31 = qvector_reserve(v12, v17, v13, 1);
              *(_QWORD *)(a1 + 72) = v31;
              v16 = v32;
              v17 = v31;
            }
            *(_QWORD *)(a1 + 80) = v13;
            *(_BYTE *)(v17 + v16) = 0;
            memcpy((void *)(v15 + *(_QWORD *)(a1 + 72)), s, v14);
          }
        }
LABEL_21:
        if ( s )
        {
          *(_QWORD *)&v34 = 0;
          qfree(s);
        }
        if ( v41 )
        {
          *(_QWORD *)&v42 = 0;
          qfree(v41);
        }
        cleanup_argloc(&v39);
        clear_tinfo_t(&v38);
        v18 = tinfo_property;
        if ( tinfo_property )
        {
          v19 = v36;
          if ( (_QWORD)v36 )
          {
            v20 = 0;
            do
            {
              v21 = &v18[80 * v20];
              clear_tinfo_t(v21 + 64);
              v22 = *((_QWORD *)v21 + 5);
              if ( v22 )
              {
                *((_QWORD *)v21 + 6) = 0;
                qfree(v22);
              }
              v23 = *((_QWORD *)v21 + 2);
              if ( v23 )
              {
                *((_QWORD *)v21 + 3) = 0;
                qfree(v23);
              }
              ++v20;
              cleanup_argloc(v21);
              v18 = tinfo_property;
            }
            while ( v19 != v20 );
          }
LABEL_33:
          *(_QWORD *)&v36 = 0;
          qfree(v18);
          return v44 - __readfsqword(0x28u);
        }
        return v44 - __readfsqword(0x28u);
      }
    }
    v30 = qvector_reserve(v12, v11, v10, 1);
    *(_QWORD *)(a1 + 72) = v30;
    v11 = v30;
    goto LABEL_14;
  }
  if ( v41 )
  {
    *(_QWORD *)&v42 = 0;
    qfree(v41);
  }
  cleanup_argloc(&v39);
  clear_tinfo_t(&v38);
  v18 = tinfo_property;
  if ( tinfo_property )
  {
    v25 = v36;
    if ( (_QWORD)v36 )
    {
      v26 = 0;
      do
      {
        v27 = &v18[80 * v26];
        clear_tinfo_t(v27 + 64);
        v28 = *((_QWORD *)v27 + 5);
        if ( v28 )
        {
          *((_QWORD *)v27 + 6) = 0;
          qfree(v28);
        }
        v29 = *((_QWORD *)v27 + 2);
        if ( v29 )
        {
          *((_QWORD *)v27 + 3) = 0;
          qfree(v29);
        }
        ++v26;
        cleanup_argloc(v27);
        v18 = tinfo_property;
      }
      while ( v25 != v26 );
    }
    goto LABEL_33;
  }
  return v44 - __readfsqword(0x28u);
}
