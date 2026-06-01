_BYTE *__fastcall sub_E39C40(__int64 **a1, unsigned int a2)
{
  __int64 v3; // rax
  __int64 v4; // r12
  __int64 v5; // r14
  __int16 v6; // ax
  unsigned int v7; // r14d
  void **v8; // r12
  _QWORD *v9; // rax
  void **v10; // r13
  void **v11; // rbx
  void **v12; // rdi
  void **v13; // rdi
  void **v14; // rbx
  void **v15; // r13
  __int64 v16; // rdi
  _BYTE *result; // rax
  __int64 v18; // rdx
  _QWORD v19[2]; // [rsp+0h] [rbp-A8h] BYREF
  __m128i v20; // [rsp+10h] [rbp-98h] BYREF
  void *v21; // [rsp+20h] [rbp-88h] BYREF
  void *v22; // [rsp+28h] [rbp-80h]
  __int64 v23; // [rsp+30h] [rbp-78h]
  void *v24[2]; // [rsp+38h] [rbp-70h] BYREF
  __int64 v25; // [rsp+50h] [rbp-58h] BYREF
  __int16 v26; // [rsp+60h] [rbp-48h]

  v3 = **a1;
  v19[0] = &v20;
  v4 = *(_QWORD *)(v3 + 16);
  v5 = *(_QWORD *)(v4 + 32);
  sub_E392B0(v19, "cannot mangle this requires-expression containing a substitution failure", (__int64)"");
  HIDWORD(v21) = 0;
  HIBYTE(v6) = BYTE1(v21) & 0xFE;
  LOBYTE(v6) = -20;
  LOWORD(v21) = v6;
  v22 = v24;
  if ( (__m128i *)v19[0] == &v20 )
  {
    *(__m128i *)v24 = _mm_load_si128(&v20);
  }
  else
  {
    v22 = (void *)v19[0];
    v24[0] = (void *)v20.m128i_i64[0];
  }
  v23 = v19[1];
  v7 = sub_FD5980(v5, &v21);
  if ( v22 != v24 )
    operator delete(v22);
  sub_FC70B0(&v21, v4, a2, v7);
  if ( (_BYTE)v26 )
  {
    sub_FC7790(v23, &v21, HIBYTE(v26));
    v23 = 0;
    v26 = 0;
  }
  if ( v24[1] != &v25 )
    operator delete(v24[1]);
  v8 = (void **)v21;
  if ( v21 )
  {
    v9 = v22;
    if ( v22 )
    {
      if ( v21 < v22 || v21 > (char *)v22 + 14848 )
      {
        v10 = *((void ***)v21 + 66);
        v11 = &v10[8 * (unsigned __int64)*((unsigned int *)v21 + 134)];
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
                goto LABEL_15;
            }
          }
          while ( v10 != v11 );
LABEL_15:
          v11 = (void **)v8[66];
        }
        if ( v11 != v8 + 68 )
          free(v11);
        v13 = (void **)v8[52];
        v14 = v8 + 52;
        if ( v13 != v8 + 54 )
          free(v13);
        v15 = v8 + 12;
        do
        {
          while ( 1 )
          {
            v14 -= 4;
            if ( *v14 == v14 + 2 )
              break;
            operator delete(*v14);
            if ( v14 == v15 )
              goto LABEL_23;
          }
        }
        while ( v14 != v15 );
LABEL_23:
        operator delete(v8, 0x3A0u);
      }
      else
      {
        v18 = *((unsigned int *)v22 + 3744);
        *((_DWORD *)v22 + 3744) = v18 + 1;
        v9[v18 + 1856] = v8;
      }
    }
  }
  v16 = (*a1)[1];
  result = *(_BYTE **)(v16 + 32);
  if ( (unsigned __int64)result >= *(_QWORD *)(v16 + 24) )
    return (_BYTE *)sub_227BA10(v16, 70);
  *(_QWORD *)(v16 + 32) = result + 1;
  *result = 70;
  return result;
}
