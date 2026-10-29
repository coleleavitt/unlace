__int64 __fastcall sub_21F490(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 *a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        double a10,
        double a11,
        __m128 a12,
        __m128 a13)
{
  __int64 v14; // rbp
  double v15; // xmm4_8
  double v16; // xmm5_8
  unsigned int v17; // r12d
  __m128 si128; // xmm0
  __int64 v20; // r14
  __int64 v21; // r9
  __int64 v22; // r15
  char v23; // al
  __int64 v24; // r9
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 zip_linput; // [rsp+0h] [rbp-A8h]
  __int64 v29; // [rsp+8h] [rbp-A0h]
  __int64 v30; // [rsp+8h] [rbp-A0h]
  int v32; // [rsp+1Ch] [rbp-8Ch]
  int v33; // [rsp+2Ch] [rbp-7Ch] BYREF
  __int64 v34; // [rsp+30h] [rbp-78h] BYREF
  __int64 v35; // [rsp+38h] [rbp-70h]
  __m128 v36; // [rsp+40h] [rbp-68h] BYREF
  __int64 v37; // [rsp+50h] [rbp-58h]
  __int64 v38; // [rsp+58h] [rbp-50h]
  unsigned __int64 v39; // [rsp+68h] [rbp-40h]

  v14 = a4;
  v39 = __readfsqword(0x28u);
  zip_linput = create_zip_linput(a2, a3, 2);
  v32 = dword_8BA504 & 0x10;
  if ( (dword_8BA504 & 0x10) != 0 )
    dword_8BA504 &= ~0x10u;
  v35 = a4;
  v34 = zip_linput;
  v17 = sub_218F00(a1, &v34, &v33, a5, a6, a7, a8, a9, v15, v16, a12, a13);
  if ( (_BYTE)v17 )
  {
    si128 = (__m128)_mm_load_si128((const __m128i *)&xmmword_5DC720);
    v37 = 0;
    v38 = 0;
    v36 = si128;
    sub_46B930(qword_8CD748);
    v20 = v33;
    if ( v33 )
    {
      v21 = zip_linput;
      v22 = 0;
      do
      {
        v34 = v21;
        v35 = v14;
        v23 = sub_21EC80(a1, &v34, (__int64)&v36, si128);
        v21 = v34;
        v14 = v35;
        if ( !v23 )
          break;
        ++v22;
      }
      while ( v22 != v20 );
      v29 = v34;
      sub_46B950(qword_8CD748);
      v24 = v29;
      if ( v22 != v20 )
      {
        if ( a5 )
          sub_169A50(a5, (__int64)"failed to unpack trace event #%zu", v22);
        v17 = 0;
        goto LABEL_4;
      }
    }
    else
    {
      sub_46B950(qword_8CD748);
      v24 = zip_linput;
    }
    if ( !v14 )
      goto LABEL_20;
    while ( qlseek(v24, 0, 1) < v14 )
    {
      if ( under_debugger )
        BUG();
      interr(40286, 0, v25, v26, *(double *)si128.m128_u64);
LABEL_20:
      v30 = v24;
      v27 = qlsize(v24);
      v24 = v30;
      v14 = v27;
    }
  }
LABEL_4:
  if ( v32 )
    dword_8BA504 |= 0x10u;
  close_linput(zip_linput);
  return v17;
}
