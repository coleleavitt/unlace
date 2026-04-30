__int64 __fastcall sub_23EA50(
        _QWORD *a1,
        _QWORD *a2,
        __int64 a3,
        char *a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        double a9,
        double a10,
        __m128 a11,
        __m128 a12,
        __int64 a13,
        __int64 a14,
        int a15)
{
  unsigned int v15; // ebp
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 result; // rax
  double v29; // xmm4_8
  double v30; // xmm5_8
  void *v31; // rbx
  int v32; // edx
  int v33; // ecx
  int v34; // r8d
  int v35; // r9d
  unsigned int v36; // [rsp+Ch] [rbp-1Ch]

  if ( qword_8CC600 )
  {
    if ( under_debugger )
      goto LABEL_23;
    interr(40185, a2, a3, a4, *(double *)a5.m128_u64);
    goto LABEL_15;
  }
  qword_8CC600 = a1;
  v15 = (unsigned int)a2;
  if ( (*(_BYTE *)(dbg + 34) & 8) != 0 )
  {
    a2 = nullptr;
    v16 = qsem_create(0, 0);
    a1[9] = v16;
    if ( !v16 )
    {
LABEL_17:
      if ( under_debugger )
        goto LABEL_23;
      interr(40186, a2, v17, v18, *(double *)a5.m128_u64);
      goto LABEL_19;
    }
    a2 = nullptr;
    v19 = qsem_create(0, 0);
    a1[10] = v19;
    if ( v19 )
    {
      v22 = qmutex_create();
      a1[33] = v22;
      if ( !v22 )
        goto LABEL_21;
      a2 = a1;
      v25 = qthread_create(sub_23D2C0, a1);
      if ( v25 )
      {
        a1[8] = v25;
        inform_idc_about_debthread(v25);
        goto LABEL_8;
      }
LABEL_19:
      if ( under_debugger )
        goto LABEL_23;
      interr(40188, a2, v26, v27, *(double *)a5.m128_u64);
LABEL_21:
      if ( !under_debugger )
      {
        interr(40196, a2, v23, v24, *(double *)a5.m128_u64);
        return sub_23EBD0(40196, (_DWORD)a2, v32, v33, v34, v35, a15);
      }
LABEL_23:
      BUG();
    }
LABEL_15:
    if ( under_debugger )
      goto LABEL_23;
    interr(40187, a2, v20, v21, *(double *)a5.m128_u64);
    goto LABEL_17;
  }
LABEL_8:
  result = sub_23D480((__int64)a1, v15, a3, a4, *(double *)a5.m128_u64);
  if ( (int)result <= 0 )
  {
    v31 = qword_8CC600;
    if ( qword_8CC600 )
    {
      if ( !byte_8CC5F7 )
      {
        v36 = result;
        byte_8CC5F7 = 1;
        sub_233310((__int64)qword_8CC600, (const char *)v15, a5, a6, a7, a8, v29, v30, a11, a12);
        operator delete(v31, 0x118u);
        byte_8CC5F7 = 0;
        qword_8CC600 = nullptr;
        return v36;
      }
    }
  }
  return result;
}
