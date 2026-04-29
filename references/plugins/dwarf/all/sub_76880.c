__int64 __fastcall sub_76880(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rax
  __int64 v5; // rdi
  __int64 v6; // rax
  const char *v7; // r13
  __int64 v8; // rax
  void (__fastcall ***v9)(_QWORD *); // r15
  _QWORD *v10; // r14
  bool v11; // zf
  void (__fastcall *v12)(_QWORD *); // rcx
  void (__fastcall *v13)(_QWORD *); // rax
  _QWORD *v14; // rax
  _QWORD **v15; // rax
  void *v16; // rdi
  _QWORD *v17; // rax
  void *v18; // rcx
  void *v19; // rax
  __int64 v20; // rdi
  void (__fastcall **v21)(_QWORD *); // rdi
  _DWORD *v22; // rax
  __int64 v23; // rbp
  size_t v24; // rax
  size_t v25; // r14
  size_t v26; // rbx
  void (__fastcall *v28)(_QWORD *); // rsi
  void (__fastcall *v29)(_QWORD *); // rcx
  _QWORD *v30; // rdx
  _QWORD **v31; // rcx
  void *v32; // rdi
  _QWORD *v33; // rcx
  _DWORD *v34; // rax
  void *v35; // r8
  void *v36; // rcx
  __int64 v37; // rdi
  __int64 v38; // rdi
  __int64 v39; // [rsp+8h] [rbp-A0h]
  bool v40; // [rsp+10h] [rbp-98h]
  void *v41; // [rsp+10h] [rbp-98h]
  _QWORD **v42; // [rsp+10h] [rbp-98h]
  _DWORD *v43; // [rsp+10h] [rbp-98h]
  _QWORD *v44; // [rsp+10h] [rbp-98h]
  _DWORD *v45; // [rsp+10h] [rbp-98h]
  _DWORD *v46; // [rsp+10h] [rbp-98h]
  void *v47; // [rsp+18h] [rbp-90h]
  _QWORD **v48; // [rsp+18h] [rbp-90h]
  _QWORD *v49; // [rsp+18h] [rbp-90h]
  _QWORD *v50; // [rsp+18h] [rbp-90h]
  _DWORD *v51; // [rsp+18h] [rbp-90h]
  _DWORD *v52; // [rsp+18h] [rbp-90h]
  _QWORD *v53; // [rsp+18h] [rbp-90h]
  void *v54; // [rsp+20h] [rbp-88h]
  void *v55; // [rsp+20h] [rbp-88h]
  int v56; // [rsp+20h] [rbp-88h]
  void *v57; // [rsp+28h] [rbp-80h]
  void *v58; // [rsp+28h] [rbp-80h]
  int v59; // [rsp+3Ch] [rbp-6Ch] BYREF
  __m128i v60; // [rsp+40h] [rbp-68h] BYREF
  __int128 v61; // [rsp+50h] [rbp-58h]
  int v62; // [rsp+60h] [rbp-48h]
  unsigned __int64 v63; // [rsp+68h] [rbp-40h]

  v3 = *a2;
  v63 = __readfsqword(0x28u);
  v60.m128i_i64[0] = 0;
  v5 = *(_QWORD *)(v3 + 24);
  v6 = a2[32];
  v59 = 0;
  if ( (*(unsigned int (__fastcall **)(__int64, __int64, int *, __m128i *))(v6 + 112))(v5, 17, &v59, &v60) )
    return 0;
  if ( !v59 )
    return 0;
  v7 = (const char *)sub_986B0(a2);
  if ( !v7 )
    return 0;
  v39 = sub_9A0A0(a2);
  v8 = sub_87DA0(a2);
  v9 = *(void (__fastcall ****)(_QWORD *))(v8 + 216);
  v10 = (_QWORD *)v8;
  if ( v9 )
  {
    ++*((_DWORD *)v9 + 2);
    if ( v9[13] && strstr((const char *)v9[12], "Apple Inc.") )
    {
      v22 = (_DWORD *)v10[27];
      if ( v22 )
      {
        v56 = v22[31];
        if ( !v22[2] )
        {
          v28 = **(void (__fastcall ***)(_QWORD *))v22;
          if ( v28 == sub_15E30 )
          {
            v29 = *(void (__fastcall **)(_QWORD *))(*(_QWORD *)v22 + 16LL);
            if ( v29 == sub_15D70 )
            {
              *(_QWORD *)v22 = &off_C71D8;
              v30 = *((_QWORD **)v22 + 16);
              v57 = v30;
              if ( v30 )
              {
                v31 = (_QWORD **)v30[2];
                if ( v31 )
                {
                  do
                  {
                    v51 = v22;
                    v41 = v31;
                    sub_70340(v31[3]);
                    v32 = v41;
                    v42 = *((_QWORD ***)v41 + 2);
                    operator delete(v32, 0x30u);
                    v31 = v42;
                    v22 = v51;
                  }
                  while ( v42 );
                }
                v43 = v22;
                operator delete(v57, 0x30u);
                v22 = v43;
              }
              v33 = *((_QWORD **)v22 + 19);
              if ( v33 )
              {
                do
                {
                  v52 = v22;
                  v44 = v33;
                  sub_70BA0((_QWORD *)v33[3]);
                  v34 = v52;
                  v35 = v44;
                  v36 = (void *)v44[2];
                  v37 = v44[4];
                  if ( v37 )
                  {
                    v44[5] = 0;
                    v58 = v36;
                    qfree(v37);
                    v36 = v58;
                    v34 = v52;
                    v35 = v44;
                  }
                  v53 = v36;
                  v45 = v34;
                  operator delete(v35, 0x48u);
                  v33 = v53;
                  v22 = v45;
                }
                while ( v53 );
              }
              v38 = *((_QWORD *)v22 + 12);
              if ( v38 )
              {
                *((_QWORD *)v22 + 13) = 0;
                v46 = v22;
                qfree(v38);
                v22 = v46;
              }
              operator delete(v22, 0xC0u);
            }
            else
            {
              v29(v22);
            }
          }
          else
          {
            v28(v22);
          }
        }
        v40 = v56 == 1;
      }
      else
      {
        v40 = 0;
      }
      v11 = (*((_DWORD *)v9 + 2))-- == 1;
      if ( !v11 )
        goto LABEL_26;
      goto LABEL_8;
    }
    v11 = (*((_DWORD *)v9 + 2))-- == 1;
    if ( v11 )
    {
      v40 = 0;
LABEL_8:
      v12 = **v9;
      if ( v12 == sub_15E30 )
      {
        v13 = (*v9)[2];
        if ( v13 == sub_15D70 )
        {
          *v9 = (void (__fastcall **)(_QWORD *))&off_C71D8;
          v14 = v9[16];
          v54 = v14;
          if ( v14 )
          {
            v15 = (_QWORD **)v14[2];
            if ( v15 )
            {
              do
              {
                v47 = v15;
                sub_70340(v15[3]);
                v16 = v47;
                v48 = *((_QWORD ***)v47 + 2);
                operator delete(v16, 0x30u);
                v15 = v48;
              }
              while ( v48 );
            }
            operator delete(v54, 0x30u);
          }
          v17 = v9[19];
          if ( v17 )
          {
            do
            {
              v49 = v17;
              sub_70BA0((_QWORD *)v17[3]);
              v18 = v49;
              v19 = (void *)v49[2];
              v20 = v49[4];
              if ( v20 )
              {
                v49[5] = 0;
                v55 = v19;
                qfree(v20);
                v19 = v55;
                v18 = v49;
              }
              v50 = v19;
              operator delete(v18, 0x48u);
              v17 = v50;
            }
            while ( v50 );
          }
          v21 = v9[12];
          if ( v21 )
          {
            v9[13] = nullptr;
            qfree(v21);
          }
          operator delete(v9, 0xC0u);
        }
        else
        {
          v13(v9);
        }
      }
      else
      {
        v12(v9);
      }
      goto LABEL_26;
    }
  }
  else if ( strstr((const char *)0x9F90, "Apple Inc.") )
  {
    v40 = 0;
LABEL_26:
    if ( v40 )
    {
      v60 = 0u;
      v62 = 0;
      v61 = 0;
      if ( (unsigned __int8)sub_9A3B0(*(_QWORD *)(*v10 + 16LL), &v60, v10) )
        v39 += v61;
    }
  }
  if ( !sub_1BA30(*(_QWORD *)(*(_QWORD *)(*a2 + 16LL) + 128LL), v39) )
  {
    v23 = *(_QWORD *)(a1 + 40);
    v60 = (__m128i)(unsigned __int64)v39;
    v61 = 0;
    v24 = strlen(v7);
    v25 = v24 + 1;
    v26 = v24;
    v60.m128i_i64[1] = qvector_reserve(&v60.m128i_u64[1], 0, v24 + 1, 1);
    *(_QWORD *)&v61 = v25;
    memmove((void *)v60.m128i_i64[1], v7, v26);
    *(_BYTE *)(v60.m128i_i64[1] + v26) = 0;
    LOBYTE(v62) = 1;
    sub_76600((const __m128i **)(v23 + 24), &v60);
    if ( v60.m128i_i64[1] )
    {
      *(_QWORD *)&v61 = 0;
      qfree(v60.m128i_i64[1]);
    }
  }
  return 0;
}
