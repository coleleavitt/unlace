void __fastcall liblicui::license_dialog_t__::vfunc_1(_QWORD *a1, const char *a2)
{
  __int64 v3; // rdi
  __int64 v4; // rdi
  __int64 v5; // rdi
  __int64 v6; // rdi
  __int64 v7; // rdi
  __int64 v8; // rdi
  __int64 v9; // rdi
  __int64 v10; // rdi
  __int64 v11; // rdi
  __int64 v12; // r13
  __int64 i; // r12
  _QWORD *v14; // r14
  __int64 v15; // rdi
  __int64 v16; // rcx
  __int64 v17; // r15
  __int64 j; // rbx
  __int64 *v19; // rdx
  __int64 v20; // rdi
  __int64 v21; // rdi
  __int64 v22; // rdi
  __int64 *v23; // rbx
  __int64 v24; // rdi
  __int64 v25; // rdi
  __int64 v26; // rdi
  __int64 v27; // rdi
  __int64 v28; // r13
  __int64 k; // r12
  _QWORD *v30; // r15
  __int64 v31; // rdi
  __int64 v32; // rcx
  __int64 v33; // r14
  __int64 m; // rbx
  __int64 *v35; // rdx
  __int64 v36; // rdi
  __int64 v37; // rdi
  __int64 v38; // rdi
  char *v39; // rbx
  char *v40; // r12
  __int64 v41; // rdi
  __int64 v42; // rdi
  __int64 v43; // rdi
  __int64 v44; // rdi
  __int64 v45; // rdx
  __int64 v46; // r12
  __int64 n; // rbx
  __int64 *v48; // rax
  __int64 v49; // rdi
  __int64 v50; // rdi
  _QWORD *v51; // rbx
  _QWORD *v52; // r12
  __int64 v53; // rdi
  __int64 v54; // rdi
  __int64 v55; // rdi
  __int64 v56; // rdx
  __int64 v57; // r12
  __int64 ii; // rbx
  __int64 *v59; // rax
  __int64 v60; // rdi
  __int64 v61; // rdi
  __int64 v62; // [rsp+8h] [rbp-40h]
  __int64 v63; // [rsp+8h] [rbp-40h]

  *a1 = &liblicui::license_dialog_t___vtable;
  v3 = a1[135];
  if ( v3 )
  {
    a1[136] = 0;
    qfree(v3, a2);
  }
  v4 = a1[132];
  if ( v4 )
  {
    a1[133] = 0;
    qfree(v4, a2);
  }
  v5 = a1[127];
  if ( v5 )
  {
    a1[128] = 0;
    qfree(v5, a2);
  }
  v6 = a1[123];
  if ( v6 )
  {
    a1[124] = 0;
    qfree(v6, a2);
  }
  v7 = a1[117];
  if ( v7 )
  {
    a1[118] = 0;
    qfree(v7, a2);
  }
  v8 = a1[114];
  if ( v8 )
  {
    a1[115] = 0;
    qfree(v8, a2);
  }
  v9 = a1[109];
  if ( v9 )
  {
    a1[110] = 0;
    qfree(v9, a2);
  }
  v10 = a1[105];
  a1[78] = liblicui::license_chooser_t___vtable;
  if ( v10 )
  {
    a1[106] = 0;
    qfree(v10, a2);
  }
  v11 = a1[102];
  if ( v11 )
  {
    v62 = a1[103];
    if ( v62 )
    {
      v12 = 0;
      for ( i = 0; i != v62; ++i )
      {
        v14 = (_QWORD *)(v11 + v12);
        v15 = *(_QWORD *)(v11 + v12 + 128);
        if ( v15 )
        {
          v14[17] = 0;
          qfree(v15, a2);
        }
        v16 = v14[10];
        if ( v16 )
        {
          v17 = v14[11];
          if ( v17 )
          {
            for ( j = 0; j != v17; ++j )
            {
              v19 = (__int64 *)(v16 + 24 * j);
              v20 = *v19;
              if ( *v19 )
              {
                v19[1] = 0;
                qfree(v20, a2);
                v16 = v14[10];
              }
            }
          }
          v14[11] = 0;
          qfree(v16, a2);
        }
        v21 = v14[7];
        if ( v21 )
        {
          v14[8] = 0;
          qfree(v21, a2);
        }
        v22 = v14[4];
        if ( v22 )
        {
          v14[5] = 0;
          qfree(v22, a2);
        }
        v11 = a1[102];
        v12 += 152;
      }
    }
    a1[103] = 0;
    qfree(v11, a2);
  }
  v23 = a1 + 97;
  a1[78] = &stru_86F6A0;
  do
  {
    v24 = *v23;
    if ( *v23 )
    {
      v23[1] = 0;
      qfree(v24, a2);
    }
    v23 -= 3;
  }
  while ( v23 != a1 + 85 );
  v25 = a1[75];
  if ( v25 )
  {
    a1[76] = 0;
    qfree(v25, a2);
  }
  v26 = a1[71];
  a1[44] = liblicui::license_chooser_t___vtable;
  if ( v26 )
  {
    a1[72] = 0;
    qfree(v26, a2);
  }
  v27 = a1[68];
  if ( v27 )
  {
    v63 = a1[69];
    if ( v63 )
    {
      v28 = 0;
      for ( k = 0; k != v63; ++k )
      {
        v30 = (_QWORD *)(v27 + v28);
        v31 = *(_QWORD *)(v27 + v28 + 128);
        if ( v31 )
        {
          v30[17] = 0;
          qfree(v31, a2);
        }
        v32 = v30[10];
        if ( v32 )
        {
          v33 = v30[11];
          if ( v33 )
          {
            for ( m = 0; m != v33; ++m )
            {
              v35 = (__int64 *)(v32 + 24 * m);
              v36 = *v35;
              if ( *v35 )
              {
                v35[1] = 0;
                qfree(v36, a2);
                v32 = v30[10];
              }
            }
          }
          v30[11] = 0;
          qfree(v32, a2);
        }
        v37 = v30[7];
        if ( v37 )
        {
          v30[8] = 0;
          qfree(v37, a2);
        }
        v38 = v30[4];
        if ( v38 )
        {
          v30[5] = 0;
          qfree(v38, a2);
        }
        v27 = a1[68];
        v28 += 152;
      }
    }
    a1[69] = 0;
    qfree(v27, a2);
  }
  v39 = (char *)(a1 + 66);
  a1[44] = &stru_86F6A0;
  v40 = (char *)(a1 + 54);
  while ( v39 != v40 )
  {
    while ( 1 )
    {
      v41 = *((_QWORD *)v39 - 3);
      v39 -= 24;
      if ( !v41 )
        break;
      *((_QWORD *)v39 + 1) = 0;
      qfree(v41, a2);
      if ( v39 == v40 )
        goto LABEL_65;
    }
  }
LABEL_65:
  v42 = a1[41];
  if ( v42 )
  {
    a1[42] = 0;
    qfree(v42, a2);
  }
  v43 = a1[37];
  if ( v43 )
  {
    a1[38] = 0;
    qfree(v43, a2);
  }
  v44 = a1[34];
  if ( v44 )
  {
    a1[35] = 0;
    qfree(v44, a2);
  }
  v45 = a1[29];
  *a1 = &forms::dialog_desc_t___vtable;
  if ( v45 )
  {
    v46 = a1[30];
    if ( v46 )
    {
      for ( n = 0; n != v46; ++n )
      {
        v48 = (__int64 *)(v45 + 24 * n);
        v49 = *v48;
        if ( *v48 )
        {
          v48[1] = 0;
          qfree(v49, a2);
          v45 = a1[29];
        }
      }
    }
    a1[30] = 0;
    qfree(v45, a2);
  }
  v50 = a1[26];
  if ( v50 )
  {
    a1[27] = 0;
    qfree(v50, a2);
  }
  v51 = (_QWORD *)a1[22];
  v52 = &v51[a1[23]];
  if ( v51 != v52 )
  {
    do
    {
      if ( *v51 )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v51 + 8LL))(*v51);
      ++v51;
    }
    while ( v52 != v51 );
    v52 = (_QWORD *)a1[22];
  }
  if ( v52 )
  {
    a1[23] = 0;
    qfree(v52, a2);
  }
  v53 = a1[18];
  *a1 = &forms::abstract_form_desc_t___vtable;
  if ( v53 )
  {
    a1[19] = 0;
    qfree(v53, a2);
  }
  v54 = a1[15];
  *a1 = &forms::container_t___vtable;
  if ( v54 )
  {
    a1[16] = 0;
    qfree(v54, a2);
  }
  v55 = a1[13];
  *a1 = &forms::abstract_container_t___vtable;
  if ( v55 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v55 + 8LL))(v55);
  v56 = a1[10];
  a1[13] = 0;
  *a1 = &forms::element_t___vtable;
  if ( v56 )
  {
    v57 = a1[11];
    if ( v57 )
    {
      for ( ii = 0; ii != v57; ++ii )
      {
        v59 = (__int64 *)(v56 + 24 * ii);
        v60 = *v59;
        if ( *v59 )
        {
          v59[1] = 0;
          qfree(v60, a2);
          v56 = a1[10];
        }
      }
    }
    a1[11] = 0;
    qfree(v56, a2);
  }
  v61 = a1[7];
  if ( v61 )
  {
    a1[8] = 0;
    qfree(v61, a2);
  }
  operator delete(a1, 0x450u);
}
