__int64 __fastcall sub_6C8150(
        _QWORD *a1,
        __int64 a2,
        _BYTE *a3,
        double a4,
        __m128i a5,
        double a6,
        __m128 a7,
        double a8,
        double a9,
        double a10,
        __m128 a11)
{
  unsigned int v11; // r13d
  char *v12; // rdi
  __int64 v13; // r12
  __int64 v14; // rbp
  char *v15; // rbx
  void *v16; // rdi
  void *v17; // rdi
  unsigned __int8 v19; // [rsp+7h] [rbp-99h] BYREF
  void *v20; // [rsp+8h] [rbp-98h] BYREF
  __int128 v21; // [rsp+10h] [rbp-90h]
  __int64 v22; // [rsp+20h] [rbp-80h]
  __int64 v23; // [rsp+28h] [rbp-78h] BYREF
  _QWORD v24[2]; // [rsp+30h] [rbp-70h] BYREF
  int v25; // [rsp+40h] [rbp-60h]
  void *ptr; // [rsp+48h] [rbp-58h]
  __int128 v27; // [rsp+50h] [rbp-50h]
  char v28; // [rsp+60h] [rbp-40h]
  unsigned __int64 v29; // [rsp+70h] [rbp-30h]

  v29 = __readfsqword(0x28u);
  v19 = 12;
  v28 = 16;
  v20 = nullptr;
  v22 = 0;
  v23 = 0;
  v24[0] = 0;
  v24[1] = 0;
  v25 = 0;
  ptr = nullptr;
  v21 = 0;
  v27 = 0;
  v11 = sub_6C7B20(a1, (__int64)&v20, &v19, a2, a3, (__m128)0LL, a5, a6, a7, a8, a9, a10, a11);
  if ( (_BYTE)v11 )
    sub_6BF560((__int64)a1, (__int64)&v20, v19, a2);
  if ( ptr )
  {
    *(_QWORD *)&v27 = 0;
    qfree(ptr);
  }
  cleanup_argloc(v24);
  clear_tinfo_t(&v23);
  v12 = (char *)v20;
  if ( v20 )
  {
    v13 = v21;
    if ( (_QWORD)v21 )
    {
      v14 = 0;
      do
      {
        v15 = &v12[80 * v14];
        clear_tinfo_t(v15 + 64);
        v16 = *((void **)v15 + 5);
        if ( v16 )
        {
          *((_QWORD *)v15 + 6) = 0;
          qfree(v16);
        }
        v17 = *((void **)v15 + 2);
        if ( v17 )
        {
          *((_QWORD *)v15 + 3) = 0;
          qfree(v17);
        }
        ++v14;
        cleanup_argloc(v15);
        v12 = (char *)v20;
      }
      while ( v13 != v14 );
    }
    *(_QWORD *)&v21 = 0;
    qfree(v12);
  }
  return v11;
}

