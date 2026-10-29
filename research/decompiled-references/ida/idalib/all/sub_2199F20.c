__int64 *__fastcall sub_2199F20(
        __int64 *a1,
        __int64 a2,
        const __m128i **a3,
        __int64 a4,
        __int64 a5,
        const __m128i **a6,
        _BYTE *a7,
        std::__detail::_List_node_base *a8)
{
  __int32 v8; // r15d
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rax
  bool v26; // zf
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rdx
  __int64 v34; // rcx
  unsigned __int32 v35; // r12d
  unsigned __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  const char *v40; // rax
  __int64 v41; // rcx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // rdx
  char *v46; // rax
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // r9
  unsigned __int64 v54; // [rsp+0h] [rbp-258h]
  unsigned __int32 v55; // [rsp+8h] [rbp-250h]
  const __m128i **v56; // [rsp+8h] [rbp-250h]
  unsigned int v57; // [rsp+10h] [rbp-248h]
  unsigned int v58; // [rsp+14h] [rbp-244h]
  unsigned int v59; // [rsp+18h] [rbp-240h]
  unsigned int v60; // [rsp+1Ch] [rbp-23Ch]
  unsigned int v61; // [rsp+20h] [rbp-238h]
  unsigned int v62; // [rsp+24h] [rbp-234h]
  unsigned int v63; // [rsp+28h] [rbp-230h]
  unsigned int v64; // [rsp+2Ch] [rbp-22Ch]
  __m128i v65[2]; // [rsp+30h] [rbp-228h] BYREF
  __int16 v66; // [rsp+50h] [rbp-208h]
  __m128i v67[2]; // [rsp+60h] [rbp-1F8h] BYREF
  __int16 v68; // [rsp+80h] [rbp-1D8h]
  __m128i v69[2]; // [rsp+90h] [rbp-1C8h] BYREF
  __int16 v70; // [rsp+B0h] [rbp-1A8h]
  __m128i v71[2]; // [rsp+C0h] [rbp-198h] BYREF
  __int16 v72; // [rsp+E0h] [rbp-178h]
  __m128i v73[2]; // [rsp+F0h] [rbp-168h] BYREF
  __int16 v74; // [rsp+110h] [rbp-148h]
  __m128i v75[2]; // [rsp+120h] [rbp-138h] BYREF
  __int16 v76; // [rsp+140h] [rbp-118h]
  __m128i v77[2]; // [rsp+150h] [rbp-108h] BYREF
  __int16 v78; // [rsp+170h] [rbp-E8h]
  __m128i v79[2]; // [rsp+180h] [rbp-D8h] BYREF
  __int16 v80; // [rsp+1A0h] [rbp-B8h]
  __m128i v81[2]; // [rsp+1B0h] [rbp-A8h] BYREF
  __int16 v82; // [rsp+1D0h] [rbp-88h]
  __m128i v83; // [rsp+1E0h] [rbp-78h] BYREF
  unsigned int v84; // [rsp+1F0h] [rbp-68h]
  unsigned int v85; // [rsp+1F4h] [rbp-64h]
  unsigned int v86; // [rsp+1F8h] [rbp-60h]
  unsigned int v87; // [rsp+1FCh] [rbp-5Ch]
  unsigned int v88; // [rsp+200h] [rbp-58h]
  unsigned int v89; // [rsp+204h] [rbp-54h]
  unsigned int v90; // [rsp+208h] [rbp-50h]
  unsigned int v91; // [rsp+20Ch] [rbp-4Ch]
  char v92; // [rsp+210h] [rbp-48h]

  v8 = a5;
  if ( (unsigned int)a4 > 0x2F )
  {
    if ( *a6 )
    {
      v83.m128i_i64[0] = (__int64)"more than one LC_DYLD_INFO and or LC_DYLD_INFO_ONLY command";
      LOWORD(v88) = 259;
      sub_21967F0(a1, v83.m128i_i64, (__int64)a3, a4);
      return a1;
    }
    sub_2198510(&v83, a2, *a3);
    v24 = (__int64)a6;
    if ( (v92 & 1) != 0 )
    {
      v25 = v83.m128i_i64[0];
      v83.m128i_i64[0] = 0;
      *a1 = v25;
LABEL_10:
      sub_2199F00(v83.m128i_i64);
      return a1;
    }
    if ( v83.m128i_i32[1] != 48 )
    {
      v75[0].m128i_i32[0] = v8;
      v79[0].m128i_i64[0] = (__int64)" has incorrect cmdsize";
      v71[0].m128i_i64[0] = (__int64)" command ";
      v80 = 259;
      v76 = 265;
      v26 = *a7 == 0;
      v72 = 259;
      v70 = 257;
      if ( !v26 )
      {
        v69[0].m128i_i64[0] = (__int64)a7;
        LOBYTE(v70) = 3;
      }
      goto LABEL_14;
    }
    v35 = v83.m128i_u32[2];
    v55 = v83.m128i_u32[3];
    v57 = v84;
    v58 = v85;
    v59 = v86;
    v60 = v87;
    v61 = v88;
    v62 = v89;
    v63 = v90;
    v64 = v91;
    sub_215DEC0(a2);
    v39 = (__int64)a6;
    if ( v36 < v35 )
    {
      v38 = 259;
      v39 = 265;
      v79[0].m128i_i64[0] = (__int64)" extends past the end of the file";
      v71[0].m128i_i64[0] = (__int64)" command ";
      v80 = 259;
      v26 = *a7 == 0;
      v76 = 265;
      v75[0].m128i_i32[0] = v8;
      v72 = 259;
      v68 = 257;
      if ( !v26 )
      {
        v67[0].m128i_i64[0] = (__int64)a7;
        LOBYTE(v68) = 3;
      }
      v40 = "rebase_off field of ";
LABEL_20:
      v65[0].m128i_i64[0] = (__int64)v40;
      v66 = 259;
      sub_A41580(v69, v65, v67, v37, v38, v39);
LABEL_14:
      sub_A41580(v73, v69, v71, v22, v23, v24);
      sub_A41580(v77, v73, v75, v27, v28, v29);
LABEL_15:
      sub_A41580(v81, v77, v79, v30, v31, v32);
      sub_21967F0(a1, v81[0].m128i_i64, v33, v34);
      goto LABEL_10;
    }
    v41 = v55;
    if ( v36 < v35 + (unsigned __int64)v55 )
    {
      v37 = 259;
      v79[0].m128i_i64[0] = (__int64)" extends past the end of the file";
      v80 = 259;
      v71[0].m128i_i64[0] = (__int64)" command ";
      v76 = 265;
      v26 = *a7 == 0;
      v75[0].m128i_i32[0] = v8;
      v72 = 259;
      v68 = 257;
      if ( !v26 )
      {
        v67[0].m128i_i64[0] = (__int64)a7;
        LOBYTE(v68) = 3;
      }
      v40 = "rebase_off field plus rebase_size field of ";
      goto LABEL_20;
    }
    v56 = a6;
    v54 = v36;
    sub_2197C60(v81[0].m128i_i64, a8, v35, v41, "dyld rebase info");
    v44 = (__int64)v56;
    v45 = v81[0].m128i_i64[0];
    if ( v81[0].m128i_i64[0] )
    {
LABEL_26:
      *a1 = v45;
      goto LABEL_10;
    }
    if ( v54 >= v57 )
    {
      v42 = v58;
      if ( v54 >= v57 + (unsigned __int64)v58 )
      {
        sub_2197C60(v81[0].m128i_i64, a8, v57, v58, "dyld bind info");
        v44 = (__int64)v56;
        v45 = v81[0].m128i_i64[0];
        if ( v81[0].m128i_i64[0] )
          goto LABEL_26;
        if ( v54 >= v59 )
        {
          v42 = v60;
          if ( v54 >= v59 + (unsigned __int64)v60 )
          {
            sub_2197C60(v81[0].m128i_i64, a8, v59, v60, "dyld weak bind info");
            v44 = (__int64)v56;
            v45 = v81[0].m128i_i64[0];
            if ( v81[0].m128i_i64[0] )
              goto LABEL_26;
            if ( v54 >= v61 )
            {
              v42 = v62;
              if ( v54 >= v61 + (unsigned __int64)v62 )
              {
                sub_2197C60(v81[0].m128i_i64, a8, v61, v62, "dyld lazy bind info");
                v44 = (__int64)v56;
                v45 = v81[0].m128i_i64[0];
                if ( v81[0].m128i_i64[0] )
                  goto LABEL_26;
                if ( v54 >= v63 )
                {
                  v42 = v64;
                  if ( v54 >= v63 + (unsigned __int64)v64 )
                  {
                    sub_2197C60(v81[0].m128i_i64, a8, v63, v64, "dyld export info");
                    if ( v81[0].m128i_i64[0] )
                    {
                      *a1 = v81[0].m128i_i64[0];
                    }
                    else
                    {
                      *v56 = *a3;
                      *a1 = 0;
                    }
                    goto LABEL_10;
                  }
                  v75[0].m128i_i32[0] = v8;
                  v79[0].m128i_i64[0] = (__int64)" extends past the end of the file";
                  v71[0].m128i_i64[0] = (__int64)" command ";
                  v80 = 259;
                  v76 = 265;
                  v26 = *a7 == 0;
                  v72 = 259;
                  v68 = 257;
                  if ( !v26 )
                  {
                    v67[0].m128i_i64[0] = (__int64)a7;
                    LOBYTE(v68) = 3;
                  }
                  v46 = "export_off field plus export_size field of ";
                }
                else
                {
                  v75[0].m128i_i32[0] = v8;
                  v79[0].m128i_i64[0] = (__int64)" extends past the end of the file";
                  v71[0].m128i_i64[0] = (__int64)" command ";
                  v80 = 259;
                  v76 = 265;
                  v26 = *a7 == 0;
                  v72 = 259;
                  v68 = 257;
                  if ( !v26 )
                  {
                    v67[0].m128i_i64[0] = (__int64)a7;
                    LOBYTE(v68) = 3;
                  }
                  v46 = "export_off field of ";
                }
              }
              else
              {
                v75[0].m128i_i32[0] = v8;
                v79[0].m128i_i64[0] = (__int64)" extends past the end of the file";
                v71[0].m128i_i64[0] = (__int64)" command ";
                v80 = 259;
                v76 = 265;
                v26 = *a7 == 0;
                v72 = 259;
                v68 = 257;
                if ( !v26 )
                {
                  v67[0].m128i_i64[0] = (__int64)a7;
                  LOBYTE(v68) = 3;
                }
                v46 = "lazy_bind_off field plus lazy_bind_size field of ";
              }
            }
            else
            {
              v75[0].m128i_i32[0] = v8;
              v79[0].m128i_i64[0] = (__int64)" extends past the end of the file";
              v71[0].m128i_i64[0] = (__int64)" command ";
              v80 = 259;
              v76 = 265;
              v26 = *a7 == 0;
              v72 = 259;
              v68 = 257;
              if ( !v26 )
              {
                v67[0].m128i_i64[0] = (__int64)a7;
                LOBYTE(v68) = 3;
              }
              v46 = "lazy_bind_off field of ";
            }
          }
          else
          {
            v75[0].m128i_i32[0] = v8;
            v79[0].m128i_i64[0] = (__int64)" extends past the end of the file";
            v71[0].m128i_i64[0] = (__int64)" command ";
            v80 = 259;
            v76 = 265;
            v26 = *a7 == 0;
            v72 = 259;
            v68 = 257;
            if ( !v26 )
            {
              v67[0].m128i_i64[0] = (__int64)a7;
              LOBYTE(v68) = 3;
            }
            v46 = "weak_bind_off field plus weak_bind_size field of ";
          }
        }
        else
        {
          v75[0].m128i_i32[0] = v8;
          v79[0].m128i_i64[0] = (__int64)" extends past the end of the file";
          v71[0].m128i_i64[0] = (__int64)" command ";
          v80 = 259;
          v76 = 265;
          v26 = *a7 == 0;
          v72 = 259;
          v68 = 257;
          if ( !v26 )
          {
            v67[0].m128i_i64[0] = (__int64)a7;
            LOBYTE(v68) = 3;
          }
          v46 = "weak_bind_off field of ";
        }
      }
      else
      {
        v75[0].m128i_i32[0] = v8;
        v79[0].m128i_i64[0] = (__int64)" extends past the end of the file";
        v71[0].m128i_i64[0] = (__int64)" command ";
        v80 = 259;
        v76 = 265;
        v26 = *a7 == 0;
        v72 = 259;
        v68 = 257;
        if ( !v26 )
        {
          v67[0].m128i_i64[0] = (__int64)a7;
          LOBYTE(v68) = 3;
        }
        v46 = "bind_off field plus bind_size field of ";
      }
    }
    else
    {
      v75[0].m128i_i32[0] = v8;
      v79[0].m128i_i64[0] = (__int64)" extends past the end of the file";
      v71[0].m128i_i64[0] = (__int64)" command ";
      v80 = 259;
      v76 = 265;
      v26 = *a7 == 0;
      v72 = 259;
      v68 = 257;
      if ( !v26 )
      {
        v67[0].m128i_i64[0] = (__int64)a7;
        LOBYTE(v68) = 3;
      }
      v46 = "bind_off field of ";
    }
    v65[0].m128i_i64[0] = (__int64)v46;
    v66 = 259;
    sub_A41580(v69, v65, v67, v42, v43, v44);
    sub_A41580(v73, v69, v71, v47, v48, v49);
    sub_A41580(v77, v73, v75, v50, v51, v52);
    goto LABEL_15;
  }
  v81[0].m128i_i64[0] = (__int64)" cmdsize too small";
  v82 = 259;
  v78 = 257;
  if ( *a7 )
  {
    v77[0].m128i_i64[0] = (__int64)a7;
    LOBYTE(v78) = 3;
  }
  v69[0].m128i_i32[0] = a5;
  v73[0].m128i_i64[0] = (__int64)" ";
  v74 = 259;
  v70 = 265;
  v67[0].m128i_i64[0] = (__int64)"load command ";
  v68 = 259;
  sub_A41580(v71, v67, v69, a4, a5, (__int64)a6);
  sub_A41580(v75, v71, v73, v9, v10, v11);
  sub_A41580(v79, v75, v77, v12, v13, v14);
  sub_A41580(&v83, v79, v81, v15, v16, v17);
  sub_21967F0(a1, v83.m128i_i64, v18, v19);
  return a1;
}
