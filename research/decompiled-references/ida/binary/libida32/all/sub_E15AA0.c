void __fastcall sub_E15AA0(__int64 a1)
{
  __int64 v1; // r12
  __int64 v2; // r13
  __int16 v3; // ax
  unsigned int v4; // ebp
  void **v5; // rbp
  _QWORD *v6; // rax
  void **v7; // r12
  void **v8; // rbx
  void **v9; // rdi
  void **v10; // rdi
  void **v11; // rbx
  void **v12; // r12
  __int64 v13; // rdx
  _QWORD v14[2]; // [rsp+0h] [rbp-98h] BYREF
  __m128i v15; // [rsp+10h] [rbp-88h] BYREF
  void *v16; // [rsp+20h] [rbp-78h] BYREF
  void *v17; // [rsp+28h] [rbp-70h]
  __int64 v18; // [rsp+30h] [rbp-68h]
  void *v19[2]; // [rsp+38h] [rbp-60h] BYREF
  __int64 v20; // [rsp+50h] [rbp-48h] BYREF
  __int16 v21; // [rsp+60h] [rbp-38h]

  v1 = *(_QWORD *)(a1 + 16);
  v2 = *(_QWORD *)(v1 + 32);
  v14[0] = &v15;
  sub_E15570(v14, "cannot mangle fixed point literals yet", (__int64)"");
  HIDWORD(v16) = 0;
  HIBYTE(v3) = BYTE1(v16) & 0xFE;
  LOBYTE(v3) = -20;
  LOWORD(v16) = v3;
  v17 = v19;
  if ( (__m128i *)v14[0] == &v15 )
  {
    *(__m128i *)v19 = _mm_load_si128(&v15);
  }
  else
  {
    v17 = (void *)v14[0];
    v19[0] = (void *)v15.m128i_i64[0];
  }
  v18 = v14[1];
  v4 = sub_FB1C40(v2, &v16);
  if ( v17 != v19 )
    operator delete(v17);
  sub_FA3370(&v16, v1, 0, v4);
  if ( (_BYTE)v21 )
  {
    sub_FA3A50(v18, &v16, HIBYTE(v21));
    v18 = 0;
    v21 = 0;
  }
  if ( v19[1] != &v20 )
    operator delete(v19[1]);
  v5 = (void **)v16;
  if ( v16 )
  {
    v6 = v17;
    if ( v17 )
    {
      if ( v16 < v17 || v16 > (char *)v17 + 14848 )
      {
        v7 = *((void ***)v16 + 66);
        v8 = &v7[8 * (unsigned __int64)*((unsigned int *)v16 + 134)];
        if ( v7 != v8 )
        {
          do
          {
            while ( 1 )
            {
              v8 -= 8;
              v9 = (void **)v8[3];
              if ( v9 == v8 + 5 )
                break;
              operator delete(v9);
              if ( v7 == v8 )
                goto LABEL_15;
            }
          }
          while ( v7 != v8 );
LABEL_15:
          v8 = (void **)v5[66];
        }
        if ( v8 != v5 + 68 )
          free(v8);
        v10 = (void **)v5[52];
        if ( v10 != v5 + 54 )
          free(v10);
        v11 = v5 + 48;
        v12 = v5 + 8;
        do
        {
          while ( *v11 != v11 + 2 )
          {
            operator delete(*v11);
            v11 -= 4;
            if ( v12 == v11 )
            {
              operator delete(v5, 0x3A0u);
              return;
            }
          }
          v11 -= 4;
        }
        while ( v12 != v11 );
        operator delete(v5, 0x3A0u);
      }
      else
      {
        v13 = *((unsigned int *)v17 + 3744);
        *((_DWORD *)v17 + 3744) = v13 + 1;
        v6[v13 + 1856] = v5;
      }
    }
  }
}

