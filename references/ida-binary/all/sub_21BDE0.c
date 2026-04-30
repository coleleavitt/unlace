__int64 __fastcall sub_21BDE0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        double a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        double a8,
        double a9,
        __m128 a10,
        __m128 a11)
{
  double v11; // xmm0_8
  __int64 eah; // rax
  char *v14; // rsi
  double v15; // xmm4_8
  double v16; // xmm5_8
  __int64 v17; // rdx
  __int64 v18; // rcx
  unsigned int v19; // ebx
  __int64 v20; // r8
  __int64 v21; // r9
  __m128 v22; // xmm4
  __m128 v23; // xmm5
  __int64 v25; // rax
  QT::QWidget *v26; // rbp
  char *v27; // [rsp+0h] [rbp-C8h] BYREF
  __int128 v28; // [rsp+8h] [rbp-C0h]
  _QWORD v29[3]; // [rsp+20h] [rbp-A8h] BYREF
  __int64 v30; // [rsp+38h] [rbp-90h]
  __int128 v31; // [rsp+40h] [rbp-88h]
  __int64 v32; // [rsp+50h] [rbp-78h]
  __int128 v33; // [rsp+58h] [rbp-70h]
  __int64 v34; // [rsp+68h] [rbp-60h]
  __int128 v35; // [rsp+70h] [rbp-58h]
  __int64 v36; // [rsp+80h] [rbp-48h]
  __int128 v37; // [rsp+88h] [rbp-40h]
  __int64 v38; // [rsp+98h] [rbp-30h]
  int v39; // [rsp+A0h] [rbp-28h]
  unsigned __int64 v40; // [rsp+A8h] [rbp-20h]

  v11 = 0.0;
  v40 = __readfsqword(0x28u);
  v27 = nullptr;
  LOBYTE(v29[0]) = 11;
  v29[1] = qword_8CBAA0;
  v29[2] = -1;
  v30 = 0;
  v32 = 0;
  v34 = 0;
  v36 = 0;
  v28 = 0;
  v31 = 0;
  v33 = 0;
  v35 = 0;
  v37 = 0;
  eah = get_eah(a1, a2, a3);
  v14 = (char *)a1;
  v38 = eah;
  v39 = 0;
  v19 = sub_214320(v29, a1, a2, 0, (__int64 *)&v27, 0.0, a5, a6, a7, v15, v16, a10, a11);
  if ( (_BYTE)v19 )
  {
    v25 = sub_49EDE0(16);
    v26 = (QT::QWidget *)v25;
    if ( v25 )
    {
      v14 = (char *)sub_21B4A0(*(_QWORD **)(v25 + 2392));
      sub_4A3940(v26, v14);
    }
  }
  else
  {
    v14 = (char *)&s1;
    if ( (_QWORD)v28 )
      v14 = v27;
    sub_169700((int)"%s\n", (__int64)v14, v17, v18, v20, v21, (__m128)0LL, a5, a6, a7, v22, v23, a10, a11, (char)v27);
  }
  if ( v36 )
  {
    *(_QWORD *)&v37 = 0;
    v11 = qfree(v36, v14);
  }
  if ( v34 )
  {
    *(_QWORD *)&v35 = 0;
    v11 = qfree(v34, v14, v11);
  }
  if ( v32 )
  {
    *(_QWORD *)&v33 = 0;
    v11 = qfree(v32, v14, v11);
  }
  if ( v30 )
  {
    *(_QWORD *)&v31 = 0;
    v11 = qfree(v30, v14, v11);
  }
  if ( v27 )
  {
    *(_QWORD *)&v28 = 0;
    qfree(v27, v14, v11);
  }
  return v19;
}
