__int64 __fastcall sub_12342A0(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, int a5, int a6)
{
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // rdi
  __int64 v11; // rsi
  __int64 v12; // rdx
  int v13; // edx
  int v14; // ecx
  int v15; // r8d
  int v16; // r9d
  __int64 v17; // rax
  __int64 v19; // rsi
  __int64 v20; // rax
  __int64 v21; // rdi
  __int64 v22; // rax
  __m128i v23; // xmm0
  __int64 v24; // rdi
  __int64 v25; // r15
  __int64 v26; // rax
  __int64 v27; // [rsp+10h] [rbp-1B8h]
  __int64 v28; // [rsp+10h] [rbp-1B8h]
  __int64 v29; // [rsp+18h] [rbp-1B0h]
  __int64 v30; // [rsp+20h] [rbp-1A8h]
  __int64 v31; // [rsp+28h] [rbp-1A0h]
  __int64 v32; // [rsp+48h] [rbp-180h] BYREF
  __int64 v33; // [rsp+50h] [rbp-178h] BYREF
  char v34; // [rsp+58h] [rbp-170h]
  __int64 v35; // [rsp+60h] [rbp-168h] BYREF
  char v36; // [rsp+68h] [rbp-160h]
  __int64 v37; // [rsp+98h] [rbp-130h]
  __int64 v38[6]; // [rsp+A0h] [rbp-128h] BYREF
  __m128i v39; // [rsp+D0h] [rbp-F8h] BYREF
  __m128i v40; // [rsp+E0h] [rbp-E8h]
  __int16 v41; // [rsp+F0h] [rbp-D8h]
  __int64 v42; // [rsp+F8h] [rbp-D0h]
  __m128i v43; // [rsp+100h] [rbp-C8h] BYREF
  __m128i v44; // [rsp+110h] [rbp-B8h] BYREF
  __int16 v45; // [rsp+120h] [rbp-A8h]
  __int64 v46; // [rsp+128h] [rbp-A0h]
  __int64 v47[5]; // [rsp+130h] [rbp-98h] BYREF
  __int64 v48; // [rsp+158h] [rbp-70h]
  __int64 v49; // [rsp+188h] [rbp-40h]

  v8 = *a2;
  v9 = a2[1];
  v10 = a2[3];
  v11 = a2[2];
  v47[0] = v8;
  v47[2] = v11;
  v47[3] = v10;
  v47[1] = v9;
  sub_21A22F0((unsigned int)&v33, 0, 1, v8, a5, a6, v8, v9, v11, v10);
  if ( (v34 & 1) == 0 )
  {
    sub_1233A90(a1, v33);
    return sub_118B7A0(&v33);
  }
  v12 = v33;
  v33 = 0;
  v43.m128i_i64[0] = v12;
  sub_A05760(v47, &v43);
  if ( v43.m128i_i64[0] )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v43.m128i_i64[0] + 8LL))(v43.m128i_i64[0]);
  sub_215DD20((unsigned int)&v35, (unsigned int)&v43, v13, v14, v15, v16, *(_OWORD *)a2, *((_OWORD *)a2 + 1));
  if ( (v36 & 1) == 0 )
  {
    v32 = 0;
    v27 = v35;
    sub_2157480(&v43, v35);
    sub_215B0B0(&v39, v27, &v32, 1);
    v19 = v39.m128i_i64[1];
    v39.m128i_i64[1] = 0;
    v30 = v43.m128i_i64[1];
    v29 = v44.m128i_i64[0];
    v38[5] = v42;
    v37 = v46;
    v48 = v42;
    v49 = v46;
    if ( v19 )
    {
      (**(void (__fastcall ***)(__m128i *))v19)(&v43);
      v20 = v43.m128i_i64[0];
      v21 = v39.m128i_i64[1];
      v43.m128i_i64[0] = 0;
      v39.m128i_i64[1] = v20;
      if ( v21 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
        if ( v43.m128i_i64[0] )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v43.m128i_i64[0] + 16LL))(v43.m128i_i64[0]);
      }
    }
    v31 = 0;
    v42 = v48;
    if ( v30 )
    {
      (**(void (__fastcall ***)(__m128i *))v30)(&v43);
      v31 = v43.m128i_i64[0];
    }
    v28 = v49;
    v22 = v42;
LABEL_15:
    if ( ((v28 | v22) & 0xFFFFFFFFFFFFFFF8LL) != 0 )
    {
      while ( v40.m128i_i64[0] != v29 )
      {
        sub_2157D80(&v43, &v39);
        if ( (v45 & 1) != 0 )
        {
          v26 = v43.m128i_i64[0];
          v43.m128i_i64[0] = 0;
          v38[0] = v26;
          sub_1232E70(a1, v38);
          if ( v38[0] )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v38[0] + 8LL))(v38[0]);
        }
        else
        {
          sub_12342A0(a1, &v43);
        }
        sub_111E1C0(v43.m128i_i64);
        sub_215B1F0(&v43, &v39);
        if ( (v46 & 1) != 0 )
        {
          v25 = v43.m128i_i64[0];
          v43.m128i_i64[0] = 0;
          sub_111DFE0(v43.m128i_i64);
          if ( v25 )
          {
            *(_QWORD *)(v42 & 0xFFFFFFFFFFFFFFF8LL) = v25;
            v22 = v42 & 3 | 4;
            v42 = v22;
            goto LABEL_15;
          }
        }
        else
        {
          v23 = _mm_load_si128(&v43);
          v24 = v39.m128i_i64[1];
          v43.m128i_i64[1] = 0;
          v39 = v23;
          if ( v24 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
          v40 = _mm_load_si128(&v44);
          v41 = v45;
          sub_111DFE0(v43.m128i_i64);
        }
        *(_QWORD *)(v42 & 0xFFFFFFFFFFFFFFF8LL) = 0;
        if ( ((v28 | v42) & 0xFFFFFFFFFFFFFFF8LL) == 0 )
          break;
      }
    }
    if ( v31 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
    if ( v39.m128i_i64[1] )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v39.m128i_i64[1] + 16LL))(v39.m128i_i64[1]);
    if ( v30 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
    if ( v19 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
    if ( v32 )
    {
      v47[0] = v32;
      v32 = 0;
      sub_1232E70(a1, v47);
      if ( v47[0] )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v47[0] + 8LL))(v47[0]);
      if ( v32 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 8LL))(v32);
    }
    sub_111E0E0(&v35);
    return sub_118B7A0(&v33);
  }
  v17 = v35;
  v35 = 0;
  v43.m128i_i64[0] = v17;
  sub_A05760(v47, &v43);
  if ( v43.m128i_i64[0] )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v43.m128i_i64[0] + 8LL))(v43.m128i_i64[0]);
  sub_111E0E0(&v35);
  return sub_118B7A0(&v33);
}
