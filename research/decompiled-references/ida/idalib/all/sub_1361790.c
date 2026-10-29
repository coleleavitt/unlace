__int64 __fastcall sub_1361790(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v4; // r14
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rbp
  __int64 i; // r12
  unsigned int *v10; // rsi
  __int64 v11; // r15
  __int64 v12; // r13
  __int64 (__fastcall *v13)(_QWORD *, _QWORD, _QWORD, __int64, __int64, __int64, __int64, __int64, __int64); // r14
  __int64 v14; // r9
  __int64 v15; // rbp
  char v16; // dl
  __int64 v17; // r15
  __int64 v18; // r12
  __int64 v19; // r9
  __int64 v20; // r13
  __int64 v21; // r9
  __int64 v22; // r9
  __int64 v23; // r9
  __int64 v24; // rax
  __int64 v25; // r9
  __int64 v26; // rax
  __int64 v27; // r9
  __int64 v28; // [rsp+0h] [rbp-308h]
  __int64 v29; // [rsp+8h] [rbp-300h]
  __int64 v30; // [rsp+10h] [rbp-2F8h]
  __int64 v31; // [rsp+18h] [rbp-2F0h]
  __int64 v32; // [rsp+20h] [rbp-2E8h]
  __int64 v33; // [rsp+20h] [rbp-2E8h]
  __int64 v34; // [rsp+20h] [rbp-2E8h]
  __int64 v35; // [rsp+28h] [rbp-2E0h]
  __int64 v36; // [rsp+30h] [rbp-2D8h]
  __int64 v37; // [rsp+38h] [rbp-2D0h]
  __int64 v38; // [rsp+40h] [rbp-2C8h]
  __int64 v39; // [rsp+50h] [rbp-2B8h] BYREF
  __int64 v40; // [rsp+58h] [rbp-2B0h]
  __m128i v41; // [rsp+60h] [rbp-2A8h] BYREF
  __m128i v42; // [rsp+70h] [rbp-298h] BYREF
  __m128i v43; // [rsp+80h] [rbp-288h] BYREF
  __m128i v44; // [rsp+90h] [rbp-278h] BYREF
  __m128i v45; // [rsp+A0h] [rbp-268h] BYREF
  __m128i v46; // [rsp+B0h] [rbp-258h] BYREF
  __m128i v47; // [rsp+C0h] [rbp-248h] BYREF
  _QWORD v48[2]; // [rsp+D0h] [rbp-238h] BYREF
  __int64 v49; // [rsp+E0h] [rbp-228h]
  _QWORD v50[4]; // [rsp+F0h] [rbp-218h] BYREF
  _QWORD v51[4]; // [rsp+110h] [rbp-1F8h] BYREF
  _QWORD v52[4]; // [rsp+130h] [rbp-1D8h] BYREF
  _QWORD v53[4]; // [rsp+150h] [rbp-1B8h] BYREF
  _QWORD v54[4]; // [rsp+170h] [rbp-198h] BYREF
  _QWORD v55[4]; // [rsp+190h] [rbp-178h] BYREF
  _QWORD v56[4]; // [rsp+1B0h] [rbp-158h] BYREF
  __m128i v57; // [rsp+1D0h] [rbp-138h] BYREF
  __int64 v58; // [rsp+1E0h] [rbp-128h]
  __int64 v59; // [rsp+1E8h] [rbp-120h]
  __m128i v60; // [rsp+1F0h] [rbp-118h] BYREF
  __int64 v61; // [rsp+200h] [rbp-108h]
  __int64 v62; // [rsp+208h] [rbp-100h]
  __m128i v63; // [rsp+210h] [rbp-F8h] BYREF
  __int64 v64; // [rsp+220h] [rbp-E8h]
  __int64 v65; // [rsp+228h] [rbp-E0h]
  __m128i v66; // [rsp+230h] [rbp-D8h] BYREF
  __int64 v67; // [rsp+240h] [rbp-C8h]
  __int64 v68; // [rsp+248h] [rbp-C0h]
  __m128i v69; // [rsp+250h] [rbp-B8h] BYREF
  __int64 v70; // [rsp+260h] [rbp-A8h]
  __int64 v71; // [rsp+268h] [rbp-A0h]
  __m128i v72; // [rsp+270h] [rbp-98h] BYREF
  __int64 v73; // [rsp+280h] [rbp-88h]
  __int64 v74; // [rsp+288h] [rbp-80h]
  __m128i v75; // [rsp+290h] [rbp-78h] BYREF
  __int64 v76; // [rsp+2A0h] [rbp-68h]
  __int64 v77; // [rsp+2A8h] [rbp-60h]
  __int64 v78; // [rsp+2B0h] [rbp-58h] BYREF
  __int64 v79; // [rsp+2B8h] [rbp-50h]
  __int64 v80; // [rsp+2C0h] [rbp-48h]
  __int64 v81; // [rsp+2C8h] [rbp-40h]

  v39 = a2;
  v40 = a3;
  if ( (_DWORD)a2 )
  {
    result = (__int64)sub_101B340(v48, (unsigned int *)&v39, (*(_BYTE *)(a1[2] + 1LL) & 0x20) != 0);
    if ( v48[0] )
    {
      sub_101B390((__int64)&v57, (int *)&v39);
      v4 = v59;
      if ( v59 )
      {
        v15 = v58;
        v16 = *(_BYTE *)(a1[2] + 1LL);
        v41 = _mm_load_si128(&v57);
        sub_101B340(v50, (unsigned int *)&v41, (v16 & 0x20) != 0);
        sub_101B390((__int64)&v60, v41.m128i_i32);
        v17 = v62;
        v18 = v61;
        v42 = _mm_load_si128(&v60);
        if ( v62 )
        {
          sub_101B340(v51, (unsigned int *)&v42, (*(_BYTE *)(a1[2] + 1LL) & 0x20) != 0);
          sub_101B390((__int64)&v63, v42.m128i_i32);
          v20 = v65;
          v43 = _mm_load_si128(&v63);
          v28 = v64;
          if ( v65 )
          {
            sub_101B340(v52, (unsigned int *)&v43, (*(_BYTE *)(a1[2] + 1LL) & 0x20) != 0);
            sub_101B390((__int64)&v66, v43.m128i_i32);
            v30 = v67;
            v44 = _mm_load_si128(&v66);
            v29 = v68;
            if ( v68 )
            {
              sub_101B340(v53, (unsigned int *)&v44, (*(_BYTE *)(a1[2] + 1LL) & 0x20) != 0);
              sub_101B390((__int64)&v69, v44.m128i_i32);
              v31 = v70;
              v45 = _mm_load_si128(&v69);
              v32 = v71;
              if ( v71 )
              {
                sub_101B340(v54, (unsigned int *)&v45, (*(_BYTE *)(a1[2] + 1LL) & 0x20) != 0);
                sub_101B390((__int64)&v72, v45.m128i_i32);
                v23 = v74;
                v35 = v73;
                v24 = v32;
                v46 = _mm_load_si128(&v72);
                v36 = v74;
                if ( v74 )
                {
                  v37 = v32;
                  sub_101B340(v55, (unsigned int *)&v46, (*(_BYTE *)(a1[2] + 1LL) & 0x20) != 0);
                  sub_101B390((__int64)&v75, v46.m128i_i32);
                  v25 = v36;
                  v38 = v77;
                  v33 = v76;
                  v26 = v37;
                  v47 = _mm_load_si128(&v75);
                  if ( v77 )
                  {
                    sub_101B340(v56, (unsigned int *)&v47, (*(_BYTE *)(a1[2] + 1LL) & 0x20) != 0);
                    sub_101B390((__int64)&v78, v47.m128i_i32);
                    sub_13616F0(a1, (unsigned int)v78, v79, v80, v81);
                    (*(void (__fastcall **)(_QWORD *, _QWORD, __int64, __int64, __int64, __int64, _QWORD, _QWORD, _QWORD))(*a1 + 48LL))(
                      a1,
                      v47.m128i_u32[0],
                      v47.m128i_i64[1],
                      v33,
                      v38,
                      v27,
                      v56[0],
                      v56[1],
                      v56[2]);
                    v26 = v37;
                    v25 = v36;
                  }
                  v34 = v26;
                  (*(void (__fastcall **)(_QWORD *, _QWORD, __int64, __int64, __int64, __int64, _QWORD, _QWORD, _QWORD))(*a1 + 48LL))(
                    a1,
                    v46.m128i_u32[0],
                    v46.m128i_i64[1],
                    v35,
                    v25,
                    v25,
                    v55[0],
                    v55[1],
                    v55[2]);
                  v24 = v34;
                }
                (*(void (__fastcall **)(_QWORD *, _QWORD, __int64, __int64, __int64, __int64, _QWORD, _QWORD, _QWORD))(*a1 + 48LL))(
                  a1,
                  v45.m128i_u32[0],
                  v45.m128i_i64[1],
                  v31,
                  v24,
                  v23,
                  v54[0],
                  v54[1],
                  v54[2]);
              }
              (*(void (__fastcall **)(_QWORD *, _QWORD, __int64, __int64, __int64, __int64, _QWORD, _QWORD, _QWORD))(*a1 + 48LL))(
                a1,
                v44.m128i_u32[0],
                v44.m128i_i64[1],
                v30,
                v29,
                v22,
                v53[0],
                v53[1],
                v53[2]);
            }
            (*(void (__fastcall **)(_QWORD *, _QWORD, __int64, __int64, __int64, __int64, _QWORD, _QWORD, _QWORD))(*a1 + 48LL))(
              a1,
              v43.m128i_u32[0],
              v43.m128i_i64[1],
              v28,
              v20,
              v21,
              v52[0],
              v52[1],
              v52[2]);
          }
          (*(void (__fastcall **)(_QWORD *, _QWORD, __int64, __int64, __int64, __int64, _QWORD, _QWORD, _QWORD))(*a1 + 48LL))(
            a1,
            v42.m128i_u32[0],
            v42.m128i_i64[1],
            v18,
            v17,
            v19,
            v51[0],
            v51[1],
            v51[2]);
        }
        return (*(__int64 (__fastcall **)(_QWORD *, _QWORD, __int64, __int64, __int64, _QWORD, _QWORD, _QWORD, _QWORD))(*a1 + 48LL))(
                 a1,
                 v41.m128i_u32[0],
                 v41.m128i_i64[1],
                 v15,
                 v4,
                 *(_QWORD *)(*a1 + 48LL),
                 v50[0],
                 v50[1],
                 v50[2]);
      }
      else
      {
        sub_1361790(a1, HIDWORD(v49), v40);
        return (*(__int64 (__fastcall **)(_QWORD *, _QWORD, __int64, __int64, __int64, __int64, _QWORD, _QWORD, __int64))(*a1 + 40LL))(
                 a1,
                 (unsigned int)v39,
                 v40,
                 v5,
                 v6,
                 v7,
                 v48[0],
                 v48[1],
                 v49);
      }
    }
  }
  else
  {
    result = *(unsigned int *)(a3 + 664);
    v8 = *(_QWORD *)(a3 + 656);
    for ( i = v8 + 48 * result;
          i != v8;
          result = v13(a1, *(unsigned int *)(v8 - 16), *(_QWORD *)(v8 - 8), v11, v12, v14, v78, v79, v80) )
    {
      v10 = (unsigned int *)(v8 + 32);
      v8 += 48;
      v11 = *(_QWORD *)(v8 - 48);
      v12 = *(_QWORD *)(v8 - 40);
      v13 = *(__int64 (__fastcall **)(_QWORD *, _QWORD, _QWORD, __int64, __int64, __int64, __int64, __int64, __int64))(*a1 + 56LL);
      sub_101B340(&v78, v10, (*(_BYTE *)(a1[2] + 1LL) & 0x20) != 0);
    }
  }
  return result;
}
