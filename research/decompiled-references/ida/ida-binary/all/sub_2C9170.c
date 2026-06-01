__int64 __fastcall save_file_ah_t__::vfunc_4(
        __m128 a1,
        __m128 a2,
        __m128 a3,
        __m128 a4,
        double a5,
        double a6,
        __m128 a7,
        __m128 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11)
{
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __m128 v14; // xmm4
  __m128 v15; // xmm5
  __int64 v17; // rax
  __int64 v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __m128 v23; // xmm4
  __m128 v24; // xmm5
  __int64 v25; // rax
  __int64 v26; // rsi
  __int64 v27; // rbp
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __m128 v32; // xmm4
  __m128 v33; // xmm5
  __int64 v34; // rax
  int *v35; // rax
  __int64 v36; // rax
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  __m128 v40; // xmm4
  __m128 v41; // xmm5
  char v42; // [rsp+0h] [rbp-38h]
  char v43; // [rsp+0h] [rbp-38h]
  __int64 v44; // [rsp+8h] [rbp-30h] BYREF
  _QWORD v45[5]; // [rsp+10h] [rbp-28h] BYREF

  v45[1] = __readfsqword(0x28u);
  if ( (unsigned __int8)sub_1F09E0(a11, &v44, v45) )
  {
    v17 = sub_17CD60(
            1u,
            (int)"*",
            (int)"Please specify the output file",
            v11,
            v12,
            v13,
            a1,
            a2,
            a3,
            a4,
            v14,
            v15,
            a7,
            a8,
            v42);
    v18 = v17;
    if ( v17 )
    {
      if ( (unsigned __int8)qfileexist(v17) )
      {
        if ( !(unsigned __int8)sub_2C8FB0(
                                 (int)&qword_8CCC20,
                                 (int)"The output file exists. Please specify an offset within it",
                                 v19,
                                 v20,
                                 v21,
                                 v22,
                                 a1,
                                 a2,
                                 a3,
                                 a4,
                                 v23,
                                 v24,
                                 a7,
                                 a8,
                                 v43) )
          return 0;
        v34 = fopenM(v18);
        v26 = qword_8CCC20;
        v27 = v34;
      }
      else
      {
        v25 = fopenWB(v18);
        v26 = 0;
        qword_8CCC20 = 0;
        v27 = v25;
      }
      if ( (unsigned int)base2file(v27, v26, v44, v45[0]) )
      {
        sub_16B9E0(
          (int)"The selected range has been sucessfully saved to the file",
          v26,
          v28,
          v29,
          v30,
          v31,
          a1,
          a2,
          a3,
          a4,
          v32,
          v33,
          a7,
          a8,
          v43);
      }
      else
      {
        v35 = __errno_location();
        v36 = qstrerror((unsigned int)*v35);
        sub_169630((int)"AUTOHIDE NONE\n%s: %s", v18, v36, v37, v38, v39, a1, a2, a3, a4, v40, v41, a7, a8, v43);
      }
      qfclose(v27);
    }
  }
  return 0;
}
