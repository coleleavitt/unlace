unsigned __int64 __fastcall sub_93650(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v8; // r15
  __m128i v9; // xmm0
  __m128i v10; // xmm0
  __int64 v11; // r15
  size_t v12; // r13
  __m128i v13; // [rsp+0h] [rbp-210h] BYREF
  _QWORD *v14; // [rsp+18h] [rbp-1F8h]
  __int64 v15; // [rsp+20h] [rbp-1F0h]
  void **v16; // [rsp+28h] [rbp-1E8h]
  _QWORD *v17; // [rsp+30h] [rbp-1E0h]
  _QWORD *v18; // [rsp+38h] [rbp-1D8h]
  _QWORD v19[2]; // [rsp+40h] [rbp-1D0h] BYREF
  _QWORD v20[4]; // [rsp+50h] [rbp-1C0h] BYREF
  void *v21[2]; // [rsp+70h] [rbp-1A0h] BYREF
  void *src; // [rsp+80h] [rbp-190h] BYREF
  __int64 v23; // [rsp+88h] [rbp-188h]
  _QWORD v24[2]; // [rsp+A0h] [rbp-170h] BYREF
  _QWORD v25[4]; // [rsp+B0h] [rbp-160h] BYREF
  __int64 v26[2]; // [rsp+D0h] [rbp-140h] BYREF
  void *v27; // [rsp+E0h] [rbp-130h] BYREF
  __int128 v28; // [rsp+E8h] [rbp-128h]
  __int64 v29[2]; // [rsp+100h] [rbp-110h] BYREF
  __int64 v30; // [rsp+110h] [rbp-100h] BYREF
  __m128i v31; // [rsp+118h] [rbp-F8h]
  _QWORD v32[2]; // [rsp+130h] [rbp-E0h] BYREF
  __int64 v33; // [rsp+140h] [rbp-D0h] BYREF
  __int64 v34; // [rsp+148h] [rbp-C8h]
  __int64 v35[2]; // [rsp+160h] [rbp-B0h] BYREF
  __int64 v36; // [rsp+170h] [rbp-A0h]
  __m128i v37; // [rsp+178h] [rbp-98h] BYREF
  _QWORD v38[7]; // [rsp+190h] [rbp-80h] BYREF
  char v39; // [rsp+1C8h] [rbp-48h]
  unsigned __int64 v40; // [rsp+1D8h] [rbp-38h]

  v40 = __readfsqword(0x28u);
  v38[0] = &off_4D64E0;
  v4 = *(_QWORD *)(a1 + 480);
  v38[5] = a2;
  v5 = *(_QWORD *)(v4 + 112);
  v38[2] = a1;
  v38[1] = 0;
  v15 = v5;
  v38[3] = 0;
  v38[4] = 0;
  v38[6] = a3;
  v39 = 0;
  v17 = v19;
  sub_1240C0(v19, a1, a2, 1);
  v16 = v21;
  sub_1240C0(v21, a1, a3, 1);
  v14 = v24;
  sub_127460(v24, a1, a3, 0);
  sub_63A00(v26, (__int64)v21);
  v27 = nullptr;
  v28 = 0;
  if ( !v23 )
  {
    v6 = *(_QWORD *)(a2 + 16);
    if ( v6 )
      goto LABEL_3;
    goto LABEL_13;
  }
  v11 = v23;
  v12 = 16 * v23;
  v27 = (void *)qalloc_or_throw(16 * v23);
  *((_QWORD *)&v28 + 1) = v11;
  memcpy(v27, src, v12);
  v6 = *(_QWORD *)(a2 + 16);
  *(_QWORD *)&v28 = v11;
  if ( !v6 )
    goto LABEL_11;
  while ( 1 )
  {
LABEL_3:
    while ( !*(_DWORD *)v6 )
    {
LABEL_33:
      v6 = *(_QWORD *)(v6 + 16);
      if ( !v6 )
        goto LABEL_11;
    }
    sub_1240C0(v29, a1, v6, 1);
    v18 = v32;
    sub_127460(v32, a1, v6, 0);
    if ( (unsigned __int8)sub_64180(v26, v32)
      || (unsigned __int8)sub_318830(&v27, &v33)
      || !(unsigned __int8)sub_64220(v18, v14)
      || !(unsigned __int8)sub_318300(v25, &v33)
      || (unsigned __int8)sub_11FFE0(v6, v15, 0)
      || *(_DWORD *)v6 == 1 )
    {
      break;
    }
    sub_11CFE0(v6);
    if ( v33 )
    {
      v34 = 0;
      qfree(v33);
    }
    qfree(v32[0]);
    if ( v30 )
    {
      v31.m128i_i64[0] = 0;
      qfree(v30);
    }
    qfree(v29[0]);
    v6 = *(_QWORD *)(v6 + 16);
    if ( !v6 )
      goto LABEL_11;
  }
  if ( !(unsigned __int8)sub_64180(v18, v17)
    && !(unsigned __int8)sub_318830(&v33, v20)
    && !(unsigned __int8)sub_64180(v18, v16)
    && !(unsigned __int8)sub_318830(&v33, &src) )
  {
    v39 = 0;
    sub_11F1A0(v6, v38);
    if ( v39 )
    {
      sub_15B6B0(v6, v15, 0, 0, 0, 0, 0);
      sub_1240C0(v35, a1, v6, 1);
      sub_642D0(v29, v35);
      v8 = v36;
      v36 = 0;
      v9 = _mm_loadu_si128(&v37);
      v37 = 0;
      if ( v30 )
      {
        v13 = v9;
        v31.m128i_i64[0] = 0;
        qfree(v30);
        v10 = _mm_load_si128(&v13);
        v30 = v8;
        v31 = v10;
        if ( v36 )
        {
          v37.m128i_i64[0] = 0;
          qfree(v36);
        }
      }
      else
      {
        v30 = v8;
        v31 = v9;
      }
      qfree(v35[0]);
    }
    sub_63C80(v26, v29);
    sub_317070(&v27, &v30);
    if ( v33 )
    {
      v34 = 0;
      qfree(v33);
    }
    qfree(v32[0]);
    if ( v30 )
    {
      v31.m128i_i64[0] = 0;
      qfree(v30);
    }
    qfree(v29[0]);
    goto LABEL_33;
  }
  if ( v33 )
  {
    v34 = 0;
    qfree(v33);
  }
  qfree(v32[0]);
  if ( v30 )
  {
    v31.m128i_i64[0] = 0;
    qfree(v30);
  }
  qfree(v29[0]);
LABEL_11:
  if ( v27 )
  {
    *(_QWORD *)&v28 = 0;
    qfree(v27);
  }
LABEL_13:
  qfree(v26[0]);
  if ( v25[0] )
  {
    v25[1] = 0;
    qfree(v25[0]);
  }
  qfree(v24[0]);
  if ( src )
  {
    v23 = 0;
    qfree(src);
  }
  qfree(v21[0]);
  if ( v20[0] )
  {
    v20[1] = 0;
    qfree(v20[0]);
  }
  qfree(v19[0]);
  return v40 - __readfsqword(0x28u);
}
