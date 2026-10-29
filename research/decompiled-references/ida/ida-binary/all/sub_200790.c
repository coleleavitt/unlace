__int64 __fastcall sub_200790(
        const __m128i *a1,
        double a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12)
{
  const char *v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rcx
  unsigned __int64 v15; // rbp
  const char *v16; // rbx
  unsigned __int64 v17; // rax
  __int64 v18; // rcx
  double v19; // xmm4_8
  double v20; // xmm5_8
  unsigned __int64 v21; // rax
  char v22; // dl
  int v23; // ebx
  unsigned int v24; // ebx
  const char *v26; // r14
  int utf8_char; // edx
  struct _Unwind_Exception *v28; // rbx
  const char *v29; // [rsp+0h] [rbp-60h] BYREF
  unsigned __int64 v30; // [rsp+8h] [rbp-58h] BYREF
  const char *v31; // [rsp+10h] [rbp-50h] BYREF
  const char *v32; // [rsp+18h] [rbp-48h] BYREF
  __int128 v33; // [rsp+20h] [rbp-40h]
  unsigned __int64 v34; // [rsp+30h] [rbp-30h]

  v34 = __readfsqword(0x28u);
  v12 = (const char *)&v32;
  v33 = 0;
  v32 = nullptr;
  if ( sub_1EB270((__int64)a1, (__int64)&v32, 0, a12, 0.0) <= 0 )
  {
    v24 = 0;
  }
  else
  {
    if ( !a1[26].m128i_i64[1] )
    {
      v28 = (struct _Unwind_Exception *)sub_1E69C0(0.0, (__int64)a1, (__int64)&v32, v13, v14);
      if ( v32 )
      {
        *(_QWORD *)&v33 = 0;
        qfree(v32, (const char *)&v32);
      }
      _Unwind_Resume(v28);
    }
    v15 = a1[25].m128i_i16[6];
    v16 = &s1;
    if ( (_QWORD)v33 )
      v16 = v32;
    v17 = qustrlen(v16);
    v29 = v16;
    if ( v15 > v17 )
      v15 = v17;
    skip_utf8(&v29, v15);
    v21 = (unsigned __int64)v29;
    if ( v15 > 1 )
    {
      v31 = v29;
      utf8_char = get_utf8_char(&v31);
      v21 = (unsigned __int64)v29;
      if ( utf8_char != 32 )
      {
        v31 = v29;
        if ( (unsigned __int8)prev_utf8_char(&v30, &v31, v16) && (_DWORD)v30 == 32 )
        {
          v21 = (unsigned __int64)v31;
          v29 = v31;
        }
        else
        {
          v21 = (unsigned __int64)v29;
        }
      }
    }
    while ( 1 )
    {
      if ( (unsigned __int64)v16 >= v21 )
        goto LABEL_12;
      v30 = v21;
      if ( (unsigned int)get_utf8_char(&v30) != 32 )
        break;
      v22 = prev_utf8_char(0, &v29, v16);
      v21 = (unsigned __int64)v29;
      if ( !v22 )
        goto LABEL_18;
    }
    v21 = (unsigned __int64)v29;
LABEL_18:
    if ( (unsigned __int64)v16 >= v21 )
      goto LABEL_12;
    while ( 1 )
    {
      v31 = (const char *)v21;
      if ( !(unsigned __int8)prev_utf8_char(&v30, &v31, v16) || (_DWORD)v30 == 32 )
        break;
      v21 = (unsigned __int64)v31;
      v29 = v31;
      if ( v16 >= v31 )
        goto LABEL_12;
    }
    v26 = v29;
    v31 = v16;
    if ( v16 >= v29 )
    {
LABEL_12:
      v23 = 0;
      goto LABEL_13;
    }
    v23 = 0;
    do
    {
      if ( skip_utf8(&v31, 1) )
        break;
      if ( v26 < v31 )
        break;
      ++v23;
    }
    while ( v31 < v26 );
LABEL_13:
    v12 = (const char *)&v29;
    LODWORD(v29) = v23;
    sub_2006B0(a1, (__int64)&v29, 0, v18, 0.0, a3, a4, a5, v19, v20, a8, a9);
    v24 = 1;
  }
  if ( v32 )
  {
    *(_QWORD *)&v33 = 0;
    qfree(v32, v12);
  }
  return v24;
}
