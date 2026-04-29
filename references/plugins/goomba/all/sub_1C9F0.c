_QWORD *__fastcall sub_1C9F0(_QWORD *a1, const __m128i *a2, double a3, __m128 a4)
{
  __m128 v4; // xmm0
  volatile signed __int32 *v6; // xmm1_8
  __m128i *v7; // rsi
  __int64 v8; // rbx
  __int64 v9; // r12
  __int64 v10; // rdi
  __int64 v11; // r12
  __int64 v12; // rbx
  signed __int32 v13; // eax
  volatile signed __int32 *v14; // rbp
  volatile signed __int32 *v15; // rdx
  int v16; // eax
  volatile signed __int32 *v17; // rdx
  signed __int32 v18; // eax
  __int64 v20; // rax
  __int64 v21; // rdi
  __int64 v22; // rbp
  _QWORD *v23; // rdx
  __m128i *v24; // rax
  __int8 *v25; // rdi
  __int64 v26; // rdi
  __int64 v27; // rax
  __int64 v28; // rcx
  __m128i *v29; // rdx
  _QWORD *v30; // rax
  __int64 v31; // rdi
  __int64 v32; // rax
  volatile signed __int32 *v33; // rdi
  int v34; // edx
  __int64 v35; // rdx
  __int64 v36; // rax
  __int64 v37; // [rsp+8h] [rbp-A0h]
  __int64 v38; // [rsp+10h] [rbp-98h]
  __int64 v39; // [rsp+10h] [rbp-98h]
  __int64 v40; // [rsp+18h] [rbp-90h]
  __m128i v41; // [rsp+20h] [rbp-88h] BYREF
  __int64 v42; // [rsp+30h] [rbp-78h] BYREF
  __int128 v43; // [rsp+38h] [rbp-70h]
  __int64 v44; // [rsp+60h] [rbp-48h]
  unsigned __int64 v45; // [rsp+68h] [rbp-40h]

  v4 = (__m128)_mm_loadu_si128(a2);
  v45 = __readfsqword(0x28u);
  v6 = (volatile signed __int32 *)_mm_movehl_ps(a4, v4).m128_u64[0];
  v41 = (__m128i)v4;
  if ( v6 )
  {
    if ( &_pthread_key_create )
      _InterlockedAdd(v6 + 2, 1u);
    else
      ++*((_DWORD *)v6 + 2);
  }
  v7 = &v41;
  v42 = 0;
  v43 = 0;
  sub_1C8C0((__int64)&v42, &v41);
  v8 = operator new(0x38u);
  v9 = v43;
  v44 = 0;
  *(_QWORD *)(v8 + 8) = 0x100000001LL;
  *(_QWORD *)v8 = off_4D9D8;
  if ( !v9 )
  {
    *(_DWORD *)(v8 + 24) = 7;
    *(_QWORD *)(v8 + 16) = &off_4D9B0;
    *(_QWORD *)(v8 + 32) = 0;
    *(_OWORD *)(v8 + 40) = 0;
    goto LABEL_6;
  }
  v22 = qalloc_or_throw(16 * v9);
  v23 = (_QWORD *)v22;
  v44 = v9;
  v7 = (__m128i *)(16 * v9);
  v24 = nullptr;
  do
  {
    while ( 1 )
    {
      v25 = &v24->m128i_i8[v42];
      *v23 = *(__int64 *)((char *)v24->m128i_i64 + v42);
      v26 = *((_QWORD *)v25 + 1);
      v23[1] = v26;
      if ( !v26 )
        goto LABEL_28;
      if ( !&_pthread_key_create )
        break;
      _InterlockedAdd((volatile signed __int32 *)(v26 + 8), 1u);
LABEL_28:
      ++v24;
      v23 += 2;
      if ( v7 == v24 )
        goto LABEL_32;
    }
    ++v24;
    ++*(_DWORD *)(v26 + 8);
    v23 += 2;
  }
  while ( v7 != v24 );
LABEL_32:
  *(_QWORD *)(v8 + 16) = &off_4D9B0;
  *(_DWORD *)(v8 + 24) = 7;
  *(_QWORD *)(v8 + 32) = 0;
  *(_OWORD *)(v8 + 40) = 0;
  v27 = qalloc_or_throw(v7);
  v28 = v22;
  *(_QWORD *)(v8 + 32) = v27;
  v29 = nullptr;
  *(_QWORD *)(v8 + 48) = v9;
  while ( 1 )
  {
    v30 = (__int64 *)((char *)v29->m128i_i64 + v27);
    *v30 = *(__int64 *)((char *)v29->m128i_i64 + v22);
    v31 = *(__int64 *)((char *)&v29->m128i_i64[1] + v22);
    v30[1] = v31;
    if ( v31 )
      break;
LABEL_34:
    if ( v7 == ++v29 )
      goto LABEL_39;
LABEL_35:
    v27 = *(_QWORD *)(v8 + 32);
  }
  if ( &_pthread_key_create )
  {
    _InterlockedAdd((volatile signed __int32 *)(v31 + 8), 1u);
    goto LABEL_34;
  }
  ++v29;
  ++*(_DWORD *)(v31 + 8);
  if ( v7 != v29 )
    goto LABEL_35;
LABEL_39:
  *(_QWORD *)(v8 + 40) = v9;
  if ( !v22 )
    goto LABEL_6;
  v32 = 0;
  while ( 2 )
  {
    while ( 2 )
    {
      v33 = *(volatile signed __int32 **)(v28 + 8);
      if ( !v33 )
        goto LABEL_42;
      v7 = (__m128i *)(v33 + 2);
      if ( *((_QWORD *)v33 + 1) == 0x100000001LL )
      {
        v35 = *(_QWORD *)v33;
        v40 = v28;
        v39 = v32;
        *((_QWORD *)v33 + 1) = 0;
        (*(void (__fastcall **)(volatile signed __int32 *, __m128i *, __int64, __int64, __int64))(v35 + 16))(
          v33,
          v7,
          v35,
          v28,
          0x100000001LL);
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v33 + 24LL))(v33);
        v32 = v39;
        v28 = v40;
        goto LABEL_42;
      }
      if ( &_pthread_key_create )
      {
        if ( _InterlockedExchangeAdd(v7->m128i_i32, 0xFFFFFFFF) == 1 )
          break;
        goto LABEL_42;
      }
      v34 = *((_DWORD *)v33 + 2);
      v7 = (__m128i *)(unsigned int)(v34 - 1);
      *((_DWORD *)v33 + 2) = (_DWORD)v7;
      if ( v34 != 1 )
      {
LABEL_42:
        ++v32;
        v28 += 16;
        if ( v9 == v32 )
          goto LABEL_48;
        continue;
      }
      break;
    }
    v38 = v28;
    v37 = v32;
    sub_1C3E0(v33);
    v32 = v37 + 1;
    v28 = v38 + 16;
    if ( v9 != v37 + 1 )
      continue;
    break;
  }
