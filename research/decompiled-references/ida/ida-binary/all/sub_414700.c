void __fastcall sub_414700(char *a1, const char *a2)
{
  __int64 v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // r12
  __int64 i; // rbx
  __int64 *v7; // rax
  __int64 v8; // rdi
  __int64 *v9; // r14
  __int64 v10; // rdi
  __int64 v11; // r15
  __int64 v12; // r13
  __int64 j; // r12
  __int64 *v14; // rbx
  __int64 v15; // rdi
  __int64 v16; // rdi
  __int64 v17; // rdi
  __int64 v18; // rdi
  __int64 v19; // rdi
  __int64 v20; // rdi
  __int64 v21; // rdi
  __int64 v22; // rdi
  __int64 v23; // rdi
  __int64 v24; // rdi
  __int64 v25; // rdx
  __int64 v26; // r12
  __int64 k; // rbx
  __int64 *v28; // rax
  __int64 v29; // rdi
  __int64 v30; // rdi
  __int64 v31; // rdi
  __int64 v32; // rdi
  __int64 v33; // rdi
  __int64 v34; // rdi
  __int64 v35; // rdi
  __int64 v36; // rdi

  *((_QWORD *)a1 + 42) = &hvui_progressor_t___vtable;
  v3 = *((_QWORD *)a1 + 47);
  if ( v3 )
  {
    *((_QWORD *)a1 + 48) = 0;
    qfree(v3, a2);
  }
  v4 = *((_QWORD *)a1 + 38);
  if ( v4 )
  {
    v5 = *((_QWORD *)a1 + 39);
    if ( v5 )
    {
      for ( i = 0; i != v5; ++i )
      {
        v7 = (__int64 *)(v4 + 24 * i);
        v8 = *v7;
        if ( *v7 )
        {
          v7[1] = 0;
          qfree(v8, a2);
          v4 = *((_QWORD *)a1 + 38);
        }
      }
    }
    *((_QWORD *)a1 + 39) = 0;
    qfree(v4, a2);
  }
  v9 = *((__int64 **)a1 + 35);
  if ( v9 )
  {
    v10 = *v9;
    if ( *v9 )
    {
      v11 = v9[1];
      if ( v11 )
      {
        v12 = 0;
        for ( j = 0; j != v11; ++j )
        {
          v14 = (__int64 *)(v10 + v12);
          v15 = *(_QWORD *)(v10 + v12 + 216);
          if ( v15 )
          {
            v14[28] = 0;
            qfree(v15, a2);
          }
          v16 = v14[24];
          if ( v16 )
          {
            v14[25] = 0;
            qfree(v16, a2);
          }
          v17 = v14[21];
          if ( v17 )
          {
            v14[22] = 0;
            qfree(v17, a2);
          }
          v18 = v14[18];
          if ( v18 )
          {
            v14[19] = 0;
            qfree(v18, a2);
          }
          v19 = v14[15];
          if ( v19 )
          {
            v14[16] = 0;
            qfree(v19, a2);
          }
          v20 = v14[12];
          if ( v20 )
          {
            v14[13] = 0;
            qfree(v20, a2);
          }
          v21 = v14[9];
          if ( v21 )
          {
            v14[10] = 0;
            qfree(v21, a2);
          }
          v22 = v14[6];
          if ( v22 )
          {
            v14[7] = 0;
            qfree(v22, a2);
          }
          v23 = v14[3];
          if ( v23 )
          {
            v14[4] = 0;
            qfree(v23, a2);
          }
          v24 = *v14;
          if ( *v14 )
          {
            v14[1] = 0;
            qfree(v24, a2);
          }
          v10 = *v9;
          v12 += 240;
        }
      }
      v9[1] = 0;
      qfree(v10, a2);
    }
    qfree(v9, a2);
  }
  sub_414580(*((void **)a1 + 30), a2);
  v25 = *((_QWORD *)a1 + 25);
  if ( v25 )
  {
    v26 = *((_QWORD *)a1 + 26);
    if ( v26 )
    {
      for ( k = 0; k != v26; ++k )
      {
        v28 = (__int64 *)(v25 + 80 * k);
        v29 = *v28;
        if ( *v28 )
        {
          v28[1] = 0;
          qfree(v29, a2);
          v25 = *((_QWORD *)a1 + 25);
        }
      }
    }
    *((_QWORD *)a1 + 26) = 0;
    qfree(v25, a2);
  }
  v30 = *((_QWORD *)a1 + 21);
  if ( v30 )
  {
    *((_QWORD *)a1 + 22) = 0;
    qfree(v30, a2);
  }
  v31 = *((_QWORD *)a1 + 15);
  if ( v31 )
  {
    *((_QWORD *)a1 + 16) = 0;
    qfree(v31, a2);
  }
  v32 = *((_QWORD *)a1 + 12);
  if ( v32 )
  {
    *((_QWORD *)a1 + 13) = 0;
    qfree(v32, a2);
  }
  v33 = *((_QWORD *)a1 + 9);
  if ( v33 )
  {
    *((_QWORD *)a1 + 10) = 0;
    qfree(v33, a2);
  }
  *((_QWORD *)a1 + 3) = &vault_with_events_t___vtable;
  *((_QWORD *)a1 + 5) = &event_source_t___vtable;
  unbind_event_source_all(a1 + 40);
  v34 = *((_QWORD *)a1 + 6);
  if ( v34 )
  {
    *((_QWORD *)a1 + 7) = 0;
    qfree(v34, a2);
  }
  v35 = *((_QWORD *)a1 + 4);
  *((_QWORD *)a1 + 3) = &unk_874DF8;
  if ( v35 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 8LL))(v35);
  v36 = *(_QWORD *)a1;
  if ( *(_QWORD *)a1 )
  {
    *((_QWORD *)a1 + 1) = 0;
    qfree(v36, a2);
  }
  operator delete(a1, 0x198u);
}
