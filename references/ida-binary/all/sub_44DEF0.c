_BOOL8 __fastcall sub_44DEF0(unsigned int *a1, int a2, __int64 a3)
{
  const char *v7; // rsi
  const char *v8; // rdi
  int v9; // r13d
  _QWORD *v10; // rax
  __int64 v11; // rax
  _QWORD *v12; // r14
  const char *v13; // rdx
  __int64 (__fastcall *v14)(__int64); // rax
  __int64 v15; // rsi
  __int64 *v16; // rdi
  __int64 v17; // rax
  __int64 (*v18)(); // rcx
  unsigned int v19; // eax
  unsigned __int64 v20; // rbx
  void (__fastcall **v21)(__int64, __int64, unsigned __int16 *); // rax
  __int64 v22; // rdi
  const char *v23; // r12
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 (__fastcall *v26)(_QWORD *, __int64, __int64, __int64, __int64); // rax
  __int64 v27; // rcx
  __int64 (__fastcall *v28)(_QWORD *, __int64, __int64, __int64, __int64); // rdx
  __int64 v29; // rdi
  __int64 (*v30)(); // rax
  const char *v31; // rbp
  __int64 v32; // rdx
  __int64 v33; // r12
  __int64 v34; // rbx
  __int64 v35; // rax
  __int64 v36; // rdi
  __int64 v37; // r8
  __int64 (__fastcall *v38)(__int64); // rax
  __int64 *v39; // rdi
  __int64 v40; // rax
  __int64 (*v41)(); // rdx
  unsigned int v42; // eax
  _QWORD *v43; // rbx
  __int64 v44; // rax
  const char *v45; // rsi
  const char *v46; // rdi
  __int64 v47; // r13
  __int64 v48; // r12
  __int64 v49; // rbp
  __int64 *v50; // rbx
  __int64 v51; // rdi
  __int64 v52; // rdi
  __int64 v53; // rdi
  __int64 v54; // rdi
  __int64 v55; // r14
  __int64 v56; // r13
  __int64 v57; // r12
  __int64 *v58; // rbx
  __int64 v59; // rdi
  __int64 v60; // rdi
  __int64 v61; // rdi
  char v62; // al
  char v63; // al
  char v64; // al
  const void *v65; // r13
  unsigned int v66; // [rsp+0h] [rbp-68h]
  __int64 v67; // [rsp+0h] [rbp-68h]
  __int64 v68; // [rsp+8h] [rbp-60h]
  const char *v69; // [rsp+8h] [rbp-60h]
  unsigned __int16 v70; // [rsp+1Ah] [rbp-4Eh] BYREF
  _BYTE v71[4]; // [rsp+1Ch] [rbp-4Ch] BYREF
  __int64 v72; // [rsp+20h] [rbp-48h] BYREF
  __int128 v73; // [rsp+28h] [rbp-40h]
  unsigned __int64 v74; // [rsp+38h] [rbp-30h]

  v74 = __readfsqword(0x28u);
  if ( a2 == -1 )
  {
    sub_44DAA0((_QWORD *)a1 + 4, a3, 2u);
    if ( !a1[25] )
      goto LABEL_25;
  }
  else
  {
    if ( a2 >= 0 )
    {
      if ( a2 == 2 )
        sub_44DAA0((_QWORD *)a1 + 4, a3, 2u);
      return 1;
    }
    if ( a2 >= -5 )
    {
      if ( a2 != -2 )
        return 1;
    }
    else if ( a2 < -7 )
    {
      return 1;
    }
  }
  if ( !*((_BYTE *)a1 + 96) )
    return 1;
  v7 = &s1;
  if ( !*((_QWORD *)a1 + 10) )
  {
    v8 = &s1;
    if ( !*((_QWORD *)a1 + 6) )
      goto LABEL_11;
    goto LABEL_28;
  }
  v7 = *((const char **)a1 + 9);
  v8 = &s1;
  if ( *((_QWORD *)a1 + 6) )
LABEL_28:
    v8 = *((const char **)a1 + 5);
LABEL_11:
  v9 = strcmp(v8, v7);
  v10 = sub_426230(v8, v7);
  v11 = sub_417080((__int64)v10);
  v12 = (_QWORD *)v11;
  if ( a2 == -2 )
  {
    v21 = *(void (__fastcall ***)(__int64, __int64, unsigned __int16 *))a3;
    v22 = a3;
    v23 = &s1;
    (*v21)(v22, 4, &v70);
    v24 = *(_QWORD *)a1;
    v25 = v70;
    v26 = *(__int64 (__fastcall **)(_QWORD *, __int64, __int64, __int64, __int64))(*v12 + 280LL);
    v27 = (unsigned int)*(_QWORD *)a1;
    if ( *((_QWORD *)a1 + 6) )
      v23 = *((const char **)a1 + 5);
    v28 = sub_419900;
    if ( v26 == sub_419900 )
    {
      v29 = v12[1];
      if ( !v29
        || (v30 = *(__int64 (**)())(*(_QWORD *)v29 + 480LL), v30 != sub_178B60)
        && (v68 = *(_QWORD *)a1,
            v66 = v70,
            v62 = ((__int64 (__fastcall *)(__int64, __int64, __int64 (*)(), __int64))v30)(v29, 4, sub_178B60, v27),
            v25 = v66,
            v24 = v68,
            v62) )
      {
        sub_4168C0(0x34u, (__int64)"Failed to commit worklist", v28, v27, v24, v25);
        return 0;
      }
      v72 = 0;
      v73 = 0;
      v31 = (const char *)(*(unsigned int (__fastcall **)(_QWORD, __int64 *, _BYTE *, const char *, __int64, __int64))(*(_QWORD *)v12[1] + 248LL))(
                            v12[1],
                            &v72,
                            v71,
                            v23,
                            v24,
                            v25);
      (*(void (__fastcall **)(_QWORD *, const char *, __int64 *))(*v12 + 24LL))(v12, v31, &v72);
      v32 = v72;
      if ( v72 )
      {
        v33 = v73;
        if ( (_QWORD)v73 )
        {
          v34 = 0;
          do
          {
            v35 = v32 + 32 * v34;
            v36 = *(_QWORD *)(v35 + 8);
            if ( v36 )
            {
              *(_QWORD *)(v35 + 16) = 0;
              qfree(v36, v31);
              v32 = v72;
            }
            ++v34;
          }
          while ( v33 != v34 );
        }
        *(_QWORD *)&v73 = 0;
        qfree(v32, v31);
      }
    }
    else
    {
      LODWORD(v31) = v26(v12, (__int64)v71, (__int64)v23, v27, v70);
    }
    if ( !(_DWORD)v31 )
      return 1;
    sub_4168C0((unsigned int)v31, (__int64)"Failed to commit worklist");
    return (_DWORD)v31 == 38;
  }
  if ( a2 != -1 )
  {
    if ( a2 == -7 )
    {
      if ( v9 )
        return sub_420C90();
    }
    else if ( v9 )
    {
      v13 = &s1;
      v14 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 272LL);
      if ( *((_QWORD *)a1 + 6) )
        v13 = *((const char **)a1 + 5);
      v15 = *a1;
      if ( v14 != vault_with_events_t__::vfunc_34 )
      {
        v19 = ((__int64 (__fastcall *)(_QWORD *, __int64, const char *))v14)(v12, v15, v13);
LABEL_21:
        if ( !v19 )
        {
          v20 = *((_QWORD *)a1 + 6);
          if ( v20 > 1 )
          {
            v65 = *((const void **)a1 + 5);
            if ( *((_QWORD *)a1 + 11) < v20 )
              *((_QWORD *)a1 + 9) = qvector_reserve(a1 + 18, *((_QWORD *)a1 + 9), *((_QWORD *)a1 + 6), 1);
            *((_QWORD *)a1 + 10) = v20;
            memmove(*((void **)a1 + 9), v65, v20 - 1);
            *(_BYTE *)(*((_QWORD *)a1 + 9) + v20 - 1) = 0;
          }
          else
          {
            *((_QWORD *)a1 + 10) = 0;
          }
          return 1;
        }
        goto LABEL_90;
      }
      v16 = (__int64 *)v12[1];
      if ( v16 )
      {
        v17 = *v16;
        v18 = *(__int64 (**)())(*v16 + 480);
        if ( v18 == sub_178B60 )
        {
LABEL_20:
          v19 = (*(__int64 (__fastcall **)(__int64 *, __int64, const char *))(v17 + 240))(v16, v15, v13);
          goto LABEL_21;
        }
        v69 = v13;
        v64 = v18();
        v15 = (unsigned int)v15;
        v13 = v69;
        if ( !v64 )
        {
          v16 = (__int64 *)v12[1];
          v17 = *v16;
          goto LABEL_20;
        }
      }
      v19 = 52;
LABEL_90:
      sub_4168C0(v19, (__int64)"Failed to change worklist");
      return 0;
    }
    return 1;
  }
  v37 = *(_QWORD *)a1;
  v72 = 0;
  v73 = 0;
  v38 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 296LL);
  if ( v38 == vault_with_events_t__::vfunc_37 )
  {
    v39 = (__int64 *)v12[1];
    if ( v39 )
    {
      v40 = *v39;
      v41 = *(__int64 (**)())(*v39 + 480);
      if ( v41 == sub_178B60 )
      {
LABEL_51:
        v42 = (*(__int64 (__fastcall **)(__int64 *, __int64 *, _QWORD, _QWORD, __int64))(v40 + 264))(
                v39,
                &v72,
                0,
                0,
                v37);
        goto LABEL_52;
      }
      v67 = v37;
      v63 = v41();
      v37 = v67;
      if ( !v63 )
      {
        v39 = (__int64 *)v12[1];
        v40 = *v39;
        goto LABEL_51;
      }
    }
    v42 = 52;
    goto LABEL_84;
  }
  v42 = ((__int64 (__fastcall *)(_QWORD *, __int64 *, _QWORD, _QWORD, __int64))v38)(v12, &v72, 0, 0, v37);
