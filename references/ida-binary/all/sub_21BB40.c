__int64 __fastcall sub_21BB40(
        __int64 a1,
        char *a2,
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
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __m128 v16; // xmm4
  __m128 v17; // xmm5
  __int64 v18; // rax
  QT::QWidget *v19; // rbx
  _QWORD v21[3]; // [rsp+0h] [rbp-A8h] BYREF
  __int64 v22; // [rsp+18h] [rbp-90h]
  __int128 v23; // [rsp+20h] [rbp-88h]
  __int64 v24; // [rsp+30h] [rbp-78h]
  __int128 v25; // [rsp+38h] [rbp-70h]
  __int64 v26; // [rsp+48h] [rbp-60h]
  __int128 v27; // [rsp+50h] [rbp-58h]
  __int64 v28; // [rsp+60h] [rbp-48h]
  __int128 v29; // [rsp+68h] [rbp-40h]
  __int64 eah; // [rsp+78h] [rbp-30h]
  int v31; // [rsp+80h] [rbp-28h]
  unsigned __int64 v32; // [rsp+88h] [rbp-20h]

  v11 = 0.0;
  v32 = __readfsqword(0x28u);
  LOBYTE(v21[0]) = 11;
  v21[1] = qword_8CBAA0;
  v21[2] = -1;
  v22 = 0;
  v24 = 0;
  v26 = 0;
  v28 = 0;
  v23 = 0;
  v25 = 0;
  v27 = 0;
  v29 = 0;
  eah = get_eah(a1, a2, a3);
  v31 = 0;
  if ( (unsigned __int8)sub_214650(v21, (__m128)0LL, a5, a6, a7, v16, v17, a10, a11, (__int64)a2, v12, v13, v14, v15) )
  {
    v18 = sub_49EDE0(16);
    v19 = (QT::QWidget *)v18;
    if ( v18 )
    {
      a2 = (char *)sub_21B4A0(*(_QWORD **)(v18 + 2392));
      sub_4A3940(v19, a2);
    }
  }
  if ( v28 )
  {
    *(_QWORD *)&v29 = 0;
    v11 = qfree(v28, a2);
  }
  if ( v26 )
  {
    *(_QWORD *)&v27 = 0;
    v11 = qfree(v26, a2, v11);
  }
  if ( v24 )
  {
    *(_QWORD *)&v25 = 0;
    v11 = qfree(v24, a2, v11);
  }
  if ( v22 )
  {
    *(_QWORD *)&v23 = 0;
    qfree(v22, a2, v11);
  }
  return 1;
}
