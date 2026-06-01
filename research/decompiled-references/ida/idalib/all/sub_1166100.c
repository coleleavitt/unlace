void __fastcall sub_1166100(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // eax
  unsigned __int64 v5; // rdx
  char *v6; // r14
  size_t v7; // r12
  __int64 v8; // rax
  _BYTE *v9; // rdi
  char *v10; // rdi
  const char *v11; // [rsp+0h] [rbp-188h] BYREF
  __int16 v12; // [rsp+20h] [rbp-168h]
  char *v13; // [rsp+30h] [rbp-158h] BYREF
  __int16 v14; // [rsp+50h] [rbp-138h]
  const char *v15; // [rsp+60h] [rbp-128h] BYREF
  __int16 v16; // [rsp+80h] [rbp-108h]
  _QWORD v17[4]; // [rsp+90h] [rbp-F8h] BYREF
  __int16 v18; // [rsp+B0h] [rbp-D8h]
  void *ptr; // [rsp+C0h] [rbp-C8h] BYREF
  __m128i si128; // [rsp+C8h] [rbp-C0h]
  _BYTE v21[176]; // [rsp+D8h] [rbp-B0h] BYREF

  v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 608LL))(a1);
  if ( !v4 )
  {
    v6 = sub_1165840(a1, a2);
    v7 = v5;
    ptr = v21;
    si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
    if ( v5 > 0x80 )
    {
      sub_2236E10(&ptr, v21, v5, 1);
      v10 = (char *)ptr + si128.m128i_i64[0];
    }
    else
    {
      if ( !v5 )
      {
LABEL_4:
        si128.m128i_i64[0] = v5;
        v17[0] = "v1";
        v18 = 259;
        v15 = "c++";
        v16 = 259;
        v13 = "include";
        v14 = 259;
        v12 = 259;
        v11 = "opt/IBM/openxlCSDK";
        sub_228A3B0(&ptr, &v11, &v13, &v15, v17);
        v18 = 261;
        v17[0] = ptr;
        v17[1] = si128.m128i_i64[0];
        sub_112FA80(a2, a3, (__int64)v17);
        v8 = *(unsigned int *)(a3 + 8);
        if ( v8 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
        {
          sub_2237220(a3, a3 + 16, v8 + 1, 8);
          v8 = *(unsigned int *)(a3 + 8);
        }
        *(_QWORD *)(*(_QWORD *)a3 + 8 * v8) = "-D__LIBC_NO_CPP_MATH_OVERLOADS__";
        v9 = ptr;
        ++*(_DWORD *)(a3 + 8);
        if ( v9 != v21 )
          free(v9);
        return;
      }
      v10 = v21;
    }
    memcpy(v10, v6, v7);
    v5 = v7 + si128.m128i_i64[0];
    goto LABEL_4;
  }
  if ( v4 == 1 )
    sub_2221C70("picking up libstdc++ headers is unimplemented on AIX", 1);
  sub_1166310();
}
