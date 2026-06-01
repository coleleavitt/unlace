__int64 __fastcall sub_13C9060(std::_V2 *a1, __int64 *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r15
  __int64 v8; // r8
  __int64 v9; // r12
  __int64 v10; // rbp
  __int64 v11; // r14
  unsigned __int8 v12; // dl
  char v13; // al
  __int64 *v14; // rsi
  __int64 *v15; // rbp
  __int64 *v16; // r12
  __int64 v17; // rdi
  __int64 *v18; // rax
  __int64 v19; // rsi
  __int64 *v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rcx
  int v23; // r13d
  unsigned __int64 v24; // rdx
  __int64 result; // rax
  __int64 v26; // rsi
  __int64 *v27; // rcx
  __int64 *v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rsi
  void (__fastcall *v31)(__int128 *, __int64, void **, int *); // rax
  __int64 v32; // r14
  const void *v33; // rax
  __int64 v34; // rdx
  _QWORD *v35; // r14
  __int64 v36; // rsi
  __int64 v37; // rdx
  __int64 v38; // r9
  int v39; // eax
  __int64 v40; // rdx
  bool v41; // zf
  volatile signed __int32 *v42; // rax
  int v43; // ecx
  volatile signed __int32 *v44; // r14
  signed __int32 v45; // ecx
  signed __int32 v46; // edx
  int v47; // edx
  unsigned __int8 nb; // [rsp+0h] [rbp-158h]
  size_t n; // [rsp+0h] [rbp-158h]
  volatile signed __int32 *na; // [rsp+0h] [rbp-158h]
  bool v51; // [rsp+24h] [rbp-134h]
  int v52; // [rsp+30h] [rbp-128h] BYREF
  __int64 v53; // [rsp+38h] [rbp-120h]
  __int128 v54; // [rsp+40h] [rbp-118h] BYREF
  void *v55; // [rsp+50h] [rbp-108h] BYREF
  __int64 v56; // [rsp+58h] [rbp-100h]
  __int16 v57; // [rsp+70h] [rbp-E8h]
  void *ptr; // [rsp+80h] [rbp-D8h] BYREF
  __m128i si128; // [rsp+88h] [rbp-D0h]
  _BYTE v60[192]; // [rsp+98h] [rbp-C0h] BYREF

  v6 = (__int64)a1;
  *((_DWORD *)a2 + 2) = 0;
  if ( (*(_BYTE *)(*(_QWORD *)a1 + 280LL) & 2) == 0 )
    goto LABEL_12;
  v8 = *((_QWORD *)a1 + 6);
  v9 = (*((_QWORD *)a1 + 7) - v8) >> 4;
  if ( !v9 )
    goto LABEL_12;
  v10 = 0;
  while ( 2 )
  {
    v11 = v8 + 16 * v10;
    v12 = *(_BYTE *)(v11 + 8);
    v13 = (v12 >> 3) & 3;
    if ( v13 != 1 )
    {
      if ( v13 != 2 )
      {
        v14 = nullptr;
        if ( !v13 )
          v14 = *(__int64 **)v11;
        a1 = (std::_V2 *)v6;
        sub_13C8080(v6, v14, (v12 & 7) != 0, 0, v8, a6);
        if ( (*(_BYTE *)(v11 + 8) & 0x20) == 0 )
        {
          a1 = (std::_V2 *)v6;
          sub_13C8C60((__int64 *)v6, v11);
        }
      }
      goto LABEL_10;
    }
    nb = *(_BYTE *)(v11 + 8);
    v51 = (v12 & 7) != 0;
    v52 = 0;
    v53 = std::_V2::system_category(a1);
    ptr = v60;
    si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
    if ( ((nb >> 3) & 3) != 1 )
      BUG();
    v28 = *(__int64 **)v11;
    v29 = **(_QWORD **)v11;
    v57 = 261;
    v55 = v28 + 4;
    v56 = v29;
    sub_228FF50(&v55, &ptr, 0);
    v30 = *(_QWORD *)(*(_QWORD *)(v6 + 40) + 8LL);
    v31 = *(void (__fastcall **)(__int128 *, __int64, void **, int *))(*(_QWORD *)v30 + 64LL);
    v55 = ptr;
    v57 = 261;
    v56 = si128.m128i_i64[0];
    v31(&v54, v30, &v55, &v52);
    while ( 1 )
    {
      v32 = v54;
      if ( !(_QWORD)v54 )
        break;
      do
      {
        if ( v52 )
          goto LABEL_53;
        n = j__strlen(".framework");
        v33 = (const void *)sub_228AB90(*(_QWORD *)(v32 + 8), *(_QWORD *)(v32 + 16), 0);
        if ( n == v34 && (!n || !memcmp(v33, ".framework", n)) )
        {
          v35 = (_QWORD *)sub_13C4290(*(_QWORD *)(v6 + 40), *(char **)(v54 + 8), *(_QWORD *)(v54 + 16));
          if ( v35 )
          {
            v36 = sub_228AAA0(*(_QWORD *)(v54 + 8), *(_QWORD *)(v54 + 16), 0);
            sub_13C83B0(v6, v36, v37, v35, v51, v38);
          }
        }
        v39 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v54 + 16LL))(v54);
        v32 = v54;
        v53 = v40;
        v41 = *(_QWORD *)(v54 + 16) == 0;
        v52 = v39;
      }
      while ( !v41 );
      v42 = *((volatile signed __int32 **)&v54 + 1);
      v54 = 0;
      if ( !v42 )
        break;
      if ( &_pthread_key_create )
      {
        if ( _InterlockedSub(v42 + 2, 1u) )
          continue;
LABEL_48:
        na = v42;
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v42 + 16LL))(v42);
        if ( &_pthread_key_create )
        {
          if ( _InterlockedSub(na + 3, 1u) )
            continue;
LABEL_50:
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)na + 24LL))(na);
          continue;
        }
        v47 = *((_DWORD *)na + 3);
        *((_DWORD *)na + 3) = v47 - 1;
        if ( v47 == 1 )
          goto LABEL_50;
      }
      else
      {
        v43 = *((_DWORD *)v42 + 2);
        *((_DWORD *)v42 + 2) = v43 - 1;
        if ( v43 == 1 )
          goto LABEL_48;
      }
    }
