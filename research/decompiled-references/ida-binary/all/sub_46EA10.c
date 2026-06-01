__int64 __fastcall sub_46EA10(
        char *a1,
        int a2,
        __int64 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        double a8,
        double a9,
        __m128 a10,
        __m128 a11)
{
  const char *v12; // rsi
  __int64 v13; // rdi
  __int64 v14; // r12
  __int64 v15; // rbp
  _QWORD *v16; // rbx
  __int64 v17; // rdi
  __int64 v18; // rdi
  __int64 v19; // rdi
  __int64 v20; // rbp
  __int64 v21; // rbx
  __int64 *v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rdi
  __int64 v25; // rbp
  __int64 v26; // rbx
  __int64 *v27; // rdx
  __int64 v28; // rax
  const char *v30; // rsi
  __int64 v31; // rdi
  __int64 v32; // r12
  __int64 v33; // rbp
  _QWORD *v34; // rbx
  __int64 v35; // rdi
  __int64 v36; // rdi
  __int64 v37; // rdi
  __int64 v38; // rbp
  __int64 v39; // rbx
  __int64 *v40; // rdx
  __int64 v41; // rax
  __int64 v42; // rdi
  __int64 v43; // rbp
  __int64 v44; // rbx
  __int64 *v45; // rdx
  __int64 v46; // rax
  __int64 v47; // [rsp+0h] [rbp-98h] BYREF
  __int64 v48; // [rsp+8h] [rbp-90h]
  __int64 v49; // [rsp+18h] [rbp-80h]
  __int64 v50; // [rsp+20h] [rbp-78h]
  __int64 v51; // [rsp+30h] [rbp-68h]
  __int64 v52; // [rsp+38h] [rbp-60h]
  __int64 v53; // [rsp+48h] [rbp-50h]
  __int64 v54; // [rsp+50h] [rbp-48h]
  unsigned __int64 v55; // [rsp+78h] [rbp-20h]

  v55 = __readfsqword(0x28u);
  switch ( a2 )
  {
    case 0:
      v12 = a1;
      sub_38EEE0((__int64)&v47, a1);
      if ( *(_QWORD *)a3 )
      {
        v12 = (const char *)&v47;
        sub_46E7F0(*(__int64 **)a3, &v47);
      }
      v13 = v53;
      if ( v53 )
      {
        v14 = v54;
        if ( v54 )
        {
          v15 = 0;
          do
          {
            v16 = (_QWORD *)(v13 + 80 * v15);
            v17 = v16[4];
            if ( v17 )
            {
              v16[5] = 0;
              qfree(v17, v12);
            }
            v18 = v16[1];
            if ( v18 )
            {
              v16[2] = 0;
              qfree(v18, v12);
            }
            ++v15;
            v13 = v53;
          }
          while ( v14 != v15 );
        }
        v54 = 0;
        qfree(v13, v12);
      }
      if ( v51 )
      {
        v52 = 0;
        qfree(v51, v12);
      }
      v19 = v49;
      if ( v49 )
      {
        v20 = v50;
        if ( v50 )
        {
          v21 = 0;
          do
          {
            v22 = (__int64 *)(v19 + 24 * v21);
            v23 = *v22;
            if ( *v22 )
            {
              v22[1] = 0;
              qfree(v23, v12);
              v19 = v49;
            }
            ++v21;
          }
          while ( v20 != v21 );
        }
        v50 = 0;
        qfree(v19, v12);
      }
      v24 = v47;
      if ( v47 )
      {
        v25 = v48;
        if ( v48 )
        {
          v26 = 0;
          do
          {
            v27 = (__int64 *)(v24 + 24 * v26);
            v28 = *v27;
            if ( *v27 )
            {
              v27[1] = 0;
              qfree(v28, v12);
              v24 = v47;
            }
            ++v26;
          }
          while ( v25 != v26 );
        }
        v48 = 0;
        qfree(v24, v12);
      }
      return v55 - __readfsqword(0x28u);
    case 1:
      v30 = a1;
      sub_38EF50((__int64)&v47, a1, *(double *)a4.m128_u64, a5, a6, a7, a8, a9, a10, a11);
      if ( *(_QWORD *)a3 )
      {
        v30 = (const char *)&v47;
        sub_46E7F0(*(__int64 **)a3, &v47);
      }
      v31 = v53;
      if ( v53 )
      {
        v32 = v54;
        if ( v54 )
        {
          v33 = 0;
          do
          {
            v34 = (_QWORD *)(v31 + 80 * v33);
            v35 = v34[4];
            if ( v35 )
            {
              v34[5] = 0;
              *(double *)a4.m128_u64 = qfree(v35, v30);
            }
            v36 = v34[1];
            if ( v36 )
            {
              v34[2] = 0;
              *(double *)a4.m128_u64 = qfree(v36, v30, *(double *)a4.m128_u64);
            }
            ++v33;
            v31 = v53;
          }
          while ( v32 != v33 );
        }
        v54 = 0;
        *(double *)a4.m128_u64 = qfree(v31, v30);
      }
      if ( v51 )
      {
        v52 = 0;
        *(double *)a4.m128_u64 = qfree(v51, v30, *(double *)a4.m128_u64);
      }
      v37 = v49;
      if ( v49 )
      {
        v38 = v50;
        if ( v50 )
        {
          v39 = 0;
          do
          {
            v40 = (__int64 *)(v37 + 24 * v39);
            v41 = *v40;
            if ( *v40 )
            {
              v40[1] = 0;
              *(double *)a4.m128_u64 = qfree(v41, v30, *(double *)a4.m128_u64);
              v37 = v49;
            }
            ++v39;
          }
          while ( v38 != v39 );
        }
        v50 = 0;
        *(double *)a4.m128_u64 = qfree(v37, v30, *(double *)a4.m128_u64);
      }
      v42 = v47;
      if ( v47 )
      {
        v43 = v48;
        if ( v48 )
        {
          v44 = 0;
          do
          {
            v45 = (__int64 *)(v42 + 24 * v44);
            v46 = *v45;
            if ( *v45 )
            {
              v45[1] = 0;
              *(double *)a4.m128_u64 = qfree(v46, v30, *(double *)a4.m128_u64);
              v42 = v47;
            }
            ++v44;
          }
          while ( v43 != v44 );
        }
        v48 = 0;
        qfree(v42, v30, *(double *)a4.m128_u64);
      }
      return v55 - __readfsqword(0x28u);
    case 2:
      return sub_3913B0((__int64)a1, a4, a5, a6, a7, a8, a9, a10, a11);
    case 3:
      return sub_391750(
               (__int64)a1,
               (const char *)**(unsigned int **)(a3 + 8),
               *(double *)a4.m128_u64,
               a5,
               a6,
               a7,
               a8,
               a9,
               a10,
               a11);
    case 4:
      return sub_3915D0((__int64)a1, **(_DWORD **)(a3 + 8), *(double *)a4.m128_u64, a5, a6, a7, a8, a9, a10, a11);
    case 5:
      return sub_391640((__int64)a1, a4, a5, a6, a7, a8, a9, a10, a11);
    case 6:
      return sub_391370((__int64)a1, **(QT::QTreeWidgetItem ***)(a3 + 8), a4, a5, a6, a7, a8, a9, a10, a11);
    case 7:
      return sub_391B10((__int64)a1, **(QT::QTreeWidgetItem ***)(a3 + 8), a4, a5, a6, a7, a8, a9, a10, a11);
    case 8:
      return sub_38E200((QT::QComboBox **)a1);
    case 9:
      return sub_38BEB0(
               (__int64)a1,
               **(const QT::QTableWidgetItem ***)(a3 + 8),
               (__m128i)a4,
               a5,
               a6,
               a7,
               a8,
               a9,
               a10,
               a11);
    case 10:
      return sub_38C8E0((__int64)a1);
    case 11:
      return sub_38B340((__int64)a1, *(_QWORD *)(a3 + 8));
    default:
      return v55 - __readfsqword(0x28u);
  }
}
