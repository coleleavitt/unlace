__int64 __fastcall sub_681570(__m128i *a1, _BYTE *a2, int a3)
{
  __int64 v4; // rax
  bool (__fastcall *v5)(__int64); // rdx
  int v6; // ebp
  int v7; // r14d
  int v8; // r15d
  __int64 v9; // rax
  __int64 v10; // rdx
  unsigned int v11; // eax
  __m128i **v12; // rbp
  unsigned int v13; // r12d
  __m128i **v16; // rdi
  __m128i *v17; // r13
  __m128i *v18; // rbx
  __m128i **v19; // rdi
  __m128i **v20; // rdi
  __m128i *v21; // rbp
  __int64 v22; // rbx
  __int64 v23; // r13
  __int64 v24; // rdx
  _QWORD *v25; // rax
  __int64 v26; // rdx
  _QWORD *v27; // rbx
  _QWORD *v28; // r14
  __m128i v29; // [rsp+20h] [rbp-1D8h] BYREF
  __m128i v30; // [rsp+30h] [rbp-1C8h] BYREF
  char v31[64]; // [rsp+40h] [rbp-1B8h] BYREF
  __int128 v32; // [rsp+80h] [rbp-178h]
  _BOOL4 v33; // [rsp+90h] [rbp-168h]
  int v34; // [rsp+94h] [rbp-164h]
  int v35; // [rsp+98h] [rbp-160h]
  __int64 v36; // [rsp+A0h] [rbp-158h]
  __int64 v37; // [rsp+B0h] [rbp-148h]
  int v38; // [rsp+B8h] [rbp-140h]
  int v39; // [rsp+BCh] [rbp-13Ch]
  int v40; // [rsp+C0h] [rbp-138h]
  __int128 v41; // [rsp+D8h] [rbp-120h]
  __int64 v42; // [rsp+108h] [rbp-F0h]
  int v43; // [rsp+110h] [rbp-E8h]
  __int64 v44; // [rsp+128h] [rbp-D0h]

  v4 = *(_QWORD *)a2;
  v5 = *(bool (__fastcall **)(__int64))(*(_QWORD *)a2 + 72LL);
  if ( v5 == sub_5F7BA0 )
  {
    LOBYTE(v6) = a2[112] & 1;
    if ( !(_BYTE)v6 )
      LOBYTE(v6) = *((_QWORD *)a2 + 14) != 0;
  }
  else
  {
    LOBYTE(v6) = v5((__int64)a2);
    v4 = *(_QWORD *)a2;
  }
  if ( (a2[60] & 0x20) != 0 )
  {
    v7 = 1;
    v8 = 0;
    v6 = 1;
  }
  else
  {
    v6 = (unsigned __int8)v6;
    v7 = 0;
    v8 = (unsigned __int8)v6;
  }
  v9 = (*(__int64 (__fastcall **)(_BYTE *))(v4 + 32))(a2);
  v10 = a1[2].m128i_i64[1];
  v34 = v6;
  v40 = 0;
  v35 = v8;
  v44 = 0;
  v42 = 0;
  v43 = 0;
  v33 = a2 != (_BYTE *)v9;
  v37 = 0;
  v38 = 0;
  v36 = 0;
  v39 = v7;
  v41 = 0;
  v32 = 0;
  sub_639160((__int64)&v29, (__int64)a2, v10, 0, 1u);
  v11 = sub_680210(
          a1,
          (__int64)a2,
          a3,
          (__int64)v31,
          0,
          nullptr,
          (__int128)_mm_load_si128(&v29),
          (__int128)_mm_load_si128(&v30));
  v12 = (__m128i **)v44;
  v13 = v11;
  if ( v44 )
  {
    if ( (*(_DWORD *)(v44 + 712))-- == 1 )
    {
      v16 = (__m128i **)v12[85];
      if ( v16 != v12 + 87 )
        free(v16);
      v17 = v12[21];
      v18 = (__m128i *)((char *)v17 + 248 * *((unsigned int *)v12 + 44));
      if ( v17 != v18 )
      {
        do
        {
          v19 = (__m128i **)v18[-5].m128i_i64[0];
          v18 = (__m128i *)((char *)v18 - 248);
          sub_67AA40(v19);
        }
        while ( v17 != v18 );
        v18 = v12[21];
      }
      if ( v18 != (__m128i *)(v12 + 23) )
        free(v18);
      v20 = (__m128i **)v12[1];
      if ( v20 != v12 + 3 )
        free(v20);
      --(*v12)[15].m128i_i32[0];
      v21 = *v12;
      if ( !v21[15].m128i_i32[0] )
      {
        v22 = v21[13].m128i_i64[0];
        v23 = v22 + 16LL * v21[13].m128i_u32[2];
        while ( v23 != v22 )
        {
          v22 += 16;
          operator delete();
        }
        v21[13].m128i_i32[2] = 0;
        v24 = v21[10].m128i_u32[2];
        if ( (_DWORD)v24 )
        {
          v25 = (_QWORD *)v21[10].m128i_i64[0];
          v26 = v24;
          v21[14].m128i_i64[0] = 0;
          v27 = &v25[v26];
          v28 = v25 + 1;
          v21[9] = _mm_unpacklo_epi64((__m128i)(unsigned __int64)*v25, (__m128i)(unsigned __int64)(*v25 + 4096LL));
          if ( v26 != 1 )
          {
            do
            {
              ++v28;
              operator delete();
            }
            while ( v27 != v28 );
          }
          v21[10].m128i_i32[2] = 1;
        }
      }
    }
  }
  return v13;
}

