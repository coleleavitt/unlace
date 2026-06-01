void __fastcall sub_15FB250(__int64 *a1, int a2, const __m128i *a3)
{
  __m128i v4; // xmm0
  int v5; // ecx
  __int64 v6; // rdx
  __int64 v7; // rsi
  void **v8; // rbp
  unsigned __int64 v9; // rax
  void **v10; // r12
  void **v11; // rbx
  void **v12; // rdi
  void **v13; // rdi
  void **v14; // rbx
  void **v15; // r12
  void **v16; // rbp
  _QWORD *v17; // rax
  void **v18; // r12
  void **v19; // rbx
  void **v20; // rdi
  void **v21; // rdi
  void **v22; // rbx
  void **v23; // r12
  __int64 v24; // rdx
  __int64 v25; // rdx
  void *v26[2]; // [rsp+0h] [rbp-88h] BYREF
  int v27; // [rsp+10h] [rbp-78h]
  void *v28; // [rsp+20h] [rbp-68h] BYREF
  unsigned __int64 v29; // [rsp+28h] [rbp-60h]
  __int64 v30; // [rsp+30h] [rbp-58h]
  void *v31; // [rsp+40h] [rbp-48h]
  __int64 v32; // [rsp+50h] [rbp-38h] BYREF
  __int16 v33; // [rsp+60h] [rbp-28h]

  v4 = _mm_loadu_si128(a3);
  v5 = a3[1].m128i_i32[0];
  a3->m128i_i64[0] = 0;
  v6 = *a1;
  v27 = v5;
  v7 = *(_QWORD *)(v6 + 264);
  *(__m128i *)v26 = v4;
  sub_FC70B0((__int64)&v28, v7, a2, v5);
  sub_15FA310((unsigned __int8 **)v26, (unsigned __int8 **)&v28);
  if ( (_BYTE)v33 )
  {
    sub_FC7790(v30, (__int64 *)&v28, SHIBYTE(v33));
    v30 = 0;
    v33 = 0;
  }
  if ( v31 != &v32 )
    operator delete(v31);
  v8 = (void **)v28;
  if ( v28 )
  {
    v9 = v29;
    if ( v29 )
    {
      if ( (unsigned __int64)v28 < v29 || (unsigned __int64)v28 > v29 + 14848 )
      {
        v10 = *((void ***)v28 + 66);
        v11 = &v10[8 * (unsigned __int64)*((unsigned int *)v28 + 134)];
        if ( v10 != v11 )
        {
          do
          {
            while ( 1 )
            {
              v11 -= 8;
              v12 = (void **)v11[3];
              if ( v12 == v11 + 5 )
                break;
              operator delete(v12);
              if ( v10 == v11 )
                goto LABEL_11;
            }
          }
          while ( v10 != v11 );
LABEL_11:
          v11 = (void **)v8[66];
        }
        if ( v11 != v8 + 68 )
          free(v11);
        v13 = (void **)v8[52];
        if ( v13 != v8 + 54 )
          free(v13);
        v14 = v8 + 48;
        v15 = v8 + 8;
        do
        {
          while ( *v14 != v14 + 2 )
          {
            operator delete(*v14);
            v14 -= 4;
            if ( v15 == v14 )
              goto LABEL_19;
          }
          v14 -= 4;
        }
        while ( v15 != v14 );
LABEL_19:
        operator delete(v8, 0x3A0u);
      }
      else
      {
        v25 = *(unsigned int *)(v29 + 14976);
        *(_DWORD *)(v29 + 14976) = v25 + 1;
        *(_QWORD *)(v9 + 8 * v25 + 14848) = v8;
      }
    }
  }
  v16 = (void **)v26[0];
  if ( v26[0] )
  {
    v17 = v26[1];
    if ( v26[1] )
    {
      if ( v26[0] < v26[1] || v26[0] > (char *)v26[1] + 14848 )
      {
        v18 = *((void ***)v26[0] + 66);
        v19 = &v18[8 * (unsigned __int64)*((unsigned int *)v26[0] + 134)];
        if ( v18 != v19 )
        {
          do
          {
            while ( 1 )
            {
              v19 -= 8;
              v20 = (void **)v19[3];
              if ( v20 == v19 + 5 )
                break;
              operator delete(v20);
              if ( v18 == v19 )
                goto LABEL_26;
            }
          }
          while ( v18 != v19 );
LABEL_26:
          v19 = (void **)v16[66];
        }
        if ( v19 != v16 + 68 )
          free(v19);
        v21 = (void **)v16[52];
        if ( v21 != v16 + 54 )
          free(v21);
        v22 = v16 + 48;
        v23 = v16 + 8;
        do
        {
          while ( *v22 != v22 + 2 )
          {
            operator delete(*v22);
            v22 -= 4;
            if ( v23 == v22 )
            {
              operator delete(v16, 0x3A0u);
              return;
            }
          }
          v22 -= 4;
        }
        while ( v22 != v23 );
        operator delete(v16, 0x3A0u);
      }
      else
      {
        v24 = *((unsigned int *)v26[1] + 3744);
        *((_DWORD *)v26[1] + 3744) = v24 + 1;
        v17[v24 + 1856] = v16;
      }
    }
  }
}
