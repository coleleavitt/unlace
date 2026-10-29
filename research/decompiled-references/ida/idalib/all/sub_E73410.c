__int64 __fastcall sub_E73410(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v4; // ebx
  __int64 v6; // rax
  __int64 v7; // r14
  __int64 v8; // rax
  __int16 v9; // ax
  unsigned int v10; // r15d
  void *v11; // rdi
  void **v12; // r13
  _QWORD *v13; // rax
  void **v14; // r14
  void **v15; // rbp
  void **v16; // rdi
  void **v17; // rdi
  void **v18; // rbp
  void **v19; // r14
  __int64 v20; // rdx
  __int64 v21; // [rsp+8h] [rbp-B0h]
  _QWORD v22[2]; // [rsp+10h] [rbp-A8h] BYREF
  __m128i v23; // [rsp+20h] [rbp-98h] BYREF
  void *v24; // [rsp+30h] [rbp-88h] BYREF
  void *v25; // [rsp+38h] [rbp-80h]
  __int64 v26; // [rsp+40h] [rbp-78h]
  void *v27[2]; // [rsp+48h] [rbp-70h] BYREF
  _BYTE v28[16]; // [rsp+60h] [rbp-58h] BYREF
  __int16 v29; // [rsp+70h] [rbp-48h]

  v4 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 56) + 48LL))(*(_QWORD *)(a1 + 56));
  if ( v4 <= 0xFFFF && a3 <= 0xFFFF )
    return a3 | (v4 << 16);
  v6 = sub_B8C330(a2);
  v7 = sub_A62AC0(v6);
  v8 = *(_QWORD *)(v7 + 32);
  v22[0] = &v23;
  v21 = v8;
  sub_E73350(v22, "Mangling number exceeds limit (65535)", (__int64)"");
  HIDWORD(v24) = 0;
  HIBYTE(v9) = BYTE1(v24) & 0xFE;
  LOBYTE(v9) = -20;
  LOWORD(v24) = v9;
  v25 = v27;
  if ( (__m128i *)v22[0] == &v23 )
  {
    *(__m128i *)v27 = _mm_load_si128(&v23);
  }
  else
  {
    v25 = (void *)v22[0];
    v27[0] = (void *)v23.m128i_i64[0];
  }
  v26 = v22[1];
  v10 = sub_FD5980(v21, &v24);
  if ( v25 != v27 )
    operator delete(v25);
  sub_FC70B0(&v24, v7, *(unsigned int *)(a2 + 24), v10);
  if ( (_BYTE)v29 )
  {
    sub_FC7790(v26, &v24, HIBYTE(v29));
    v11 = v27[1];
    v26 = 0;
    v29 = 0;
    if ( v27[1] == v28 )
      goto LABEL_11;
    goto LABEL_10;
  }
  v11 = v27[1];
  if ( v27[1] != v28 )
LABEL_10:
    operator delete(v11);
LABEL_11:
  v12 = (void **)v24;
  if ( v24 )
  {
    v13 = v25;
    if ( v25 )
    {
      if ( v24 < v25 || v24 > (char *)v25 + 14848 )
      {
        v14 = *((void ***)v24 + 66);
        v15 = &v14[8 * (unsigned __int64)*((unsigned int *)v24 + 134)];
        if ( v14 != v15 )
        {
          do
          {
            while ( 1 )
            {
              v15 -= 8;
              v16 = (void **)v15[3];
              if ( v16 == v15 + 5 )
                break;
              operator delete(v16);
              if ( v14 == v15 )
                goto LABEL_17;
            }
          }
          while ( v14 != v15 );
LABEL_17:
          v15 = (void **)v12[66];
        }
        if ( v15 != v12 + 68 )
          free(v15);
        v17 = (void **)v12[52];
        if ( v17 != v12 + 54 )
          free(v17);
        v18 = v12 + 48;
        v19 = v12 + 8;
        do
        {
          while ( *v18 != v18 + 2 )
          {
            operator delete(*v18);
            v18 -= 4;
            if ( v19 == v18 )
              goto LABEL_25;
          }
          v18 -= 4;
        }
        while ( v19 != v18 );
LABEL_25:
        operator delete(v12, 0x3A0u);
      }
      else
      {
        v20 = *((unsigned int *)v25 + 3744);
        *((_DWORD *)v25 + 3744) = v20 + 1;
        v13[v20 + 1856] = v12;
      }
    }
  }
  return a3 | (v4 << 16);
}
