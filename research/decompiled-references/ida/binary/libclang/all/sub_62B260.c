void __fastcall sub_62B260(unsigned __int16 **src, unsigned __int16 **a2)
{
  __int64 v3; // rbp
  unsigned __int16 **v4; // r12
  __int64 v5; // rbx
  unsigned __int16 **v6; // r14
  __int64 v7; // r9
  __int64 v8; // r10
  __int64 v9; // r9
  __int64 v10; // r9
  __int64 v11; // rax
  unsigned __int16 **v12; // rbx
  unsigned __int16 **v13; // rbp
  unsigned __int16 **v14; // rbp
  __int64 v15; // rcx
  unsigned __int16 **v16; // rbx
  __int64 v17; // r14
  __m128i *v18; // rbp
  __int64 v19; // r9
  __int64 v20; // rcx
  unsigned __int16 **v21; // rdi
  __m128i *v22; // r14
  __int64 v23; // r8
  unsigned __int16 **v24; // rbp
  unsigned __int16 **v25; // r14
  unsigned __int16 **v26; // r14
  unsigned __int16 **srca; // [rsp+0h] [rbp-88h]
  __int64 srcb; // [rsp+0h] [rbp-88h]
  __int64 v29; // [rsp+8h] [rbp-80h]
  unsigned __int16 **v30; // [rsp+10h] [rbp-78h]
  __int64 v31; // [rsp+10h] [rbp-78h]
  __int64 v32; // [rsp+10h] [rbp-78h]
  __int64 v33; // [rsp+10h] [rbp-78h]
  __int64 v34; // [rsp+18h] [rbp-70h]
  unsigned __int16 **v35; // [rsp+18h] [rbp-70h]
  __int64 v36; // [rsp+18h] [rbp-70h]
  __int64 v37; // [rsp+20h] [rbp-68h]
  __int64 v38; // [rsp+20h] [rbp-68h]
  __int64 v39; // [rsp+20h] [rbp-68h]
  __int64 v40; // [rsp+28h] [rbp-60h]
  void *v41; // [rsp+28h] [rbp-60h]
  __int64 v42; // [rsp+28h] [rbp-60h]
  __int64 v43; // [rsp+28h] [rbp-60h]
  __int64 v44; // [rsp+30h] [rbp-58h]
  __int64 v45; // [rsp+30h] [rbp-58h]
  void *v46; // [rsp+38h] [rbp-50h]
  __int64 v47; // [rsp+40h] [rbp-48h]
  __int64 v48; // [rsp+40h] [rbp-48h]

  if ( (char *)a2 - (char *)src <= 224 )
  {
    sub_629BA0(src, a2);
  }
  else
  {
    v3 = 16 * (((char *)a2 - (char *)src) >> 5);
    v4 = &src[(unsigned __int64)v3 / 8];
    v29 = v3 >> 4;
    if ( (unsigned __int64)v3 <= 0xE0 )
    {
      sub_629BA0(src, &src[(unsigned __int64)v3 / 8]);
    }
    else
    {
      v5 = 16 * (v3 >> 5);
      v6 = &src[(unsigned __int64)v5 / 8];
      v34 = v5 >> 4;
      if ( (unsigned __int64)v5 <= 0xE0 )
      {
        sub_629BA0(src, &src[(unsigned __int64)v5 / 8]);
      }
      else
      {
        v7 = 2 * (v5 >> 5);
        srca = &src[v7];
        if ( (unsigned __int64)v7 <= 28 )
        {
          sub_629BA0(src, srca);
          v10 = 16 * (v5 >> 5);
        }
        else
        {
          v8 = 16 * ((v7 * 8) >> 5);
          v30 = &src[(unsigned __int64)v8 / 8];
          v44 = v8 >> 4;
          v46 = (void *)v8;
          if ( (unsigned __int64)v8 <= 0xE0 )
          {
            sub_629BA0(src, v30);
          }
          else
          {
            v47 = 2 * (v8 >> 5);
            sub_62B260(src);
            sub_62B260(&src[v47]);
            sub_62A930((__m128i *)src, (__int64)&src[v47], (__int64)v30, (v47 * 8) >> 4, ((__int64)v46 - v47 * 8) >> 4);
          }
          v9 = 16 * (v5 >> 5);
          v40 = (v9 - (__int64)v46) >> 4;
          if ( v9 - (__int64)v46 <= 224 )
          {
            sub_629BA0(v30, srca);
          }
          else
          {
            v48 = 2 * ((v9 - (__int64)v46) >> 5);
            sub_62B260(v30);
            sub_62B260(&v30[v48]);
            sub_62A930(
              (__m128i *)v30,
              (__int64)&v30[v48],
              (__int64)srca,
              (v48 * 8) >> 4,
              ((char *)srca - (char *)&v30[v48]) >> 4);
          }
          sub_62A930((__m128i *)src, (__int64)v30, (__int64)srca, v44, v40);
          v10 = 16 * (v5 >> 5);
        }
        v31 = (v5 - v10) >> 4;
        if ( v5 - v10 <= 224 )
        {
          sub_629BA0(srca, v6);
        }
        else
        {
          v45 = 2 * ((v5 - v10) >> 5);
          sub_62B260(srca);
          sub_62B260(&srca[v45]);
          sub_62A930(
            (__m128i *)srca,
            (__int64)&srca[v45],
            (__int64)v6,
            (v45 * 8) >> 4,
            ((char *)v6 - (char *)&srca[v45]) >> 4);
        }
        sub_62A930((__m128i *)src, (__int64)srca, (__int64)v6, (16 * (v5 >> 5)) >> 4, v31);
      }
      srcb = (v3 - v5) >> 4;
      if ( v3 - v5 <= 224 )
      {
        sub_629BA0(v6, v4);
      }
      else
      {
        v11 = 16 * ((v3 - v5) >> 5);
        v12 = &v6[(unsigned __int64)v11 / 8];
        v32 = v11 >> 4;
        if ( (unsigned __int64)v11 <= 0xE0 )
        {
          sub_629BA0(v6, &v6[(unsigned __int64)v11 / 8]);
        }
        else
        {
          v41 = (void *)v11;
          v13 = &v6[2 * (v11 >> 5)];
          v37 = 16 * (v11 >> 5);
          sub_62B260(v6);
          sub_62B260(v13);
          sub_62A930((__m128i *)v6, (__int64)v13, (__int64)v12, v37 >> 4, ((__int64)v41 - v37) >> 4);
        }
        if ( (char *)v4 - (char *)v12 <= 224 )
        {
          sub_629BA0(v12, v4);
        }
        else
        {
          v14 = &v12[2 * (((char *)v4 - (char *)v12) >> 5)];
          sub_62B260(v12);
          sub_62B260(v14);
          sub_62A930(
            (__m128i *)v12,
            (__int64)v14,
            (__int64)v4,
            (16 * (((char *)v4 - (char *)v12) >> 5)) >> 4,
            ((char *)v4 - (char *)v14) >> 4);
        }
        sub_62A930((__m128i *)v6, (__int64)v12, (__int64)v4, v32, ((char *)v4 - (char *)v12) >> 4);
      }
      sub_62A930((__m128i *)src, (__int64)v6, (__int64)v4, v34, srcb);
    }
    if ( (char *)a2 - (char *)v4 <= 224 )
    {
      sub_629BA0(v4, a2);
    }
    else
    {
      v15 = 2 * (((char *)a2 - (char *)v4) >> 5);
      v16 = &v4[v15];
      v33 = (v15 * 8) >> 4;
      if ( (unsigned __int64)v15 <= 28 )
      {
        sub_629BA0(v4, &v4[v15]);
      }
      else
      {
        v17 = 16 * ((v15 * 8) >> 5);
        v18 = (__m128i *)&v4[(unsigned __int64)v17 / 8];
        v38 = v17 >> 4;
        if ( (unsigned __int64)v17 <= 0xE0 )
        {
          sub_629BA0(v4, &v4[(unsigned __int64)v17 / 8]);
        }
        else
        {
          v35 = &v4[2 * (v17 >> 5)];
          sub_62B260(v4);
          sub_62B260(v35);
          sub_62A930(
            (__m128i *)v4,
            (__int64)v35,
            (__int64)&v4[(unsigned __int64)v17 / 8],
            (16 * (v17 >> 5)) >> 4,
            (v17 - 16 * (v17 >> 5)) >> 4);
        }
        v19 = 16 * (((char *)a2 - (char *)v4) >> 5);
        v36 = (v19 - v17) >> 4;
        if ( v19 - v17 <= 224 )
        {
          sub_629BA0(&v4[(unsigned __int64)v17 / 8], v16);
        }
        else
        {
          v20 = (v19 - v17) >> 5;
          v21 = &v4[(unsigned __int64)v17 / 8];
          v22 = &v18[v20];
          v42 = 16 * v20;
          sub_62B260(v21);
          sub_62B260(v22);
          sub_62A930(v18, (__int64)v22, (__int64)v16, v42 >> 4, ((char *)v16 - (char *)v22) >> 4);
        }
        sub_62A930((__m128i *)v4, (__int64)v18, (__int64)v16, v38, v36);
      }
      if ( (char *)a2 - (char *)v16 <= 224 )
      {
        sub_629BA0(v16, a2);
      }
      else
      {
        v23 = 2 * (((char *)a2 - (char *)v16) >> 5);
        v24 = &v16[v23];
        v39 = (v23 * 8) >> 4;
        if ( (unsigned __int64)v23 <= 28 )
        {
          sub_629BA0(v16, &v16[v23]);
        }
        else
        {
          v25 = &v16[2 * ((v23 * 8) >> 5)];
          v43 = 16 * ((v23 * 8) >> 5);
          sub_62B260(v16);
          sub_62B260(v25);
          sub_62A930(
            (__m128i *)v16,
            (__int64)v25,
            (__int64)v24,
            v43 >> 4,
            (16 * (((char *)a2 - (char *)v16) >> 5) - v43) >> 4);
        }
        if ( (char *)a2 - (char *)v24 <= 224 )
        {
          sub_629BA0(v24, a2);
        }
        else
        {
          v26 = &v24[2 * (((char *)a2 - (char *)v24) >> 5)];
          sub_62B260(v24);
          sub_62B260(v26);
          sub_62A930(
            (__m128i *)v24,
            (__int64)v26,
            (__int64)a2,
            (16 * (((char *)a2 - (char *)v24) >> 5)) >> 4,
            ((char *)a2 - (char *)v26) >> 4);
        }
        sub_62A930((__m128i *)v16, (__int64)v24, (__int64)a2, v39, ((char *)a2 - (char *)v24) >> 4);
      }
      sub_62A930((__m128i *)v4, (__int64)v16, (__int64)a2, v33, ((char *)a2 - (char *)v16) >> 4);
    }
    sub_62A930((__m128i *)src, (__int64)v4, (__int64)a2, v29, ((char *)a2 - (char *)v4) >> 4);
  }
}

