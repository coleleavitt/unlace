unsigned __int64 __fastcall sub_2CCCB0(__int64 *a1, unsigned __int64 a2, __int64 a3, unsigned __int64 a4)
{
  unsigned __int64 v4; // rbp
  __int64 v7; // rsi
  unsigned __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rbx
  int v11; // eax
  unsigned __int64 v12; // r15
  _QWORD *v13; // rbx
  __int64 v14; // rdi
  __int64 v16; // rdx
  __int64 v17; // rcx
  unsigned __int64 v18; // rbp
  __int64 v19; // rax
  __int64 v20; // rbx
  int v21; // eax
  __int64 (__fastcall **v22)(); // [rsp+20h] [rbp-C8h] BYREF
  __int64 v23; // [rsp+28h] [rbp-C0h]
  __int64 v24; // [rsp+30h] [rbp-B8h] BYREF
  __int128 v25; // [rsp+38h] [rbp-B0h]
  __m128i si128; // [rsp+48h] [rbp-A0h]
  int v27; // [rsp+58h] [rbp-90h]
  __int64 (__fastcall **v28)(); // [rsp+60h] [rbp-88h]
  __int64 v29; // [rsp+68h] [rbp-80h]
  __int64 v30; // [rsp+70h] [rbp-78h] BYREF
  __int128 v31; // [rsp+78h] [rbp-70h]
  __int64 v32; // [rsp+88h] [rbp-60h]
  __int64 v33; // [rsp+90h] [rbp-58h]
  int v34; // [rsp+98h] [rbp-50h]
  unsigned __int64 v35; // [rsp+A8h] [rbp-40h]

  v35 = __readfsqword(0x28u);
  v4 = a1[1];
  if ( v4 != a2 )
  {
    v23 = -1;
    v24 = 0;
    v27 = -2;
    v22 = off_4E14D8;
    v25 = 0;
    si128 = _mm_load_si128((const __m128i *)&xmmword_424800);
    if ( a2 < v4 )
    {
      v12 = a2;
      do
      {
        v13 = (_QWORD *)(*a1 + (v12 << 6));
        *v13 = off_4E14B0;
        clear_tinfo_t();
        v14 = v13[2];
        if ( v14 )
        {
          v13[3] = 0;
          qfree(v14);
        }
        ++v12;
      }
      while ( v4 != v12 );
    }
    else
    {
      v7 = *a1;
      v8 = a1[2];
      if ( (unsigned __int64)&v22 >= *a1 )
      {
        a4 = v7 + (v8 << 6);
        if ( (unsigned __int64)&v22 < a4 )
        {
          v29 = -1;
          v28 = off_4E14B0;
          v30 = 0;
          v31 = 0;
          sub_2AE320(&v30, (__int64)&v24, v8, a4);
          v32 = 0;
          copy_tinfo_t();
          v28 = off_4E14D8;
          v33 = si128.m128i_i64[1];
          v34 = v27;
          if ( a1[2] < a2 )
            *a1 = qvector_reserve((__int64)a1, *a1, a2, 64);
          v18 = a1[1];
          if ( v18 < a2 )
          {
            do
            {
              v19 = v29;
              v20 = *a1 + (v18 << 6);
              *(_QWORD *)v20 = off_4E14B0;
              *(_QWORD *)(v20 + 8) = v19;
              *(_QWORD *)(v20 + 16) = 0;
              *(_OWORD *)(v20 + 24) = 0;
              sub_2AE320((_QWORD *)(v20 + 16), (__int64)&v30, v16, v17);
              *(_QWORD *)(v20 + 40) = 0;
              copy_tinfo_t();
              ++v18;
              *(_QWORD *)(v20 + 48) = v33;
              v21 = v34;
              *(_QWORD *)v20 = off_4E14D8;
              *(_DWORD *)(v20 + 56) = v21;
            }
            while ( a2 != v18 );
          }
          a1[1] = a2;
          v28 = off_4E14B0;
          sub_2B5160(&v30);
          goto LABEL_14;
        }
      }
      if ( v8 < a2 )
      {
        *a1 = qvector_reserve((__int64)a1, v7, a2, 64);
        v4 = a1[1];
      }
      for ( ; v4 < a2; *(_DWORD *)(v10 + 56) = v11 )
      {
        v9 = v23;
        v10 = *a1 + (v4 << 6);
        *(_QWORD *)v10 = off_4E14B0;
        *(_QWORD *)(v10 + 8) = v9;
        *(_QWORD *)(v10 + 16) = 0;
        *(_OWORD *)(v10 + 24) = 0;
        sub_2AE320((_QWORD *)(v10 + 16), (__int64)&v24, v8, a4);
        *(_QWORD *)(v10 + 40) = 0;
        copy_tinfo_t();
        ++v4;
        *(_QWORD *)(v10 + 48) = si128.m128i_i64[1];
        v11 = v27;
        *(_QWORD *)v10 = off_4E14D8;
      }
    }
    a1[1] = a2;
LABEL_14:
    v22 = off_4E14B0;
    sub_2B5160(&v24);
  }
  return v35 - __readfsqword(0x28u);
}
