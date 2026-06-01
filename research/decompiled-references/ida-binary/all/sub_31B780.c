__int64 __fastcall sub_31B780(
        double a1,
        __m128 a2,
        __m128 a3,
        __m128 a4,
        double a5,
        double a6,
        __m128 a7,
        __m128 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        int a13,
        int a14)
{
  const char *errdesc; // rsi
  unsigned int v15; // ebx
  const char *v17; // r14
  int v18; // eax
  unsigned __int16 v19; // bx
  unsigned __int16 v20; // dx
  __int64 v21; // rax
  __int64 v22; // r12
  __int64 v23; // r8
  __int64 v24; // r9
  __m128 v25; // xmm4
  __m128 v26; // xmm5
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __m128 v31; // xmm4
  __m128 v32; // xmm5
  const char *v33; // [rsp-10h] [rbp-70h]
  __int64 v34; // [rsp-10h] [rbp-70h]
  __int64 v35; // [rsp-8h] [rbp-68h]
  __int64 v36; // [rsp+0h] [rbp-60h] BYREF
  unsigned __int64 v37; // [rsp+8h] [rbp-58h] BYREF
  __int64 v38; // [rsp+10h] [rbp-50h] BYREF
  __int64 v39; // [rsp+18h] [rbp-48h] BYREF
  const char *v40; // [rsp+20h] [rbp-40h] BYREF
  __int128 v41; // [rsp+28h] [rbp-38h]
  unsigned __int64 v42; // [rsp+38h] [rbp-28h]

  errdesc = nullptr;
  v42 = __readfsqword(0x28u);
  v40 = nullptr;
  v41 = 0;
  if ( !(unsigned __int8)sub_486440((unsigned int)&v40, 0, 0, 990, a13, a14, v36) )
    goto LABEL_2;
  v17 = &s1;
  if ( (_QWORD)v41 )
    v17 = v40;
  v36 = 0;
  v38 = 0;
  v39 = 0;
  v37 = ((unsigned __int64)(getinf(20) + 4095) >> 4) & 0xFFFFFFFFFFFFF00LL;
  v18 = sub_507F10(
          1001,
          (_DWORD)v17,
          (unsigned int)&v37,
          (unsigned int)&v36,
          (unsigned int)&v38,
          (unsigned int)&v39,
          &word_8BC95A);
  errdesc = v33;
  if ( !v18 )
    goto LABEL_2;
  v19 = word_8BC95A & 1;
  LOBYTE(v20) = word_8BC95A & 1;
  HIBYTE(v20) = 1;
  if ( (word_8BC95A & 2) != 0 )
    v19 = v20;
  if ( v37 == -1 )
    goto LABEL_2;
  v21 = open_linput(v17, 0);
  v22 = v21;
  if ( v21 )
  {
    errdesc = (const char *)v21;
    if ( (unsigned __int8)load_binary_file(v17, v21, v19, v38, v37, v36, v39) )
    {
      close_linput(v22);
LABEL_2:
      v15 = 1;
      goto LABEL_3;
    }
    errdesc = v17;
    sub_169700(
      (int)"%s: failed to load binary file\n",
      (__int64)v17,
      v34,
      v35,
      v23,
      v24,
      (__m128)0LL,
      a2,
      a3,
      a4,
      v25,
      v26,
      a7,
      a8,
      v36);
    v15 = 0;
    close_linput(v22);
  }
  else
  {
    errdesc = (const char *)get_errdesc(v17, 0xFFFFFFFFLL);
    sub_169630((int)"%s", (__int64)errdesc, v27, v28, v29, v30, (__m128)0LL, a2, a3, a4, v31, v32, a7, a8, v36);
    v15 = 0;
  }
LABEL_3:
  if ( v40 )
  {
    *(_QWORD *)&v41 = 0;
    qfree(v40, errdesc);
  }
  return v15;
}
