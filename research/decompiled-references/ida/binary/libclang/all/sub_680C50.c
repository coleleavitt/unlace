__int64 __fastcall sub_680C50(__m128i *a1, __int64 a2)
{
  _BYTE *v3; // rdi
  char v4; // al
  int v5; // r12d
  int v6; // r13d
  __int64 (__fastcall *v7)(__int64); // rax
  __int64 v8; // rax
  __int64 v9; // rdx
  unsigned int v10; // eax
  __m128i **v11; // rbp
  unsigned int v12; // r12d
  __m128i **v15; // rdi
  __m128i *v16; // r13
  __m128i *v17; // rbx
  __m128i **v18; // rdi
  __m128i **v19; // rdi
  __m128i *v20; // rbp
  __int64 v21; // rbx
  __int64 v22; // r13
  __int64 v23; // rdx
  _QWORD *v24; // rax
  __int64 v25; // rdx
  _QWORD *v26; // rbx
  _QWORD *v27; // r14
  unsigned __int8 v28; // al
  __m128i v29; // [rsp+20h] [rbp-1C8h] BYREF
  __m128i v30; // [rsp+30h] [rbp-1B8h] BYREF
  char v31[64]; // [rsp+40h] [rbp-1A8h] BYREF
  __int128 v32; // [rsp+80h] [rbp-168h]
  _BOOL4 v33; // [rsp+90h] [rbp-158h]
  int v34; // [rsp+94h] [rbp-154h]
  int v35; // [rsp+98h] [rbp-150h]
  __int64 v36; // [rsp+A0h] [rbp-148h]
  __int64 v37; // [rsp+B0h] [rbp-138h]
  __int64 v38; // [rsp+B8h] [rbp-130h]
  int v39; // [rsp+C0h] [rbp-128h]
  __int128 v40; // [rsp+D8h] [rbp-110h]
  __int64 v41; // [rsp+108h] [rbp-E0h]
  int v42; // [rsp+110h] [rbp-D8h]
  __int64 v43; // [rsp+128h] [rbp-C0h]

  v3 = *(_BYTE **)(a2 + 48);
  if ( (v3[82] & 0x40) != 0 )
    goto LABEL_11;
  v4 = v3[83];
  if ( (v4 & 2) == 0 )
  {
    if ( (v4 & 8) == 0 )
    {
      v5 = 1;
      if ( (v3[128] & 1) != 0 || *((_QWORD *)v3 + 16) || (v4 & 0x40) != 0 )
        goto LABEL_6;
      goto LABEL_36;
    }
    if ( (v4 & 0x40) == 0 )
    {
LABEL_36:
      if ( (v3[84] & 0x60) != 0 )
      {
        v5 = 1;
        if ( (v4 & 8) != 0 )
        {
LABEL_9:
          if ( (v3[84] & 0x60) == 0 )
          {
            v6 = (unsigned __int8)sub_799100(v3);
            goto LABEL_13;
          }
          goto LABEL_12;
        }
      }
      else
      {
        v28 = sub_799100(v3);
        v3 = *(_BYTE **)(a2 + 48);
        v5 = v28;
        v4 = v3[83];
        if ( (v3[82] & 0x40) != 0 || (v3[83] & 2) != 0 )
          goto LABEL_12;
        if ( (v4 & 8) != 0 )
        {
LABEL_8:
          if ( (v4 & 0x40) == 0 )
            goto LABEL_9;
LABEL_12:
          v6 = 1;
          goto LABEL_13;
        }
      }
LABEL_6:
      if ( (v3[128] & 1) != 0 || *((_QWORD *)v3 + 16) )
        goto LABEL_12;
      goto LABEL_8;
    }
LABEL_11:
    v5 = 1;
    goto LABEL_12;
  }
  v5 = 1;
  v6 = 1;
LABEL_13:
  v7 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 32LL);
  if ( v7 == sub_67A590 )
    v8 = *(_QWORD *)(a2 + 72);
  else
    v8 = v7(a2);
  v9 = a1[2].m128i_i64[1];
  v35 = v5;
  v39 = 0;
  v43 = 0;
  v41 = 0;
  v42 = 0;
  v33 = a2 != v8;
  v34 = v6;
  v37 = 0;
  v36 = 0;
  v38 = 0;
  v40 = 0;
  v32 = 0;
  sub_639160((__int64)&v29, a2, v9, 0, 1u);
  v10 = sub_680210(
          a1,
          a2,
          *(_DWORD *)(a2 + 24),
          (__int64)v31,
          0,
          nullptr,
          (__int128)_mm_load_si128(&v29),
          (__int128)_mm_load_si128(&v30));
  v11 = (__m128i **)v43;
  v12 = v10;
  if ( v43 )
  {
    if ( (*(_DWORD *)(v43 + 712))-- == 1 )
    {
      v15 = (__m128i **)v11[85];
      if ( v15 != v11 + 87 )
        free(v15);
      v16 = v11[21];
      v17 = (__m128i *)((char *)v16 + 248 * *((unsigned int *)v11 + 44));
      if ( v16 != v17 )
      {
        do
        {
          v18 = (__m128i **)v17[-5].m128i_i64[0];
          v17 = (__m128i *)((char *)v17 - 248);
          sub_67AA40(v18);
        }
        while ( v16 != v17 );
        v17 = v11[21];
      }
      if ( v17 != (__m128i *)(v11 + 23) )
        free(v17);
      v19 = (__m128i **)v11[1];
      if ( v19 != v11 + 3 )
        free(v19);
      --(*v11)[15].m128i_i32[0];
      v20 = *v11;
      if ( !v20[15].m128i_i32[0] )
      {
        v21 = v20[13].m128i_i64[0];
        v22 = v21 + 16LL * v20[13].m128i_u32[2];
        while ( v22 != v21 )
        {
          v21 += 16;
          operator delete();
        }
        v20[13].m128i_i32[2] = 0;
        v23 = v20[10].m128i_u32[2];
        if ( (_DWORD)v23 )
        {
          v24 = (_QWORD *)v20[10].m128i_i64[0];
          v25 = v23;
          v20[14].m128i_i64[0] = 0;
          v26 = &v24[v25];
          v27 = v24 + 1;
          v20[9] = _mm_unpacklo_epi64((__m128i)(unsigned __int64)*v24, (__m128i)(unsigned __int64)(*v24 + 4096LL));
          if ( v25 != 1 )
          {
            do
            {
              ++v27;
              operator delete();
            }
            while ( v26 != v27 );
          }
          v20[10].m128i_i32[2] = 1;
        }
      }
    }
  }
  return v12;
}