LABEL_48:
  qfree(v22);
LABEL_6:
  v10 = v42;
  *a1 = v8 + 16;
  a1[1] = v8;
  if ( v10 )
  {
    v11 = v43;
    if ( (_QWORD)v43 )
    {
      v12 = 0;
      while ( 1 )
      {
        v14 = *(volatile signed __int32 **)(v10 + 16 * v12 + 8);
        if ( !v14 )
          goto LABEL_10;
        v15 = v14 + 2;
        if ( *((_QWORD *)v14 + 1) == 0x100000001LL )
        {
          v20 = *(_QWORD *)v14;
          v21 = *(_QWORD *)(v10 + 16 * v12 + 8);
          *((_QWORD *)v14 + 1) = 0;
          (*(void (__fastcall **)(__int64, __m128i *, volatile signed __int32 *))(v20 + 16))(v21, v7, v15);
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 24LL))(v14);
          v10 = v42;
          goto LABEL_10;
        }
        if ( &_pthread_key_create )
        {
          v13 = _InterlockedExchangeAdd(v15, 0xFFFFFFFF);
          v10 = v42;
          if ( v13 != 1 )
            goto LABEL_10;
LABEL_15:
          ++v12;
          sub_1C3E0(v14);
          v10 = v42;
          if ( v11 == v12 )
            break;
        }
        else
        {
          v16 = *((_DWORD *)v14 + 2);
          v10 = v42;
          *((_DWORD *)v14 + 2) = v16 - 1;
          if ( v16 == 1 )
            goto LABEL_15;
LABEL_10:
          if ( v11 == ++v12 )
            break;
        }
      }
    }
    *(_QWORD *)&v43 = 0;
    qfree(v10);
  }
  if ( v6 )
  {
    v17 = v6 + 2;
    if ( *((_QWORD *)v6 + 1) == 0x100000001LL )
    {
      v36 = *(_QWORD *)v6;
      *((_QWORD *)v6 + 1) = 0;
      (*(void (__fastcall **)(volatile signed __int32 *, __m128i *, volatile signed __int32 *))(v36 + 16))(v6, v7, v17);
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 24LL))(v6);
    }
    else
    {
      if ( &_pthread_key_create )
      {
        v18 = _InterlockedExchangeAdd(v17, 0xFFFFFFFF);
      }
      else
      {
        v18 = *((_DWORD *)v6 + 2);
        *((_DWORD *)v6 + 2) = v18 - 1;
      }
      if ( v18 == 1 )
        sub_1C3E0(v6);
    }
  }
  return a1;
}
