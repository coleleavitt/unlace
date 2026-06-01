__int64 __fastcall sub_3767A0(
        __int64 a1,
        __m128 a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14)
{
  unsigned int v14; // r13d
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rdi
  __int64 v18; // r12
  __int64 v19; // rbp
  _QWORD *v20; // rbx
  __int64 v22; // [rsp+10h] [rbp-98h] BYREF
  __int128 v23; // [rsp+18h] [rbp-90h]
  __int64 v24; // [rsp+28h] [rbp-80h]
  __int64 v25; // [rsp+30h] [rbp-78h]
  __int64 v26; // [rsp+38h] [rbp-70h]
  __int128 v27; // [rsp+40h] [rbp-68h]
  __int64 v28; // [rsp+50h] [rbp-58h]
  __int128 v29; // [rsp+58h] [rbp-50h]
  char v30; // [rsp+68h] [rbp-40h]
  unsigned __int64 v31; // [rsp+78h] [rbp-30h]

  v15 = *(_QWORD *)(a1 + 1496);
  v16 = *(unsigned int *)(a1 + 464);
  v31 = __readfsqword(0x28u);
  if ( *(_DWORD *)(v15 + 656) <= (int)v16 )
    sub_3311F0((_QWORD *)a1, 0xFFFFFFFFFFFFFFFFLL, 0x16u, v16, a13, a14, a2, a3, a4, a5, a6, a7, a8, a9);
  v22 = 0;
  v30 = 16;
  v24 = 0;
  v25 = 0;
  v26 = 0;
  v28 = 0;
  v23 = 0;
  v27 = 0;
  v29 = 0;
  sub_3760F0(a1, (__int64)&v22);
  create_tinfo();
  LOBYTE(v14) = (unsigned int)verify_tinfo() == 0;
  if ( v28 )
  {
    *(_QWORD *)&v29 = 0;
    qfree();
  }
  cleanup_argloc();
  clear_tinfo_t();
  v17 = v22;
  if ( v22 )
  {
    v18 = v23;
    if ( (_QWORD)v23 )
    {
      v19 = 0;
      do
      {
        v20 = (_QWORD *)(v17 + 80 * v19);
        clear_tinfo_t();
        if ( v20[5] )
        {
          v20[6] = 0;
          qfree();
        }
        if ( v20[2] )
        {
          v20[3] = 0;
          qfree();
        }
        ++v19;
        cleanup_argloc();
        v17 = v22;
      }
      while ( v18 != v19 );
    }
    *(_QWORD *)&v23 = 0;
    qfree();
  }
  return v14;
}
