__int64 __fastcall sub_221000(signed int *a1, unsigned __int64 a2, double a3)
{
  _QWORD *func; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  _QWORD *v7; // r12
  __m128i *v8; // rsi
  __int64 item_end; // r13
  __int64 v10; // r14
  __int64 v11; // rbp
  unsigned __int64 *v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rdi
  __int64 i; // r13
  _QWORD *v16; // rbp
  __int64 v17; // rdi
  __int64 v18; // rdi
  const __m128i *v20; // r10
  void *v21; // r14
  const char *v22; // rax
  __int64 v23; // r15
  __int64 v24; // r11
  void *v25; // r15
  const void *v26; // rsi
  const char *v28; // [rsp+10h] [rbp-288h]
  __int64 v29; // [rsp+20h] [rbp-278h]
  __int64 v30; // [rsp+20h] [rbp-278h]
  __int64 n; // [rsp+28h] [rbp-270h]
  __int64 v32; // [rsp+30h] [rbp-268h]
  __int64 v33; // [rsp+30h] [rbp-268h]
  const __m128i *v34; // [rsp+38h] [rbp-260h]
  __m128i v35; // [rsp+40h] [rbp-258h] BYREF
  void *v36; // [rsp+50h] [rbp-248h]
  __int128 v37; // [rsp+58h] [rbp-240h]
  void *v38; // [rsp+68h] [rbp-230h]
  __int128 v39; // [rsp+70h] [rbp-228h]
  __int64 (__fastcall **v40)(); // [rsp+80h] [rbp-218h] BYREF
  char v41; // [rsp+88h] [rbp-210h]
  _BYTE *v42; // [rsp+90h] [rbp-208h] BYREF
  __int128 v43; // [rsp+98h] [rbp-200h]
  unsigned __int64 v44; // [rsp+A8h] [rbp-1F0h]
  __int64 v45; // [rsp+B0h] [rbp-1E8h]
  _QWORD *v46; // [rsp+B8h] [rbp-1E0h]
  int v47; // [rsp+C0h] [rbp-1D8h]
  __int64 v48; // [rsp+C8h] [rbp-1D0h]
  __int128 v49; // [rsp+D0h] [rbp-1C8h]
  int v50; // [rsp+E0h] [rbp-1B8h]
  __int128 v51; // [rsp+F0h] [rbp-1A8h] BYREF
  __int64 v52; // [rsp+100h] [rbp-198h]
  __int64 v53; // [rsp+108h] [rbp-190h]
  __int64 v54; // [rsp+110h] [rbp-188h]
  char v55; // [rsp+118h] [rbp-180h] BYREF
  unsigned __int64 v56; // [rsp+258h] [rbp-40h] BYREF

  v56 = __readfsqword(0x28u);
  if ( (dword_8CB69C & 1) != 0 )
  {
    func = (_QWORD *)get_func(a2);
    v7 = func;
    if ( !func )
    {
      if ( !under_debugger )
        interr(40237, a2, v5, v6, a3);
      BUG();
    }
    v8 = nullptr;
    item_end = get_item_end(*func);
    v41 = 0;
    v40 = qflow_chart_t___vtable;
    v42 = nullptr;
    v43 = 0;
    v42 = (_BYTE *)qvector_reserve(&v42, 0, 1, 1);
    *(_QWORD *)&v43 = 1;
    *v42 = 0;
    v44 = a2;
    v45 = item_end;
    v46 = v7;
    v47 = 66;
    v48 = 0;
    v50 = 0;
    v49 = 0;
    create_qflow_chart(&v40);
    v10 = v49;
    if ( (int)v49 > 0 )
    {
      v11 = 0;
      do
      {
        v12 = (unsigned __int64 *)&v55;
        v52 = -1;
        v53 = 0;
        v54 = 0;
        v51 = -1;
        do
        {
          *(_WORD *)v12 = 0;
          v12 += 5;
          *((_WORD *)v12 - 19) = 0;
          *((_WORD *)v12 - 18) = 0;
          *((_DWORD *)v12 - 2) = 0;
          *((_WORD *)v12 - 17) = 0;
          *((_OWORD *)v12 - 2) = 0;
          *(v12 - 2) = 0;
        }
        while ( &v56 != v12 );
        v8 = *(__m128i **)(v48 + (v11 << 6) + 8);
        v13 = decode_prev_insn(&v51, v8);
        if ( a2 == v13 )
        {
          v20 = (const __m128i *)((v11 << 6) + v48);
          v21 = nullptr;
          v22 = (const char *)v20->m128i_i64[0];
          v23 = v20[1].m128i_i64[1];
          v35 = _mm_loadu_si128(v20);
          v28 = v22;
          v37 = 0;
          if ( v23 )
          {
            v29 = (v11 << 6) + v48;
            v32 = v13;
            v21 = (void *)qalloc_or_throw(4 * v23);
            *((_QWORD *)&v37 + 1) = v23;
            memcpy(v21, *(const void **)(v29 + 16), 4 * v23);
            *(_QWORD *)&v37 = v23;
            v13 = v32;
            v20 = (const __m128i *)v29;
          }
          v24 = v20[3].m128i_i64[0];
          v39 = 0;
          if ( v24 )
          {
            v34 = v20;
            v33 = v13;
            v30 = v24;
            n = 4 * v24;
            v25 = (void *)qalloc_or_throw(4 * v24);
            v26 = (const void *)v34[2].m128i_i64[1];
            *((_QWORD *)&v39 + 1) = v30;
            memcpy(v25, v26, n);
            v8 = &v35;
            v36 = v21;
            *(_QWORD *)&v39 = v30;
            v38 = v25;
            sub_220A00(a1, (unsigned __int64 *)&v35, v28, v33);
            if ( v25 )
              qfree(v25, v35.m128i_i8);
          }
          else
          {
            v8 = &v35;
            v36 = v21;
            v38 = nullptr;
            sub_220A00(a1, (unsigned __int64 *)&v35, v28, v13);
          }
          if ( v21 )
            qfree(v21, v35.m128i_i8);
        }
        v10 = v49;
        ++v11;
      }
      while ( (int)v49 > (int)v11 );
    }
    v14 = v48;
    v40 = qflow_chart_t___vtable;
    if ( v48 )
    {
      if ( v10 )
      {
        for ( i = 0; i != v10; ++i )
        {
          v16 = (_QWORD *)(v14 + (i << 6));
          v17 = v16[5];
          if ( v17 )
          {
            v16[6] = 0;
            qfree(v17, v8->m128i_i8);
          }
          v18 = v16[2];
          if ( v18 )
          {
            v16[3] = 0;
            qfree(v18, v8->m128i_i8);
          }
          v14 = v48;
        }
      }
      *(_QWORD *)&v49 = 0;
      qfree(v14, v8->m128i_i8);
    }
    if ( v42 )
    {
      *(_QWORD *)&v43 = 0;
      qfree(v42, v8->m128i_i8);
    }
  }
  return sub_2207E0((__m128i *)qword_8CBAA0, a1, a2, 0);
}
