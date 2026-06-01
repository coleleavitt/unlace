__int64 __fastcall sub_377080(
        __int64 a1,
        double a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  char *v10; // rsi
  __int64 v11; // r12
  __int64 v12; // rdx
  double v13; // xmm4_8
  double v14; // xmm5_8
  double v15; // xmm0_8
  __int64 v16; // rcx
  __int64 v17; // rdi
  __int64 v18; // rbx
  unsigned __int64 v19; // rax
  __int64 v20; // r13
  char *v21; // rax
  __int64 *v22; // rbx
  __int64 *v23; // r13
  char **v24; // r12
  __int64 v25; // rdx
  __int64 v26; // rcx
  double v27; // xmm4_8
  double v28; // xmm5_8
  __int64 v30; // rax
  char v31; // [rsp+Fh] [rbp-49h] BYREF
  char *v32; // [rsp+10h] [rbp-48h] BYREF
  __int128 v33; // [rsp+18h] [rbp-40h]
  unsigned __int64 v34; // [rsp+28h] [rbp-30h]

  v34 = __readfsqword(0x28u);
  v10 = "Deleting nodes from the graph...";
  v11 = sub_2B70C0(a1);
  sub_376610((__int64)&v31, (int)"Deleting nodes from the graph...");
  v15 = 0.0;
  v32 = nullptr;
  v33 = 0;
  v16 = *(_QWORD *)(a1 + 200);
  v17 = *(_QWORD *)(a1 + 192);
  if ( 20 * v16 )
  {
    v18 = *(_QWORD *)(a1 + 192);
    do
    {
      if ( *(_BYTE *)v18 )
      {
        v19 = *(int *)(v18 + 4);
        if ( v19 < *(_QWORD *)(v11 + 280) )
        {
          if ( (v19 & 0x80000000) != 0LL )
          {
            if ( !under_debugger )
              interr(40328, v10, v12, v16, 0.0);
            BUG();
          }
          v12 = v33;
          v20 = *(_QWORD *)(*(_QWORD *)(v11 + 272) + 40 * v19);
          v10 = &v32[8 * v33];
          if ( v32 == v10 )
            goto LABEL_12;
          v21 = v32;
          while ( v20 != *(_QWORD *)v21 )
          {
            v21 += 8;
            if ( v10 == v21 )
              goto LABEL_12;
          }
          if ( v10 == v21 )
          {
LABEL_12:
            v12 = v33 + 1;
            if ( *((_QWORD *)&v33 + 1) < (unsigned __int64)(v33 + 1) )
            {
              v30 = qvector_reserve(&v32, v32, v12, 8);
              v12 = v33;
              v32 = (char *)v30;
              v10 = (char *)(v30 + 8 * v33);
            }
            *(_QWORD *)v10 = v20;
            v17 = *(_QWORD *)(a1 + 192);
            *(_QWORD *)&v33 = v33 + 1;
            v16 = *(_QWORD *)(a1 + 200);
          }
        }
      }
      v18 += 20;
    }
    while ( v18 != v17 + 20 * v16 );
    v22 = (__int64 *)v32;
    if ( (_QWORD)v33 )
    {
      v23 = (__int64 *)&v32[8 * v33];
      v24 = (char **)(v11 + 272);
      if ( v32 != (char *)v23 )
      {
        do
        {
          v10 = (char *)*v22;
          sub_371DF0((__int64)v24, *v22++, 0.0, a3, a4, a5, v13, v14, a8, a9, v12, v16);
        }
        while ( v23 != v22 );
      }
      sub_370D50(v24, v10);
      sub_3723D0((__int64)v24);
      v22 = (__int64 *)v32;
    }
    if ( v22 )
    {
      *(_QWORD *)&v33 = 0;
      v15 = qfree(v22, v10);
    }
  }
  sub_541CC0(QT::QCoreApplication::self + 2);
  if ( *(_QWORD *)(sub_2B70C0(a1) + 280) )
    sub_3766E0(a1, 0, v25, v26, v15, a3, a4, a5, v27, v28, a8, a9);
  return 1;
}
