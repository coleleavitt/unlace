__int64 __fastcall sub_3AE950(__int64 a1, unsigned int a2, __m128 a3)
{
  __int64 v5; // rdi
  __int64 v7; // rsi
  __m128i v8; // xmm1
  const char *v9; // rax
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned int v13; // r13d
  __int64 *v14; // rbx
  __int64 v16; // rdx
  __int64 v17; // r14
  __int64 i; // rbp
  __int64 *v19; // rax
  __int64 v20; // rdi
  __int64 v21; // rdi
  __int64 v22; // rdx
  __int64 v23; // r14
  __int64 j; // rbp
  __int64 *v25; // rax
  __int64 v26; // rdi
  __m128i v28; // [rsp+0h] [rbp-4E8h] BYREF
  unsigned __int64 *v29[2]; // [rsp+10h] [rbp-4D8h] BYREF
  __int64 v30; // [rsp+20h] [rbp-4C8h] BYREF
  __int128 v31; // [rsp+28h] [rbp-4C0h]
  __int64 v32; // [rsp+38h] [rbp-4B0h]
  __int64 (__fastcall **v33)(); // [rsp+40h] [rbp-4A8h] BYREF
  int v34; // [rsp+48h] [rbp-4A0h]
  __int64 v35; // [rsp+50h] [rbp-498h]
  __int128 v36; // [rsp+58h] [rbp-490h]
  __int64 v37; // [rsp+68h] [rbp-480h]
  __int128 v38; // [rsp+70h] [rbp-478h]
  __m128i v39; // [rsp+80h] [rbp-468h]
  unsigned int v40; // [rsp+90h] [rbp-458h]
  char v41[1032]; // [rsp+A0h] [rbp-448h] BYREF
  unsigned __int64 v42; // [rsp+4A8h] [rbp-40h]

  v5 = *(_QWORD *)(a1 + 32);
  v42 = __readfsqword(0x28u);
  v29[0] = nullptr;
  v29[1] = nullptr;
  v28 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v29, (__m128i)(unsigned __int64)&v30);
  sub_3840C0(v5, v29, a1, a3);
  v7 = *(_QWORD *)(a1 + 32);
  v8 = _mm_load_si128(&v28);
  v30 = 0;
  v31 = 0;
  v32 = v7;
  if ( v7 )
  {
    ++*(_DWORD *)(v7 + 104);
    v7 = *(_QWORD *)(a1 + 32);
  }
  v34 = 0;
  v35 = 0;
  v37 = 0;
  v33 = (__int64 (__fastcall **)())&off_4B3AA8;
  v40 = a2;
  v36 = 0;
  v38 = 0;
  v39 = v8;
  sub_24E700((__int64 *)&v33, v7 + 16, 0);
  v9 = (const char *)sub_2590F0(a2);
  qsnprintf(v41, 1024, "%s-statements", v9);
  v13 = sub_3ADDD0(a1, (__m128i *)&v30, v41, v10, v11, v12);
  v33 = off_4A8538;
  if ( v37 )
  {
    *(_QWORD *)&v38 = 0;
    qfree(v37);
  }
  if ( v35 )
  {
    *(_QWORD *)&v36 = 0;
    qfree(v35);
  }
  v14 = (__int64 *)v32;
  if ( v32 )
  {
    if ( (*(_DWORD *)(v32 + 104))-- == 1 )
    {
      sub_2515F0(v14);
      v16 = v14[23];
      if ( v16 )
      {
        v17 = v14[24];
        if ( v17 )
        {
          for ( i = 0; i != v17; ++i )
          {
            v19 = (__int64 *)(v16 + 24 * i);
            v20 = *v19;
            if ( *v19 )
            {
              v19[1] = 0;
              qfree(v20);
              v16 = v14[23];
            }
          }
        }
        v14[24] = 0;
        qfree(v16);
      }
      v21 = v14[20];
      if ( v21 )
      {
        v14[21] = 0;
        qfree(v21);
      }
      v22 = v14[16];
      if ( v22 )
      {
        v23 = v14[17];
        if ( v23 )
        {
          for ( j = 0; j != v23; ++j )
          {
            v25 = (__int64 *)(v22 + 32 * j);
            v26 = *v25;
            if ( *v25 )
            {
              v25[1] = 0;
              qfree(v26);
              v22 = v14[16];
            }
          }
        }
        v14[17] = 0;
        qfree(v22);
      }
      sub_24DCD0((__int64)(v14 + 2));
      j__qfree(v14);
    }
  }
  if ( v30 )
  {
    *(_QWORD *)&v31 = 0;
    qfree(v30);
  }
  sub_389850((__int64 *)v29);
  return v13;
}
