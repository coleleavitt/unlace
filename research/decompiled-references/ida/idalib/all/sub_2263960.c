__m128i **__fastcall sub_2263960(__m128i **a1, __int64 a2, const __m128i *a3)
{
  __m128i v4; // xmm0
  __m128i v5; // xmm1
  __m128i v6; // xmm2
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __m128i v10; // xmm3
  __int64 v11; // r14
  __m128i *v12; // rax
  __m128i v13; // rdi
  __m128i *v14; // rbx
  _BYTE *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rax
  __m128i v18; // xmm4
  __int64 v19; // rax
  __m128i *v21; // rax
  __m128i v22; // rdi
  __m128i *v23; // rbx
  _BYTE *v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rax
  __m128i v27; // xmm5
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __m128i v31[3]; // [rsp+0h] [rbp-138h] BYREF
  __int64 v32; // [rsp+30h] [rbp-108h]
  __int64 v33; // [rsp+38h] [rbp-100h]
  __int64 v34; // [rsp+40h] [rbp-F8h]
  __int64 v35; // [rsp+48h] [rbp-F0h]
  void *v36[2]; // [rsp+50h] [rbp-E8h] BYREF
  __int64 v37; // [rsp+60h] [rbp-D8h] BYREF
  __m128i v38; // [rsp+70h] [rbp-C8h] BYREF
  __int64 v39; // [rsp+80h] [rbp-B8h]
  __int64 v40; // [rsp+88h] [rbp-B0h]
  __int64 v41; // [rsp+90h] [rbp-A8h]
  __int64 v42; // [rsp+98h] [rbp-A0h]
  __int8 v43; // [rsp+A0h] [rbp-98h]
  __m128i v44; // [rsp+B0h] [rbp-88h] BYREF
  __m128i v45; // [rsp+C0h] [rbp-78h] BYREF
  __m128i v46; // [rsp+D0h] [rbp-68h] BYREF
  __int64 v47; // [rsp+E0h] [rbp-58h]
  __int64 v48; // [rsp+E8h] [rbp-50h]
  __int64 v49; // [rsp+F0h] [rbp-48h]
  __int64 v50; // [rsp+F8h] [rbp-40h]
  __int8 v51; // [rsp+100h] [rbp-38h]

  v4 = _mm_loadu_si128(a3);
  v5 = _mm_loadu_si128(a3 + 1);
  v6 = _mm_loadu_si128(a3 + 2);
  v32 = a3[3].m128i_i64[0];
  v7 = a3[3].m128i_i64[1];
  a3[3].m128i_i64[1] = 0;
  v33 = v7;
  v8 = a3[4].m128i_i64[0];
  v31[0] = v4;
  v34 = v8;
  v9 = a3[4].m128i_i64[1];
  v31[1] = v5;
  v31[2] = v6;
  v35 = v9;
  sub_2262DC0((__int64)v36, v31);
  if ( (_DWORD)v42 == 3 )
  {
    sub_225AB40(&v44, (__int64)v36);
    v21 = (__m128i *)operator new(0xB8u);
    v22 = v44;
    v23 = v21;
    v21->m128i_i32[2] = 1;
    v21->m128i_i64[0] = (__int64)&unk_2C76008;
    v24 = (_BYTE *)sub_228AA60(v22.m128i_i64[0], v22.m128i_i64[1], 0);
    v23[1].m128i_i64[0] = (__int64)v23[2].m128i_i64;
    sub_2259A00((__m128i *)v23[1].m128i_i64, v24, (__int64)&v24[v25]);
    v23->m128i_i64[0] = (__int64)&off_2BEB998;
    v23[3].m128i_i64[0] = (__int64)v23[4].m128i_i64;
    if ( (__m128i *)v44.m128i_i64[0] == &v45 )
    {
      v23[4] = _mm_load_si128(&v45);
    }
    else
    {
      v23[3].m128i_i64[0] = v44.m128i_i64[0];
      v23[4].m128i_i64[0] = v45.m128i_i64[0];
    }
    v26 = v44.m128i_i64[1];
    *a1 = v23;
    v27 = _mm_load_si128(&v46);
    v23[9].m128i_i32[0] = 0;
    v23[3].m128i_i64[1] = v26;
    v28 = v47;
    v23[5] = v27;
    v23[6].m128i_i64[0] = v28;
    v29 = v48;
    v23[9].m128i_i64[1] = 0;
    v23[6].m128i_i64[1] = v29;
    v30 = v49;
    v23[11].m128i_i64[0] = 0;
    v23[7].m128i_i64[0] = v30;
    v23[7].m128i_i64[1] = v50;
    v23[8].m128i_i8[0] = v51;
    v23[10].m128i_i64[0] = (__int64)v23[9].m128i_i64;
    v23[10].m128i_i64[1] = (__int64)v23[9].m128i_i64;
  }
  else
  {
    v44.m128i_i64[0] = (__int64)&v45;
    sub_2259C30(&v44, (_BYTE *)v36[0], (__int64)v36[0] + (unsigned __int64)v36[1]);
    v10 = _mm_load_si128(&v38);
    v11 = v33;
    v33 = 0;
    v47 = v39;
    v46 = v10;
    v48 = v40;
    v49 = v41;
    v50 = v42;
    v51 = v43;
    v12 = (__m128i *)operator new(0x90u);
    v13 = v44;
    v14 = v12;
    v12->m128i_i32[2] = 0;
    v12->m128i_i64[0] = (__int64)&unk_2C76008;
    v15 = (_BYTE *)sub_228AA60(v13.m128i_i64[0], v13.m128i_i64[1], 0);
    v14[1].m128i_i64[0] = (__int64)v14[2].m128i_i64;
    sub_2259A00((__m128i *)v14[1].m128i_i64, v15, (__int64)&v15[v16]);
    v14->m128i_i64[0] = (__int64)&off_2BEB920;
    v14[3].m128i_i64[0] = (__int64)v14[4].m128i_i64;
    if ( (__m128i *)v44.m128i_i64[0] == &v45 )
    {
      v14[4] = _mm_load_si128(&v45);
    }
    else
    {
      v14[3].m128i_i64[0] = v44.m128i_i64[0];
      v14[4].m128i_i64[0] = v45.m128i_i64[0];
    }
    v17 = v44.m128i_i64[1];
    v14[8].m128i_i64[1] = v11;
    v18 = _mm_load_si128(&v46);
    *a1 = v14;
    v14[3].m128i_i64[1] = v17;
    v19 = v47;
    v14[5] = v18;
    v14[6].m128i_i64[0] = v19;
    v14[6].m128i_i64[1] = v48;
    v14[7].m128i_i64[0] = v49;
    v14[7].m128i_i64[1] = v50;
    v14[8].m128i_i8[0] = v51;
  }
  if ( v36[0] != &v37 )
    operator delete(v36[0]);
  if ( v33 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 8LL))(v33);
  return a1;
}
