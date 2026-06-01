const __m128i *__fastcall sub_258CA0(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        char *a4,
        int a5,
        int a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        __m128 a10,
        double a11,
        double a12,
        __m128 a13,
        __m128 a14)
{
  __int64 v14; // r12
  const __m128i *result; // rax
  __int64 v16; // rdx
  char *v17; // rcx
  double v18; // xmm4_8
  double v19; // xmm5_8
  __int64 (__fastcall ***v20)(); // rsi
  double v21; // xmm4_8
  double v22; // xmm5_8
  __int64 v23; // rcx
  int v24; // r8d
  int v25; // r9d
  double v26; // xmm4_8
  double v27; // xmm5_8

  if ( !a1 )
  {
    if ( (a2 & 1) != 0 )
    {
      sub_2588A0(1, a7, a8, a9, a10, a11, a12, a13, a14, a2, a3, a4);
      a2 = (unsigned int)a2;
      if ( dbg )
        goto LABEL_21;
    }
    else if ( dbg )
    {
      goto LABEL_21;
    }
    sub_24BA10((QT::QVariant *)((a2 & 2) == 0), 1, 0, *(double *)a7.m128_u64, (__int64)a4, a5, a6);
    return (const __m128i *)sub_258520(nullptr, "Name", 0);
  }
  v14 = a1[1];
  result = (const __m128i *)dbg;
  if ( v14 == dbg )
    return result;
  a2 &= 1u;
  if ( (_DWORD)a2 )
  {
    sub_2588A0(1, a7, a8, a9, a10, a11, a12, a13, a14, a2, a3, a4);
    if ( !dbg )
    {
      v14 = a1[1];
      goto LABEL_5;
    }
  }
  else if ( !dbg )
  {
LABEL_5:
    if ( *(_BYTE *)(v14 + 36) >> 7 != (*(_BYTE *)(v14 + 82) != 0) )
      sub_16B930((__int64)"Wrong DBG_RESMOD_STEP_... bits");
    sub_258520(*(const char **)(*a1 + 16LL), "Name", 0);
    add_idc_func(&off_860220);
    set_dbg_pointer(v14);
    dword_8CC5F0 = 0;
    sub_3D80A0((char *)qword_8CD748 + 288, 1);
    if ( !byte_8CC0E8 )
    {
      byte_8CC0E8 = 1;
      qatexit(sub_258B00);
    }
    if ( !(unsigned __int8)is_miniidb() || !(unsigned int)get_segm_qty() )
    {
      sub_230030(dbg);
      sub_2569B0();
      sub_2120F0();
    }
    sub_24F380(0, 0, *(double *)a7.m128_u64, a8, a9, a10, v18, v19, a13, a14, v16, v17);
    dword_8CC560 = sub_233C20(dword_8BA594);
    sub_245790(0);
    v20 = &off_8BA5C0;
    hook_event_listener(4, &off_8BA5C0, 0, 1);
    sub_22FC60(0);
    if ( (*(_BYTE *)(dbg + 32) & 1) != 0 )
    {
      sub_24E850(0, *(double *)a7.m128_u64, *(double *)a8.m128_u64, a9, a10, v21, v22, a13, a14);
      sub_24DA10(a7);
      v20 = nullptr;
      sub_24BA10((QT::QVariant *)((char *)&dword_0 + 1), 0, 0, *(double *)a7.m128_u64, v23, v24, v25);
    }
    else
    {
      sub_257390(0, a7, a8, a9, a10, v21, v22, a13, a14);
    }
    return sub_23C5D0(*(_BYTE *)(dbg + 33) >> 7, (__int64)v20, a7, a8, a9, a10, v26, v27, a13, a14);
  }
LABEL_21:
  if ( under_debugger )
    BUG();
  return (const __m128i *)interr(40043, a2, a3, a4, *(double *)a7.m128_u64);
}
