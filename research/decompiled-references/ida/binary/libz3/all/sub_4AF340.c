__int64 __fastcall sub_4AF340(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  bool v3; // zf
  unsigned __int64 v4; // rdx
  _DWORD *v5; // rax
  int v7; // eax
  __int64 *v8; // rbp
  __int64 result; // rax
  __int64 *v10; // r14
  __int64 v11; // rbx
  __int64 v12; // r13
  __int64 v13; // rdi
  __int64 v14; // rax
  __m128i v15; // xmm0
  __int64 v16; // r13
  unsigned int v17; // edx
  _QWORD *v18; // rcx
  unsigned __int64 v19; // r15
  __int64 v20; // rbp
  unsigned __int64 v21; // r14
  __int64 v22; // rax
  __int64 v23; // r13
  __int64 v24; // rsi
  __int64 v25; // rdi
  int v26; // r15d
  char *v27; // rax
  char *v28; // rdi
  unsigned __int64 v29; // rax
  __int64 v30; // rsi
  unsigned __int64 v31; // r14
  __int64 v32; // rsi
  unsigned __int64 v33; // rax
  __int64 v34; // r8
  int v35; // [rsp+0h] [rbp-158h]
  unsigned __int64 v36; // [rsp+10h] [rbp-148h] BYREF
  __int64 v37; // [rsp+18h] [rbp-140h]
  __m128i *v38; // [rsp+20h] [rbp-138h]
  char *v39; // [rsp+28h] [rbp-130h]
  __m128i v40; // [rsp+30h] [rbp-128h] BYREF
  __int64 v41; // [rsp+40h] [rbp-118h]
  unsigned __int64 v42; // [rsp+48h] [rbp-110h]
  bool v43; // [rsp+57h] [rbp-101h] BYREF
  __int64 v44; // [rsp+58h] [rbp-100h] BYREF
  __m128i v45; // [rsp+60h] [rbp-F8h] BYREF
  _QWORD v46[2]; // [rsp+70h] [rbp-E8h] BYREF
  __m128i v47; // [rsp+80h] [rbp-D8h] BYREF
  void *v48; // [rsp+90h] [rbp-C8h]
  __int64 v49; // [rsp+98h] [rbp-C0h]
  _BYTE v50[184]; // [rsp+A0h] [rbp-B8h] BYREF

  v3 = *(_WORD *)(a2 + 4) == 0;
  v42 = a2;
  v37 = a3;
  if ( !v3
    || (v4 = a2, (v5 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL)) == nullptr)
    || !*v5
    && (v5[1] != 8
     || *(_DWORD *)(a2 + 24) != 1
     || (v4 = *(_QWORD *)(a2 + 32), *(_WORD *)(v4 + 4))
     || (v5 = *(_DWORD **)(*(_QWORD *)(v4 + 16) + 24LL)) == nullptr)
    || *v5 != 5
    || (v7 = v5[1], v7 != 2) && v7 != 5 && v7 != 4 && v7 != 3
    || *(_DWORD *)(v4 + 24) != 2 )
  {
    sub_1872CE0("");
    sub_1873130(114, 140);
  }
  v41 = *(_QWORD *)(v4 + 32);
  v39 = v50;
  v48 = v50;
  v49 = 0x1000000000LL;
  v36 = *(_QWORD *)a1;
  v8 = (__int64 *)(v41 + 32);
  result = 8LL * *(unsigned int *)(v41 + 24);
  v10 = (__int64 *)(v41 + 32 + result);
  if ( result )
  {
    v11 = 0;
    v38 = &v47;
    do
    {
      while ( 1 )
      {
        v16 = *v8;
        if ( (unsigned __int8)sub_4AEA20(a1, *v8, &v44, &v43) )
          break;
        v17 = v49;
        if ( (unsigned int)v49 >= HIDWORD(v49) )
        {
          v26 = 2 * HIDWORD(v49);
          v27 = (char *)sub_186B270(8LL * (unsigned int)(2 * HIDWORD(v49)));
          v17 = v49;
          v28 = (char *)v48;
          v18 = v27;
          if ( (_DWORD)v49 )
          {
            if ( (unsigned int)(v49 - 1) <= 2 || v27 == (char *)v48 + 8 )
            {
              v33 = 0;
              v34 = 8LL * (unsigned int)v49;
              do
              {
                v18[v33 / 8] = *(_QWORD *)&v28[v33];
                v33 += 8LL;
              }
              while ( v33 != v34 );
            }
            else
            {
              v29 = 0;
              v30 = 16LL * ((unsigned int)v49 >> 1);
              do
              {
                *(__m128i *)&v18[v29 / 8] = _mm_loadu_si128((const __m128i *)&v28[v29]);
                v29 += 16LL;
              }
              while ( v29 != v30 );
              if ( (v17 & 1) != 0 )
                v18[v17 & 0xFFFFFFFE] = *(_QWORD *)&v28[8 * (v17 & 0xFFFFFFFE)];
            }
          }
          if ( v28 && v28 != v39 )
          {
            v40.m128i_i64[0] = (__int64)v18;
            sub_186B220(v28);
            v17 = v49;
            v18 = (_QWORD *)v40.m128i_i64[0];
          }
          v48 = v18;
          HIDWORD(v49) = v26;
        }
        else
        {
          v18 = v48;
        }
        result = v17;
        ++v8;
        v18[v17] = v16;
        LODWORD(v49) = v17 + 1;
        if ( v10 == v8 )
          goto LABEL_25;
      }
      sub_1374250(v38, **(_QWORD **)(a1 + 24), v44);
      v12 = v47.m128i_i64[0];
      v47.m128i_i64[0] = v11;
      if ( v11 )
      {
        v13 = v47.m128i_i64[1];
        v3 = (*(_DWORD *)(v11 + 8))-- == 1;
        if ( v3 )
          sub_15D7BC0(v13, v11);
      }
      v14 = sub_15E1B70(*(_QWORD *)(a1 + 8));
      v11 = v14;
      v15 = (__m128i)_mm_loadh_ps((const double *)&v36);
      if ( v14 )
        ++*(_DWORD *)(v14 + 8);
      if ( v12 )
      {
        v3 = (*(_DWORD *)(v12 + 8))-- == 1;
        if ( v3 )
        {
          v40 = v15;
          sub_15D7BC0(v36, v12);
          v15 = _mm_load_si128(&v40);
        }
      }
      v45 = v15;
      result = sub_4AEB30(a1, v37, v45.m128i_i64);
      ++v8;
    }
    while ( v10 != v8 );
LABEL_25:
    if ( (_DWORD)v49 )
    {
      v19 = *(_QWORD *)a1;
      if ( (_DWORD)v49 != *(_DWORD *)(v41 + 24) )
      {
        if ( (_DWORD)v49 == 1 )
        {
          v20 = *(_QWORD *)v48;
          if ( !*(_QWORD *)v48 )
          {
LABEL_30:
            sub_1374250(v46, **(_QWORD **)(a1 + 24), v20);
            v21 = *(_QWORD *)a1;
            v22 = sub_15E1B70(*(_QWORD *)(a1 + 8));
            v23 = v22;
            v47 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v22, (__m128i)v21);
            if ( v22 )
            {
              ++*(_DWORD *)(v22 + 8);
              sub_4AEB30(a1, v37, v47.m128i_i64);
              v3 = (*(_DWORD *)(v23 + 8))-- == 1;
              if ( v3 )
                sub_15D7BC0(v21, v23);
            }
            else
            {
              sub_4AEB30(a1, v37, v47.m128i_i64);
            }
            v24 = v46[0];
            if ( v46[0] )
            {
              v25 = v46[1];
              v3 = (*(_DWORD *)(v46[0] + 8LL))-- == 1;
              if ( v3 )
                sub_15D7BC0(v25, v24);
            }
            if ( v20 )
            {
              v3 = (*(_DWORD *)(v20 + 8))-- == 1;
              if ( v3 )
                sub_15D7BC0(v19, v20);
            }
            if ( v11 )
            {
              v3 = (*(_DWORD *)(v11 + 8))-- == 1;
              if ( v3 )
                sub_15D7BC0(v36, v11);
            }
            result = (__int64)v39;
            if ( v48 != v39 )
            {
              if ( v48 )
                return sub_186B220(v48);
            }
            return result;
          }
        }
        else
        {
          v20 = sub_15E1AF0(*(_QWORD *)(a1 + 8));
          if ( !v20 )
            goto LABEL_30;
        }
        ++*(_DWORD *)(v20 + 8);
        goto LABEL_30;
      }
      v31 = v42;
      v32 = v37;
      ++*(_DWORD *)(v42 + 8);
      v47 = _mm_unpacklo_epi64((__m128i)v31, (__m128i)v19);
      sub_4AEB30(a1, v32, v47.m128i_i64);
      v35 = *(_DWORD *)(v31 + 8);
      result = (unsigned int)(v35 - 1);
      *(_DWORD *)(v31 + 8) = result;
      if ( v35 == 1 )
        result = sub_15D7BC0(v19, v42);
    }
    if ( v11 )
    {
      v3 = (*(_DWORD *)(v11 + 8))-- == 1;
      if ( v3 )
        result = sub_15D7BC0(v36, v11);
    }
    if ( v48 )
    {
      result = (__int64)v39;
      if ( v48 != v39 )
        return sub_186B220(v48);
    }
  }
  return result;
}

