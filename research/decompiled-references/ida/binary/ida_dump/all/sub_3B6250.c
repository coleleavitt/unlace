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
  _QWORD *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // r14
  __int64 j; // rbp
  _QWORD *v22; // rax
  __m128i v24; // [rsp+0h] [rbp-4E8h] BYREF
  unsigned __int64 *v25[2]; // [rsp+10h] [rbp-4D8h] BYREF
  __int64 v26; // [rsp+20h] [rbp-4C8h] BYREF
  __int128 v27; // [rsp+28h] [rbp-4C0h]
  __int64 v28; // [rsp+38h] [rbp-4B0h]
  __int64 (__fastcall **v29)(); // [rsp+40h] [rbp-4A8h] BYREF
  int v30; // [rsp+48h] [rbp-4A0h]
  __int64 v31; // [rsp+50h] [rbp-498h]
  __int128 v32; // [rsp+58h] [rbp-490h]
  __int64 v33; // [rsp+68h] [rbp-480h]
  __int128 v34; // [rsp+70h] [rbp-478h]
  __m128i v35; // [rsp+80h] [rbp-468h]
  unsigned int v36; // [rsp+90h] [rbp-458h]
  _BYTE v37[1032]; // [rsp+A0h] [rbp-448h] BYREF
  unsigned __int64 v38; // [rsp+4A8h] [rbp-40h]

  v5 = *(_QWORD *)(a1 + 32);
  v38 = __readfsqword(0x28u);
  v25[0] = nullptr;
  v25[1] = nullptr;
  v24 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v25, (__m128i)(unsigned __int64)&v26);
  sub_38B9C0(v5, v25, a1, a3);
  v7 = *(_QWORD *)(a1 + 32);
  v8 = _mm_load_si128(&v24);
  v26 = 0;
  v27 = 0;
  v28 = v7;
  if ( v7 )
  {
    ++*(_DWORD *)(v7 + 104);
    v7 = *(_QWORD *)(a1 + 32);
  }
  v30 = 0;
  v31 = 0;
  v33 = 0;
  v29 = (__int64 (__fastcall **)())&off_4E72A8;
  v36 = a2;
  v32 = 0;
  v34 = 0;
  v35 = v8;
  sub_255A80((__int64 *)&v29, v7 + 16, 0);
  sub_260470(a2);
  qsnprintf();
  v12 = sub_3B56D0(a1, (__int64)&v26, (__int64)v37, v9, v10, v11);
  v29 = off_4DBCF8;
  if ( v33 )
  {
    *(_QWORD *)&v34 = 0;
    qfree();
  }
  if ( v31 )
  {
    *(_QWORD *)&v32 = 0;
    qfree();
  }
  v13 = (__int64 *)v28;
  if ( v28 )
  {
    if ( (*(_DWORD *)(v28 + 104))-- == 1 )
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
            v18 = (_QWORD *)(v15 + 24 * i);
            if ( *v18 )
            {
              v18[1] = 0;
              qfree();
              v15 = v13[23];
            }
          }
        }
        v13[24] = 0;
        qfree();
      }
      if ( v13[20] )
      {
        v13[21] = 0;
        qfree();
      }
      v19 = v13[16];
      if ( v19 )
      {
        v20 = v13[17];
        if ( v20 )
        {
          for ( j = 0; j != v20; ++j )
          {
            v22 = (_QWORD *)(v19 + 32 * j);
            if ( *v22 )
            {
              v22[1] = 0;
              qfree();
              v19 = v13[16];
            }
          }
        }
        v13[17] = 0;
        qfree();
      }
      sub_255050((__int64)(v13 + 2));
      j__qfree();
    }
  }
  if ( v26 )
  {
    *(_QWORD *)&v27 = 0;
    qfree();
  }
  sub_391150((__int64 *)v25);
  return v12;
}
