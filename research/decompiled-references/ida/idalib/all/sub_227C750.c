__int64 *__fastcall sub_227C750(__int64 *a1, __int64 a2)
{
  __int64 *v2; // r12
  __int64 *v3; // rbx
  unsigned int v5; // ebp
  char v6; // r14
  int v7; // r12d
  __int64 *v8; // rdi
  __int64 v9; // rcx
  __int64 v10; // rdx
  unsigned __int64 v11; // rax
  void *v12; // rdi
  size_t v13; // rbp
  unsigned __int8 *v14; // rsi
  __int64 v16; // rax
  size_t v17; // rdx
  unsigned int v18; // ebp
  int j; // r12d
  char *v20; // rax
  unsigned int v21; // r15d
  char v22; // r12
  int v23; // r14d
  char *v24; // rax
  unsigned int v25; // ebp
  int i; // r12d
  char *v27; // rax
  int v28; // r12d
  char *v29; // rax
  __int64 *ptr; // [rsp+8h] [rbp-190h]
  char v32; // [rsp+3Ch] [rbp-15Ch]
  __int64 (__fastcall **v33)(); // [rsp+40h] [rbp-158h] BYREF
  int v34; // [rsp+48h] [rbp-150h]
  void *v35[2]; // [rsp+50h] [rbp-148h]
  __int64 v36; // [rsp+60h] [rbp-138h]
  char v37; // [rsp+68h] [rbp-130h]
  int v38; // [rsp+6Ch] [rbp-12Ch]
  void **v39; // [rsp+70h] [rbp-128h]
  void *v40; // [rsp+80h] [rbp-118h] BYREF
  __m128i si128; // [rsp+88h] [rbp-110h]
  _BYTE v42[72]; // [rsp+98h] [rbp-100h] BYREF
  __int64 *v43; // [rsp+E0h] [rbp-B8h] BYREF
  unsigned int v44; // [rsp+E8h] [rbp-B0h]
  __int64 v45; // [rsp+F0h] [rbp-A8h] BYREF

  v2 = a1;
  sub_2223AA0((__int64)&v43, *(char **)a2, *(_QWORD *)(a2 + 8));
  v3 = v43;
  ptr = &v43[7 * v44];
  if ( v43 != ptr )
  {
    while ( 1 )
    {
      while ( *(_DWORD *)v3 == 1 )
      {
        v12 = (void *)a1[4];
        v13 = v3[2];
        v14 = (unsigned __int8 *)v3[1];
        if ( v13 > a1[3] - (__int64)v12 )
        {
LABEL_16:
          sub_227BF10(a1, v14, v13);
          goto LABEL_5;
        }
LABEL_9:
        if ( !v13 )
          goto LABEL_5;
        v3 += 7;
        memcpy(v12, v14, v13);
        a1[4] += v13;
        if ( ptr == v3 )
        {
LABEL_11:
          v2 = a1;
          ptr = v43;
          goto LABEL_12;
        }
      }
      v11 = *((unsigned int *)v3 + 6);
      if ( v11 >= *(_QWORD *)(a2 + 24) )
      {
        v12 = (void *)a1[4];
        v13 = v3[2];
        v14 = (unsigned __int8 *)v3[1];
        if ( a1[3] - (__int64)v12 < v13 )
          goto LABEL_16;
        goto LABEL_9;
      }
      v5 = *((_DWORD *)v3 + 7);
      v6 = *((_BYTE *)v3 + 36);
      v7 = *((_DWORD *)v3 + 8);
      v8 = *(__int64 **)(*(_QWORD *)(a2 + 16) + 8 * v11);
      v9 = v3[6];
      v10 = v3[5];
      if ( v5 )
      {
        v34 = 2;
        v37 = 0;
        v40 = v42;
        si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D70);
        *(_OWORD *)v35 = 0;
        v33 = &off_2BEBEE0;
        v36 = 0;
        v39 = &v40;
        v16 = *v8;
        v38 = 0;
        (*(void (__fastcall **)(__int64 *, __int64 (__fastcall ***)(), __int64, __int64))(v16 + 24))(v8, &v33, v10, v9);
        v17 = si128.m128i_i64[0];
        if ( (unsigned __int64)v5 <= si128.m128i_i64[0] )
          goto LABEL_26;
        v18 = v5 - si128.m128i_i32[0];
        if ( v7 )
        {
          if ( v7 == 1 )
          {
            v21 = v18 >> 1;
            if ( v18 >> 1 )
            {
              v32 = v6;
              v22 = v6;
              v23 = 0;
              do
              {
                while ( 1 )
                {
                  v24 = (char *)a1[4];
                  if ( (unsigned __int64)v24 >= a1[3] )
                    break;
                  ++v23;
                  a1[4] = (__int64)(v24 + 1);
                  *v24 = v22;
                  if ( v21 == v23 )
                    goto LABEL_37;
                }
                ++v23;
                sub_227BA10((__int64)a1, v32);
              }
              while ( v21 != v23 );
LABEL_37:
              v17 = si128.m128i_i64[0];
              v6 = v22;
            }
            sub_227BF10(a1, (unsigned __int8 *)v40, v17);
            v25 = v18 - v21;
            if ( v25 )
            {
              for ( i = 0; i != v25; ++i )
              {
                v27 = (char *)a1[4];
                if ( (unsigned __int64)v27 < a1[3] )
                {
                  a1[4] = (__int64)(v27 + 1);
                  *v27 = v6;
                }
                else
                {
                  sub_227BA10((__int64)a1, v6);
                }
              }
            }
          }
          else
          {
            if ( v18 )
            {
              for ( j = 0; j != v18; ++j )
              {
                while ( 1 )
                {
                  v20 = (char *)a1[4];
                  if ( (unsigned __int64)v20 >= a1[3] )
                    break;
                  ++j;
                  a1[4] = (__int64)(v20 + 1);
                  *v20 = v6;
                  if ( v18 == j )
                    goto LABEL_25;
                }
                sub_227BA10((__int64)a1, v6);
              }
LABEL_25:
              v17 = si128.m128i_i64[0];
            }
LABEL_26:
            sub_227BF10(a1, (unsigned __int8 *)v40, v17);
          }
        }
        else
        {
          v28 = 0;
          sub_227BF10(a1, (unsigned __int8 *)v40, si128.m128i_u64[0]);
          if ( v18 )
          {
            do
            {
              v29 = (char *)a1[4];
              if ( (unsigned __int64)v29 < a1[3] )
              {
                a1[4] = (__int64)(v29 + 1);
                *v29 = v6;
              }
              else
              {
                sub_227BA10((__int64)a1, v6);
              }
              ++v28;
            }
            while ( v18 != v28 );
          }
        }
        v33 = (__int64 (__fastcall **)())&unk_2C76210;
        if ( v38 == 1 && v35[0] )
          operator delete[](v35[0]);
        if ( v40 != v42 )
          free(v40);
        goto LABEL_5;
      }
      (*(void (__fastcall **)(__int64 *, __int64 *, __int64, __int64))(*v8 + 24))(v8, a1, v10, v9);
LABEL_5:
      v3 += 7;
      if ( ptr == v3 )
        goto LABEL_11;
    }
  }
LABEL_12:
  if ( ptr != &v45 )
    free(ptr);
  return v2;
}
