__int64 __fastcall sub_3B6250(__int64 a1, unsigned int a2, __m128 a3)
{
  __int64 v5; // rdi
  __int64 v7; // rsi
  __m128i v8; // xmm1
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned int v12; // r13d
  __int64 *v13; // rbx
  __int64 v15; // rdx
  __int64 v16; // r14
  __int64 i; // rbp
  __int64 *v18; // rax
  __int64 v19; // rdi
  __int64 v20; // rdi
  __int64 v21; // rdx
  __int64 v22; // r14
  __int64 j; // rbp
  __int64 *v24; // rax
  __int64 v25; // rdi
  __m128i v27; // [rsp+0h] [rbp-4E8h] BYREF
  unsigned __int64 *v28[2]; // [rsp+10h] [rbp-4D8h] BYREF
  __int64 v29; // [rsp+20h] [rbp-4C8h] BYREF
  __int128 v30; // [rsp+28h] [rbp-4C0h]
  __int64 v31; // [rsp+38h] [rbp-4B0h]
  __int64 (__fastcall **v32)(); // [rsp+40h] [rbp-4A8h] BYREF
  int v33; // [rsp+48h] [rbp-4A0h]
  __int64 v34; // [rsp+50h] [rbp-498h]
  __int128 v35; // [rsp+58h] [rbp-490h]
  __int64 v36; // [rsp+68h] [rbp-480h]
  __int128 v37; // [rsp+70h] [rbp-478h]
  __m128i v38; // [rsp+80h] [rbp-468h]
  unsigned int v39; // [rsp+90h] [rbp-458h]
  _BYTE v40[1032]; // [rsp+A0h] [rbp-448h] BYREF
  unsigned __int64 v41; // [rsp+4A8h] [rbp-40h]

  v5 = *(_QWORD *)(a1 + 32);
  v41 = __readfsqword(0x28u);
  v28[0] = nullptr;
  v28[1] = nullptr;
  v27 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v28, (__m128i)(unsigned __int64)&v29);
  sub_38B9C0(v5, v28, a1, a3);
  v7 = *(_QWORD *)(a1 + 32);
  v8 = _mm_load_si128(&v27);
  v29 = 0;
  v30 = 0;
  v31 = v7;
  if ( v7 )
  {
    ++*(_DWORD *)(v7 + 104);
    v7 = *(_QWORD *)(a1 + 32);
  }
  v33 = 0;
  v34 = 0;
  v36 = 0;
  v32 = (__int64 (__fastcall **)())&off_4E72A8;
  v39 = a2;
  v35 = 0;
  v37 = 0;
  v38 = v8;
  sub_255A80((__int64 *)&v32, v7 + 16, 0);
  sub_260470(a2);
  qsnprintf();
  v12 = sub_3B56D0(a1, (__int64)&v29, (__int64)v40, v9, v10, v11);
  v32 = off_4DBCF8;
  if ( v36 )
  {
    *(_QWORD *)&v37 = 0;
    qfree(v36);
  }
  if ( v34 )
  {
    *(_QWORD *)&v35 = 0;
    qfree(v34);
  }
  v13 = (__int64 *)v31;
  if ( v31 )
  {
    if ( (*(_DWORD *)(v31 + 104))-- == 1 )
    {
      sub_258970(v13);
      v15 = v13[23];
      if ( v15 )
      {
        v16 = v13[24];
        if ( v16 )
        {
          for ( i = 0; i != v16; ++i )
          {
            v18 = (__int64 *)(v15 + 24 * i);
            v19 = *v18;
            if ( *v18 )
            {
              v18[1] = 0;
              qfree(v19);
              v15 = v13[23];
            }
          }
        }
        v13[24] = 0;
        qfree(v15);
      }
      v20 = v13[20];
      if ( v20 )
      {
        v13[21] = 0;
        qfree(v20);
      }
      v21 = v13[16];
      if ( v21 )
      {
        v22 = v13[17];
        if ( v22 )
        {
          for ( j = 0; j != v22; ++j )
          {
            v24 = (__int64 *)(v21 + 32 * j);
            v25 = *v24;
            if ( *v24 )
            {
              v24[1] = 0;
              qfree(v25);
              v21 = v13[16];
            }
          }
        }
        v13[17] = 0;
        qfree(v21);
      }
      sub_255050((__int64)(v13 + 2));
      j__qfree((__int64)v13);
    }
  }
  if ( v29 )
  {
    *(_QWORD *)&v30 = 0;
    qfree(v29);
  }
  sub_391150((__int64 *)v28);
  return v12;
}
