unsigned __int64 __fastcall sub_2B62A0(__int64 a1, __int64 *a2, __int64 a3, int a4, __int64 a5)
{
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 *v9; // rax
  __int64 v10; // r15
  __int64 *v11; // r14
  __int64 v12; // rsi
  __int64 v13; // rbx
  unsigned __int64 v14; // r12
  __int64 v15; // r14
  __int64 v16; // rdx
  unsigned __int64 v17; // rax
  unsigned int tinfo_size; // eax
  __int64 v19; // rdx
  __int64 v20; // rsi
  __int64 v21; // rax
  __int64 v22; // r12
  __int64 i; // rbp
  _QWORD *v24; // rbx
  __int64 v25; // rdi
  __int64 v26; // rdi
  __int64 v28; // r14
  __int64 v29; // r15
  __int64 *v30; // r13
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // r10
  unsigned __int64 v33; // rdx
  unsigned __int64 v34; // r8
  size_t v35; // rbp
  __int64 v36; // rsi
  const char *v37; // rax
  const char *v38; // rbp
  size_t v39; // rax
  __int64 v40; // r9
  size_t v41; // r10
  size_t v42; // r11
  __int64 v43; // rsi
  size_t v44; // rdx
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 *v47; // [rsp+0h] [rbp-4A8h]
  __int64 *v48; // [rsp+0h] [rbp-4A8h]
  __int64 v49; // [rsp+8h] [rbp-4A0h]
  size_t v50; // [rsp+8h] [rbp-4A0h]
  __int64 v51; // [rsp+10h] [rbp-498h]
  size_t v52; // [rsp+18h] [rbp-490h]
  unsigned __int64 v53; // [rsp+18h] [rbp-490h]
  size_t v54; // [rsp+20h] [rbp-488h]
  __int64 *v55; // [rsp+28h] [rbp-480h]
  _QWORD v56[2]; // [rsp+30h] [rbp-478h] BYREF
  char v57; // [rsp+40h] [rbp-468h]
  __int64 v58; // [rsp+48h] [rbp-460h]
  __int64 v59; // [rsp+50h] [rbp-458h]
  char v60[1032]; // [rsp+60h] [rbp-448h] BYREF
  unsigned __int64 v61; // [rsp+468h] [rbp-40h]

  v7 = *(_QWORD *)(a1 + 40);
  v8 = *(_QWORD *)(a5 + 112);
  v61 = __readfsqword(0x28u);
  v57 = 103;
  v56[1] = v7;
  v56[0] = off_4AD8C8;
  v58 = v8;
  v59 = 0;
  v9 = (__int64 *)sub_2AF070(a5, (__int64)v56, a4);
  if ( v9 )
  {
    v10 = *v9;
    v11 = v9;
    v12 = a2[1];
    v13 = *v9 + 80 * v9[1];
    if ( *v9 != v13 )
    {
      v47 = v9;
      v14 = 0;
      v49 = v12;
      do
      {
        memset(v60, 0, 0x400u);
        tinfo_size = get_tinfo_size(0, *(_QWORD *)(v10 + 64), 0);
        print_argloc(v60, 1024, v10, tinfo_size, 2);
        v19 = a2[1];
        v20 = *a2;
        if ( a2[2] < (unsigned __int64)(v19 + 1) )
        {
          v21 = qvector_reserve(a2, v20, v19 + 1, 24);
          v19 = a2[1];
          *a2 = v21;
          v20 = v21;
        }
        v15 = v20 + 24 * v19;
        *(_QWORD *)v15 = 0;
        *(_OWORD *)(v15 + 8) = 0;
        ++a2[1];
        sub_652F0((__int64 *)v15, (__int64)"<%s>", v60);
        v16 = *(_QWORD *)(v15 + 8);
        v17 = v16 - 1;
        if ( v14 >= v16 - 1 )
          v17 = v14;
        if ( v16 )
          v14 = v17;
        v10 += 80;
      }
      while ( v13 != v10 );
      v11 = v47;
      v13 = *v47;
      if ( *v47 + 80 * v47[1] != *v47 )
      {
        v55 = v47;
        v28 = *v47 + 80 * v47[1];
        v48 = a2;
        v29 = 24 * v49;
        do
        {
          v30 = (__int64 *)(v29 + *v48);
          if ( v14 )
          {
            v31 = v30[1];
            v32 = v14 + 1;
            v33 = v14 + 2;
            v34 = v31 - 1;
            if ( !v31 )
              v34 = 0;
            v35 = v14 + 1 - v34;
            if ( v31 < v33 )
            {
              v36 = *v30;
              if ( v30[2] < v33 )
              {
                v53 = v34;
                v46 = qvector_reserve(v29 + *v48, v36, v33, 1);
                v34 = v53;
                v32 = v14 + 1;
                *v30 = v46;
                v33 = v14 + 2;
                v36 = v46;
              }
              v30[1] = v33;
              *(_BYTE *)(v36 + v32) = 0;
            }
            memset((void *)(v34 + *v30), 32, v35);
          }
          v37 = (const char *)dstr_tinfo(v13 + 64);
          v38 = v37;
          if ( v37 )
          {
            v39 = strlen(v37);
            v40 = v30[1];
            v41 = v39;
            v42 = v39;
            if ( v40 )
            {
              --v40;
              v42 = v39 + v40;
            }
            v43 = *v30;
            v44 = v42 + 1;
            if ( v30[2] < v42 + 1 )
            {
              v54 = v39;
              v52 = v42;
              v51 = v40;
              v50 = v42 + 1;
              v45 = qvector_reserve(v30, v43, v44, 1);
              v41 = v54;
              v42 = v52;
              *v30 = v45;
              v40 = v51;
              v43 = v45;
              v44 = v50;
            }
            v30[1] = v44;
            *(_BYTE *)(v43 + v42) = 0;
            memmove((void *)(v40 + *v30), v38, v41);
          }
          v13 += 80;
          v29 += 24;
        }
        while ( v13 != v28 );
        v11 = v55;
        v13 = *v55;
      }
    }
    if ( v13 )
    {
      v22 = v11[1];
      if ( v22 )
      {
        for ( i = 0; i != v22; ++i )
        {
          v24 = (_QWORD *)(80 * i + v13);
          clear_tinfo_t(v24 + 8);
          v25 = v24[5];
          if ( v25 )
          {
            v24[6] = 0;
            qfree(v25);
          }
          v26 = v24[2];
          if ( v26 )
          {
            v24[3] = 0;
            qfree(v26);
          }
          cleanup_argloc(v24);
          v13 = *v11;
        }
      }
      v11[1] = 0;
      qfree(v13);
    }
    qfree(v11);
  }
  return v61 - __readfsqword(0x28u);
}
