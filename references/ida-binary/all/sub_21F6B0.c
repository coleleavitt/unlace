__int64 __fastcall sub_21F6B0(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 *a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        double a9,
        double a10,
        __m128 a11,
        __m128 a12)
{
  unsigned int v14; // eax
  unsigned int v15; // ebx
  const void *v16; // rax
  __int64 v18; // rax
  __int64 v19; // rbx
  __int64 v20; // r14
  __int64 linput; // rbp
  double v22; // xmm4_8
  double v23; // xmm5_8
  __int64 v24; // rax
  unsigned int v25; // [rsp+Ch] [rbp-5Ch] BYREF
  _BYTE v26[40]; // [rsp+10h] [rbp-58h] BYREF
  unsigned __int64 v27; // [rsp+38h] [rbp-30h]

  v27 = __readfsqword(0x28u);
  v14 = sub_20E570(a1, a2, a4);
  if ( !(_BYTE)v14 )
    return 0;
  v15 = v14;
  if ( !a3 )
    return v15;
  if ( *(_BYTE *)a1 > 3u
    && (qfread(a2, v26, 32) != 32
     || (v18 = *(_QWORD *)(a1 + 8), v26[31] = 0, sub_20B400((__int64 *)(v18 + 240), v26), *(_BYTE *)a1 > 8u)
     && (qfread(a2, &v25, 4) != 4
      || (sub_213C70((__int64 *)(*(_QWORD *)(a1 + 8) + 368LL), v25), v25)
      && (v24 = qfread(a2, *(_QWORD *)(*(_QWORD *)(a1 + 8) + 368LL), v25), v25 != v24)))
    || qfread(a2, &v25, 4) != 4 )
  {
    if ( a4 )
    {
      v16 = (const void *)qerrstr(0xFFFFFFFFLL);
      sub_20B400(a4, v16);
    }
    return 0;
  }
  if ( (int)v25 <= 0 )
  {
    if ( a4 )
    {
      v15 = 0;
      sub_20B400(a4, "illegal trace data");
      return v15;
    }
    return 0;
  }
  v19 = qftell(a2);
  v20 = qfsize(a2) - v19;
  linput = make_linput(a2);
  qlseek(linput, v19, 0);
  v15 = sub_21F490(a1, linput, v20, v25, a4, a5, a6, a7, a8, v22, v23, a11, a12);
  unmake_linput(linput);
  if ( (_BYTE)v15
    && *(_BYTE *)a1 > 8u
    && !dword_8CC5F0
    && dbg
    && *(_DWORD *)(dbg + 16) == 12
    && *(_QWORD *)(*(_QWORD *)(a1 + 8) + 376LL) )
  {
    sub_20CEA0(dbg, 1);
    sub_20CEA0(dbg, 0, 0, 0, 0, a4);
  }
  mark_builtin_widgets(&stru_10000, 0, 1);
  return v15;
}
