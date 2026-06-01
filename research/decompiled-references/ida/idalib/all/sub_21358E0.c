__int64 __fastcall sub_21358E0(_QWORD *a1)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // r13
  _DWORD *v5; // rax
  unsigned int v6; // r15d
  __int64 v8; // r14
  __int64 v9; // rdi
  __int64 v10; // rdx
  int v11; // eax
  __int64 v12; // r10
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 *v17; // rdi
  __int64 v18; // rax
  __int64 (*v19)(); // rax
  _BYTE *v20; // rdx
  char v21; // al
  void *v22; // rdi
  __int64 v23; // rax
  __int64 v24; // rax
  unsigned __int64 v25; // rax
  __m128i *v26; // rax
  __int64 v27; // rax
  __int64 v28; // [rsp+10h] [rbp-108h]
  __int64 v29; // [rsp+18h] [rbp-100h]
  unsigned __int64 v30; // [rsp+20h] [rbp-F8h]
  __int64 v31; // [rsp+20h] [rbp-F8h]
  __int64 v32; // [rsp+20h] [rbp-F8h]
  unsigned __int64 v33; // [rsp+28h] [rbp-F0h]
  unsigned __int64 v34; // [rsp+38h] [rbp-E0h] BYREF
  __int64 v35; // [rsp+40h] [rbp-D8h] BYREF
  __int64 v36; // [rsp+48h] [rbp-D0h] BYREF
  void *v37[2]; // [rsp+50h] [rbp-C8h] BYREF
  _BYTE v38[16]; // [rsp+60h] [rbp-B8h] BYREF
  _QWORD v39[2]; // [rsp+70h] [rbp-A8h] BYREF
  __int64 v40; // [rsp+80h] [rbp-98h] BYREF
  void *v41; // [rsp+90h] [rbp-88h] BYREF
  __int64 v42; // [rsp+98h] [rbp-80h]
  __m128i v43; // [rsp+A0h] [rbp-78h] BYREF
  _QWORD v44[4]; // [rsp+B0h] [rbp-68h] BYREF
  __int16 v45; // [rsp+D0h] [rbp-48h]

  v38[0] = 0;
  v37[1] = nullptr;
  v37[0] = v38;
  v2 = sub_2153C00(a1);
  v3 = sub_2124B50(v2);
  v45 = 259;
  v4 = v3;
  v44[0] = "expected string in '.incbin' directive";
  v5 = (_DWORD *)sub_2153C00(a1);
  if ( (unsigned __int8)sub_2154470(a1, *v5 != 3, v44) || (unsigned __int8)sub_2135140((__int64)a1, v37) )
    goto LABEL_2;
  v34 = 0;
  v35 = 0;
  v36 = 0;
  if ( !(unsigned __int8)sub_2154640(a1, 26) )
    goto LABEL_8;
  if ( *(_DWORD *)sub_2153C00(a1) != 26
    && ((unsigned __int8)sub_2153C10(a1, &v36) || (unsigned __int8)sub_21335C0((__int64)a1, &v34)) )
  {
    goto LABEL_2;
  }
  if ( (unsigned __int8)sub_2154640(a1, 26) )
  {
    v23 = sub_2153C00(a1);
    v24 = sub_2124B50(v23);
    v44[0] = 0;
    v8 = v24;
    if ( sub_2133530((__int64)a1, (unsigned __int64 *)&v35, (__int64)v44) )
    {
LABEL_2:
      v6 = 1;
      goto LABEL_3;
    }
  }
  else
  {
LABEL_8:
    v8 = 0;
  }
  if ( (unsigned __int8)sub_21544B0(a1) )
    goto LABEL_2;
  v45 = 259;
  v44[0] = "skip is negative";
  v6 = sub_2154450(a1, v34 >> 63, v36, v44);
  if ( (_BYTE)v6 )
    goto LABEL_2;
  v9 = a1[4];
  v10 = a1[23];
  v41 = &v43;
  v28 = v35;
  v30 = v34;
  v42 = 0;
  v43.m128i_i8[0] = 0;
  v11 = sub_223AD40(v9, v37, v10, &v41);
  if ( !v11 )
  {
    if ( v41 != &v43 )
      operator delete(v41);
LABEL_32:
    sub_C05100((__int64)v39, "Could not find incbin file '", (__int64)v37);
    v25 = j__strlen("'");
    if ( v25 > 0x7FFFFFFFFFFFFFFFLL - v39[1] )
      std::__throw_length_error("basic_string::append");
    v26 = (__m128i *)sub_9EE560(v39, "'", v25);
    v41 = &v43;
    if ( (__m128i *)v26->m128i_i64[0] == &v26[1] )
    {
      v43 = _mm_loadu_si128(v26 + 1);
    }
    else
    {
      v41 = (void *)v26->m128i_i64[0];
      v43.m128i_i64[0] = v26[1].m128i_i64[0];
    }
    v42 = v26->m128i_i64[1];
    v26->m128i_i64[0] = (__int64)v26[1].m128i_i64;
    v26->m128i_i64[1] = 0;
    v26[1].m128i_i8[0] = 0;
    v44[0] = &v41;
    v45 = 260;
    v6 = sub_2153E90(a1, v4, v44, 0, 0);
    if ( v41 != &v43 )
      operator delete(v41);
    v22 = (void *)v39[0];
    if ( (__int64 *)v39[0] != &v40 )
    {
LABEL_23:
      operator delete(v22);
      goto LABEL_3;
    }
    goto LABEL_3;
  }
  v12 = 0;
  v13 = *(_QWORD *)(*(_QWORD *)a1[4] + 24LL * (unsigned int)(v11 - 1));
  v14 = *(_QWORD *)(v13 + 16);
  v15 = *(_QWORD *)(v13 + 8);
  v16 = v14 - v15;
  if ( v14 - v15 >= v30 )
  {
    v14 = v15 + v30;
    v12 = v16 - v30;
  }
  v17 = (__int64 *)a1[3];
  v18 = *v17;
  if ( !v28 )
  {
LABEL_22:
    (*(void (__fastcall **)(__int64 *, __int64, __int64))(v18 + 512))(v17, v14, v12);
    v22 = v41;
    if ( v41 == &v43 )
      goto LABEL_3;
    goto LABEL_23;
  }
  v19 = *(__int64 (**)())(v18 + 80);
  v20 = nullptr;
  if ( v19 != sub_210EC60 )
  {
    v32 = v12;
    v29 = v14;
    v27 = ((__int64 (__fastcall *)(__int64 *, __int64 (*)(), _QWORD))v19)(v17, sub_210EC60, 0);
    v12 = v32;
    v14 = v29;
    v20 = (_BYTE *)v27;
  }
  v33 = v12;
  v31 = v14;
  v21 = sub_210E270(v28, v39, v20);
  v14 = v31;
  v12 = v33;
  if ( v21 )
  {
    if ( v39[0] >= 0LL )
    {
      v17 = (__int64 *)a1[3];
      if ( v33 > v39[0] )
        v12 = v39[0];
      v18 = *v17;
      goto LABEL_22;
    }
    v45 = 259;
    v44[0] = "negative count has no effect";
    v6 = sub_212CE20((__int64)a1, v8, (__int64)v44, nullptr, 0);
  }
  else
  {
    v45 = 259;
    v44[0] = "expected absolute expression";
    v6 = sub_2153E90(a1, v8, v44, 0, 0);
  }
  if ( v41 != &v43 )
    operator delete(v41);
  if ( (_BYTE)v6 )
    goto LABEL_32;
LABEL_3:
  if ( v37[0] != v38 )
    operator delete(v37[0]);
  return v6;
}
