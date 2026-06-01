double __fastcall liblicui::license_dialog_t__::vfunc_0(_QWORD *a1, const char *a2)
{
  __int64 v3; // rdi
  double result; // xmm0_8
  __int64 v5; // rdi
  __int64 v6; // rdi
  __int64 v7; // rdi
  __int64 v8; // rdi
  __int64 v9; // rdi
  __int64 v10; // rdi
  __int64 v11; // rdi
  __int64 v12; // rdi
  __int64 v13; // r13
  __int64 i; // r12
  _QWORD *v15; // r14
  __int64 v16; // rdi
  __int64 v17; // rcx
  __int64 v18; // r15
  __int64 j; // rbx
  __int64 *v20; // rdx
  __int64 v21; // rdi
  __int64 v22; // rdi
  __int64 v23; // rdi
  __int64 *v24; // rbx
  __int64 v25; // rdi
  __int64 v26; // rdi
  __int64 v27; // rdi
  __int64 v28; // rdi
  __int64 v29; // r13
  __int64 k; // r12
  _QWORD *v31; // r15
  __int64 v32; // rdi
  __int64 v33; // rcx
  __int64 v34; // r14
  __int64 m; // rbx
  __int64 *v36; // rdx
  __int64 v37; // rdi
  __int64 v38; // rdi
  __int64 v39; // rdi
  _QWORD *v40; // rbx
  _QWORD *v41; // r12
  __int64 v42; // rdi
  __int64 v43; // rdi
  __int64 v44; // rdi
  __int64 v45; // rdi
  __int64 v46; // rdx
  __int64 v47; // r12
  __int64 n; // rbx
  __int64 *v49; // rax
  __int64 v50; // rdi
  __int64 v51; // rdi
  _QWORD *v52; // rbx
  _QWORD *v53; // r12
  __int64 v54; // rdi
  __int64 v55; // rdi
  __int64 v56; // rdi
  __int64 v57; // rdx
  __int64 v58; // r12
  __int64 ii; // rbx
  __int64 *v60; // rax
  __int64 v61; // rdi
  __int64 v62; // rdi
  __int64 v63; // [rsp+8h] [rbp-40h]
  __int64 v64; // [rsp+8h] [rbp-40h]

  *a1 = &liblicui::license_dialog_t___vtable;
  v3 = a1[135];
  if ( v3 )
  {
    a1[136] = 0;
    result = qfree(v3, a2);
  }
  v5 = a1[132];
  if ( v5 )
  {
    a1[133] = 0;
    result = qfree(v5, a2);
  }
  v6 = a1[127];
  if ( v6 )
  {
    a1[128] = 0;
    result = qfree(v6, a2);
  }
  v7 = a1[123];
  if ( v7 )
  {
    a1[124] = 0;
    result = qfree(v7, a2);
  }
  v8 = a1[117];
  if ( v8 )
  {
    a1[118] = 0;
    result = qfree(v8, a2);
  }
  v9 = a1[114];
  if ( v9 )
  {
    a1[115] = 0;
    result = qfree(v9, a2);
  }
  v10 = a1[109];
  if ( v10 )
  {
    a1[110] = 0;
    result = qfree(v10, a2);
  }
  v11 = a1[105];
  a1[78] = liblicui::license_chooser_t___vtable;
  if ( v11 )
  {
    a1[106] = 0;
    result = qfree(v11, a2);
  }
  v12 = a1[102];
  if ( v12 )
  {
    v63 = a1[103];
    if ( v63 )
    {
      v13 = 0;
      for ( i = 0; i != v63; ++i )
      {
        v15 = (_QWORD *)(v12 + v13);
        v16 = *(_QWORD *)(v12 + v13 + 128);
        if ( v16 )
        {
          v15[17] = 0;
          qfree(v16, a2);
        }
        v17 = v15[10];
        if ( v17 )
        {
          v18 = v15[11];
          if ( v18 )
          {
            for ( j = 0; j != v18; ++j )
            {
              v20 = (__int64 *)(v17 + 24 * j);
              v21 = *v20;
              if ( *v20 )
              {
                v20[1] = 0;
                qfree(v21, a2);
                v17 = v15[10];
              }
            }
          }
          v15[11] = 0;
          qfree(v17, a2);
        }
        v22 = v15[7];
        if ( v22 )
        {
          v15[8] = 0;
          qfree(v22, a2);
        }
        v23 = v15[4];
        if ( v23 )
        {
          v15[5] = 0;
          qfree(v23, a2);
        }
        v12 = a1[102];
        v13 += 152;
      }
    }
    a1[103] = 0;
    result = qfree(v12, a2);
  }
  v24 = a1 + 97;
  a1[78] = &stru_86F6A0;
  do
  {
    v25 = *v24;
    if ( *v24 )
    {
      v24[1] = 0;
      result = qfree(v25, a2);
    }
    v24 -= 3;
  }
  while ( a1 + 85 != v24 );
  v26 = a1[75];
  if ( v26 )
  {
    a1[76] = 0;
    result = qfree(v26, a2);
  }
  v27 = a1[71];
  a1[44] = liblicui::license_chooser_t___vtable;
  if ( v27 )
  {
    a1[72] = 0;
    result = qfree(v27, a2);
  }
  v28 = a1[68];
  if ( v28 )
  {
    v64 = a1[69];
    if ( v64 )
    {
      v29 = 0;
      for ( k = 0; k != v64; ++k )
      {
        v31 = (_QWORD *)(v28 + v29);
        v32 = *(_QWORD *)(v28 + v29 + 128);
        if ( v32 )
        {
          v31[17] = 0;
          qfree(v32, a2);
        }
        v33 = v31[10];
        if ( v33 )
        {
          v34 = v31[11];
          if ( v34 )
          {
            for ( m = 0; m != v34; ++m )
            {
              v36 = (__int64 *)(v33 + 24 * m);
              v37 = *v36;
              if ( *v36 )
              {
                v36[1] = 0;
                qfree(v37, a2);
                v33 = v31[10];
              }
            }
          }
          v31[11] = 0;
          qfree(v33, a2);
        }
        v38 = v31[7];
        if ( v38 )
        {
          v31[8] = 0;
          qfree(v38, a2);
        }
        v39 = v31[4];
        if ( v39 )
        {
          v31[5] = 0;
          qfree(v39, a2);
        }
        v28 = a1[68];
        v29 += 152;
      }
    }
    a1[69] = 0;
    result = qfree(v28, a2);
  }
  v40 = a1 + 66;
  a1[44] = &stru_86F6A0;
  v41 = a1 + 54;
  while ( v40 != v41 )
  {
    while ( 1 )
    {
      v42 = *(v40 - 3);
      v40 -= 3;
      if ( !v42 )
        break;
      v40[1] = 0;
      result = qfree(v42, a2);
      if ( v40 == v41 )
        goto LABEL_65;
    }
  }
LABEL_65:
  v43 = a1[41];
  if ( v43 )
  {
    a1[42] = 0;
    result = qfree(v43, a2);
  }
  v44 = a1[37];
  if ( v44 )
  {
    a1[38] = 0;
    result = qfree(v44, a2);
  }
  v45 = a1[34];
  if ( v45 )
  {
    a1[35] = 0;
    result = qfree(v45, a2);
  }
  v46 = a1[29];
  *a1 = &forms::dialog_desc_t___vtable;
  if ( v46 )
  {
    v47 = a1[30];
    if ( v47 )
    {
      for ( n = 0; n != v47; ++n )
      {
        v49 = (__int64 *)(v46 + 24 * n);
        v50 = *v49;
        if ( *v49 )
        {
          v49[1] = 0;
          qfree(v50, a2);
          v46 = a1[29];
        }
      }
    }
    a1[30] = 0;
    result = qfree(v46, a2);
  }
  v51 = a1[26];
  if ( v51 )
  {
    a1[27] = 0;
    result = qfree(v51, a2);
  }
  v52 = (_QWORD *)a1[22];
  v53 = &v52[a1[23]];
  if ( v52 != v53 )
  {
    do
    {
      if ( *v52 )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v52 + 8LL))(*v52);
      ++v52;
    }
    while ( v53 != v52 );
    v53 = (_QWORD *)a1[22];
  }
  if ( v53 )
  {
    a1[23] = 0;
    result = qfree(v53, a2);
  }
  v54 = a1[18];
  *a1 = &forms::abstract_form_desc_t___vtable;
  if ( v54 )
  {
    a1[19] = 0;
    result = qfree(v54, a2);
  }
  v55 = a1[15];
  *a1 = &forms::container_t___vtable;
  if ( v55 )
  {
    a1[16] = 0;
    result = qfree(v55, a2);
  }
  v56 = a1[13];
  *a1 = &forms::abstract_container_t___vtable;
  if ( v56 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v56 + 8LL))(v56);
  v57 = a1[10];
  a1[13] = 0;
  *a1 = &forms::element_t___vtable;
  if ( v57 )
  {
    v58 = a1[11];
    if ( v58 )
    {
      for ( ii = 0; ii != v58; ++ii )
      {
        v60 = (__int64 *)(v57 + 24 * ii);
        v61 = *v60;
        if ( *v60 )
        {
          v60[1] = 0;
          qfree(v61, a2);
          v57 = a1[10];
        }
      }
    }
    a1[11] = 0;
    result = qfree(v57, a2);
  }
  v62 = a1[7];
  if ( v62 )
  {
    a1[8] = 0;
    return qfree(v62, a2);
  }
  return result;
}
