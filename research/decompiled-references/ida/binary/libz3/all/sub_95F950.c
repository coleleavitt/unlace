void __fastcall sub_95F950(__m128i *a1, const __m128i *a2, __int64 **a3, double a4, double a5, __m128 a6, __m128 a7)
{
  __int64 v8; // rax
  __m128i *v9; // r15
  __int64 v10; // r12
  __m128i *v11; // r13
  __int64 v12; // r10
  __int64 v13; // r11
  __int64 v14; // r10
  __int64 v15; // rax
  __int64 v16; // r11
  __int64 v17; // r10
  __int64 v18; // rax
  __int64 v19; // r10
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __m128i *v25; // r12
  __int64 v26; // rcx
  __int64 v27; // rax
  __m128i *v28; // r12
  __int64 v29; // r10
  __m128i *v30; // r13
  __int64 v31; // rax
  __int64 v32; // r8
  __m128i *v33; // r13
  __m128i *v34; // [rsp+8h] [rbp-90h]
  __int64 v35; // [rsp+8h] [rbp-90h]
  __int64 v36; // [rsp+10h] [rbp-88h]
  __m128i *v37; // [rsp+18h] [rbp-80h]
  __int64 v38; // [rsp+18h] [rbp-80h]
  __int64 v39; // [rsp+18h] [rbp-80h]
  __int64 v40; // [rsp+20h] [rbp-78h]
  __int64 v41; // [rsp+20h] [rbp-78h]
  __int64 v42; // [rsp+20h] [rbp-78h]
  __int64 v43; // [rsp+28h] [rbp-70h]
  __int64 v44; // [rsp+28h] [rbp-70h]
  __int64 v45; // [rsp+30h] [rbp-68h]
  __int64 v46; // [rsp+30h] [rbp-68h]
  __int64 v47; // [rsp+30h] [rbp-68h]
  __int64 v48; // [rsp+30h] [rbp-68h]
  __int64 v49; // [rsp+30h] [rbp-68h]
  __int64 v50; // [rsp+30h] [rbp-68h]
  __int64 v51; // [rsp+38h] [rbp-60h]
  __int64 v52; // [rsp+38h] [rbp-60h]
  __int64 v53; // [rsp+38h] [rbp-60h]
  __int64 v54; // [rsp+38h] [rbp-60h]
  __int64 v55; // [rsp+38h] [rbp-60h]
  __int64 v56; // [rsp+38h] [rbp-60h]
  __int64 v57; // [rsp+38h] [rbp-60h]
  __int64 v58; // [rsp+40h] [rbp-58h]
  __int64 v59; // [rsp+40h] [rbp-58h]
  __int64 v60; // [rsp+40h] [rbp-58h]
  __int64 v61; // [rsp+40h] [rbp-58h]
  __int64 v62; // [rsp+40h] [rbp-58h]
  __int64 v63; // [rsp+40h] [rbp-58h]
  __int64 v64; // [rsp+48h] [rbp-50h]
  __int64 v65; // [rsp+48h] [rbp-50h]
  __int64 v66; // [rsp+48h] [rbp-50h]
  __int64 v67; // [rsp+48h] [rbp-50h]
  __int64 v68; // [rsp+48h] [rbp-50h]
  __int64 v69; // [rsp+50h] [rbp-48h]
  __int64 v70; // [rsp+58h] [rbp-40h]

  if ( (char *)a2 - (char *)a1 <= 224 )
  {
    sub_95E9A0(a1, a2, a3, a4, a5, a6, a7);
  }
  else
  {
    v8 = ((char *)a2 - (char *)a1) >> 5;
    v9 = &a1[v8];
    v36 = (v8 * 16) >> 4;
    if ( (unsigned __int64)v8 <= 14 )
    {
      sub_95E9A0(a1, &a1[v8], a3, a4, a5, a6, a7);
    }
    else
    {
      v10 = 16 * ((v8 * 16) >> 5);
      v11 = &a1[(unsigned __int64)v10 / 0x10];
      v40 = v10 >> 4;
      if ( (unsigned __int64)v10 <= 0xE0 )
      {
        sub_95E9A0(a1, &a1[(unsigned __int64)v10 / 0x10], a3, a4, a5, a6, a7);
        v22 = 16 * (((char *)a2 - (char *)a1) >> 5);
      }
      else
      {
        v12 = 16 * (v10 >> 5);
        v34 = &a1[(unsigned __int64)v12 / 0x10];
        if ( (unsigned __int64)v12 <= 0xE0 )
        {
          sub_95E9A0(a1, v34, a3, a4, a5, a6, a7);
          v20 = 16 * (((char *)a2 - (char *)a1) >> 5);
          v19 = 16 * (v10 >> 5);
        }
        else
        {
          v13 = v12 >> 5;
          v37 = &a1[v13];
          v51 = (v13 * 16) >> 4;
          if ( (unsigned __int64)v13 <= 14 )
          {
            v68 = 16 * (v12 >> 5);
            sub_95E9A0(a1, &a1[v13], a3, a4, a5, a6, a7);
            v15 = 16 * (((char *)a2 - (char *)a1) >> 5);
            v14 = 16 * (v10 >> 5);
            v16 = v68;
          }
          else
          {
            v58 = 16 * (v12 >> 5);
            v64 = (v13 * 16) >> 5;
            sub_95F950(a1, &a1[v64], a3);
            sub_95F950(&a1[v64], v37, a3);
            sub_95EE00(
              a1->m128i_i8,
              a1[v64].m128i_i8,
              (__int64)v37,
              (v64 * 16) >> 4,
              (v58 - v64 * 16) >> 4,
              (__int64 *)a3);
            v14 = 16 * (v10 >> 5);
            v15 = 16 * (((char *)a2 - (char *)a1) >> 5);
            v16 = v58;
          }
          v45 = (v14 - v16) >> 4;
          if ( v14 - v16 <= 224 )
          {
            v67 = v14;
            v63 = v15;
            sub_95E9A0(v37, v34, a3, a4, a5, a6, a7);
            v18 = v63;
            v17 = v67;
          }
          else
          {
            v69 = v15;
            v70 = v14;
            v65 = (v14 - v16) >> 5;
            sub_95F950(v37, &v37[v65], a3);
            sub_95F950(&v37[v65], v34, a3);
            sub_95EE00(v37->m128i_i8, v37[v65].m128i_i8, (__int64)v34, (v65 * 16) >> 4, v34 - &v37[v65], (__int64 *)a3);
            v17 = v70;
            v18 = v69;
          }
          v66 = v17;
          v59 = v18;
          sub_95EE00(a1->m128i_i8, v37->m128i_i8, (__int64)v34, v51, v45, (__int64 *)a3);
          v19 = v66;
          v20 = v59;
        }
        v38 = (v10 - v19) >> 4;
        if ( v10 - v19 <= 224 )
        {
          v50 = v20;
          sub_95E9A0(v34, v11, a3, a4, a5, a6, a7);
          v21 = v50;
        }
        else
        {
          v60 = v20;
          v52 = (v10 - v19) >> 5;
          sub_95F950(v34, &v34[v52], a3);
          sub_95F950(&v34[v52], v11, a3);
          sub_95EE00(v34->m128i_i8, v34[v52].m128i_i8, (__int64)v11, (v52 * 16) >> 4, v11 - &v34[v52], (__int64 *)a3);
          v21 = v60;
        }
        v46 = v21;
        sub_95EE00(a1->m128i_i8, v34->m128i_i8, (__int64)v11, (16 * (v10 >> 5)) >> 4, v38, (__int64 *)a3);
        v22 = v46;
      }
      v23 = v22 - v10;
      v35 = v23 >> 4;
      if ( v23 <= 224 )
      {
        sub_95E9A0(v11, v9, a3, a4, a5, a6, a7);
      }
      else
      {
        v24 = v23 >> 5;
        v25 = &v11[v24];
        v43 = (v24 * 16) >> 4;
        if ( (unsigned __int64)v24 <= 14 )
        {
          sub_95E9A0(v11, &v11[v24], a3, a4, a5, a6, a7);
        }
        else
        {
          v53 = v24 * 16;
          v47 = (v24 * 16) >> 5;
          sub_95F950(v11, &v11[v47], a3);
          sub_95F950(&v11[v47], v25, a3);
          sub_95EE00(
            v11->m128i_i8,
            v11[v47].m128i_i8,
            (__int64)v25,
            (v47 * 16) >> 4,
            (v53 - v47 * 16) >> 4,
            (__int64 *)a3);
        }
        if ( (char *)v9 - (char *)v25 <= 224 )
        {
          sub_95E9A0(v25, v9, a3, a4, a5, a6, a7);
        }
        else
        {
          v54 = ((char *)v9 - (char *)v25) >> 5;
          sub_95F950(v25, &v25[v54], a3);
          sub_95F950(&v25[v54], v9, a3);
          sub_95EE00(v25->m128i_i8, v25[v54].m128i_i8, (__int64)v9, (v54 * 16) >> 4, v9 - &v25[v54], (__int64 *)a3);
        }
        sub_95EE00(v11->m128i_i8, v25->m128i_i8, (__int64)v9, v43, v9 - v25, (__int64 *)a3);
      }
      sub_95EE00(a1->m128i_i8, v11->m128i_i8, (__int64)v9, v40, v35, (__int64 *)a3);
    }
    if ( (char *)a2 - (char *)v9 <= 224 )
    {
      sub_95E9A0(v9, a2, a3, a4, a5, a6, a7);
    }
    else
    {
      v26 = ((char *)a2 - (char *)v9) >> 5;
      v27 = 16 * v26;
      v28 = &v9[v26];
      v39 = (16 * v26) >> 4;
      if ( (unsigned __int64)(16 * v26) <= 0xE0 )
      {
        sub_95E9A0(v9, &v9[v26], a3, a4, a5, a6, a7);
      }
      else
      {
        v29 = v27 >> 5;
        v30 = &v9[v29];
        v44 = (v29 * 16) >> 4;
        if ( (unsigned __int64)v29 <= 14 )
        {
          v48 = 16 * (v27 >> 5);
          v42 = 16 * v26;
          sub_95E9A0(v9, &v9[v29], a3, a4, a5, a6, a7);
          v31 = v42;
        }
        else
        {
          v61 = 16 * v26;
          v48 = 16 * (v27 >> 5);
          v55 = (v29 * 16) >> 5;
          sub_95F950(v9, &v9[v55], a3);
          sub_95F950(&v9[v55], v30, a3);
          sub_95EE00(
            v9->m128i_i8,
            v9[v55].m128i_i8,
            (__int64)v30,
            (v55 * 16) >> 4,
            (v48 - v55 * 16) >> 4,
            (__int64 *)a3);
          v31 = v61;
        }
        v41 = (v31 - v48) >> 4;
        if ( v31 - v48 <= 224 )
        {
          sub_95E9A0(v30, v28, a3, a4, a5, a6, a7);
        }
        else
        {
          v56 = (v31 - v48) >> 5;
          sub_95F950(v30, &v30[v56], a3);
          sub_95F950(&v30[v56], v28, a3);
          sub_95EE00(v30->m128i_i8, v30[v56].m128i_i8, (__int64)v28, (v56 * 16) >> 4, v28 - &v30[v56], (__int64 *)a3);
        }
        sub_95EE00(v9->m128i_i8, v30->m128i_i8, (__int64)v28, v44, v41, (__int64 *)a3);
      }
      if ( (char *)a2 - (char *)v28 <= 224 )
      {
        sub_95E9A0(v28, a2, a3, a4, a5, a6, a7);
      }
      else
      {
        v32 = ((char *)a2 - (char *)v28) >> 5;
        v33 = &v28[v32];
        v49 = (v32 * 16) >> 4;
        if ( (unsigned __int64)v32 <= 14 )
        {
          sub_95E9A0(v28, &v28[v32], a3, a4, a5, a6, a7);
        }
        else
        {
          v57 = (v32 * 16) >> 5;
          sub_95F950(v28, &v28[v57], a3);
          sub_95F950(&v28[v57], v33, a3);
          sub_95EE00(
            v28->m128i_i8,
            v28[v57].m128i_i8,
            (__int64)v33,
            (v57 * 16) >> 4,
            (16 * (((char *)a2 - (char *)v28) >> 5) - v57 * 16) >> 4,
            (__int64 *)a3);
        }
        if ( (char *)a2 - (char *)v33 <= 224 )
        {
          sub_95E9A0(v33, a2, a3, a4, a5, a6, a7);
        }
        else
        {
          v62 = ((char *)a2 - (char *)v33) >> 5;
          sub_95F950(v33, &v33[v62], a3);
          sub_95F950(&v33[v62], a2, a3);
          sub_95EE00(v33->m128i_i8, v33[v62].m128i_i8, (__int64)a2, (v62 * 16) >> 4, a2 - &v33[v62], (__int64 *)a3);
        }
        sub_95EE00(v28->m128i_i8, v33->m128i_i8, (__int64)a2, v49, a2 - v33, (__int64 *)a3);
      }
      sub_95EE00(v9->m128i_i8, v28->m128i_i8, (__int64)a2, v39, a2 - v28, (__int64 *)a3);
    }
    sub_95EE00(a1->m128i_i8, v9->m128i_i8, (__int64)a2, v36, a2 - v9, (__int64 *)a3);
  }
}

