void __fastcall sub_E39A10(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v3; // r13
  __int16 v4; // ax
  unsigned int v5; // r13d
  void **v6; // rbp
  _QWORD *v7; // rax
  void **v8; // r12
  void **v9; // rbx
  void **v10; // rdi
  void **v11; // rdi
  void **v12; // rbx
  void **v13; // r12
  __int64 v14; // rdx
  _QWORD v15[2]; // [rsp+0h] [rbp-98h] BYREF
  __m128i v16; // [rsp+10h] [rbp-88h] BYREF
  void *v17; // [rsp+20h] [rbp-78h] BYREF
  void *v18; // [rsp+28h] [rbp-70h]
  __int64 v19; // [rsp+30h] [rbp-68h]
  void *v20[2]; // [rsp+38h] [rbp-60h] BYREF
  __int64 v21; // [rsp+50h] [rbp-48h] BYREF
  __int16 v22; // [rsp+60h] [rbp-38h]

  v2 = *(_QWORD *)(a1 + 16);
  v3 = *(_QWORD *)(v2 + 32);
  v15[0] = &v16;
  sub_E392B0(v15, "cannot mangle this dependent neon vector type yet", (__int64)"");
  HIDWORD(v17) = 0;
  HIBYTE(v4) = BYTE1(v17) & 0xFE;
  LOBYTE(v4) = -20;
  LOWORD(v17) = v4;
  v18 = v20;
  if ( (__m128i *)v15[0] == &v16 )
  {
    *(__m128i *)v20 = _mm_load_si128(&v16);
  }
  else
  {
    v18 = (void *)v15[0];
    v20[0] = (void *)v16.m128i_i64[0];
  }
  v19 = v15[1];
  v5 = sub_FD5980(v3, &v17);
  if ( v18 != v20 )
    operator delete(v18);
  sub_FC70B0(&v17, v2, *(unsigned int *)(a2 + 48), v5);
  if ( (_BYTE)v22 )
  {
    sub_FC7790(v19, &v17, HIBYTE(v22));
    v19 = 0;
    v22 = 0;
  }
  if ( v20[1] != &v21 )
    operator delete(v20[1]);
  v6 = (void **)v17;
  if ( v17 )
  {
    v7 = v18;
    if ( v18 )
    {
      if ( v17 < v18 || v17 > (char *)v18 + 14848 )
      {
        v8 = *((void ***)v17 + 66);
        v9 = &v8[8 * (unsigned __int64)*((unsigned int *)v17 + 134)];
        if ( v8 != v9 )
        {
          do
          {
            while ( 1 )
            {
              v9 -= 8;
              v10 = (void **)v9[3];
              if ( v10 == v9 + 5 )
                break;
              operator delete(v10);
              if ( v8 == v9 )
                goto LABEL_15;
            }
          }
          while ( v8 != v9 );
LABEL_15:
          v9 = (void **)v6[66];
        }
        if ( v9 != v6 + 68 )
          free(v9);
        v11 = (void **)v6[52];
        if ( v11 != v6 + 54 )
          free(v11);
        v12 = v6 + 48;
        v13 = v6 + 8;
        do
        {
          while ( *v12 != v12 + 2 )
          {
            operator delete(*v12);
            v12 -= 4;
            if ( v13 == v12 )
            {
              operator delete(v6, 0x3A0u);
              return;
            }
          }
          v12 -= 4;
        }
        while ( v13 != v12 );
        operator delete(v6, 0x3A0u);
      }
      else
      {
        v14 = *((unsigned int *)v18 + 3744);
        *((_DWORD *)v18 + 3744) = v14 + 1;
        v7[v14 + 1856] = v6;
      }
    }
  }
}
