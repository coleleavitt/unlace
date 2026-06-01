__int64 *__fastcall sub_2199A20(
        __int64 *a1,
        __int64 a2,
        unsigned __int64 **a3,
        __int64 a4,
        __int64 a5,
        unsigned __int64 **a6,
        _BYTE *a7,
        std::__detail::_List_node_base *a8,
        _BYTE *a9)
{
  bool v9; // zf
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rax
  unsigned __int64 v32; // r13
  unsigned __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r9
  const char *v36; // rax
  unsigned __int32 v37; // [rsp+8h] [rbp-220h]
  unsigned int v39; // [rsp+1Ch] [rbp-20Ch]
  __int64 v40; // [rsp+20h] [rbp-208h] BYREF
  unsigned int v41; // [rsp+28h] [rbp-200h]
  unsigned int v42; // [rsp+2Ch] [rbp-1FCh]
  char v43; // [rsp+30h] [rbp-1F8h]
  __m128i v44[2]; // [rsp+40h] [rbp-1E8h] BYREF
  __int16 v45; // [rsp+60h] [rbp-1C8h]
  __m128i v46[2]; // [rsp+70h] [rbp-1B8h] BYREF
  __int16 v47; // [rsp+90h] [rbp-198h]
  __m128i v48[2]; // [rsp+A0h] [rbp-188h] BYREF
  __int16 v49; // [rsp+C0h] [rbp-168h]
  __m128i v50[2]; // [rsp+D0h] [rbp-158h] BYREF
  __int16 v51; // [rsp+F0h] [rbp-138h]
  __m128i v52[2]; // [rsp+100h] [rbp-128h] BYREF
  __int16 v53; // [rsp+120h] [rbp-108h]
  __m128i v54[2]; // [rsp+130h] [rbp-F8h] BYREF
  __int16 v55; // [rsp+150h] [rbp-D8h]
  __m128i v56[3]; // [rsp+160h] [rbp-C8h] BYREF
  __m128i v57[2]; // [rsp+190h] [rbp-98h] BYREF
  __int16 v58; // [rsp+1B0h] [rbp-78h]
  __m128i v59[6]; // [rsp+1C0h] [rbp-68h] BYREF

  if ( (unsigned int)a4 > 0xF )
  {
    if ( *a6 )
    {
      v9 = *a7 == 0;
      v57[0].m128i_i64[0] = (__int64)" command";
      v58 = 259;
      v55 = 257;
      if ( !v9 )
      {
        v54[0].m128i_i64[0] = (__int64)a7;
        LOBYTE(v55) = 3;
      }
      v52[0].m128i_i64[0] = (__int64)"more than one ";
      v53 = 259;
      goto LABEL_5;
    }
    v37 = a5;
    sub_21968E0((__int64)&v40, a2, *a3);
    v21 = v37;
    v22 = (__int64)a6;
    if ( (v43 & 1) != 0 )
    {
      v31 = v40;
      v40 = 0;
      *a1 = v31;
    }
    else
    {
      if ( HIDWORD(v40) == 16 )
      {
        v32 = v41;
        v39 = v42;
        sub_215DEC0(a2);
        v35 = (__int64)a6;
        if ( v33 >= v32 )
        {
          if ( v33 >= v32 + v39 )
          {
            sub_2197C60(v59[0].m128i_i64, a8, v32, v39, a9);
            if ( v59[0].m128i_i64[0] )
            {
              *a1 = v59[0].m128i_i64[0];
            }
            else
            {
              *a6 = *a3;
              *a1 = 0;
            }
            goto LABEL_16;
          }
          v34 = 259;
          v57[0].m128i_i64[0] = (__int64)" extends past the end of the file";
          v9 = *a7 == 0;
          v58 = 259;
          v55 = 265;
          v54[0].m128i_i32[0] = v37;
          v50[0].m128i_i64[0] = (__int64)" command ";
          v51 = 259;
          v47 = 257;
          if ( !v9 )
          {
            v46[0].m128i_i64[0] = (__int64)a7;
            LOBYTE(v47) = 3;
          }
          v36 = "dataoff field plus datasize field of ";
        }
        else
        {
          v35 = 259;
          v9 = *a7 == 0;
          v58 = 259;
          v57[0].m128i_i64[0] = (__int64)" extends past the end of the file";
          v55 = 265;
          v54[0].m128i_i32[0] = v37;
          v50[0].m128i_i64[0] = (__int64)" command ";
          v51 = 259;
          v47 = 257;
          if ( !v9 )
          {
            v46[0].m128i_i64[0] = (__int64)a7;
            LOBYTE(v47) = 3;
          }
          v36 = "dataoff field of ";
        }
        v44[0].m128i_i64[0] = (__int64)v36;
        v45 = 259;
        sub_A41580(v48, v44, v46, v34, v37, v35);
      }
      else
      {
        v9 = *a7 == 0;
        v57[0].m128i_i64[0] = (__int64)" has incorrect cmdsize";
        v50[0].m128i_i64[0] = (__int64)" command ";
        v51 = 259;
        v58 = 259;
        v55 = 265;
        v54[0].m128i_i32[0] = v37;
        v49 = 257;
        if ( !v9 )
        {
          v48[0].m128i_i64[0] = (__int64)a7;
          LOBYTE(v49) = 3;
        }
      }
      sub_A41580(v52, v48, v50, v20, v21, v22);
      sub_A41580(v56, v52, v54, v23, v24, v25);
      sub_A41580(v59, v56, v57, v26, v27, v28);
      sub_21967F0(a1, v59[0].m128i_i64, v29, v30);
    }
LABEL_16:
    sub_2199A00(&v40);
    return a1;
  }
  v9 = *a7 == 0;
  v57[0].m128i_i64[0] = (__int64)" cmdsize too small";
  v58 = 259;
  v55 = 257;
  if ( !v9 )
  {
    v54[0].m128i_i64[0] = (__int64)a7;
    LOBYTE(v55) = 3;
  }
  v46[0].m128i_i32[0] = a5;
  v47 = 265;
  v50[0].m128i_i64[0] = (__int64)" ";
  v51 = 259;
  v44[0].m128i_i64[0] = (__int64)"load command ";
  v45 = 259;
  sub_A41580(v48, v44, v46, 259, a5, (__int64)a6);
  sub_A41580(v52, v48, v50, v10, v11, v12);
LABEL_5:
  sub_A41580(v56, v52, v54, a4, a5, (__int64)a6);
  sub_A41580(v59, v56, v57, v13, v14, v15);
  sub_21967F0(a1, v59[0].m128i_i64, v16, v17);
  return a1;
}
