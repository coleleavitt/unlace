__int64 __fastcall sub_31C320(
        __int64 a1,
        int a2,
        unsigned __int8 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        double a8,
        double a9,
        __m128 a10,
        __m128 a11)
{
  __int64 v13; // rbp
  __int64 v14; // r8
  __int64 v15; // r9
  __m128 v16; // xmm4
  __m128 v17; // xmm5
  int v18; // ebx
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rdi
  unsigned int v23; // ebx
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rdi
  int v29; // ebp
  __int64 module_data; // rax
  double v31; // xmm4_8
  double v32; // xmm5_8
  __int64 v33; // rdx
  __int64 v34; // rax
  char v35; // [rsp+0h] [rbp-48h]
  __int64 v36; // [rsp+8h] [rbp-40h] BYREF
  __int64 v37[7]; // [rsp+10h] [rbp-38h] BYREF

  v37[1] = __readfsqword(0x28u);
  v36 = -1;
  v37[0] = -1;
  if ( a2 == -1 )
  {
    v13 = sub_31C1D0(a1);
    if ( !v13 )
      return (unsigned int)-1;
    v20 = v37[0];
    v21 = v36;
    v22 = 1005;
    v23 = (32 * a3) | 0x50;
  }
  else
  {
    v29 = 0;
    module_data = get_module_data((unsigned int)dword_8CD7F0);
    if ( a2 )
    {
      v29 = 16;
      if ( *(_QWORD *)(*(_QWORD *)(module_data + 8) + 376LL) )
        v29 = 16 * ((unsigned __int64)getinf_str(0, 73) >> 63);
    }
    if ( (unsigned __int8)sub_1F09E0(0, &v36, v37) )
      sub_1FDB10(*(double *)a4.m128_u64, a5, a6, a7, v31, v32, a10, a11, 0, (const char *)&v36);
    v23 = v29 | (32 * a3);
    v13 = sub_31C1D0(a1);
    if ( !v13 )
      return (unsigned int)-1;
    v20 = v37[0];
    v21 = v36;
    v22 = 1004;
    if ( a2 != 1 )
    {
      sub_28A960(1006, a1, v36, v37[0], v14, v15, a4, a5, a6, a7, v16, v17, a10, a11, v35);
      v34 = itext(1015, a1, v33);
      sub_1C76F0((int)"%s", v34);
      v26 = v37[0];
      v27 = v36;
      v28 = 3;
      goto LABEL_7;
    }
  }
  sub_28A960(v22, a1, v21, v20, v14, v15, a4, a5, a6, a7, v16, v17, a10, a11, v35);
  v25 = itext(1015, a1, v24);
  sub_1C76F0((int)"%s", v25);
  v26 = v37[0];
  v27 = v36;
  v28 = 4;
LABEL_7:
  v18 = gen_file(v28, v13, v27, v26, v23);
  sub_1C78D0();
  if ( v18 < 0 )
    sub_17CE30(1003);
  qfclose(v13);
  sub_1C7D20(nullptr);
  return (unsigned int)v18;
}
