__int64 __fastcall sub_2061DF0(
        __int64 *a1,
        int a2,
        int a3,
        __int64 a4,
        __int64 a5,
        unsigned __int8 a6,
        __int64 a7,
        __int64 a8,
        int a9,
        __int64 a10,
        __int64 a11,
        int a12,
        __int64 a13,
        unsigned __int8 a14,
        unsigned __int8 a15,
        int a16,
        unsigned __int8 a17,
        __int64 a18,
        __int64 a19,
        __int64 a20,
        __int64 a21)
{
  __int64 v21; // r14
  __int64 v23; // rbp
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // r13
  __int64 v27; // r12
  int v28; // r15d
  int v29; // ecx
  __int64 v30; // rax
  __int64 v31; // rdi
  __int64 v32; // rax
  int v34; // [rsp+10h] [rbp-78h]

  v21 = 0;
  v23 = a1[1];
  v24 = a18;
  v34 = a6;
  if ( a21 )
  {
    v25 = sub_20B4D60(v23, a20, a21);
    v24 = a18;
    v21 = v25;
  }
  v26 = 0;
  if ( a19 )
    v26 = sub_20B4D60(v23, v24, a19);
  v27 = 0;
  if ( a11 )
    v27 = sub_20B4D60(v23, a10, a11);
  v28 = 0;
  if ( a8 )
    v28 = sub_20B4D60(v23, a7, a8);
  v29 = 0;
  if ( a5 )
    v29 = sub_20B4D60(v23, a4, a5);
  v30 = sub_206D550(v23, a2, a3, v29, v34, v28, a9, v27, a12, 0, 0, 0, 0, 0, a13, a14, a15, a16, a17, v26, v21, 1);
  v31 = *a1;
  a1[2] = v30;
  v32 = sub_20BE620(v31, "llvm.dbg.cu", 11);
  sub_20B3610(v32, a1[2]);
  sub_2061AA0((__int64)a1, (_QWORD *)a1[2]);
  return a1[2];
}
