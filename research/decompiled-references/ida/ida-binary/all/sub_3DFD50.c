_DWORD *__fastcall sub_3DFD50(
        _DWORD *a1,
        __int64 *a2,
        double a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  int v10; // eax
  __int64 v12; // rbx
  int tinfo_size; // eax
  double v14; // xmm4_8
  double v15; // xmm5_8
  __int64 v16; // rax
  unsigned int v17; // r12d
  double v18; // xmm0_8
  int v19; // eax
  double v20; // xmm4_8
  double v21; // xmm5_8
  __int64 v22; // rbx
  __int64 v23; // [rsp+0h] [rbp-58h] BYREF
  __int64 v24; // [rsp+8h] [rbp-50h]
  int v25; // [rsp+10h] [rbp-48h] BYREF
  __int64 v26; // [rsp+18h] [rbp-40h]
  __int128 v27; // [rsp+20h] [rbp-38h]
  unsigned __int64 v28; // [rsp+38h] [rbp-20h]

  v10 = *((_DWORD *)a2 + 26);
  v28 = __readfsqword(0x28u);
  if ( v10 == 3 )
  {
    v16 = *a2;
    v17 = *((unsigned __int16 *)a2 + 56);
    v25 = -2;
    v26 = -1;
    v27 = 0;
    v18 = (*(double (__fastcall **)(__int64 *))(v16 + 32))(a2);
    if ( !(unsigned __int8)sub_3DFA40((unsigned int *)&v25, nullptr, v17, v19, v18, a4, a5, a6, v20, v21, a9, a10) )
    {
      if ( v25 >= -1 && v26 )
      {
        *(_QWORD *)&v27 = 0;
        qfree(v26, nullptr);
        v23 = 0;
        v24 = 0;
      }
      else
      {
        v23 = 0;
        v24 = 0;
      }
      goto LABEL_11;
    }
    v22 = v26;
    if ( v25 >= -1 && v26 )
    {
      *(_QWORD *)&v27 = 0;
      qfree(v26, nullptr);
    }
    goto LABEL_16;
  }
  if ( v10 == 5 )
  {
    v23 = 0;
    if ( !(unsigned __int8)get_stock_tinfo(&v23, 7) )
      goto LABEL_10;
    v25 = -2;
    v12 = a2[14];
    v26 = -1;
    v27 = 0;
    tinfo_size = get_tinfo_size(0, v23, 0);
    if ( !(unsigned __int8)sub_3DFA40(
                             (unsigned int *)&v25,
                             nullptr,
                             *(_DWORD *)(v12 + 8),
                             tinfo_size,
                             0.0,
                             a4,
                             a5,
                             a6,
                             v14,
                             v15,
                             a9,
                             a10) )
    {
      if ( v25 >= -1 && v26 )
      {
        *(_QWORD *)&v27 = 0;
        qfree(v26, nullptr);
        clear_tinfo_t(&v23);
        v23 = 0;
        v24 = 0;
LABEL_11:
        *a1 = 0;
        copy_argloc(a1, &v23);
        cleanup_argloc(&v23);
        return a1;
      }
LABEL_10:
      clear_tinfo_t(&v23);
      v23 = 0;
      v24 = 0;
      goto LABEL_11;
    }
    v22 = v26 + *(_QWORD *)v12;
    if ( v25 >= -1 && v26 )
    {
      *(_QWORD *)&v27 = 0;
      qfree(v26, nullptr);
    }
    clear_tinfo_t(&v23);
LABEL_16:
    v23 = 0;
    v24 = 0;
    if ( v22 != -1 )
    {
      LODWORD(v23) = 6;
      v24 = v22;
    }
    goto LABEL_11;
  }
  *a1 = 0;
  copy_argloc(a1, a2 + 13);
  return a1;
}
