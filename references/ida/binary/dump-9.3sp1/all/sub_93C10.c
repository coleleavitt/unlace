unsigned __int64 __fastcall sub_93C10(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v10; // r15
  __m128i v11; // xmm0
  __m128i v12; // xmm0
  __int64 v13; // r15
  size_t v14; // r13
  __m128i v15; // [rsp+0h] [rbp-210h] BYREF
  __int64 *v16; // [rsp+18h] [rbp-1F8h]
  __int64 v17; // [rsp+20h] [rbp-1F0h]
  __int64 *v18; // [rsp+28h] [rbp-1E8h]
  __int64 *v19; // [rsp+30h] [rbp-1E0h]
  __int64 *v20; // [rsp+38h] [rbp-1D8h]
  __int64 v21[2]; // [rsp+40h] [rbp-1D0h] BYREF
  __int64 v22[4]; // [rsp+50h] [rbp-1C0h] BYREF
  __int64 v23[2]; // [rsp+70h] [rbp-1A0h] BYREF
  void *src; // [rsp+80h] [rbp-190h] BYREF
  __int64 v25; // [rsp+88h] [rbp-188h]
  __int64 v26[2]; // [rsp+A0h] [rbp-170h] BYREF
  __int64 v27[4]; // [rsp+B0h] [rbp-160h] BYREF
  __int64 v28[2]; // [rsp+D0h] [rbp-140h] BYREF
  void *v29; // [rsp+E0h] [rbp-130h] BYREF
  __int128 v30; // [rsp+E8h] [rbp-128h]
  __int64 v31[2]; // [rsp+100h] [rbp-110h] BYREF
  __int64 v32; // [rsp+110h] [rbp-100h] BYREF
  __m128i v33; // [rsp+118h] [rbp-F8h]
  __int64 v34[2]; // [rsp+130h] [rbp-E0h] BYREF
  __int64 v35; // [rsp+140h] [rbp-D0h] BYREF
  __int64 v36; // [rsp+148h] [rbp-C8h]
  __int64 v37[2]; // [rsp+160h] [rbp-B0h] BYREF
  __int64 v38; // [rsp+170h] [rbp-A0h]
  __m128i v39; // [rsp+178h] [rbp-98h] BYREF
  _QWORD v40[7]; // [rsp+190h] [rbp-80h] BYREF
  char v41; // [rsp+1C8h] [rbp-48h]
  unsigned __int64 v42; // [rsp+1D8h] [rbp-38h]

  v42 = __readfsqword(0x28u);
  v40[0] = &off_4DBE20;
  v4 = *(_QWORD *)(a1 + 480);
  v40[5] = a2;
  v5 = *(_QWORD *)(v4 + 112);
  v40[2] = a1;
  v40[1] = 0;
  v17 = v5;
  v40[3] = 0;
  v40[4] = 0;
  v40[6] = a3;
  v41 = 0;
  v19 = v21;
  sub_124680(v21, a1, a2, 1);
  v18 = v23;
  sub_124680(v23, a1, a3, 1);
  v16 = v26;
  sub_127A20(v26, a1, a3, 0);
  sub_64000(v28, (__int64)v23);
  v29 = nullptr;
  v30 = 0;
  if ( !v25 )
  {
    v8 = *(_QWORD *)(a2 + 16);
    if ( v8 )
      goto LABEL_3;
    goto LABEL_13;
  }
  v13 = v25;
  v14 = 16 * v25;
  v29 = (void *)qalloc_or_throw(16 * v25, (__int64)v23, v6, v7);
  *((_QWORD *)&v30 + 1) = v13;
  memcpy(v29, src, v14);
  v8 = *(_QWORD *)(a2 + 16);
  *(_QWORD *)&v30 = v13;
  if ( !v8 )
    goto LABEL_11;
  while ( 1 )
  {
LABEL_3:
    while ( !*(_DWORD *)v8 )
    {
LABEL_33:
      v8 = *(_QWORD *)(v8 + 16);
      if ( !v8 )
        goto LABEL_11;
    }
    sub_124680(v31, a1, v8, 1);
    v20 = v34;
    sub_127A20(v34, a1, v8, 0);
    if ( (unsigned __int8)sub_64780(v28, v34)
      || (unsigned __int8)sub_318470(&v29, &v35)
      || !(unsigned __int8)sub_64820(v20, v16)
      || !(unsigned __int8)sub_317F40(v27, &v35)
      || (unsigned __int8)sub_1205A0(v8, v17, 0)
      || *(_DWORD *)v8 == 1 )
    {
      break;
    }
    sub_11D5A0(v8);
    if ( v35 )
    {
      v36 = 0;
      qfree(v35);
    }
    qfree(v34[0]);
    if ( v32 )
    {
      v33.m128i_i64[0] = 0;
      qfree(v32);
    }
    qfree(v31[0]);
    v8 = *(_QWORD *)(v8 + 16);
    if ( !v8 )
      goto LABEL_11;
  }
  if ( !(unsigned __int8)sub_64780(v20, v19)
    && !(unsigned __int8)sub_318470(&v35, v22)
    && !(unsigned __int8)sub_64780(v20, v18)
    && !(unsigned __int8)sub_318470(&v35, &src) )
  {
    v41 = 0;
    sub_11F760(v8, v40);
    if ( v41 )
    {
      sub_15BC70(v8, v17, 0, 0, 0, 0, 0);
      sub_124680(v37, a1, v8, 1);
      sub_648D0(v31, v37);
      v10 = v38;
      v38 = 0;
      v11 = _mm_loadu_si128(&v39);
      v39 = 0;
      if ( v32 )
      {
        v15 = v11;
        v33.m128i_i64[0] = 0;
        qfree(v32);
        v12 = _mm_load_si128(&v15);
        v32 = v10;
        v33 = v12;
        if ( v38 )
        {
          v39.m128i_i64[0] = 0;
          qfree(v38);
        }
      }
      else
      {
        v32 = v10;
        v33 = v11;
      }
      qfree(v37[0]);
    }
    sub_64280(v28, v31);
    sub_316CB0(&v29, &v32);
    if ( v35 )
    {
      v36 = 0;
      qfree(v35);
    }
    qfree(v34[0]);
    if ( v32 )
    {
      v33.m128i_i64[0] = 0;
      qfree(v32);
    }
    qfree(v31[0]);
    goto LABEL_33;
  }
  if ( v35 )
  {
    v36 = 0;
    qfree(v35);
  }
  qfree(v34[0]);
  if ( v32 )
  {
    v33.m128i_i64[0] = 0;
    qfree(v32);
  }
  qfree(v31[0]);
LABEL_11:
  if ( v29 )
  {
    *(_QWORD *)&v30 = 0;
    qfree((__int64)v29);
  }
LABEL_13:
  qfree(v28[0]);
  if ( v27[0] )
  {
    v27[1] = 0;
    qfree(v27[0]);
  }
  qfree(v26[0]);
  if ( src )
  {
    v25 = 0;
    qfree((__int64)src);
  }
  qfree(v23[0]);
  if ( v22[0] )
  {
    v22[1] = 0;
    qfree(v22[0]);
  }
  qfree(v21[0]);
  return v42 - __readfsqword(0x28u);
}
