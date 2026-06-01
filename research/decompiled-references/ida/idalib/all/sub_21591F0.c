_QWORD *__fastcall sub_21591F0(_QWORD *a1, _QWORD *a2, __int64 a3, __int64 *a4, _QWORD *a5, _BYTE *a6)
{
  __int64 v6; // r10
  unsigned __int64 v8; // rbp
  bool v9; // zf
  __m128i *v10; // rax
  __int64 v11; // r8
  __int64 v13; // rdi
  __int64 v14; // r14
  __int64 v15; // rdx
  __int64 v16; // r13
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  _QWORD v47[2]; // [rsp+18h] [rbp-250h] BYREF
  __int64 v48; // [rsp+28h] [rbp-240h] BYREF
  __m128i v49[2]; // [rsp+30h] [rbp-238h] BYREF
  __int16 v50; // [rsp+50h] [rbp-218h]
  __m128i v51[2]; // [rsp+60h] [rbp-208h] BYREF
  __int16 v52; // [rsp+80h] [rbp-1E8h]
  __m128i v53; // [rsp+90h] [rbp-1D8h] BYREF
  const char *v54; // [rsp+A0h] [rbp-1C8h]
  __int16 v55; // [rsp+B0h] [rbp-1B8h]
  __m128i v56; // [rsp+C0h] [rbp-1A8h] BYREF
  __int64 v57; // [rsp+D0h] [rbp-198h]
  __int16 v58; // [rsp+E0h] [rbp-188h]
  __m128i v59; // [rsp+F0h] [rbp-178h] BYREF
  _QWORD *v60; // [rsp+100h] [rbp-168h]
  __int64 v61; // [rsp+108h] [rbp-160h]
  __int16 v62; // [rsp+110h] [rbp-158h]
  __m128i v63[2]; // [rsp+120h] [rbp-148h] BYREF
  __int16 v64; // [rsp+140h] [rbp-128h]
  __m128i v65; // [rsp+150h] [rbp-118h] BYREF
  const char *v66; // [rsp+160h] [rbp-108h]
  __int64 v67; // [rsp+168h] [rbp-100h]
  char v68; // [rsp+170h] [rbp-F8h]
  char v69; // [rsp+171h] [rbp-F7h]
  __m128i v70; // [rsp+180h] [rbp-E8h] BYREF
  __int64 v71; // [rsp+190h] [rbp-D8h]
  __int16 v72; // [rsp+1A0h] [rbp-C8h]
  __m128i v73; // [rsp+1B0h] [rbp-B8h] BYREF
  const char *v74; // [rsp+1C0h] [rbp-A8h]
  __int64 v75; // [rsp+1C8h] [rbp-A0h]
  __int64 v76; // [rsp+1D0h] [rbp-98h]
  __m128i v77; // [rsp+1E0h] [rbp-88h] BYREF
  __m128i *v78; // [rsp+1F0h] [rbp-78h]
  __int64 v79; // [rsp+1F8h] [rbp-70h]
  __int64 v80; // [rsp+200h] [rbp-68h]
  __m128i v81; // [rsp+210h] [rbp-58h] BYREF
  __int64 v82; // [rsp+230h] [rbp-38h]

  v8 = a2[1];
  v47[0] = a3;
  v48 = a3 + 114;
  if ( a3 + 114 <= v8 )
  {
    v13 = a3 + *a2;
    *a4 = v13;
    v14 = sub_2157B00(v13);
    v16 = v15;
    if ( (unsigned __int8)sub_2247970(v14, v15, 10, &v81) )
    {
      v70.m128i_i64[1] = v16;
      v81.m128i_i64[0] = (__int64)"\" is not a number";
      v9 = *a6 == 0;
      v70.m128i_i64[0] = v14;
      LOWORD(v82) = 259;
      v72 = 261;
      v63[0].m128i_i64[0] = (__int64)" global symbol table size \"";
      v64 = 259;
      v62 = 257;
      if ( !v9 )
      {
        v59.m128i_i64[0] = (__int64)a6;
        LOBYTE(v62) = 3;
      }
      sub_A41580(&v65, &v59, v63, v17, (__int64)a5, (__int64)a6);
      sub_A41580(&v73, &v65, &v70, v35, v36, v37);
      sub_A41580(&v77, &v73, &v81, v38, v39, v40);
      sub_2158040(a1, (__int64)&v73, v41, v42, v43, v44, v77.m128i_i8[0]);
    }
    else
    {
      v18 = v81.m128i_i64[0];
      *a5 = v81.m128i_i64[0];
      if ( v48 + v18 <= v8 )
      {
        *a1 = 0;
      }
      else
      {
        v70.m128i_i64[0] = (__int64)a5;
        v77.m128i_i64[0] = (__int64)" goes past the end of file";
        v9 = *a6 == 0;
        LOWORD(v80) = 259;
        v63[0].m128i_i64[0] = (__int64)" and size 0x";
        v56.m128i_i64[0] = (__int64)&v48;
        v71 = 0;
        v72 = 271;
        v64 = 259;
        v57 = 0;
        v58 = 271;
        v51[0].m128i_i64[0] = (__int64)" global symbol table content at offset 0x";
        v52 = 259;
        v50 = 257;
        if ( !v9 )
        {
          v49[0].m128i_i64[0] = (__int64)a6;
          LOBYTE(v50) = 3;
        }
        sub_A41580(&v53, v49, v51, 259, 257, (__int64)a6);
        sub_A41580(&v59, &v53, &v56, v19, v20, v21);
        sub_A41580(&v65, &v59, v63, v22, v23, v24);
        sub_A41580(&v73, &v65, &v70, v25, v26, v27);
        sub_A41580(&v81, &v73, &v77, v28, v29, v30);
        sub_2158040(a1, (__int64)&v73, v31, v32, v33, v34, v81.m128i_i8[0]);
      }
    }
  }
  else
  {
    v9 = *a6 == 0;
    v81.m128i_i64[0] = (__int64)" goes past the end of file";
    LOWORD(v82) = 259;
    v51[0].m128i_i64[0] = 114;
    v70.m128i_i64[0] = (__int64)v51;
    v71 = 0;
    v72 = 271;
    v63[0].m128i_i64[0] = (__int64)" and size 0x";
    v64 = 259;
    v56.m128i_i64[0] = (__int64)v47;
    v57 = 0;
    v58 = 271;
    if ( v9 )
    {
      v10 = (__m128i *)" global symbol table header at offset 0x";
      v6 = v53.m128i_i64[1];
      v53.m128i_i64[0] = (__int64)" global symbol table header at offset 0x";
      v55 = 259;
      v11 = 3;
    }
    else
    {
      v53.m128i_i64[0] = (__int64)a6;
      v11 = 2;
      v54 = " global symbol table header at offset 0x";
      v10 = &v53;
      v55 = 771;
    }
    v59.m128i_i64[0] = (__int64)v10;
    v74 = " goes past the end of file";
    v61 = v56.m128i_i64[1];
    v65.m128i_i64[0] = (__int64)&v59;
    v60 = v47;
    v67 = v63[0].m128i_i64[1];
    v77.m128i_i64[0] = (__int64)&v65;
    v59.m128i_i64[1] = v6;
    v79 = v70.m128i_i64[1];
    LOBYTE(v62) = v11;
    HIBYTE(v62) = 15;
    v65.m128i_i64[1] = 0;
    v66 = " and size 0x";
    v68 = 2;
    v69 = 3;
    v77.m128i_i64[1] = 0;
    v78 = v51;
    LOWORD(v80) = 3842;
    v73.m128i_i64[0] = (__int64)&v77;
    v73.m128i_i64[1] = 0;
    v75 = v81.m128i_i64[1];
    LOWORD(v76) = 770;
    sub_2158040(a1, (__int64)" and size 0x", v81.m128i_i64[1], (__int64)v51, v11, (__int64)a6, (char)&v77);
  }
  return a1;
}
