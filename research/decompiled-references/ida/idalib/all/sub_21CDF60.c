_QWORD *__fastcall sub_21CDF60(__int64 a1)
{
  _QWORD *v1; // r12
  __int64 v3; // r15
  __int64 v4; // rcx
  __int64 v5; // r9
  int v6; // eax
  _QWORD *v7; // rcx
  _QWORD *v8; // rdx
  _QWORD *v9; // rsi
  _QWORD *(__fastcall *v10)(_QWORD *, const __m128i *, __int64, __int64, __int64, __int64); // rax
  __int64 v11; // rax
  __int64 v12; // r8
  __int64 v13; // r13
  size_t *i; // rbx
  size_t *v15; // rbp
  __int64 v16; // r8
  int v17; // r13d
  _DWORD *v18; // rdi
  __m128i v19; // [rsp+0h] [rbp-A8h]
  __int64 v20; // [rsp+0h] [rbp-A8h]
  int v22; // [rsp+1Ch] [rbp-8Ch]
  _QWORD *v23; // [rsp+28h] [rbp-80h] BYREF
  _QWORD *v24; // [rsp+30h] [rbp-78h] BYREF
  _QWORD *v25; // [rsp+38h] [rbp-70h] BYREF
  _QWORD *v26; // [rsp+40h] [rbp-68h] BYREF
  void *v27[2]; // [rsp+48h] [rbp-60h] BYREF
  _BYTE v28[80]; // [rsp+58h] [rbp-50h] BYREF

  v1 = *(_QWORD **)(a1 + 48);
  if ( !v1 )
  {
    v3 = operator new(0x188u);
    sub_21CAE70(v3);
    v19 = _mm_loadu_si128((const __m128i *)(a1 + 472));
    sub_21C77A0(&v23, v3, (char *)v19.m128i_i64[0], v19.m128i_i64[1]);
    if ( v23 )
    {
      v25 = v23;
      v23 = nullptr;
      sub_21CD2A0((__int64)&v26, &v25);
      if ( v25 )
        (*(void (__fastcall **)(_QWORD *))(*v25 + 8LL))(v25);
      v6 = (int)v26;
      *(_DWORD *)(a1 + 8) = (_DWORD)v26;
      v22 = v6;
      sub_9EE8A0(a1 + 16, (__int64)v27);
      v7 = nullptr;
      if ( v22 )
      {
        sub_21C9390(&v25, v22, (__int64)v27);
        v7 = v25;
      }
      v24 = v7;
      sub_A05760(&v25, &v24);
      if ( v24 )
        (*(void (__fastcall **)(_QWORD *))(*v24 + 8LL))(v24);
      if ( v27[0] != v28 )
        operator delete(v27[0]);
      if ( v23 )
        (*(void (__fastcall **)(_QWORD *))(*v23 + 8LL))(v23);
    }
    v8 = sub_21CDCD0;
    v9 = *(_QWORD **)(a1 + 128);
    v10 = *(_QWORD *(__fastcall **)(_QWORD *, const __m128i *, __int64, __int64, __int64, __int64))(*v9 + 136LL);
    if ( v10 == sub_21CDCD0 )
    {
      v11 = v9[1];
      v12 = 0;
      v13 = *(_QWORD *)(v11 + 8);
      for ( i = *(size_t **)(v11 + 72); v13; --v13 )
      {
        if ( v12 )
        {
          v15 = i + 3;
          v9 = (_QWORD *)v3;
          v20 = v12;
          sub_21C7AF0(&v26, v3, i + 3, i[1]);
          v8 = v26;
          v16 = v20;
          if ( v26 )
            goto LABEL_23;
        }
        else
        {
          v15 = (size_t *)((char *)i + 26);
          v9 = (_QWORD *)v3;
          sub_21C7AF0(&v26, v3, (char *)i + 26, *(size_t *)((char *)i + 10));
          v8 = v26;
          if ( v26 )
            goto LABEL_23;
          v16 = *(unsigned __int16 *)i;
          i = (size_t *)((char *)i + 2);
        }
        v12 = v16 - 1;
        i = (size_t *)((char *)v15 + i[2] + i[1]);
      }
      sub_21C84F0(v3, (__int64)v9, (__int64)v8, v4, v12, v5);
    }
    else
    {
      ((void (__fastcall *)(_QWORD **, _QWORD *, __int64))v10)(&v23, v9, v3);
      v8 = v23;
      if ( v23 )
      {
LABEL_23:
        v25 = v8;
        v23 = nullptr;
        sub_21CD2A0((__int64)&v26, &v25);
        if ( v25 )
          (*(void (__fastcall **)(_QWORD *))(*v25 + 8LL))(v25);
        v17 = (int)v26;
        *(_DWORD *)(a1 + 8) = (_DWORD)v26;
        sub_9EE8A0(a1 + 16, (__int64)v27);
        if ( v17 )
        {
          sub_21C9390(&v25, v17, (__int64)v27);
          v1 = v25;
        }
        v24 = v1;
        sub_A05760(&v25, &v24);
        if ( v24 )
          (*(void (__fastcall **)(_QWORD *))(*v24 + 8LL))(v24);
        if ( v27[0] != v28 )
          operator delete(v27[0]);
        if ( v23 )
          (*(void (__fastcall **)(_QWORD *))(*v23 + 8LL))(v23);
      }
    }
    v1 = (_QWORD *)v3;
    v18 = *(_DWORD **)(a1 + 48);
    *(_QWORD *)(a1 + 48) = v3;
    if ( v18 )
    {
      sub_21C9860(v18);
      return *(_QWORD **)(a1 + 48);
    }
  }
  return v1;
}
