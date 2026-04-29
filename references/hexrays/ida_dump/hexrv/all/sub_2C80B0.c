unsigned __int64 __fastcall sub_2C80B0(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rbp
  __int64 v5; // rsi
  unsigned __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rbx
  int v9; // eax
  unsigned __int64 v10; // r15
  _QWORD *v11; // rbx
  __int64 v12; // rdi
  unsigned __int64 v14; // rbp
  __int64 v15; // rax
  __int64 v16; // rbx
  int v17; // eax
  __int64 (__fastcall **v18)(); // [rsp+20h] [rbp-C8h] BYREF
  __int64 v19; // [rsp+28h] [rbp-C0h]
  __int64 v20; // [rsp+30h] [rbp-B8h] BYREF
  __int128 v21; // [rsp+38h] [rbp-B0h]
  __m128i si128; // [rsp+48h] [rbp-A0h] BYREF
  int v23; // [rsp+58h] [rbp-90h]
  __int64 (__fastcall **v24)(); // [rsp+60h] [rbp-88h]
  __int64 v25; // [rsp+68h] [rbp-80h]
  __int64 v26; // [rsp+70h] [rbp-78h] BYREF
  __int128 v27; // [rsp+78h] [rbp-70h]
  __int64 v28; // [rsp+88h] [rbp-60h] BYREF
  __int64 v29; // [rsp+90h] [rbp-58h]
  int v30; // [rsp+98h] [rbp-50h]
  unsigned __int64 v31; // [rsp+A8h] [rbp-40h]

  v31 = __readfsqword(0x28u);
  v2 = a1[1];
  if ( v2 != a2 )
  {
    v19 = -1;
    v20 = 0;
    v23 = -2;
    v18 = off_4B3F18;
    v21 = 0;
    si128 = _mm_load_si128((const __m128i *)&xmmword_3FE260);
    if ( a2 < v2 )
    {
      v10 = a2;
      do
      {
        v11 = (_QWORD *)(*a1 + (v10 << 6));
        *v11 = off_4B3EF0;
        clear_tinfo_t(v11 + 5);
        v12 = v11[2];
        if ( v12 )
        {
          v11[3] = 0;
          qfree(v12);
        }
        ++v10;
      }
      while ( v2 != v10 );
    }
    else
    {
      v5 = *a1;
      v6 = a1[2];
      if ( (unsigned __int64)&v18 >= *a1 && (unsigned __int64)&v18 < v5 + (v6 << 6) )
      {
        v25 = -1;
        v24 = off_4B3EF0;
        v26 = 0;
        v27 = 0;
        sub_2A9720(&v26, (__int64)&v20);
        v28 = 0;
        copy_tinfo_t(&v28, &si128);
        v24 = off_4B3F18;
        v29 = si128.m128i_i64[1];
        v30 = v23;
        if ( a1[2] < a2 )
          *a1 = qvector_reserve(a1, *a1, a2, 64);
        v14 = a1[1];
        if ( v14 < a2 )
        {
          do
          {
            v15 = v25;
            v16 = *a1 + (v14 << 6);
            *(_QWORD *)v16 = off_4B3EF0;
            *(_QWORD *)(v16 + 8) = v15;
            *(_QWORD *)(v16 + 16) = 0;
            *(_OWORD *)(v16 + 24) = 0;
            sub_2A9720((_QWORD *)(v16 + 16), (__int64)&v26);
            *(_QWORD *)(v16 + 40) = 0;
            copy_tinfo_t(v16 + 40, &v28);
            ++v14;
            *(_QWORD *)(v16 + 48) = v29;
            v17 = v30;
            *(_QWORD *)v16 = off_4B3F18;
            *(_DWORD *)(v16 + 56) = v17;
          }
          while ( a2 != v14 );
        }
        a1[1] = a2;
        v24 = off_4B3EF0;
        sub_2B0560(&v26);
        goto LABEL_14;
      }
      if ( v6 < a2 )
      {
        *a1 = qvector_reserve(a1, v5, a2, 64);
        v2 = a1[1];
      }
      for ( ; v2 < a2; *(_DWORD *)(v8 + 56) = v9 )
      {
        v7 = v19;
        v8 = *a1 + (v2 << 6);
        *(_QWORD *)v8 = off_4B3EF0;
        *(_QWORD *)(v8 + 8) = v7;
        *(_QWORD *)(v8 + 16) = 0;
        *(_OWORD *)(v8 + 24) = 0;
        sub_2A9720((_QWORD *)(v8 + 16), (__int64)&v20);
        *(_QWORD *)(v8 + 40) = 0;
        copy_tinfo_t(v8 + 40, &si128);
        ++v2;
        *(_QWORD *)(v8 + 48) = si128.m128i_i64[1];
        v9 = v23;
        *(_QWORD *)v8 = off_4B3F18;
      }
    }
    a1[1] = a2;
LABEL_14:
    v18 = off_4B3EF0;
    sub_2B0560(&v20);
  }
  return v31 - __readfsqword(0x28u);
}
