__int64 __fastcall sub_4281B0(
        char a1,
        double a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __m128 v12; // xmm4
  __m128 v13; // xmm5
  const char *v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __m128 v19; // xmm4
  __m128 v20; // xmm5
  unsigned int v21; // ebp
  __int64 v22; // rdx
  __int64 v23; // r12
  __int64 v24; // rbx
  __int64 *v25; // rax
  __int64 v26; // rdi
  __int64 v28; // rdx
  const char *v29; // rsi
  char *v30; // rax
  __int64 v31; // rdi
  _QWORD *v32; // r12
  unsigned int v33; // r15d
  _QWORD *v34; // r10
  __int64 (__fastcall *v35)(_QWORD *, __int64, __int64, __int64, __int64); // rax
  __int64 v36; // rdi
  __int64 (*v37)(); // rax
  const char *v38; // r15
  __int64 v39; // rdx
  __int64 v40; // r14
  __int64 v41; // rbp
  __int64 v42; // rax
  __int64 v43; // rdi
  const char *v44; // rdx
  __int64 v45; // r12
  __int64 v46; // rbx
  const char *v47; // rax
  __int64 v48; // rdi
  char v49; // al
  char v50; // [rsp+0h] [rbp-A8h]
  __int64 v51; // [rsp+0h] [rbp-A8h]
  _QWORD *v52; // [rsp+8h] [rbp-A0h]
  _QWORD *v53; // [rsp+8h] [rbp-A0h]
  __int64 v54; // [rsp+10h] [rbp-98h] BYREF
  __int128 v55; // [rsp+18h] [rbp-90h]
  const char *v56; // [rsp+30h] [rbp-78h] BYREF
  __int128 v57; // [rsp+38h] [rbp-70h]
  __int64 v58; // [rsp+50h] [rbp-58h] BYREF
  __int128 v59; // [rsp+58h] [rbp-50h]
  unsigned __int64 v60; // [rsp+68h] [rbp-40h]

  v50 = a1;
  v60 = __readfsqword(0x28u);
  sub_429E70();
  v54 = 0;
  v55 = 0;
  while ( 1 )
  {
    v14 = nullptr;
    v59 = 0;
    v58 = 0;
    if ( !(unsigned __int8)sub_196F50(
                             (int)&v58,
                             0,
                             (int)"Substring of a path to search for in vault",
                             v9,
                             v10,
                             v11,
                             (__m128)0LL,
                             a3,
                             a4,
                             a5,
                             v12,
                             v13,
                             a8,
                             a9,
                             v50) )
      break;
    if ( (unsigned __int64)v59 > 1 )
    {
      v28 = v55;
      v29 = (const char *)v54;
      if ( *((_QWORD *)&v55 + 1) < (unsigned __int64)(v55 + 1) )
      {
        v54 = qvector_reserve(&v54, v54, v55 + 1, 24);
        v28 = v55;
        v29 = (const char *)v54;
      }
      v30 = (char *)&v29[24 * v28];
      *(_QWORD *)v30 = 0;
      *(_OWORD *)(v30 + 8) = 0;
      *(_QWORD *)&v55 = v55 + 1;
      v31 = *(_QWORD *)v30;
      *(_QWORD *)v30 = v58;
      *(_OWORD *)(v30 + 8) = v59;
      v58 = v31;
      *((_QWORD *)&v59 + 1) = 0;
      if ( v31 )
      {
        *(_QWORD *)&v59 = 0;
        qfree(v31, v29);
      }
      v32 = sub_426230(v31, v29);
      v56 = nullptr;
      v57 = 0;
      v33 = (unsigned __int8)sub_418320((__int64)v32) + 10;
      v34 = (_QWORD *)sub_417080((__int64)v32);
      v35 = *(__int64 (__fastcall **)(_QWORD *, __int64, __int64, __int64, __int64))(*v34 + 240LL);
      if ( v35 == vault_with_events_t__::vfunc_30 )
      {
        v36 = v34[1];
        if ( !v36
          || (v37 = *(__int64 (**)())(*(_QWORD *)v36 + 480LL), v37 != sub_178B60)
          && (v53 = v34, v49 = v37(), v34 = v53, v49) )
        {
          LODWORD(v38) = 52;
LABEL_42:
          sub_417280((__int64)v32, (__int64)&v56);
          v14 = "Failed to search in vault";
          sub_4168C0((unsigned int)v38, (__int64)"Failed to search in vault");
          v21 = 0;
          goto LABEL_33;
        }
        v59 = 0;
        v58 = 0;
        v52 = v34;
        v38 = (const char *)(*(unsigned int (__fastcall **)(_QWORD, __int64 *, const char **, __int64 *, __int64, _QWORD))(*(_QWORD *)v34[1] + 208LL))(
                              v34[1],
                              &v58,
                              &v56,
                              &v54,
                              4294967293LL,
                              v33);
        (*(void (__fastcall **)(_QWORD *, const char *, __int64 *))(*v52 + 24LL))(v52, v38, &v58);
        v39 = v58;
        if ( v58 )
        {
          v40 = v59;
          if ( (_QWORD)v59 )
          {
            v41 = 0;
            do
            {
              v42 = v39 + 32 * v41;
              v43 = *(_QWORD *)(v42 + 8);
              if ( v43 )
              {
                *(_QWORD *)(v42 + 16) = 0;
                qfree(v43, v38);
                v39 = v58;
              }
              ++v41;
            }
            while ( v40 != v41 );
          }
          *(_QWORD *)&v59 = 0;
          qfree(v39, v38);
        }
      }
      else
      {
        LODWORD(v38) = v35(v34, (__int64)&v56, (__int64)&v54, 4294967293LL, v33);
      }
      if ( (_DWORD)v38 )
        goto LABEL_42;
      sub_426370(v51, &v56, 1);
      v14 = (const char *)&v56;
      sub_417280((__int64)v32, (__int64)&v56);
      v21 = 1;
LABEL_33:
      v44 = v56;
      if ( v56 )
      {
        v45 = v57;
        if ( (_QWORD)v57 )
        {
          v46 = 0;
          do
          {
            v47 = &v44[80 * v46];
            v48 = *(_QWORD *)v47;
            if ( *(_QWORD *)v47 )
            {
              *((_QWORD *)v47 + 1) = 0;
              qfree(v48, v14);
              v44 = v56;
            }
            ++v46;
          }
          while ( v45 != v46 );
        }
        *(_QWORD *)&v57 = 0;
        qfree(v44, v14);
      }
      goto LABEL_9;
    }
    sub_169630(
      (int)"Please specify a search string",
      0,
      v15,
      v16,
      v17,
      v18,
      (__m128)0LL,
      a3,
      a4,
      a5,
      v19,
      v20,
      a8,
      a9,
      v51);
    if ( v58 )
    {
      *(_QWORD *)&v59 = 0;
      qfree(v58, nullptr);
    }
  }
  if ( v58 )
  {
    *(_QWORD *)&v59 = 0;
    qfree(v58, nullptr);
  }
  v21 = 0;
LABEL_9:
  v22 = v54;
  if ( v54 )
  {
    v23 = v55;
    if ( (_QWORD)v55 )
    {
      v24 = 0;
      do
      {
        v25 = (__int64 *)(v22 + 24 * v24);
        v26 = *v25;
        if ( *v25 )
        {
          v25[1] = 0;
          qfree(v26, v14);
          v22 = v54;
        }
        ++v24;
      }
      while ( v23 != v24 );
    }
    *(_QWORD *)&v55 = 0;
    qfree(v22, v14);
  }
  return v21;
}
