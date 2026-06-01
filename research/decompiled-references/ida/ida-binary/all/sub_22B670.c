double __fastcall setup_process_dialog_t__::vfunc_0(_QWORD *a1, const char *a2)
{
  __int64 v2; // rdx
  __int64 v4; // r12
  __int64 i; // rbp
  __int64 v6; // rax
  __int64 v7; // rdi
  double result; // xmm0_8
  __int64 v9; // rdi
  __int64 v10; // rdi
  __int64 v11; // rdi
  __int64 v12; // rdi
  __int64 v13; // rdi
  __int64 v14; // rdi
  __int64 v15; // rdi
  __int64 v16; // rdi
  __int64 v17; // rdx
  __int64 v18; // r12
  __int64 j; // rbp
  __int64 *v20; // rax
  __int64 v21; // rdi
  __int64 v22; // rdi
  _QWORD *v23; // rbp
  _QWORD *v24; // r12
  __int64 v25; // rdi
  __int64 v26; // rdi
  __int64 v27; // rdi
  __int64 v28; // rdx
  __int64 v29; // r12
  __int64 k; // rbp
  __int64 *v31; // rax
  __int64 v32; // rdi
  __int64 v33; // rdi

  v2 = a1[60];
  *a1 = &setup_process_dialog_t___vtable;
  if ( v2 )
  {
    v4 = a1[61];
    if ( v4 )
    {
      for ( i = 0; i != v4; ++i )
      {
        v6 = v2 + 32 * i;
        v7 = *(_QWORD *)(v6 + 8);
        if ( v7 )
        {
          *(_QWORD *)(v6 + 16) = 0;
          qfree(v7, a2);
          v2 = a1[60];
        }
      }
    }
    a1[61] = 0;
    result = qfree(v2, a2);
  }
  v9 = a1[56];
  if ( v9 )
  {
    a1[57] = 0;
    result = qfree(v9, a2);
  }
  v10 = a1[52];
  if ( v10 )
  {
    a1[53] = 0;
    result = qfree(v10, a2);
  }
  v11 = a1[49];
  if ( v11 )
  {
    a1[50] = 0;
    result = qfree(v11, a2);
  }
  v12 = a1[45];
  if ( v12 )
  {
    a1[46] = 0;
    result = qfree(v12, a2);
  }
  v13 = a1[42];
  if ( v13 )
  {
    a1[43] = 0;
    result = qfree(v13, a2);
  }
  v14 = a1[39];
  if ( v14 )
  {
    a1[40] = 0;
    result = qfree(v14, a2);
  }
  v15 = a1[36];
  if ( v15 )
  {
    a1[37] = 0;
    result = qfree(v15, a2);
  }
  v16 = a1[33];
  if ( v16 )
  {
    a1[34] = 0;
    result = qfree(v16, a2);
  }
  v17 = a1[29];
  *a1 = &forms::dialog_desc_t___vtable;
  if ( v17 )
  {
    v18 = a1[30];
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
          v17 = a1[29];
        }
      }
    }
    a1[30] = 0;
    result = qfree(v17, a2);
  }
  v22 = a1[26];
  if ( v22 )
  {
    a1[27] = 0;
    result = qfree(v22, a2);
  }
  v23 = (_QWORD *)a1[22];
  v24 = &v23[a1[23]];
  if ( v23 != v24 )
  {
    do
    {
      if ( *v23 )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v23 + 8LL))(*v23);
      ++v23;
    }
    while ( v24 != v23 );
    v24 = (_QWORD *)a1[22];
  }
  if ( v24 )
  {
    a1[23] = 0;
    result = qfree(v24, a2);
  }
  v25 = a1[18];
  *a1 = &forms::abstract_form_desc_t___vtable;
  if ( v25 )
  {
    a1[19] = 0;
    result = qfree(v25, a2);
  }
  v26 = a1[15];
  *a1 = &forms::container_t___vtable;
  if ( v26 )
  {
    a1[16] = 0;
    result = qfree(v26, a2);
  }
  v27 = a1[13];
  *a1 = &forms::abstract_container_t___vtable;
  if ( v27 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 8LL))(v27);
  v28 = a1[10];
  a1[13] = 0;
  *a1 = &forms::element_t___vtable;
  if ( v28 )
  {
    v29 = a1[11];
    if ( v29 )
    {
      for ( k = 0; k != v29; ++k )
      {
        v31 = (__int64 *)(v28 + 24 * k);
        v32 = *v31;
        if ( *v31 )
        {
          v31[1] = 0;
          qfree(v32, a2);
          v28 = a1[10];
        }
      }
    }
    a1[11] = 0;
    result = qfree(v28, a2);
  }
  v33 = a1[7];
  if ( v33 )
  {
    a1[8] = 0;
    return qfree(v33, a2);
  }
  return result;
}
