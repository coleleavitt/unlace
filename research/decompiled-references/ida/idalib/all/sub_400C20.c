__int64 __fastcall sub_400C20(__int64 a1, _QWORD *a2, __int64 *a3, __int64 a4)
{
  __int64 v6; // rax
  __int64 v7; // rbp
  __int64 (__fastcall *v8)(__int64); // rax
  __int64 *v9; // rax
  __int64 v10; // rdi
  __int64 (__fastcall *v11)(__int64); // rax
  __int64 *v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 (__fastcall *v15)(__int64); // rax
  __int64 *v16; // rax
  __int64 *v17; // rdi
  __int64 (__fastcall *v18)(__int64); // rax
  __int64 *v19; // rdi
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 (__fastcall *v22)(__int64); // rax
  __int64 *v23; // r13
  __int64 *v24; // rdi
  __int64 (__fastcall *v25)(__int64); // rax
  __int64 *v26; // rdi
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 (__fastcall *v29)(__int64); // rax
  __int64 *v30; // rbx
  __int64 (__fastcall *v31)(__int64); // rax
  __int64 *v32; // rbp
  __int64 v33; // rax
  __m128i v34; // xmm0
  __int64 (__fastcall *v36)(__int64); // rax
  __int64 *v37; // rbx
  __int64 (__fastcall *v38)(__int64); // rax
  __int64 *v39; // rax
  __int64 v40; // rax
  __m128i v41; // xmm0
  __int64 (__fastcall **v42)(); // [rsp+0h] [rbp-E8h] BYREF
  unsigned __int128 v43; // [rsp+8h] [rbp-E0h] BYREF
  __int64 v44; // [rsp+18h] [rbp-D0h]
  __int64 v45; // [rsp+20h] [rbp-C8h]
  __int64 (__fastcall **v46)(); // [rsp+28h] [rbp-C0h]
  _QWORD *v47; // [rsp+30h] [rbp-B8h]
  __int64 *v48; // [rsp+38h] [rbp-B0h]
  __int64 v49; // [rsp+40h] [rbp-A8h]
  __int64 v50; // [rsp+48h] [rbp-A0h]
  __int64 (__fastcall **v51)(); // [rsp+50h] [rbp-98h]
  _QWORD *v52; // [rsp+58h] [rbp-90h]
  __int64 v53; // [rsp+60h] [rbp-88h]
  __int64 v54; // [rsp+68h] [rbp-80h]
  __int64 v55; // [rsp+70h] [rbp-78h]
  __int64 (__fastcall **v56)(); // [rsp+78h] [rbp-70h]
  __int64 *v57; // [rsp+80h] [rbp-68h]
  __int64 v58; // [rsp+88h] [rbp-60h]
  __int64 v59; // [rsp+90h] [rbp-58h]
  __int64 v60; // [rsp+98h] [rbp-50h]
  unsigned __int64 v61; // [rsp+A8h] [rbp-40h]

  v6 = *a3;
  v61 = __readfsqword(0x28u);
  v7 = a4;
  if ( a2 )
  {
    v43 = __PAIR128__(a4, (unsigned __int64)a3);
    v42 = &off_2B277F0;
    v8 = *(__int64 (__fastcall **)(__int64))(v6 + 32);
    if ( v8 == sub_3DB7B0 )
    {
      v9 = a3 + 2;
      v10 = a4;
    }
    else
    {
      v9 = (__int64 *)v8((__int64)a3);
      v10 = *((_QWORD *)&v43 + 1);
    }
    v44 = *v9;
    v11 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 32LL);
    if ( v11 == sub_3DB7B0 )
      v12 = (__int64 *)(v10 + 16);
    else
      v12 = (__int64 *)((__int64 (__fastcall *)(__int64, _QWORD *))v11)(v10, a2);
    v13 = *v12;
    v47 = a2;
    v48 = a3;
    v45 = v13;
    v42 = off_2B27808;
    v14 = *a2;
    v46 = &off_2B277F0;
    v15 = *(__int64 (__fastcall **)(__int64))(v14 + 32);
    if ( v15 == sub_3DB7B0 )
    {
      v16 = a2 + 2;
      v17 = a3;
    }
    else
    {
      v16 = (__int64 *)v15((__int64)a2);
      v17 = v48;
    }
    v49 = *v16;
    v18 = *(__int64 (__fastcall **)(__int64))(*v17 + 32);
    if ( v18 == sub_3DB7B0 )
      v19 = v17 + 2;
    else
      v19 = (__int64 *)((__int64 (__fastcall *)(__int64 *, _QWORD *))v18)(v17, a2);
    v20 = *v19;
    v52 = a2;
    v53 = v7;
    v50 = v20;
    v21 = *a2;
    v51 = &off_2B277F0;
    v22 = *(__int64 (__fastcall **)(__int64))(v21 + 32);
    if ( v22 == sub_3DB7B0 )
    {
      v23 = a2 + 2;
      v24 = (__int64 *)v7;
    }
    else
    {
      v24 = (__int64 *)v53;
      v23 = (__int64 *)v22((__int64)a2);
    }
    v54 = *v23;
    v25 = *(__int64 (__fastcall **)(__int64))(*v24 + 32);
    if ( v25 == sub_3DB7B0 )
      v26 = v24 + 2;
    else
      v26 = (__int64 *)((__int64 (__fastcall *)(__int64 *, _QWORD *))v25)(v24, a2);
    v27 = *v26;
    v57 = a3;
    v58 = v7;
    v55 = v27;
    v28 = *a3;
    v56 = &off_2B277F0;
    v29 = *(__int64 (__fastcall **)(__int64))(v28 + 32);
    if ( v29 == sub_3DB7B0 )
    {
      v30 = a3 + 2;
    }
    else
    {
      v7 = v58;
      v30 = (__int64 *)v29((__int64)a3);
    }
    v59 = *v30;
    v31 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 32LL);
    if ( v31 == sub_3DB7B0 )
      v32 = (__int64 *)(v7 + 16);
    else
      v32 = (__int64 *)v31(v7);
    v33 = *v32;
    v34 = _mm_loadu_si128((const __m128i *)&v43);
    *(_QWORD *)(a1 + 16) = 0;
    v60 = v33;
    *(__m128i *)a1 = v34;
    *(_OWORD *)(a1 + 24) = 0;
    while ( (unsigned __int8)sub_3FFF20(&v42, (__int64 *)(a1 + 16)) )
      ;
  }
  else
  {
    v43 = __PAIR128__(a4, (unsigned __int64)a3);
    v42 = &off_2B277F0;
    v36 = *(__int64 (__fastcall **)(__int64))(v6 + 32);
    if ( v36 == sub_3DB7B0 )
    {
      v37 = a3 + 2;
    }
    else
    {
      v7 = *((_QWORD *)&v43 + 1);
      v37 = (__int64 *)v36((__int64)a3);
    }
    v44 = *v37;
    v38 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 32LL);
    if ( v38 == sub_3DB7B0 )
    {
      v39 = (__int64 *)(v7 + 16);
    }
    else
    {
      v39 = (__int64 *)v38(v7);
      v7 = *((_QWORD *)&v43 + 1);
    }
    v40 = *v39;
    v41 = _mm_loadl_epi64((const __m128i *)&v43);
    *(_QWORD *)(a1 + 16) = 0;
    v45 = v40;
    *(__m128i *)a1 = _mm_unpacklo_epi64(v41, (__m128i)(unsigned __int64)v7);
    *(_OWORD *)(a1 + 24) = 0;
    while ( (unsigned __int8)sub_3FF970(&v42, (__int64 *)(a1 + 16)) )
      ;
  }
  return a1;
}
