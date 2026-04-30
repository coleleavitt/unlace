__int64 __fastcall sub_21FB60(
        const __m128i *a1,
        char *a2,
        double a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  __int64 v10; // rdx
  double v11; // xmm4_8
  double v12; // xmm5_8
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __m128 v17; // xmm4
  __m128 v18; // xmm5
  unsigned int v19; // ebx
  __int64 v21; // rax
  QT::QWidget *v22; // rbx
  char *v23; // [rsp+0h] [rbp-C8h] BYREF
  __int128 v24; // [rsp+8h] [rbp-C0h]
  char v25[8]; // [rsp+20h] [rbp-A8h] BYREF
  const __m128i *v26; // [rsp+28h] [rbp-A0h]
  __int64 v27; // [rsp+30h] [rbp-98h]
  __int64 v28; // [rsp+38h] [rbp-90h]
  __int128 v29; // [rsp+40h] [rbp-88h]
  __int64 v30; // [rsp+50h] [rbp-78h]
  __int128 v31; // [rsp+58h] [rbp-70h]
  __int64 v32; // [rsp+68h] [rbp-60h]
  __int128 v33; // [rsp+70h] [rbp-58h]
  __int64 v34; // [rsp+80h] [rbp-48h]
  __int128 v35; // [rsp+88h] [rbp-40h]
  __int64 eah; // [rsp+98h] [rbp-30h]
  int v37; // [rsp+A0h] [rbp-28h]
  unsigned __int64 v38; // [rsp+A8h] [rbp-20h]

  v38 = __readfsqword(0x28u);
  sub_20F9A0(a1);
  v25[0] = 11;
  v26 = a1;
  v27 = -1;
  v28 = 0;
  v30 = 0;
  v32 = 0;
  v34 = 0;
  v29 = 0;
  v31 = 0;
  v33 = 0;
  v35 = 0;
  eah = get_eah(a1, a2, v10);
  v37 = 0;
  v23 = nullptr;
  v24 = 0;
  if ( (unsigned __int8)sub_21F920((__int64)v25, a2, 1, (__int64 *)&v23, (__m128)0LL, a4, a5, a6, v11, v12, a9, a10) )
  {
    if ( a1 == (const __m128i *)qword_8CBAA0 )
    {
      v21 = sub_49EDE0(16);
      v22 = (QT::QWidget *)v21;
      if ( v21 )
      {
        a2 = (char *)sub_21B4A0(*(_QWORD **)(v21 + 2392));
        sub_4A3940(v22, a2);
      }
    }
    v19 = 1;
  }
  else
  {
    a2 = (char *)&s1;
    if ( (_QWORD)v24 )
      a2 = v23;
    sub_169700(
      (int)"Error loading the trace file: %s\n",
      (__int64)a2,
      v13,
      v14,
      v15,
      v16,
      (__m128)0LL,
      a4,
      a5,
      a6,
      v17,
      v18,
      a9,
      a10,
      (char)v23);
    v19 = 0;
  }
  if ( v23 )
  {
    *(_QWORD *)&v24 = 0;
    qfree(v23, a2);
  }
  if ( v34 )
  {
    *(_QWORD *)&v35 = 0;
    qfree(v34, a2);
  }
  if ( v32 )
  {
    *(_QWORD *)&v33 = 0;
    qfree(v32, a2);
  }
  if ( v30 )
  {
    *(_QWORD *)&v31 = 0;
    qfree(v30, a2);
  }
  if ( v28 )
  {
    *(_QWORD *)&v29 = 0;
    qfree(v28, a2);
  }
  return v19;
}