LABEL_52:
  if ( v42 )
  {
LABEL_84:
    v45 = "Failed to retrieve worklist during refresh";
    sub_4168C0(v42, (__int64)"Failed to retrieve worklist during refresh");
LABEL_59:
    v43 = (_QWORD *)v72;
    goto LABEL_60;
  }
  v43 = (_QWORD *)v72;
  v44 = *(_QWORD *)(v72 + 56);
  if ( *((_QWORD *)a1 + 10) )
  {
    v45 = *((const char **)a1 + 9);
    v46 = &s1;
    if ( !v44 )
    {
LABEL_56:
      if ( !strcmp(v46, v45) )
        goto LABEL_60;
      if ( v9 )
      {
        v45 = "AUTOHIDE REGISTRY\n"
              "HIDECANCEL\n"
              "The worklist has been modified on the server.\n"
              "Do you want to load the new description?";
        if ( (unsigned int)sub_1698A0(
                             0,
                             (int)"AUTOHIDE REGISTRY\n"
                                  "HIDECANCEL\n"
                                  "The worklist has been modified on the server.\n"
                                  "Do you want to load the new description?") != 1 )
          goto LABEL_59;
      }
      sub_44DC90((__m128i *)a1, v43);
      (*(void (__fastcall **)(__int64, __int64, unsigned int *))(*(_QWORD *)a3 + 8LL))(a3, 1, a1 + 2);
      (*(void (__fastcall **)(__int64, __int64, unsigned int *))(*(_QWORD *)a3 + 8LL))(a3, 2, a1 + 8);
      v54 = v72;
      if ( v72 )
      {
        v55 = v73;
        v56 = 0;
        v57 = 0;
        if ( (_QWORD)v73 )
        {
          do
          {
            v58 = (__int64 *)(v54 + v56);
            v59 = *(_QWORD *)(v54 + v56 + 48);
            if ( v59 )
            {
              v58[7] = 0;
              qfree(v59, (_BYTE *)&dword_0 + 2);
            }
            v60 = v58[3];
            if ( v60 )
            {
              v58[4] = 0;
              qfree(v60, (_BYTE *)&dword_0 + 2);
            }
            v61 = *v58;
            if ( *v58 )
            {
              v58[1] = 0;
              qfree(v61, (_BYTE *)&dword_0 + 2);
            }
            ++v57;
            v54 = v72;
            v56 += 88;
          }
          while ( v55 != v57 );
        }
        *(_QWORD *)&v73 = 0;
        qfree(v54, (_BYTE *)&dword_0 + 2);
      }
LABEL_25:
      a1[25] = 2;
      return 1;
    }
LABEL_55:
    v46 = *(const char **)(v72 + 48);
    goto LABEL_56;
  }
  v45 = &s1;
  if ( v44 )
    goto LABEL_55;
LABEL_60:
  if ( !v43 )
    return 0;
  v47 = v73;
  if ( (_QWORD)v73 )
  {
    v48 = 0;
    v49 = 0;
    do
    {
      v50 = &v43[v48];
      v51 = v50[6];
      if ( v51 )
      {
        v50[7] = 0;
        qfree(v51, v45);
      }
      v52 = v50[3];
      if ( v52 )
      {
        v50[4] = 0;
        qfree(v52, v45);
      }
      v53 = *v50;
      if ( *v50 )
      {
        v50[1] = 0;
        qfree(v53, v45);
      }
      ++v49;
      v43 = (_QWORD *)v72;
      v48 += 11;
    }
    while ( v47 != v49 );
  }
  *(_QWORD *)&v73 = 0;
  qfree(v43, v45);
  return 0;
}
