__int64 (__fastcall **__fastcall sub_7DB530(__m128i *a1))()
{
  __m128i v2; // xmm0
  void **v3; // rbp
  void **v4; // r13
  __int64 **v5; // r12
  __int64 *v6; // r14
  __int64 *v7; // r15
  __int64 *v8; // r8
  __int64 v9; // rsi
  __int64 v10; // rdi
  bool v11; // zf
  __int64 v12; // rsi
  __int64 v13; // rdi
  __int64 *v14; // r14
  __int64 *v15; // r15
  __int64 *v16; // r8
  __int64 v17; // rsi
  __int64 v18; // rdi
  __int64 v19; // rsi
  __int64 v20; // rdi
  __int64 *v21; // r15
  __int64 *v22; // r14
  __int64 *v23; // r8
  __int64 v24; // rsi
  __int64 v25; // rdi
  __int64 v26; // rdi
  __int64 *v27; // rbp
  __int64 *v28; // r12
  __int64 v29; // rsi
  __int64 v30; // rdi
  void *v31; // rdi
  void *v32; // rdi
  __int64 *v33; // rbp
  __int64 *v34; // r12
  __int64 v35; // rsi
  __int64 v36; // rdi
  __int64 *v37; // rbp
  __int64 *v38; // r12
  __int64 v39; // rsi
  __int64 v40; // rdi
  __int64 v41; // rdi
  __int64 v42; // rdi
  __int64 v43; // rdi
  __int64 (__fastcall **result)(); // rax
  __int64 v45; // rdi
  unsigned __int64 v46; // [rsp+8h] [rbp-60h]
  unsigned __int64 v47; // [rsp+8h] [rbp-60h]
  unsigned __int64 v48; // [rsp+8h] [rbp-60h]
  __m128i v49; // [rsp+10h] [rbp-58h] BYREF
  __m128i v50[4]; // [rsp+20h] [rbp-48h] BYREF

  v2 = _mm_loadl_epi64((const __m128i *)&off_1C54A78);
  v49 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)qword_1C6C4D8, (__m128i)(unsigned __int64)qword_1C6C528);
  a1->m128i_i64[0] = (__int64)&off_1C6BB90;
  v50[0] = _mm_unpacklo_epi64((__m128i)(unsigned __int64)algn_1C6C7D0, (__m128i)(unsigned __int64)qword_1C6C820);
  a1[3].m128i_i64[0] = (__int64)off_1C6BE68;
  a1[2] = _mm_unpacklo_epi64(v2, (__m128i)(unsigned __int64)off_1C6BE40);
  sub_7DAFB0((__int64)a1);
  v3 = (void **)a1[16].m128i_i64[0];
  if ( v3 )
  {
    v4 = &v3[*((unsigned int *)v3 - 1)];
    if ( v3 == v4 )
      goto LABEL_46;
    do
    {
      v5 = (__int64 **)*v3;
      if ( *v3 )
      {
        v6 = *v5;
        if ( *v5 )
        {
          v7 = (__int64 *)v6[4];
          if ( v7 )
          {
            v8 = &v7[*((unsigned int *)v7 - 1)];
            if ( v7 >= v8 )
              goto LABEL_13;
            do
            {
              while ( 1 )
              {
                v9 = *v7;
                if ( *v7 )
                {
                  v10 = v6[3];
                  v11 = (*(_DWORD *)(v9 + 8))-- == 1;
                  if ( v11 )
                    break;
                }
                if ( ++v7 >= v8 )
                  goto LABEL_12;
              }
              v46 = (unsigned __int64)v8;
              ++v7;
              sub_15D7BC0(v10, v9);
              v8 = (__int64 *)v46;
            }
            while ( (unsigned __int64)v7 < v46 );
LABEL_12:
            v7 = (__int64 *)v6[4];
            if ( v7 )
LABEL_13:
              sub_186B220(v7 - 1);
          }
          v12 = *v6;
          if ( *v6 )
          {
            v13 = v6[1];
            v11 = (*(_DWORD *)(v12 + 8))-- == 1;
            if ( v11 )
              sub_15D7BC0(v13, v12);
          }
          sub_186B220(v6);
        }
        v14 = v5[1];
        if ( v14 )
        {
          v15 = (__int64 *)v14[4];
          if ( v15 )
          {
            v16 = &v15[*((unsigned int *)v15 - 1)];
            if ( v15 >= v16 )
              goto LABEL_27;
            do
            {
              while ( 1 )
              {
                v17 = *v15;
                if ( *v15 )
                {
                  v18 = v14[3];
                  v11 = (*(_DWORD *)(v17 + 8))-- == 1;
                  if ( v11 )
                    break;
                }
                if ( ++v15 >= v16 )
                  goto LABEL_26;
              }
              v47 = (unsigned __int64)v16;
              ++v15;
              sub_15D7BC0(v18, v17);
              v16 = (__int64 *)v47;
            }
            while ( (unsigned __int64)v15 < v47 );
LABEL_26:
            v15 = (__int64 *)v14[4];
            if ( v15 )
LABEL_27:
              sub_186B220(v15 - 1);
          }
          v19 = *v14;
          if ( *v14 )
          {
            v20 = v14[1];
            v11 = (*(_DWORD *)(v19 + 8))-- == 1;
            if ( v11 )
              sub_15D7BC0(v20, v19);
          }
          sub_186B220(v14);
        }
        v21 = v5[2];
        if ( v21 )
        {
          v22 = (__int64 *)v21[1];
          if ( v22 )
          {
            v23 = &v22[*((unsigned int *)v22 - 1)];
            if ( v22 >= v23 )
              goto LABEL_41;
            do
            {
              while ( 1 )
              {
                v24 = *v22;
                if ( *v22 )
                {
                  v25 = *v21;
                  v11 = (*(_DWORD *)(v24 + 8))-- == 1;
                  if ( v11 )
                    break;
                }
                if ( ++v22 >= v23 )
                  goto LABEL_40;
              }
              v48 = (unsigned __int64)v23;
              ++v22;
              sub_15D7BC0(v25, v24);
              v23 = (__int64 *)v48;
            }
            while ( (unsigned __int64)v22 < v48 );
LABEL_40:
            v22 = (__int64 *)v21[1];
            if ( v22 )
LABEL_41:
              sub_186B220(v22 - 1);
          }
          sub_186B220(v21);
        }
        sub_186B220(v5);
      }
      ++v3;
    }
    while ( v4 != v3 );
    v4 = (void **)a1[16].m128i_i64[0];
    if ( v4 )
    {
LABEL_46:
      *((_DWORD *)v4 - 1) = 0;
      sub_186B220(v4 - 1);
    }
  }
  v26 = a1[15].m128i_i64[0];
  if ( v26 )
    sub_186B220((void *)(v26 - 8));
  v27 = (__int64 *)a1[14].m128i_i64[1];
  if ( v27 )
  {
    v28 = &v27[*((unsigned int *)v27 - 1)];
    if ( v27 >= v28 )
      goto LABEL_57;
    do
    {
      while ( 1 )
      {
        v29 = *v27;
        if ( *v27 )
        {
          v30 = a1[14].m128i_i64[0];
          v11 = (*(_DWORD *)(v29 + 8))-- == 1;
          if ( v11 )
            break;
        }
        if ( ++v27 >= v28 )
          goto LABEL_56;
      }
      sub_15D7BC0(v30, v29);
      ++v27;
    }
    while ( v27 < v28 );
LABEL_56:
    v27 = (__int64 *)a1[14].m128i_i64[1];
    if ( v27 )
LABEL_57:
      sub_186B220(v27 - 1);
  }
  v31 = (void *)a1[12].m128i_i64[1];
  if ( v31 )
    sub_186B220(v31);
  v32 = (void *)a1[11].m128i_i64[0];
  if ( v32 )
    sub_186B220(v32);
  v33 = (__int64 *)a1[10].m128i_i64[1];
  if ( v33 )
  {
    v34 = &v33[*((unsigned int *)v33 - 1)];
    if ( v33 >= v34 )
      goto LABEL_70;
    do
    {
      while ( 1 )
      {
        v35 = *v33;
        if ( *v33 )
        {
          v36 = a1[10].m128i_i64[0];
          v11 = (*(_DWORD *)(v35 + 8))-- == 1;
          if ( v11 )
            break;
        }
        if ( ++v33 >= v34 )
          goto LABEL_69;
      }
      sub_15D7BC0(v36, v35);
      ++v33;
    }
    while ( v33 < v34 );
LABEL_69:
    v33 = (__int64 *)a1[10].m128i_i64[1];
    if ( v33 )
LABEL_70:
      sub_186B220(v33 - 1);
  }
  v37 = (__int64 *)a1[9].m128i_i64[1];
  if ( v37 )
  {
    v38 = &v37[*((unsigned int *)v37 - 1)];
    if ( v37 >= v38 )
      goto LABEL_79;
    do
    {
      while ( 1 )
      {
        v39 = *v37;
        if ( *v37 )
        {
          v40 = a1[9].m128i_i64[0];
          v11 = (*(_DWORD *)(v39 + 8))-- == 1;
          if ( v11 )
            break;
        }
        if ( ++v37 >= v38 )
          goto LABEL_78;
      }
      sub_15D7BC0(v40, v39);
      ++v37;
    }
    while ( v37 < v38 );
LABEL_78:
    v37 = (__int64 *)a1[9].m128i_i64[1];
    if ( v37 )
LABEL_79:
      sub_186B220(v37 - 1);
  }
  v41 = a1[6].m128i_i64[0];
  a1[2] = _mm_load_si128(v50);
  a1->m128i_i64[0] = (__int64)qword_1C6C5A8;
  a1[3].m128i_i64[0] = (__int64)off_1C6C848;
  if ( v41 )
    sub_186B220((void *)(v41 - 8));
  v42 = a1[5].m128i_i64[1];
  if ( v42 )
    sub_186B220((void *)(v42 - 8));
  v43 = a1[4].m128i_i64[0];
  a1[2] = _mm_load_si128(&v49);
  a1->m128i_i64[0] = (__int64)qword_1C6C2C8;
  result = off_1C6A6A8;
  a1[3].m128i_i64[0] = (__int64)off_1C6A6A8;
  if ( v43 )
    result = (__int64 (__fastcall **)())sub_186B220((void *)(v43 - 8));
  v45 = a1[3].m128i_i64[1];
  if ( v45 )
    return (__int64 (__fastcall **)())sub_186B220((void *)(v45 - 8));
  return result;
}

