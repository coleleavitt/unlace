__int64 __fastcall sub_A2A610(__int64 *a1, __int64 *a2)
{
  __int64 *v2; // rbp
  int v3; // ebx
  __int64 v4; // r12
  unsigned __int64 i; // rbp
  unsigned __int64 v8; // r14
  _QWORD *v9; // rdx
  __int64 v10; // rsi
  unsigned __int64 v11; // rax
  __int64 v12; // rbx
  __int64 v14; // rbx
  __int64 v15; // rbp
  __int64 v16; // rdi
  unsigned __int64 v17; // rbx
  _QWORD *v18; // rax
  __int64 v19; // rdx
  bool v20; // cf
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rdi
  _QWORD *v23; // rdx
  const __m128i *v24; // r8
  __m128i *v25; // rbx
  const __m128i *v26; // rcx
  __int64 v27; // rdx
  __m128i v28; // xmm0
  __int64 v29; // rax
  __int64 v30; // rdi
  __int64 v31; // rax
  __int64 v32; // rdi
  __int64 v33; // rax
  __int64 v34; // rdi
  __int64 v35; // rax
  __int64 v36; // rdi
  __int64 v37; // rax
  __int64 v38; // rdi
  __int64 v39; // rax
  __int64 v40; // rdi
  __int64 v41; // rax
  __int64 v42; // rdi
  __int64 v43; // rax
  __int64 v44; // rdi
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rdi
  __int64 v48; // rax
  __int64 v49; // rdi
  __int64 v50; // rax
  __int64 v51; // rdi
  __int64 v52; // rax
  __int64 v53; // rdi
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rdi
  __int64 v57; // rax
  __int64 v58; // rdi
  __int64 v59; // rax
  const __m128i *v60; // rbp
  const __m128i *v61; // rbx
  __int64 m128i_i64; // rdi
  _QWORD *v63; // [rsp+18h] [rbp-70h]
  __int64 v64; // [rsp+18h] [rbp-70h]
  unsigned __int64 v65; // [rsp+20h] [rbp-68h]
  __int64 v66; // [rsp+20h] [rbp-68h]
  unsigned __int64 v67; // [rsp+28h] [rbp-60h]
  char v68; // [rsp+3Fh] [rbp-49h] BYREF
  __int64 v69; // [rsp+40h] [rbp-48h] BYREF
  __int64 v70[8]; // [rsp+48h] [rbp-40h] BYREF

  v2 = a1;
  v3 = (*(__int64 (__fastcall **)(__int64 *))(*a1 + 24))(a1);
  if ( (*(unsigned __int8 (__fastcall **)(__int64 *))(*a1 + 16))(a1) )
    v3 = -991146299 * ((a2[1] - *a2) >> 4);
  if ( v3 )
  {
    v4 = (unsigned int)(v3 - 1);
    for ( i = 0; ; i = v8 )
    {
      v8 = i + 1;
      if ( (*(unsigned __int8 (__fastcall **)(__int64 *, _QWORD, __int64 *))(*a1 + 32))(a1, (unsigned int)i, &v69) )
      {
        v9 = (_QWORD *)a2[1];
        v10 = *a2;
        v11 = 0x4EC4EC4EC4EC4EC5LL * (((__int64)v9 - *a2) >> 4);
        if ( v11 <= i )
        {
          if ( v11 < v8 )
          {
            v17 = v8 - v11;
            if ( v8 != v11 )
            {
              if ( v17 > 0x4EC4EC4EC4EC4EC5LL * ((a2[2] - (__int64)v9) >> 4) )
              {
                if ( v17 > 0x13B13B13B13B13BLL - v11 )
                  std::__throw_length_error("vector::_M_default_append");
                v19 = v8 - v11;
                if ( v11 >= v17 )
                  v19 = 0x4EC4EC4EC4EC4EC5LL * ((a2[1] - *a2) >> 4);
                v20 = __CFADD__(v19, v11);
                v21 = v19 + v11;
                if ( v20 )
                {
                  v64 = -16;
                  v22 = -16;
                }
                else
                {
                  if ( v21 > 0x13B13B13B13B13BLL )
                    v21 = 0x13B13B13B13B13BLL;
                  v64 = 208 * v21;
                  v22 = 208 * v21;
                }
                v66 = a2[1] - *a2;
                v10 = operator new(v22);
                v23 = (_QWORD *)(v10 + v66);
                do
                {
                  *v23 = 0;
                  v23 += 26;
                  *(v23 - 25) = 0;
                  *(v23 - 24) = 0;
                  *(v23 - 23) = 0;
                  *(v23 - 22) = 0;
                  *(v23 - 21) = 0;
                  *(v23 - 20) = 0;
                  *(v23 - 19) = 0;
                  *(v23 - 18) = 0;
                  *(v23 - 17) = 0;
                  *(v23 - 16) = 0;
                  *(v23 - 15) = 0;
                  *(v23 - 14) = 0;
                  *(v23 - 13) = 0;
                  *(v23 - 12) = 0;
                  *(v23 - 11) = 0;
                  *(v23 - 10) = 0;
                  *(v23 - 9) = 0;
                  *(v23 - 8) = 0;
                  *(v23 - 7) = 0;
                  *(v23 - 6) = 0;
                  *(v23 - 5) = 0;
                  *(v23 - 4) = 0;
                  *(v23 - 3) = 0;
                  *(v23 - 2) = 0;
                  *(v23 - 1) = 0;
                }
                while ( v23 != (_QWORD *)(v10 + v66 + 208 * v17) );
                v24 = (const __m128i *)a2[1];
                v25 = (__m128i *)*a2;
                if ( v24 != (const __m128i *)*a2 )
                {
                  v26 = (const __m128i *)*a2;
                  v27 = v10;
                  do
                  {
                    v28 = _mm_loadu_si128(v26);
                    *(_QWORD *)(v27 + 24) = 0;
                    v26 += 13;
                    v27 += 208;
                    *(_QWORD *)(v27 - 176) = 0;
                    *(_QWORD *)(v27 - 192) = 0;
                    v29 = v26[-12].m128i_i64[0];
                    *(__m128i *)(v27 - 208) = v28;
                    *(_QWORD *)(v27 - 192) = v29;
                    v30 = v26[-12].m128i_i64[1];
                    v26[-12].m128i_i64[0] = 0;
                    v31 = *(_QWORD *)(v27 - 184);
                    *(_QWORD *)(v27 - 184) = v30;
                    v32 = v26[-11].m128i_i64[0];
                    v26[-12].m128i_i64[1] = v31;
                    v33 = *(_QWORD *)(v27 - 176);
                    *(_QWORD *)(v27 - 176) = v32;
                    v26[-11].m128i_i64[0] = v33;
                    *(_QWORD *)(v27 - 160) = 0;
                    *(_QWORD *)(v27 - 152) = 0;
                    *(_QWORD *)(v27 - 168) = 0;
                    *(_QWORD *)(v27 - 168) = v26[-11].m128i_i64[1];
                    v34 = v26[-10].m128i_i64[0];
                    v26[-11].m128i_i64[1] = 0;
                    v35 = *(_QWORD *)(v27 - 160);
                    *(_QWORD *)(v27 - 160) = v34;
                    v36 = v26[-10].m128i_i64[1];
                    v26[-10].m128i_i64[0] = v35;
                    v37 = *(_QWORD *)(v27 - 152);
                    *(_QWORD *)(v27 - 152) = v36;
                    v26[-10].m128i_i64[1] = v37;
                    *(_QWORD *)(v27 - 144) = 0;
                    *(_QWORD *)(v27 - 136) = 0;
                    *(_QWORD *)(v27 - 128) = 0;
                    *(_QWORD *)(v27 - 144) = v26[-9].m128i_i64[0];
                    v38 = v26[-9].m128i_i64[1];
                    v26[-9].m128i_i64[0] = 0;
                    v39 = *(_QWORD *)(v27 - 136);
                    *(_QWORD *)(v27 - 136) = v38;
                    v40 = v26[-8].m128i_i64[0];
                    v26[-9].m128i_i64[1] = v39;
                    v41 = *(_QWORD *)(v27 - 128);
                    *(_QWORD *)(v27 - 128) = v40;
                    v26[-8].m128i_i64[0] = v41;
                    *(_QWORD *)(v27 - 112) = 0;
                    *(_QWORD *)(v27 - 104) = 0;
                    *(_QWORD *)(v27 - 120) = 0;
                    *(_QWORD *)(v27 - 120) = v26[-8].m128i_i64[1];
                    v42 = v26[-7].m128i_i64[0];
                    v26[-8].m128i_i64[1] = 0;
                    v43 = *(_QWORD *)(v27 - 112);
                    *(_QWORD *)(v27 - 112) = v42;
                    v44 = v26[-7].m128i_i64[1];
                    v26[-7].m128i_i64[0] = v43;
                    v45 = *(_QWORD *)(v27 - 104);
                    *(_QWORD *)(v27 - 104) = v44;
                    v26[-7].m128i_i64[1] = v45;
                    *(_QWORD *)(v27 - 96) = 0;
                    *(_QWORD *)(v27 - 88) = 0;
                    *(_QWORD *)(v27 - 80) = 0;
                    *(_QWORD *)(v27 - 96) = v26[-6].m128i_i64[0];
                    v26[-6].m128i_i64[0] = 0;
                    v46 = *(_QWORD *)(v27 - 88);
                    *(_QWORD *)(v27 - 88) = v26[-6].m128i_i64[1];
                    v47 = v26[-5].m128i_i64[0];
                    v26[-6].m128i_i64[1] = v46;
                    v48 = *(_QWORD *)(v27 - 80);
                    *(_QWORD *)(v27 - 80) = v47;
                    v26[-5].m128i_i64[0] = v48;
                    *(_QWORD *)(v27 - 64) = 0;
                    *(_QWORD *)(v27 - 56) = 0;
                    *(_QWORD *)(v27 - 72) = 0;
                    *(_QWORD *)(v27 - 72) = v26[-5].m128i_i64[1];
                    v49 = v26[-4].m128i_i64[0];
                    v26[-5].m128i_i64[1] = 0;
                    v50 = *(_QWORD *)(v27 - 64);
                    *(_QWORD *)(v27 - 64) = v49;
                    v51 = v26[-4].m128i_i64[1];
                    v26[-4].m128i_i64[0] = v50;
                    v52 = *(_QWORD *)(v27 - 56);
                    *(_QWORD *)(v27 - 56) = v51;
                    v26[-4].m128i_i64[1] = v52;
                    *(_QWORD *)(v27 - 40) = 0;
                    *(_QWORD *)(v27 - 48) = 0;
                    *(_QWORD *)(v27 - 32) = 0;
                    *(_QWORD *)(v27 - 48) = v26[-3].m128i_i64[0];
                    v53 = v26[-3].m128i_i64[1];
                    v26[-3].m128i_i64[0] = 0;
                    v54 = *(_QWORD *)(v27 - 40);
                    *(_QWORD *)(v27 - 40) = v53;
                    v26[-3].m128i_i64[1] = v54;
                    v55 = *(_QWORD *)(v27 - 32);
                    *(_QWORD *)(v27 - 32) = v26[-2].m128i_i64[0];
                    v26[-2].m128i_i64[0] = v55;
                    *(_QWORD *)(v27 - 16) = 0;
                    *(_QWORD *)(v27 - 8) = 0;
                    *(_QWORD *)(v27 - 24) = 0;
                    *(_QWORD *)(v27 - 24) = v26[-2].m128i_i64[1];
                    v56 = v26[-1].m128i_i64[0];
                    v26[-2].m128i_i64[1] = 0;
                    v57 = *(_QWORD *)(v27 - 16);
                    *(_QWORD *)(v27 - 16) = v56;
                    v58 = v26[-1].m128i_i64[1];
                    v26[-1].m128i_i64[0] = v57;
                    v59 = *(_QWORD *)(v27 - 8);
                    *(_QWORD *)(v27 - 8) = v58;
                    v26[-1].m128i_i64[1] = v59;
                  }
                  while ( v24 != v26 );
                  v67 = i;
                  v60 = v25;
                  v61 = v24;
                  do
                  {
                    m128i_i64 = (__int64)v60[1].m128i_i64;
                    v60 += 13;
                    sub_A1D170(m128i_i64);
                  }
                  while ( v61 != v60 );
                  i = v67;
                  v25 = (__m128i *)*a2;
                }
                if ( v25 )
                  operator delete(v25);
                *a2 = v10;
                a2[1] = v10 + 208 * v8;
                a2[2] = v10 + v64;
              }
              else
              {
                v18 = &v9[26 * v17];
                do
                {
                  *v9 = 0;
                  v9 += 26;
                  *(v9 - 25) = 0;
                  *(v9 - 24) = 0;
                  *(v9 - 23) = 0;
                  *(v9 - 22) = 0;
                  *(v9 - 21) = 0;
                  *(v9 - 20) = 0;
                  *(v9 - 19) = 0;
                  *(v9 - 18) = 0;
                  *(v9 - 17) = 0;
                  *(v9 - 16) = 0;
                  *(v9 - 15) = 0;
                  *(v9 - 14) = 0;
                  *(v9 - 13) = 0;
                  *(v9 - 12) = 0;
                  *(v9 - 11) = 0;
                  *(v9 - 10) = 0;
                  *(v9 - 9) = 0;
                  *(v9 - 8) = 0;
                  *(v9 - 7) = 0;
                  *(v9 - 6) = 0;
                  *(v9 - 5) = 0;
                  *(v9 - 4) = 0;
                  *(v9 - 3) = 0;
                  *(v9 - 2) = 0;
                  *(v9 - 1) = 0;
                }
                while ( v9 != v18 );
                a2[1] = (__int64)v9;
              }
            }
          }
          else if ( v11 > v8 )
          {
            v63 = (_QWORD *)(v10 + 208 * v8);
            if ( v9 != v63 )
            {
              v65 = i;
              v14 = a2[1];
              v15 = v10 + 208 * v8;
              do
              {
                v16 = v15 + 16;
                v15 += 208;
                sub_A1D170(v16);
              }
              while ( v14 != v15 );
              i = v65;
              v10 = *a2;
              a2[1] = (__int64)v63;
            }
          }
        }
        v12 = v10 + 208 * i;
        (*(void (__fastcall **)(__int64 *))(*a1 + 104))(a1);
        if ( (*(unsigned __int8 (__fastcall **)(__int64 *, char *, __int64, _QWORD, char *, __int64 *))(*a1 + 120))(
               a1,
               "Version",
               1,
               0,
               &v68,
               v70) )
        {
          sub_A1CBB0(a1, v12);
          (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 128))(a1, v70[0]);
        }
        sub_A28F30(a1, v12 + 16);
        (*(void (__fastcall **)(__int64 *))(*a1 + 112))(a1);
        (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 40))(a1, v69);
        if ( v4 == i )
        {
LABEL_12:
          v2 = a1;
          return (*(__int64 (__fastcall **)(__int64 *))(*v2 + 48))(v2);
        }
      }
      else if ( v4 == i )
      {
        goto LABEL_12;
      }
    }
  }
  return (*(__int64 (__fastcall **)(__int64 *))(*v2 + 48))(v2);
}

