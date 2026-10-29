__int64 __fastcall sub_14E12E0(__int64 a1)
{
  _QWORD *v1; // rax
  __int64 v2; // r12
  int v3; // eax
  void **v4; // rbp
  __int64 v5; // rax
  void **v6; // r12
  void **v7; // rbx
  void **v8; // rdi
  void **v9; // rdi
  void **v10; // rbx
  void **v11; // r12
  __int64 v13; // rdx
  __m128i v14; // [rsp+0h] [rbp-88h] BYREF
  __int64 v15; // [rsp+10h] [rbp-78h]
  __m128i v16; // [rsp+20h] [rbp-68h] BYREF
  __int64 v17; // [rsp+30h] [rbp-58h]
  void *v18; // [rsp+40h] [rbp-48h]
  __int64 v19; // [rsp+50h] [rbp-38h] BYREF
  __int16 v20; // [rsp+60h] [rbp-28h]

  sub_13DFA10(&v16, a1 + 24);
  if ( v16.m128i_i32[0] == 12 )
  {
    sub_13DF9D0(&v14, a1 + 24);
    *(__m128i *)(a1 + 88) = _mm_loadu_si128(&v14);
    *(_QWORD *)(a1 + 104) = v15;
    return 0;
  }
  else
  {
    v1 = *(_QWORD **)(a1 + 80);
    v2 = v1[6];
    v3 = sub_C07A10(*(_QWORD *)(a1 + 16), *(_DWORD *)(a1 + 92), v1[11], v1[7], v1[8], nullptr, nullptr);
    sub_FC70B0((__int64)&v16, v2, v3, 14);
    sub_14DC730(&v16, 12);
    if ( (_BYTE)v20 )
    {
      sub_FC7790(v17, v16.m128i_i64, SHIBYTE(v20));
      v17 = 0;
      v20 = 0;
    }
    if ( v18 != &v19 )
      operator delete(v18);
    v4 = (void **)v16.m128i_i64[0];
    if ( v16.m128i_i64[0] )
    {
      v5 = v16.m128i_i64[1];
      if ( v16.m128i_i64[1] )
      {
        if ( v16.m128i_i64[0] >= (unsigned __int64)v16.m128i_i64[1]
          && v16.m128i_i64[0] <= (unsigned __int64)(v16.m128i_i64[1] + 14848) )
        {
          v13 = *(unsigned int *)(v16.m128i_i64[1] + 14976);
          *(_DWORD *)(v16.m128i_i64[1] + 14976) = v13 + 1;
          *(_QWORD *)(v5 + 8 * v13 + 14848) = v4;
        }
        else
        {
          v6 = *(void ***)(v16.m128i_i64[0] + 528);
          v7 = &v6[8 * (unsigned __int64)*(unsigned int *)(v16.m128i_i64[0] + 536)];
          if ( v6 != v7 )
          {
            do
            {
              while ( 1 )
              {
                v7 -= 8;
                v8 = (void **)v7[3];
                if ( v8 == v7 + 5 )
                  break;
                operator delete(v8);
                if ( v6 == v7 )
                  goto LABEL_13;
              }
            }
            while ( v6 != v7 );
LABEL_13:
            v7 = (void **)v4[66];
          }
          if ( v7 != v4 + 68 )
            free(v7);
          v9 = (void **)v4[52];
          if ( v9 != v4 + 54 )
            free(v9);
          v10 = v4 + 48;
          v11 = v4 + 8;
          do
          {
            while ( *v10 != v10 + 2 )
            {
              operator delete(*v10);
              v10 -= 4;
              if ( v11 == v10 )
                goto LABEL_21;
            }
            v10 -= 4;
          }
          while ( v11 != v10 );
LABEL_21:
          operator delete(v4, 0x3A0u);
        }
      }
    }
    return 1;
  }
}
