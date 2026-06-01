__int64 __fastcall sub_13E4440(_QWORD *a1, __int64 a2, unsigned int a3)
{
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // rax
  char *v6; // rbx
  __m128i si128; // xmm0
  unsigned int v8; // ebp
  __int64 v9; // rcx
  _BYTE *v10; // rax
  char *v11; // rbp
  _BYTE *v12; // r8
  char v13; // r15
  _QWORD *v14; // rax
  unsigned int v15; // ebx
  _BYTE *v17; // [rsp+8h] [rbp-A0h]
  _QWORD *v18; // [rsp+20h] [rbp-88h] BYREF
  __int64 v19; // [rsp+28h] [rbp-80h] BYREF
  _QWORD *v20; // [rsp+30h] [rbp-78h] BYREF
  char v21; // [rsp+38h] [rbp-70h]
  void *ptr; // [rsp+40h] [rbp-68h] BYREF
  __m128i v23; // [rsp+48h] [rbp-60h]
  _BYTE v24[80]; // [rsp+58h] [rbp-50h] BYREF

  v4 = a1[4];
  v5 = a1[6];
  v6 = (char *)a1[3];
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8E00);
  v8 = v5 - (_DWORD)v6;
  ptr = v24;
  if ( v4 < v5 )
    v8 = v4 - (_DWORD)v6;
  v23 = si128;
  v9 = 0;
  if ( v8 )
  {
    v10 = memchr(v6, 39, v8);
    if ( !v10 || v10 - v6 == -1 )
    {
      v9 = v8;
    }
    else
    {
      v9 = 0;
      if ( v8 > 0x10uLL )
      {
        sub_2236E10(&ptr, v24, v8, 1);
        v9 = v23.m128i_i64[0];
      }
      v11 = &v6[v8];
      v12 = v24;
      do
      {
        while ( 1 )
        {
          v13 = *v6;
          if ( *v6 != 39 )
            break;
          if ( v11 == ++v6 )
            goto LABEL_14;
        }
        if ( (unsigned __int64)(v9 + 1) > v23.m128i_i64[1] )
        {
          v17 = v12;
          sub_2236E10(&ptr, v12, v9 + 1, 1);
          v9 = v23.m128i_i64[0];
          v12 = v17;
        }
        ++v6;
        *((_BYTE *)ptr + v9) = v13;
        v9 = ++v23.m128i_i64[0];
      }
      while ( v11 != v6 );
LABEL_14:
      v6 = (char *)ptr;
    }
  }
  sub_2203E70(&v20, a2, v6, v9, a3);
  if ( (v21 & 1) != 0 && (v14 = v20, v20 = nullptr, v14) )
  {
    v18 = v14;
    sub_A05760(&v19, &v18);
    if ( v18 )
      (*(void (__fastcall **)(_QWORD *))(*v18 + 8LL))(v18);
    v15 = 1;
  }
  else
  {
    v15 = (unsigned int)v20;
  }
  sub_13E4420((__int64 *)&v20);
  if ( ptr != v24 )
    free(ptr);
  return v15;
}
