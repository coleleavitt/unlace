unsigned __int64 __fastcall sub_220C40(signed int *a1, unsigned __int64 a2)
{
  _QWORD *func; // rax
  __int64 v6; // r13
  __int64 item_end; // rax
  const char *v8; // rsi
  __int64 v9; // r12
  const __m128i *v10; // rdi
  const __m128i *v11; // r14
  __int64 v12; // r12
  __int64 v13; // rbp
  const __m128i *v14; // rbx
  __int64 v15; // rdi
  __int64 v16; // rdi
  const char *v17; // rax
  void *v18; // r13
  __int64 v19; // rcx
  size_t v20; // r9
  void *v21; // rax
  const void *v22; // rsi
  void *v23; // r14
  void *v24; // rax
  const void *v25; // rsi
  const char *v26; // [rsp+0h] [rbp-108h]
  void *v27; // [rsp+8h] [rbp-100h]
  __int64 v28; // [rsp+8h] [rbp-100h]
  size_t v29; // [rsp+10h] [rbp-F8h]
  __int64 v30; // [rsp+10h] [rbp-F8h]
  __int64 n; // [rsp+18h] [rbp-F0h]
  __m128i v32; // [rsp+20h] [rbp-E8h] BYREF
  void *v33; // [rsp+30h] [rbp-D8h]
  __int128 v34; // [rsp+38h] [rbp-D0h]
  void *v35; // [rsp+48h] [rbp-C0h]
  __int128 v36; // [rsp+50h] [rbp-B8h]
  __int64 (__fastcall **v37)(); // [rsp+60h] [rbp-A8h] BYREF
  char v38; // [rsp+68h] [rbp-A0h]
  _BYTE *v39; // [rsp+70h] [rbp-98h] BYREF
  __int128 v40; // [rsp+78h] [rbp-90h]
  unsigned __int64 v41; // [rsp+88h] [rbp-80h]
  __int64 v42; // [rsp+90h] [rbp-78h]
  __int64 v43; // [rsp+98h] [rbp-70h]
  int v44; // [rsp+A0h] [rbp-68h]
  const __m128i *v45; // [rsp+A8h] [rbp-60h]
  __int128 v46; // [rsp+B0h] [rbp-58h]
  int v47; // [rsp+C0h] [rbp-48h]
  unsigned __int64 v48; // [rsp+C8h] [rbp-40h]

  v48 = __readfsqword(0x28u);
  if ( (dword_8CB69C & 1) != 0 )
  {
    func = (_QWORD *)get_func(a2);
    v6 = (__int64)func;
    if ( func )
    {
      item_end = get_item_end(*func);
      v8 = nullptr;
      v38 = 0;
      v9 = item_end;
      v37 = qflow_chart_t___vtable;
      v39 = nullptr;
      v40 = 0;
      v39 = (_BYTE *)qvector_reserve(&v39, 0, 1, 1);
      *(_QWORD *)&v40 = 1;
      *v39 = 0;
      v42 = v9;
      v41 = a2;
      v43 = v6;
      v44 = 66;
      v45 = nullptr;
      v47 = 0;
      v46 = 0;
      create_qflow_chart(&v37);
      v10 = v45;
      if ( (int)v46 > 0 )
      {
        v11 = v45;
        while ( a2 < v11->m128i_i64[0] || a2 >= v11->m128i_i64[1] )
        {
          v11 += 4;
          if ( &v45[4 * (unsigned __int64)(unsigned int)(v46 - 1) + 4] == v11 )
            goto LABEL_10;
        }
        v8 = (const char *)a1;
        if ( !(unsigned __int8)sub_220890((__int64)&unk_8CBBA8, a1, v6, (__int64)v11, a2) )
        {
          v17 = (const char *)v11->m128i_i64[0];
          v18 = nullptr;
          v19 = v11[1].m128i_i64[1];
          v32 = _mm_loadu_si128(v11);
          v26 = v17;
          v34 = 0;
          if ( v19 )
          {
            v28 = v19;
            v30 = 4 * v19;
            v24 = (void *)qalloc_or_throw(4 * v19);
            v25 = (const void *)v11[1].m128i_i64[0];
            v18 = v24;
            *((_QWORD *)&v34 + 1) = v28;
            memcpy(v24, v25, v30);
            *(_QWORD *)&v34 = v28;
          }
          v20 = v11[3].m128i_u64[0];
          v36 = 0;
          if ( v20 )
          {
            v29 = v20;
            n = 4 * v20;
            v21 = (void *)qalloc_or_throw(4 * v20);
            v22 = (const void *)v11[2].m128i_i64[1];
            v23 = v21;
            v27 = v21;
            *((_QWORD *)&v36 + 1) = v29;
            memcpy(v21, v22, n);
            v33 = v18;
            *(_QWORD *)&v36 = v29;
            v35 = v23;
            sub_220A00(a1, (unsigned __int64 *)&v32, v26, a2);
            if ( v27 )
              qfree(v27, v32.m128i_i8);
          }
          else
          {
            v33 = v18;
            v35 = nullptr;
            sub_220A00(a1, (unsigned __int64 *)&v32, v26, a2);
          }
          if ( v18 )
            qfree(v18, v32.m128i_i8);
          v8 = (const char *)a1;
          sub_2207E0((__m128i *)qword_8CBAA0, a1, a2, 2);
        }
        v10 = v45;
      }
LABEL_10:
      v37 = qflow_chart_t___vtable;
      if ( v10 )
      {
        v12 = v46;
        if ( (_QWORD)v46 )
        {
          v13 = 0;
          do
          {
            v14 = &v10[4 * v13];
            v15 = v14[2].m128i_i64[1];
            if ( v15 )
            {
              v14[3].m128i_i64[0] = 0;
              qfree(v15, v8);
            }
            v16 = v14[1].m128i_i64[0];
            if ( v16 )
            {
              v14[1].m128i_i64[1] = 0;
              qfree(v16, v8);
            }
            ++v13;
            v10 = v45;
          }
          while ( v12 != v13 );
        }
        *(_QWORD *)&v46 = 0;
        qfree(v10, v8);
      }
      if ( v39 )
      {
        *(_QWORD *)&v40 = 0;
        qfree(v39, v8);
      }
    }
  }
  return v48 - __readfsqword(0x28u);
}
