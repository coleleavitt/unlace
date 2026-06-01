__int64 __fastcall sub_2588A0(
        __int64 a1,
        __m128 a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9,
        __int64 a10,
        __int64 a11,
        char *a12)
{
  __int64 v12; // rbx
  __int64 v13; // rbp
  __int64 v14; // r12
  __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __m128 v20; // xmm4
  __m128 v21; // xmm5
  char *v22; // rdx
  double v23; // xmm4_8
  double v24; // xmm5_8
  const char *v25; // rsi
  __int64 v26; // rdi
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  double v30; // xmm4_8
  double v31; // xmm5_8
  _QWORD *v32; // rbx
  void *v33; // rbp
  __int64 v34; // rdx
  __m128 v35; // xmm0
  __int64 v36; // r12
  __int64 v37; // rbp
  __int64 v38; // rbx
  __int64 v39; // rdi
  __int64 v41; // rdx
  char *v42; // rcx
  double v43; // xmm4_8
  double v44; // xmm5_8
  __int64 v45; // [rsp-18h] [rbp-18h]
  __int64 v46; // [rsp-10h] [rbp-10h]
  __int64 v47; // [rsp-8h] [rbp-8h]

  if ( byte_8CC0E9 || !dbg )
    return 1;
  v15 = (unsigned int)dword_8CC5F0;
  v47 = v14;
  v46 = v13;
  v45 = v12;
  byte_8CC0E9 = 1;
  if ( !dword_8CC5F0 )
    goto LABEL_12;
  if ( byte_8CC559 )
  {
    if ( !(unsigned __int8)sub_23DE70(*(double *)a2.m128_u64, a1, (unsigned int)dword_8CC5F0) )
      goto LABEL_6;
LABEL_27:
    sub_2424A0(40, v15, a2, a3, a4, a5, v20, v21, a8, a9, v16, v17, v18, v19);
    v15 = 2;
    sub_252A30(4, 2, v41, v42, a2, a3, a4, a5, v43, v44, a8, a9);
    goto LABEL_6;
  }
  if ( sub_23DCD0(*(double *)a2.m128_u64, a1, (unsigned int)dword_8CC5F0, a11, a12) )
    goto LABEL_27;
LABEL_6:
  if ( dword_8CC5F0 )
  {
    if ( (_BYTE)a1 )
      goto LABEL_28;
    v22 = "stop";
    if ( byte_8CC559 )
      v22 = "detach from";
    v15 = (__int64)"HIDECANCEL\n"
                   "IDA failed to %s the debugged program.\n"
                   "Do you want to go ahead and close the database anyway?";
    if ( (int)sub_1698A0(
                1,
                (int)"HIDECANCEL\n"
                     "IDA failed to %s the debugged program.\n"
                     "Do you want to go ahead and close the database anyway?",
                v22,
                (unsigned int)dword_8CC5F0,
                v18,
                v19,
                v12,
                v13,
                v14) <= 0 )
    {
      byte_8CC0E9 = 0;
      return 0;
    }
    if ( dword_8CC5F0 )
LABEL_28:
      sub_24FC00(a2, a3, a4, a5, *(double *)v20.m128_u64, *(double *)v21.m128_u64, a8, a9);
  }
LABEL_12:
  sub_258840();
  sub_23C5D0(0, v15, a2, a3, a4, a5, v23, v24, a8, a9);
  v25 = (const char *)&off_8BA5C0;
  v26 = 4;
  unhook_event_listener(4, &off_8BA5C0);
  if ( (_DWORD)qword_8CC2B0 )
    qword_8CC2B0 = 0;
  v32 = xmmword_8CC2B8;
  if ( xmmword_8CC2B8 )
  {
    do
    {
      v33 = v32;
      v32 = (_QWORD *)*v32;
      sub_238680((__int64)v33, v25);
      v25 = (const char *)&word_38;
      v26 = (__int64)v33;
      operator delete(v33, 0x38u);
    }
    while ( v32 );
  }
  v34 = qword_8CC390;
  v35 = 0;
  *(_OWORD *)&xmmword_8CC2B8 = 0;
  if ( qword_8CC390 )
  {
    v36 = xmmword_8CC398;
    if ( (_QWORD)xmmword_8CC398 )
    {
      v37 = 0;
      v38 = 0;
      do
      {
        v39 = *(_QWORD *)(v34 + v37);
        if ( v39 )
        {
          *(_QWORD *)(v34 + v37 + 8) = 0;
          qfree(v39, v25);
          v34 = qword_8CC390;
        }
        ++v38;
        v37 += 56;
      }
      while ( v36 != v38 );
    }
    *(_QWORD *)&xmmword_8CC398 = 0;
    v26 = v34;
    *(double *)v35.m128_u64 = qfree(v34, v25, v34, v27, v28, v29, v45, v46, v47);
    qword_8CC390 = 0;
    *((_QWORD *)&xmmword_8CC398 + 1) = 0;
  }
  if ( byte_8CC5F6 )
    sub_233440(v35, a3, a4, a5, v30, v31, a8, a9, v26, v25);
  sub_24BA10(nullptr, 1, 0, *(double *)v35.m128_u64, v27, v28, v29);
  del_idc_func("DbgRexec");
  set_dbg_pointer(0);
  sub_3D80A0((char *)qword_8CD748 + 288, 1);
  byte_8CC0E9 = 0;
  return 1;
}
