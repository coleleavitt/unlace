__int64 __fastcall sub_3772D0(
        __int64 a1,
        char a2,
        double a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  __int64 v11; // rax
  char *v12; // rdi
  const char *v13; // rsi
  __int64 v14; // rbp
  bool (__fastcall *v15)(__int16); // r12
  unsigned __int64 v16; // rdx
  __int64 v17; // rax
  double v18; // xmm0_8
  __int64 v19; // r15
  __int64 v20; // rcx
  double v21; // xmm4_8
  double v22; // xmm5_8
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rcx
  __int64 *v25; // r13
  __int64 *v26; // r14
  __int64 v27; // r8
  char *v28; // rcx
  char *v29; // rax
  __int64 *v30; // r14
  __int64 *v31; // r13
  __int64 v32; // r8
  char *v33; // rcx
  char *v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 *v37; // rbp
  __int64 *v38; // r13
  __int64 v39; // rdx
  __int64 v40; // rcx
  double v41; // xmm4_8
  double v42; // xmm5_8
  __int64 v44; // [rsp+8h] [rbp-C0h]
  __int64 v45; // [rsp+8h] [rbp-C0h]
  char v47; // [rsp+2Fh] [rbp-99h] BYREF
  char *v48; // [rsp+30h] [rbp-98h] BYREF
  __int128 v49; // [rsp+38h] [rbp-90h]
  __int64 *v50; // [rsp+50h] [rbp-78h] BYREF
  __int128 v51; // [rsp+58h] [rbp-70h]
  __int64 *v52; // [rsp+70h] [rbp-58h] BYREF
  __int128 v53; // [rsp+78h] [rbp-50h]
  unsigned __int64 v54; // [rsp+88h] [rbp-40h]

  v54 = __readfsqword(0x28u);
  v11 = sub_2B70C0(a1);
  v12 = &v47;
  v13 = "Deleting nodes from the graph...";
  v14 = v11;
  v15 = (bool (__fastcall *)(__int16))(v11 + 272);
  sub_376610((__int64)&v47, (int)"Deleting nodes from the graph...");
  v17 = *(_QWORD *)(a1 + 200);
  v18 = 0.0;
  v48 = nullptr;
  v19 = *(_QWORD *)(a1 + 192);
  v49 = 0;
  if ( 20 * v17 )
  {
    do
    {
      if ( *(_BYTE *)v19 )
      {
        v23 = *(_QWORD *)(v14 + 280);
        v16 = *(int *)(v19 + 4);
        if ( v16 < v23 )
        {
          v50 = nullptr;
          v18 = 0.0;
          v52 = nullptr;
          v51 = 0;
          v53 = 0;
          v24 = *(int *)(v19 + 4);
          if ( (v24 & 0x80000000) != 0LL || v24 >= v23 )
          {
            if ( !under_debugger )
              interr(40328, v13, v16, v24, 0.0);
            BUG();
          }
          v13 = (const char *)v15;
          sub_372130((__int64 *)(*(_QWORD *)(v14 + 272) + 40 * v24), v15, a2, (__int64 *)&v50, (__int64 *)&v52);
          v25 = v50;
          v26 = &v50[v51];
          if ( v50 != v26 )
          {
            do
            {
              v13 = v48;
              v16 = v49;
              v27 = *v25;
              v28 = &v48[8 * v49];
              if ( v48 == v28 )
                goto LABEL_31;
              v29 = v48;
              while ( v27 != *(_QWORD *)v29 )
              {
                v29 += 8;
                if ( v28 == v29 )
                  goto LABEL_31;
              }
              if ( v29 == v28 )
              {
LABEL_31:
                v16 = v49 + 1;
                if ( *((_QWORD *)&v49 + 1) < (unsigned __int64)(v49 + 1) )
                {
                  v45 = *v25;
                  v36 = qvector_reserve(&v48, v48, v16, 8);
                  v16 = v49;
                  v27 = v45;
                  v48 = (char *)v36;
                  v28 = (char *)(v36 + 8 * v49);
                }
                *(_QWORD *)v28 = v27;
                *(_QWORD *)&v49 = v49 + 1;
              }
              ++v25;
            }
            while ( v26 != v25 );
          }
          v30 = v52;
          v31 = &v52[v53];
          if ( v31 != v52 )
          {
            do
            {
              v13 = v48;
              v16 = v49;
              v32 = *v30;
              v33 = &v48[8 * v49];
              if ( v48 == v33 )
                goto LABEL_28;
              v34 = v48;
              while ( v32 != *(_QWORD *)v34 )
              {
                v34 += 8;
                if ( v33 == v34 )
                  goto LABEL_28;
              }
              if ( v34 == v33 )
              {
LABEL_28:
                v16 = v49 + 1;
                if ( *((_QWORD *)&v49 + 1) < (unsigned __int64)(v49 + 1) )
                {
                  v44 = *v30;
                  v35 = qvector_reserve(&v48, v48, v16, 8);
                  v16 = v49;
                  v32 = v44;
                  v48 = (char *)v35;
                  v33 = (char *)(v35 + 8 * v49);
                }
                *(_QWORD *)v33 = v32;
                *(_QWORD *)&v49 = v49 + 1;
              }
              ++v30;
            }
            while ( v30 != v31 );
            v30 = v52;
          }
          if ( v30 )
          {
            *(_QWORD *)&v53 = 0;
            v18 = qfree(v30, v13);
          }
          v12 = (char *)v50;
          if ( v50 )
          {
            *(_QWORD *)&v51 = 0;
            v18 = qfree(v50, v13);
          }
        }
      }
      if ( (unsigned __int8)sub_541EF0(v12, v13, v16) )
        break;
      v19 += 20;
      v16 = 5LL * *(_QWORD *)(a1 + 200);
    }
    while ( v19 != *(_QWORD *)(a1 + 192) + 20LL * *(_QWORD *)(a1 + 200) );
    v37 = (__int64 *)v48;
    if ( (_QWORD)v49 )
    {
      v38 = (__int64 *)&v48[8 * v49];
      if ( v48 != (char *)v38 )
      {
        do
        {
          v13 = (const char *)*v37;
          sub_371DF0((__int64)v15, *v37++, v18, a4, a5, a6, v21, v22, a9, a10, v16, v20);
        }
        while ( v38 != v37 );
      }
      sub_370D50((char **)v15, v13);
      sub_3723D0((__int64)v15);
      v37 = (__int64 *)v48;
    }
    if ( v37 )
    {
      *(_QWORD *)&v49 = 0;
      v18 = qfree(v37, v13);
    }
  }
  sub_541CC0(QT::QCoreApplication::self + 2);
  if ( *(_QWORD *)(sub_2B70C0(a1) + 280) )
    sub_3766E0(a1, 0, v39, v40, v18, a4, a5, a6, v41, v42, a9, a10);
  return 1;
}
