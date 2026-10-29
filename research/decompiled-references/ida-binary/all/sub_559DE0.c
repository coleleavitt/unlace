_BOOL8 __fastcall sub_559DE0(double a1)
{
  __int64 license_manager; // rbx
  const char *v2; // rsi
  __int64 v3; // rdx
  __int64 v4; // rbp
  __int64 (__fastcall *v5)(__int64); // rax
  __int64 v6; // rbx
  unsigned __int64 v7; // r13
  unsigned __int64 v8; // r13
  unsigned __int64 v9; // r13
  __int32 v10; // eax
  __int64 v11; // rdx
  __m128i v12; // xmm0
  _BOOL4 v13; // ebx
  const char *v15; // r15
  void *v16; // rax
  const char *v17; // rbx
  void *v18; // rax
  const char *v19; // r15
  void *v20; // rdi
  __int64 current_config; // rax
  __int64 v22; // rbx
  __int64 v23; // rbp
  unsigned __int64 v24; // r13
  const char *v25; // r15
  void *v26; // rdi
  unsigned __int64 v27; // r13
  const char *v28; // r15
  void *v29; // rax
  unsigned __int64 v30; // r13
  const char *v31; // rbp
  void *v32; // rax
  const __m128i *v33; // roff
  __m128i v34; // [rsp+0h] [rbp-E8h] BYREF
  unsigned int v35; // [rsp+10h] [rbp-D8h]
  int v36; // [rsp+14h] [rbp-D4h]
  void *v37; // [rsp+20h] [rbp-C8h] BYREF
  __int128 v38; // [rsp+28h] [rbp-C0h]
  __int16 v39; // [rsp+38h] [rbp-B0h]
  char v40; // [rsp+3Ah] [rbp-AEh]
  char v41; // [rsp+40h] [rbp-A8h]
  void *dest; // [rsp+48h] [rbp-A0h] BYREF
  __int128 v43; // [rsp+50h] [rbp-98h]
  void *v44; // [rsp+60h] [rbp-88h] BYREF
  __int128 v45; // [rsp+68h] [rbp-80h]
  __m128i v46; // [rsp+78h] [rbp-70h]
  __int64 v47; // [rsp+88h] [rbp-60h]
  __int64 v48; // [rsp+90h] [rbp-58h]
  __int128 v49; // [rsp+98h] [rbp-50h]
  unsigned __int64 v50; // [rsp+A8h] [rbp-40h]

  v50 = __readfsqword(0x28u);
  v39 = 0;
  license_manager = get_license_manager(a1);
  v2 = nullptr;
  v37 = nullptr;
  v40 = 1;
  v41 = 0;
  dest = nullptr;
  v44 = nullptr;
  v46.m128i_i32[0] = 0;
  v46.m128i_i16[2] = 0;
  v46.m128i_i64[1] = 0;
  v47 = 0;
  v48 = 0;
  v38 = 0;
  v43 = 0;
  v45 = 0;
  v49 = 0;
  v4 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)license_manager + 88LL))(license_manager, 0, 0);
  if ( v4 )
  {
    v5 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)license_manager + 40LL);
    if ( v5 == sub_178B50 )
      v6 = license_manager + 40;
    else
      v6 = v5(license_manager);
    if ( (void **)v6 != &v37 )
    {
      v7 = *(_QWORD *)(v6 + 8);
      if ( v7 > 1 )
      {
        v19 = *(const char **)v6;
        v20 = v37;
        if ( *((_QWORD *)&v38 + 1) < v7 )
        {
          v37 = (void *)qvector_reserve(&v37, v37, *(_QWORD *)(v6 + 8), 1);
          v20 = v37;
        }
        v2 = v19;
        *(_QWORD *)&v38 = v7;
        memmove(v20, v19, v7 - 1);
        *((char *)v37 + v7 - 1) = 0;
      }
      else
      {
        *(_QWORD *)&v38 = 0;
      }
    }
    v39 = *(_WORD *)(v6 + 24);
    v40 = *(_BYTE *)(v6 + 26);
    v41 = *(_BYTE *)(v6 + 32);
    if ( &dest != (void **)(v6 + 40) )
    {
      v8 = *(_QWORD *)(v6 + 48);
      if ( v8 > 1 )
      {
        v15 = *(const char **)(v6 + 40);
        v16 = dest;
        if ( *((_QWORD *)&v43 + 1) < v8 )
        {
          v16 = (void *)qvector_reserve(&dest, dest, *(_QWORD *)(v6 + 48), 1);
          dest = v16;
        }
        v2 = v15;
        *(_QWORD *)&v43 = v8;
        memmove(v16, v15, v8 - 1);
        *((char *)dest + v8 - 1) = 0;
      }
      else
      {
        *(_QWORD *)&v43 = 0;
      }
    }
    if ( &v44 != (void **)(v6 + 64) )
    {
      v9 = *(_QWORD *)(v6 + 72);
      if ( v9 > 1 )
      {
        v17 = *(const char **)(v6 + 64);
        v18 = v44;
        if ( *((_QWORD *)&v45 + 1) < v9 )
        {
          v18 = (void *)qvector_reserve(&v44, v44, v9, 1);
          v44 = v18;
        }
        v2 = v17;
        *(_QWORD *)&v45 = v9;
        memmove(v18, v17, v9 - 1);
        *((char *)v44 + v9 - 1) = 0;
      }
      else
      {
        *(_QWORD *)&v45 = 0;
      }
    }
    v10 = *(_DWORD *)v4;
    v11 = *(_QWORD *)(v4 + 12);
    v36 = 0;
    v34.m128i_i32[0] = v10;
    LOWORD(v10) = *(_WORD *)(v4 + 4);
    v34.m128i_i64[1] = v11;
    v34.m128i_i16[2] = v10;
    v12 = _mm_load_si128(&v34);
    v35 = *(_DWORD *)(v4 + 20);
    v46 = v12;
    v47 = v35;
  }
  else
  {
    current_config = get_current_config(license_manager, 0, v3);
    v22 = current_config;
    if ( current_config )
    {
      v23 = *(_QWORD *)(current_config + 672);
      if ( (void **)v23 != &v37 )
      {
        v24 = *(_QWORD *)(v23 + 8);
        if ( v24 < 2 )
        {
          *(_QWORD *)&v38 = 0;
        }
        else
        {
          v25 = *(const char **)v23;
          v26 = v37;
          if ( *((_QWORD *)&v38 + 1) < v24 )
          {
            v37 = (void *)qvector_reserve(&v37, v37, *(_QWORD *)(v23 + 8), 1);
            v26 = v37;
          }
          v2 = v25;
          *(_QWORD *)&v38 = v24;
          memmove(v26, v25, v24 - 1);
          *((char *)v37 + v24 - 1) = 0;
        }
      }
      v39 = *(_WORD *)(v23 + 24);
      v40 = *(_BYTE *)(v23 + 26);
      v41 = *(_BYTE *)(v23 + 32);
      if ( &dest != (void **)(v23 + 40) )
      {
        v27 = *(_QWORD *)(v23 + 48);
        if ( v27 < 2 )
        {
          *(_QWORD *)&v43 = 0;
        }
        else
        {
          v28 = *(const char **)(v23 + 40);
          v29 = dest;
          if ( *((_QWORD *)&v43 + 1) < v27 )
          {
            v29 = (void *)qvector_reserve(&dest, dest, *(_QWORD *)(v23 + 48), 1);
            dest = v29;
          }
          v2 = v28;
          *(_QWORD *)&v43 = v27;
          memmove(v29, v28, v27 - 1);
          *((char *)dest + v27 - 1) = 0;
        }
      }
      if ( &v44 != (void **)(v23 + 64) )
      {
        v30 = *(_QWORD *)(v23 + 72);
        if ( v30 < 2 )
        {
          *(_QWORD *)&v45 = 0;
        }
        else
        {
          v31 = *(const char **)(v23 + 64);
          v32 = v44;
          if ( *((_QWORD *)&v45 + 1) < v30 )
          {
            v32 = (void *)qvector_reserve(&v44, v44, v30, 1);
            v44 = v32;
          }
          v2 = v31;
          *(_QWORD *)&v45 = v30;
          memmove(v32, v31, v30 - 1);
          *((char *)v44 + v30 - 1) = 0;
        }
      }
      v33 = *(const __m128i **)(v22 + 680);
      v46 = _mm_loadu_si128(v33);
      v47 = v33[1].m128i_i64[0];
    }
  }
  v13 = sub_559CA0((__int64)&v37);
  if ( v48 )
  {
    *(_QWORD *)&v49 = 0;
    qfree(v48, v2);
  }
  if ( v44 )
  {
    *(_QWORD *)&v45 = 0;
    qfree(v44, v2);
  }
  if ( dest )
  {
    *(_QWORD *)&v43 = 0;
    qfree(dest, v2);
  }
  if ( v37 )
  {
    *(_QWORD *)&v38 = 0;
    qfree(v37, v2);
  }
  return v13;
}
