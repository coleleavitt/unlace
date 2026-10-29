__int64 __fastcall commits_chooser_t__::vfunc_4(_QWORD *a1, const char *a2)
{
  __int64 v3; // rdi
  __int64 v4; // r14
  __int64 v5; // r12
  __int64 i; // rbp
  _QWORD *v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // rdi
  __int64 v10; // rdi
  _QWORD *v11; // rax
  __int64 v12; // rax
  __int64 v13; // rdi
  _QWORD *v14; // rbx
  unsigned __int8 (*v15)(void); // rax
  __int64 v16; // rax
  const char *v17; // r13
  __int64 (__fastcall *v18)(_QWORD *, __int64, __int64, __int64, __int64); // rax
  __int64 v19; // rdi
  __int64 (*v20)(); // rax
  __int64 v21; // rdi
  const char *v22; // rbp
  const char *v23; // rsi
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rdx
  __int64 v28; // r12
  __int64 v29; // rbx
  __int64 v30; // rax
  __int64 v31; // rdi
  __int64 v32; // rdx
  __int64 v33; // r12
  __int64 v34; // rbx
  __int64 *v35; // rax
  __int64 v36; // rdi
  __int64 v38; // [rsp+0h] [rbp-C8h] BYREF
  __int128 v39; // [rsp+8h] [rbp-C0h]
  __int64 v40; // [rsp+20h] [rbp-A8h] BYREF
  __int128 v41; // [rsp+28h] [rbp-A0h]
  __int64 v42; // [rsp+40h] [rbp-88h] BYREF
  __int128 v43; // [rsp+48h] [rbp-80h]
  __int64 v44; // [rsp+58h] [rbp-70h]
  __int128 v45; // [rsp+60h] [rbp-68h]
  __int64 v46; // [rsp+70h] [rbp-58h]
  __int128 v47; // [rsp+78h] [rbp-50h]
  __int64 v48; // [rsp+88h] [rbp-40h]
  unsigned __int64 v49; // [rsp+98h] [rbp-30h]

  v49 = __readfsqword(0x28u);
  v3 = a1[27];
  if ( v3 )
  {
    v4 = a1[28];
    if ( v4 )
    {
      v5 = 0;
      for ( i = 0; i != v4; ++i )
      {
        v7 = (_QWORD *)(v3 + v5);
        v8 = *(_QWORD *)(v3 + v5 + 64);
        if ( v8 )
        {
          v7[9] = 0;
          qfree(v8, a2);
        }
        v9 = v7[5];
        if ( v9 )
        {
          v7[6] = 0;
          qfree(v9, a2);
        }
        v10 = v7[2];
        if ( v10 )
        {
          v7[3] = 0;
          qfree(v10, a2);
        }
        v3 = a1[27];
        v5 += 88;
      }
    }
    a1[28] = 0;
    qfree(v3, a2);
    a1[27] = 0;
    a1[29] = 0;
  }
  v11 = sub_426230(v3, a2);
  v12 = sub_417080((__int64)v11);
  v13 = *(_QWORD *)(v12 + 8);
  v14 = (_QWORD *)v12;
  if ( !v13 )
    return 1;
  v15 = *(unsigned __int8 (**)(void))(*(_QWORD *)v13 + 480LL);
  if ( (char *)v15 != (char *)sub_178B60 )
  {
    if ( v15() )
      return 1;
  }
  v44 = 0;
  v42 = 0x7FFFFFFF00000000LL;
  v46 = 0;
  v43 = 0;
  v45 = 0;
  v47 = 0;
  v48 = (unsigned int)reg_int_op("NCommits", 0, 0xFFFFFFFFLL, "Config");
  v16 = *v14;
  v38 = 0;
  v17 = (const char *)(a1 + 27);
  v18 = *(__int64 (__fastcall **)(_QWORD *, __int64, __int64, __int64, __int64))(v16 + 216);
  v39 = 0;
  if ( v18 != vault_with_events_t__::vfunc_27 )
  {
    v23 = v17;
    LODWORD(v22) = v18(v14, (__int64)v17, (__int64)&v38, (__int64)&v42, 0xFFFFFFFFLL);
LABEL_25:
    v32 = v38;
    if ( v38 )
    {
      v33 = v39;
      if ( (_QWORD)v39 )
      {
        v34 = 0;
        do
        {
          v35 = (__int64 *)(v32 + 24 * v34);
          v36 = *v35;
          if ( *v35 )
          {
            v35[1] = 0;
            qfree(v36, v23);
            v32 = v38;
          }
          ++v34;
        }
        while ( v33 != v34 );
      }
      qfree(v32, v23, v32, v24, v25, v26, v38, 0, *((_QWORD *)&v39 + 1));
    }
    if ( (_DWORD)v22 )
      goto LABEL_42;
    if ( v46 )
    {
      *(_QWORD *)&v47 = 0;
      qfree(v46, v23);
    }
    if ( v44 )
    {
      *(_QWORD *)&v45 = 0;
      qfree(v44, v23);
    }
    return 1;
  }
  v19 = v14[1];
  if ( v19 )
  {
    v20 = *(__int64 (**)())(*(_QWORD *)v19 + 480LL);
    if ( v20 == sub_178B60 || !(unsigned __int8)v20() )
    {
      v41 = 0;
      v21 = v14[1];
      v40 = 0;
      v22 = (const char *)(*(unsigned int (__fastcall **)(__int64, __int64 *, const char *, __int64 *, __int64 *, __int64))(*(_QWORD *)v21 + 184LL))(
                            v21,
                            &v40,
                            v17,
                            &v38,
                            &v42,
                            0xFFFFFFFFLL);
      v23 = v22;
      (*(void (__fastcall **)(_QWORD *, const char *, __int64 *))(*v14 + 24LL))(v14, v22, &v40);
      v27 = v40;
      if ( v40 )
      {
        v28 = v41;
        if ( (_QWORD)v41 )
        {
          v29 = 0;
          do
          {
            v30 = v27 + 32 * v29;
            v31 = *(_QWORD *)(v30 + 8);
            if ( v31 )
            {
              *(_QWORD *)(v30 + 16) = 0;
              qfree(v31, v22);
              v27 = v40;
            }
            ++v29;
          }
          while ( v28 != v29 );
        }
        *(_QWORD *)&v41 = 0;
        qfree(v27, v22);
      }
      goto LABEL_25;
    }
  }
  LODWORD(v22) = 52;
LABEL_42:
  sub_416980((unsigned int)v22, (__int64)"Failed to retrieve commits");
  if ( v46 )
  {
    *(_QWORD *)&v47 = 0;
    qfree(v46, "Failed to retrieve commits");
  }
  if ( v44 )
  {
    *(_QWORD *)&v45 = 0;
    qfree(v44, "Failed to retrieve commits");
  }
  return 0;
}
