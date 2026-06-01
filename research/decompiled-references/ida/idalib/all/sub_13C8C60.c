void __fastcall sub_13C8C60(__int64 *a1, __int64 a2)
{
  size_t v4; // rbp
  const void *v5; // r12
  __int64 v6; // rdi
  __int64 v7; // rsi
  void (__fastcall *v8)(__int128 *, __int64, void **, int *); // rax
  __int64 v9; // rdi
  unsigned __int8 v10; // r15
  __int64 v11; // rax
  __int64 v12; // rdx
  _BOOL4 v13; // eax
  int v14; // eax
  __int64 v15; // rdx
  bool v16; // zf
  volatile signed __int32 *v17; // rax
  volatile signed __int32 *v18; // rbp
  _BYTE *v19; // rdi
  __int64 v20; // rax
  char v21; // dl
  int v22; // ecx
  __int64 v23; // r8
  __int64 v24; // r9
  int v25; // edx
  int v26; // eax
  signed __int32 v27; // eax
  char *v28; // rdi
  volatile signed __int32 *v29; // [rsp+0h] [rbp-1D8h]
  char v30; // [rsp+0h] [rbp-1D8h]
  _QWORD *v31; // [rsp+8h] [rbp-1D0h]
  int v32; // [rsp+10h] [rbp-1C8h] BYREF
  __int64 v33; // [rsp+18h] [rbp-1C0h]
  __int128 v34; // [rsp+20h] [rbp-1B8h] BYREF
  void *v35; // [rsp+30h] [rbp-1A8h] BYREF
  __int64 v36; // [rsp+38h] [rbp-1A0h]
  __int16 v37; // [rsp+50h] [rbp-188h]
  void *v38; // [rsp+60h] [rbp-178h] BYREF
  __m128i si128; // [rsp+68h] [rbp-170h]
  _BYTE v40[136]; // [rsp+78h] [rbp-160h] BYREF
  void *ptr; // [rsp+100h] [rbp-D8h] BYREF
  __m128i v42; // [rsp+108h] [rbp-D0h]
  _BYTE v43[192]; // [rsp+118h] [rbp-C0h] BYREF

  v32 = 0;
  v33 = std::_V2::system_category((std::_V2 *)a1);
  if ( (*(_BYTE *)(a2 + 8) & 0x18) != 0 )
    BUG();
  v4 = **(_QWORD **)a2;
  v5 = (const void *)(*(_QWORD *)a2 + 32LL);
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
  v38 = v40;
  if ( v4 > 0x80 )
  {
    sub_2236E10(&v38, v40, v4, 1);
    v28 = (char *)v38 + si128.m128i_i64[0];
    goto LABEL_45;
  }
  if ( v4 )
  {
    v28 = v40;
LABEL_45:
    memcpy(v28, v5, v4);
    v4 += si128.m128i_i64[0];
  }
  v6 = a1[5];
  si128.m128i_i64[0] = v4;
  sub_FD77C0(v6, (__int64)&v38);
  ptr = v43;
  v37 = 261;
  v35 = v38;
  v42 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
  v36 = si128.m128i_i64[0];
  sub_228FF50(&v35, &ptr, 0);
  v7 = *(_QWORD *)(a1[5] + 8);
  v8 = *(void (__fastcall **)(__int128 *, __int64, void **, int *))(*(_QWORD *)v7 + 64LL);
  v35 = ptr;
  v37 = 261;
  v36 = v42.m128i_i64[0];
  v8(&v34, v7, &v35, &v32);
LABEL_5:
  v9 = v34;
  if ( (_QWORD)v34 )
  {
    while ( !v32 )
    {
      if ( *(_DWORD *)(v9 + 40) != 2 )
      {
        v10 = 0;
        v11 = sub_228AB90(*(_QWORD *)(v9 + 8), *(_QWORD *)(v9 + 16), 0);
        if ( v12 == 10 )
        {
          v13 = *(_QWORD *)v11 != 0x6F77656D6172662ELL || *(_WORD *)(v11 + 8) != 27506;
          v10 = !v13;
        }
        v9 = v34;
        if ( (((*(_BYTE *)(a2 + 8) >> 3) & 3) == 1) == v10 )
        {
          v30 = *(_BYTE *)(a2 + 8) & 7;
          sub_FD9440((__int64)&v35, a1[5], *(char **)(v34 + 8), *(_QWORD *)(v34 + 16), 1);
          v20 = sub_A05D80(&v35);
          if ( v21 )
          {
            v31 = (_QWORD *)v20;
            sub_A04D70((__int64 *)&v35);
            if ( v31 )
              sub_13C8080((__int64)a1, v31, v30 != 0, v10, v23, v24);
          }
          else
          {
            sub_A04D70((__int64 *)&v35);
          }
          v9 = v34;
        }
      }
      v14 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
      v9 = v34;
      v33 = v15;
      v16 = *(_QWORD *)(v34 + 16) == 0;
      v32 = v14;
      if ( v16 )
      {
        v17 = *((volatile signed __int32 **)&v34 + 1);
        v34 = 0;
        if ( !v17 )
          break;
        if ( &_pthread_key_create )
        {
          if ( _InterlockedSub(v17 + 2, 1u) )
            goto LABEL_5;
        }
        else
        {
          v22 = *((_DWORD *)v17 + 2);
          *((_DWORD *)v17 + 2) = v22 - 1;
          if ( v22 != 1 )
            goto LABEL_5;
        }
        v29 = v17;
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 16LL))(v17);
        if ( &_pthread_key_create )
        {
          if ( _InterlockedSub(v29 + 3, 1u) )
            goto LABEL_5;
        }
        else
        {
          v25 = *((_DWORD *)v29 + 3);
          *((_DWORD *)v29 + 3) = v25 - 1;
          if ( v25 != 1 )
            goto LABEL_5;
        }
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v29 + 24LL))(v29);
        v9 = v34;
        if ( !(_QWORD)v34 )
          break;
      }
    }
  }
  v18 = *((volatile signed __int32 **)&v34 + 1);
  if ( *((_QWORD *)&v34 + 1) )
  {
    if ( &_pthread_key_create )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v34 + 1) + 8LL), 0xFFFFFFFF) != 1 )
        goto LABEL_23;
    }
    else
    {
      v26 = *(_DWORD *)(*((_QWORD *)&v34 + 1) + 8LL);
      *(_DWORD *)(*((_QWORD *)&v34 + 1) + 8LL) = v26 - 1;
      if ( v26 != 1 )
        goto LABEL_23;
    }
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 16LL))(v18);
    if ( &_pthread_key_create )
    {
      v27 = _InterlockedExchangeAdd(v18 + 3, 0xFFFFFFFF);
    }
    else
    {
      v27 = *((_DWORD *)v18 + 3);
      *((_DWORD *)v18 + 3) = v27 - 1;
    }
    if ( v27 == 1 )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 24LL))(v18);
  }
LABEL_23:
  v19 = ptr;
  *(_BYTE *)(a2 + 8) |= 0x20u;
  if ( v19 != v43 )
    free(v19);
  if ( v38 != v40 )
    free(v38);
}
