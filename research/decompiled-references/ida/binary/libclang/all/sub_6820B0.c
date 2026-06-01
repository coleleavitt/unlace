__int64 __fastcall sub_6820B0(__m128i *a1, __int64 a2)
{
  char v4; // al
  char v5; // dl
  int v6; // eax
  int v7; // esi
  int v8; // edi
  __int64 v9; // rdx
  _BOOL4 v10; // ecx
  __int64 v11; // rdx
  unsigned int v12; // eax
  __m128i **v13; // rbp
  unsigned int v14; // r12d
  __m128i **v17; // rdi
  __m128i *v18; // r13
  __m128i *v19; // rbx
  __m128i **v20; // rdi
  __m128i **v21; // rdi
  __m128i *v22; // rbp
  __int64 v23; // rbx
  __int64 v24; // r13
  __int64 v25; // rdx
  _QWORD *v26; // rax
  __int64 v27; // rdx
  _QWORD *v28; // rbx
  _QWORD *v29; // r14
  unsigned __int8 v30; // cl
  __m128i v31; // [rsp+20h] [rbp-1C8h] BYREF
  __m128i v32; // [rsp+30h] [rbp-1B8h] BYREF
  char v33[64]; // [rsp+40h] [rbp-1A8h] BYREF
  __int128 v34; // [rsp+80h] [rbp-168h]
  _BOOL4 v35; // [rsp+90h] [rbp-158h]
  int v36; // [rsp+94h] [rbp-154h]
  int v37; // [rsp+98h] [rbp-150h]
  __int64 v38; // [rsp+A0h] [rbp-148h]
  __int64 v39; // [rsp+B0h] [rbp-138h]
  int v40; // [rsp+B8h] [rbp-130h]
  int v41; // [rsp+BCh] [rbp-12Ch]
  int v42; // [rsp+C0h] [rbp-128h]
  __int128 v43; // [rsp+D8h] [rbp-110h]
  __int64 v44; // [rsp+108h] [rbp-E0h]
  int v45; // [rsp+110h] [rbp-D8h]
  __int64 v46; // [rsp+128h] [rbp-C0h]

  if ( (*(_BYTE *)(a2 + 82) & 0x40) != 0
    || (v4 = *(_BYTE *)(a2 + 83), (v4 & 2) != 0)
    || (v4 & 8) == 0 && ((*(_BYTE *)(a2 + 128) & 1) != 0 || *(_QWORD *)(a2 + 128)) )
  {
    v5 = *(_BYTE *)(a2 + 84);
    LOBYTE(v6) = 1;
  }
  else
  {
    v5 = *(_BYTE *)(a2 + 84);
    v30 = v4 & 0x40;
    LOBYTE(v6) = 1;
    if ( !(v30 | v5 & 0x60) )
    {
      LOBYTE(v6) = sub_799100(a2);
      v5 = *(_BYTE *)(a2 + 84);
    }
  }
  if ( (v5 & 0x20) != 0 )
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
  v9 = *(_QWORD *)(a2 + 104);
  v10 = 0;
  if ( (v9 & 1) == 0 )
    v10 = !((v9 >> 1) & 1);
  v11 = a1[2].m128i_i64[1];
  v35 = v10;
  v37 = v8;
  v41 = v7;
  v42 = 0;
  v46 = 0;
  v44 = 0;
  v45 = 0;
  v36 = v6;
  v39 = 0;
  v40 = 0;
  v38 = 0;
  v43 = 0;
  v34 = 0;
  sub_639160((__int64)&v31, a2, v11, 0, 1u);
  v12 = sub_680210(
          a1,
          a2,
          *(_DWORD *)(a2 + 24),
          (__int64)v33,
          0,
          nullptr,
          (__int128)_mm_load_si128(&v31),
          (__int128)_mm_load_si128(&v32));
  v13 = (__m128i **)v46;
  v14 = v12;
  if ( v46 )
  {
    if ( (*(_DWORD *)(v46 + 712))-- == 1 )
    {
      v17 = (__m128i **)v13[85];
      if ( v17 != v13 + 87 )
        free(v17);
      v18 = v13[21];
      v19 = (__m128i *)((char *)v18 + 248 * *((unsigned int *)v13 + 44));
      if ( v18 != v19 )
      {
        do
        {
          v20 = (__m128i **)v19[-5].m128i_i64[0];
          v19 = (__m128i *)((char *)v19 - 248);
          sub_67AA40(v20);
        }
        while ( v18 != v19 );
        v19 = v13[21];
      }
      if ( v19 != (__m128i *)(v13 + 23) )
        free(v19);
      v21 = (__m128i **)v13[1];
      if ( v21 != v13 + 3 )
        free(v21);
      --(*v13)[15].m128i_i32[0];
      v22 = *v13;
      if ( !v22[15].m128i_i32[0] )
      {
        v23 = v22[13].m128i_i64[0];
        v24 = v23 + 16LL * v22[13].m128i_u32[2];
        while ( v24 != v23 )
        {
          v23 += 16;
          operator delete();
        }
        v22[13].m128i_i32[2] = 0;
        v25 = v22[10].m128i_u32[2];
        if ( (_DWORD)v25 )
        {
          v26 = (_QWORD *)v22[10].m128i_i64[0];
          v27 = v25;
          v22[14].m128i_i64[0] = 0;
          v28 = &v26[v27];
          v29 = v26 + 1;
          v22[9] = _mm_unpacklo_epi64((__m128i)(unsigned __int64)*v26, (__m128i)(unsigned __int64)(*v26 + 4096LL));
          if ( v27 != 1 )
          {
            do
            {
              ++v29;
              operator delete();
            }
            while ( v28 != v29 );
          }
          v22[10].m128i_i32[2] = 1;
        }
      }
    }
  }
  return v14;
}