LABEL_53:
    v44 = *((volatile signed __int32 **)&v54 + 1);
    if ( *((_QWORD *)&v54 + 1) )
    {
      if ( &_pthread_key_create )
      {
        v45 = _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v54 + 1) + 8LL), 0xFFFFFFFF);
      }
      else
      {
        v45 = *(_DWORD *)(*((_QWORD *)&v54 + 1) + 8LL);
        *(_DWORD *)(*((_QWORD *)&v54 + 1) + 8LL) = v45 - 1;
      }
      if ( v45 == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v44 + 16LL))(v44);
        if ( &_pthread_key_create )
        {
          v46 = _InterlockedExchangeAdd(v44 + 3, 0xFFFFFFFF);
        }
        else
        {
          v46 = *((_DWORD *)v44 + 3);
          *((_DWORD *)v44 + 3) = v46 - 1;
        }
        if ( v46 == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v44 + 24LL))(v44);
      }
    }
    a1 = (std::_V2 *)ptr;
    if ( ptr != v60 )
      free(ptr);
LABEL_10:
    if ( v9 != ++v10 )
    {
      v8 = *(_QWORD *)(v6 + 48);
      continue;
    }
    break;
  }
LABEL_12:
  sub_12EEE10((__int64 **)&ptr, *(__int64 **)(v6 + 888), *(_DWORD *)(v6 + 896) == 0);
  v15 = (__int64 *)ptr;
  sub_12EEE10((__int64 **)&ptr, (__int64 *)(*(_QWORD *)(v6 + 888) + 8LL * *(unsigned int *)(v6 + 896)), 1);
  v16 = (__int64 *)ptr;
  v17 = *((unsigned int *)a2 + 2);
  if ( v15 == ptr )
  {
    v24 = *((unsigned int *)a2 + 2);
    v23 = 0;
  }
  else
  {
    v18 = v15;
    v19 = 0;
    do
    {
      while ( 1 )
      {
        v20 = v18 + 1;
        v21 = v18[1];
        if ( v21 == -8 || !v21 )
          break;
        v18 = v20;
        ++v19;
        if ( v20 == ptr )
          goto LABEL_19;
      }
      do
      {
        do
        {
          v22 = v20[1];
          v18 = ++v20;
        }
        while ( v22 == -8 );
      }
      while ( !v22 );
      ++v19;
    }
    while ( v18 != ptr );
LABEL_19:
    v23 = v19;
    v24 = v17 + v19;
  }
  if ( v24 > *((unsigned int *)a2 + 3) )
  {
    sub_2237220(a2, a2 + 2, v24, 8);
    v17 = *((unsigned int *)a2 + 2);
    LODWORD(v24) = v17 + v23;
  }
  result = *a2;
  v26 = *a2 + 8 * v17;
  if ( v15 != v16 )
  {
    result = *v15;
    do
    {
      v26 += 8;
      *(_QWORD *)(v26 - 8) = *(_QWORD *)(result + 8);
      result = v15[1];
      if ( result != -8 && result )
      {
        ++v15;
      }
      else
      {
        v27 = v15 + 2;
        do
        {
          do
          {
            result = *v27;
            v15 = v27++;
          }
          while ( !result );
        }
        while ( result == -8 );
      }
    }
    while ( v16 != v15 );
  }
  *((_DWORD *)a2 + 2) = v24;
  return result;
}
