__int64 __fastcall sub_3AF9E0(__int64 a1, __int64 a2, __m128 a3)
{
  __int64 v5; // rdi
  __int64 v7; // rax
  __int64 v8; // rsi
  __m128i v9; // xmm1
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  const char *v14; // rdx
  unsigned int v15; // r13d
  __int64 *v16; // rbx
  __int64 v18; // rdx
  __int64 v19; // r14
  __int64 i; // rbp
  __int64 *v21; // rax
  __int64 v22; // rdi
  __int64 v23; // rdi
  __int64 v24; // rdx
  __int64 v25; // r14
  __int64 j; // rbp
  __int64 *v27; // rax
  __int64 v28; // rdi
  __m128i v30; // [rsp+0h] [rbp-C8h] BYREF
  unsigned __int64 *v31[2]; // [rsp+10h] [rbp-B8h] BYREF
  __int64 v32; // [rsp+20h] [rbp-A8h] BYREF
  __int128 v33; // [rsp+28h] [rbp-A0h]
  __int64 v34; // [rsp+38h] [rbp-90h]
  __int64 (__fastcall **v35)(); // [rsp+40h] [rbp-88h] BYREF
  int v36; // [rsp+48h] [rbp-80h]
  __int64 v37; // [rsp+50h] [rbp-78h]
  __int128 v38; // [rsp+58h] [rbp-70h]
  __int64 v39; // [rsp+68h] [rbp-60h]
  __int128 v40; // [rsp+70h] [rbp-58h]
  __m128i v41; // [rsp+80h] [rbp-48h]
  int v42; // [rsp+90h] [rbp-38h]
  unsigned __int64 v43; // [rsp+98h] [rbp-30h]

  v5 = *(_QWORD *)(a1 + 32);
  v43 = __readfsqword(0x28u);
  v31[0] = nullptr;
  v31[1] = nullptr;
  v30 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v31, (__m128i)(unsigned __int64)&v32);
  sub_385940(v5, v31, a1, a3);
  v7 = *(_QWORD *)(a1 + 24);
  v8 = *(_QWORD *)(a1 + 32);
  v9 = _mm_load_si128(&v30);
  v33 = 0;
  v10 = a2 - *(_QWORD *)(v7 + 432);
  v34 = v8;
  v32 = 0;
  if ( v8 )
  {
    ++*(_DWORD *)(v8 + 104);
    v8 = *(_QWORD *)(a1 + 32);
  }
  v36 = 2;
  v37 = 0;
  v39 = 0;
  v35 = (__int64 (__fastcall **)())&off_4BAB68;
  v42 = -991146299 * (v10 >> 3);
  v38 = 0;
  v40 = 0;
  v41 = v9;
  sub_2506C0((__int64 *)&v35, v8 + 16, 0);
  v14 = s1;
  if ( *(_QWORD *)(a2 + 40) )
    v14 = *(const char **)(a2 + 32);
  v15 = sub_3AF650(a1, (__m128i *)&v32, v14, v11, v12, v13);
  v35 = off_4AF6D8;
  if ( v39 )
  {
    *(_QWORD *)&v40 = 0;
    qfree(v39);
  }
  if ( v37 )
  {
    *(_QWORD *)&v38 = 0;
    qfree(v37);
  }
  v16 = (__int64 *)v34;
  if ( v34 )
  {
    if ( (*(_DWORD *)(v34 + 104))-- == 1 )
    {
      sub_2535B0(v16);
      v18 = v16[23];
      if ( v18 )
      {
        v19 = v16[24];
        if ( v19 )
        {
          for ( i = 0; i != v19; ++i )
          {
            v21 = (__int64 *)(v18 + 24 * i);
            v22 = *v21;
            if ( *v21 )
            {
              v21[1] = 0;
              qfree(v22);
              v18 = v16[23];
            }
          }
        }
        v16[24] = 0;
        qfree(v18);
      }
      v23 = v16[20];
      if ( v23 )
      {
        v16[21] = 0;
        qfree(v23);
      }
      v24 = v16[16];
      if ( v24 )
      {
        v25 = v16[17];
        if ( v25 )
        {
          for ( j = 0; j != v25; ++j )
          {
            v27 = (__int64 *)(v24 + 32 * j);
            v28 = *v27;
            if ( *v27 )
            {
              v27[1] = 0;
              qfree(v28);
              v24 = v16[16];
            }
          }
        }
        v16[17] = 0;
        qfree(v24);
      }
      sub_24FC90((__int64)(v16 + 2));
      j__qfree(v16);
    }
  }
  if ( v32 )
  {
    *(_QWORD *)&v33 = 0;
    qfree(v32);
  }
  sub_38B0D0((__int64 *)v31);
  return v15;
}
