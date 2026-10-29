void __fastcall sub_FCDDC0(__int64 ***a1, const __m128i *a2)
{
  __int64 **v2; // r15
  __int64 *v3; // rdi
  __int64 v4; // rcx
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rdx
  _DWORD *v7; // rax
  _QWORD *v8; // r14
  _QWORD *i; // rbx
  unsigned __int64 v10; // rcx
  __int64 v11; // rdx
  _QWORD *v12; // r8
  __int64 v13; // rdx
  __int64 v14; // rax
  unsigned __int64 v15; // rdx
  __int64 v16; // rbx
  unsigned __int64 v17; // r8
  __int64 v18; // rdx
  char *v19; // rbx
  char *v20; // rbp
  __int64 *v21; // rax
  __int64 v22; // [rsp+0h] [rbp-F8h]
  _QWORD *v23; // [rsp+8h] [rbp-F0h]
  __m128i v24; // [rsp+10h] [rbp-E8h] BYREF
  _QWORD v25[2]; // [rsp+20h] [rbp-D8h] BYREF
  void *ptr; // [rsp+30h] [rbp-C8h] BYREF
  __int64 v27; // [rsp+38h] [rbp-C0h]
  _QWORD v28[23]; // [rsp+40h] [rbp-B8h] BYREF

  v2 = *a1;
  v3 = **a1;
  v24 = _mm_loadu_si128(a2);
  v4 = *v3;
  v5 = *(unsigned int *)(v24.m128i_i64[0] + 416);
  v6 = (v3[1] - *v3) >> 2;
  if ( v6 <= v5 )
  {
    v16 = 4 * v5;
    v17 = (unsigned int)(v5 + 1);
    if ( v6 < v17 )
    {
      sub_FCD810((__int64)v3, v17 - v6);
      v7 = (_DWORD *)(**v2 + v16);
    }
    else
    {
      v7 = (_DWORD *)(v4 + v16);
      if ( v6 > v17 )
      {
        v18 = v4 + 4 * v17;
        if ( v3[1] != v18 )
          v3[1] = v18;
      }
    }
  }
  else
  {
    v7 = (_DWORD *)(v4 + 4 * v5);
    if ( *v7 )
      return;
  }
  *v7 = *(_DWORD *)v2[1];
  ((void (__fastcall *)(__int64))*v2[2])(v2[2][1]);
  if ( *(_BYTE *)v2[3] )
  {
    ptr = v28;
    v27 = 0x1000000000LL;
    sub_FCB570(v24.m128i_i64[0], (__int64)&ptr);
    v19 = (char *)ptr;
    v20 = (char *)ptr + 8 * (unsigned int)v27;
    if ( ptr != v20 )
    {
      do
      {
        if ( (*(_BYTE *)(*(_QWORD *)v19 + 904LL) & 1) == 0 )
        {
          v21 = v2[4];
          v25[0] = *(_QWORD *)v19;
          v25[1] = &v24;
          if ( !v21[2] )
            std::__throw_bad_function_call();
          ((void (__fastcall *)(__int64 *, _QWORD *))v21[3])(v21, v25);
        }
        v19 += 8;
      }
      while ( v20 != v19 );
      v20 = (char *)ptr;
    }
    if ( v20 != (char *)v28 )
      free(v20);
  }
  v8 = *(_QWORD **)(v24.m128i_i64[0] + 1752);
  for ( i = *(_QWORD **)(v24.m128i_i64[0] + 1760); i != v8; v8 += 5 )
  {
    if ( *v8 )
    {
      v10 = *(unsigned int *)(*v8 + 416LL);
      v11 = **v2;
      if ( v10 < ((*v2)[1] - v11) >> 2 )
      {
        if ( *(_DWORD *)(v11 + 4 * v10) )
        {
          v12 = (_QWORD *)v24.m128i_i64[1];
          ptr = v28;
          v13 = 1;
          v27 = 0x800000001LL;
          v28[0] = v24.m128i_i64[0];
          if ( v24.m128i_i64[1] )
          {
            v14 = 1;
            do
            {
              while ( 1 )
              {
                v15 = v13 + 1;
                if ( v15 > HIDWORD(v27) )
                  break;
                *((_QWORD *)ptr + v14) = *v12;
                v12 = (_QWORD *)v12[1];
                v14 = (unsigned int)(v27 + 1);
                LODWORD(v27) = v14;
                v13 = (unsigned int)v14;
                if ( !v12 )
                  goto LABEL_14;
              }
              v23 = v12;
              v22 = *v12;
              sub_22134E0(&ptr, v28, v15, 8);
              *((_QWORD *)ptr + (unsigned int)v27) = v22;
              v12 = (_QWORD *)v23[1];
              v13 = (unsigned int)(v27 + 1);
              v14 = v13;
              LODWORD(v27) = v27 + 1;
            }
            while ( v12 );
          }
LABEL_14:
          ((void (__fastcall *)(__int64, void *, __int64, _QWORD, _QWORD, _QWORD))*v2[5])(
            v2[5][1],
            ptr,
            v13,
            *v8,
            v8[1],
            v8[2]);
          if ( ptr != v28 )
            free(ptr);
        }
      }
    }
  }
}

