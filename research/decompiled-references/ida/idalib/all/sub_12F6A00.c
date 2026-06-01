__int64 __fastcall sub_12F6A00(__int64 a1, unsigned int a2)
{
  __int64 v2; // r15
  __int64 v4; // rax
  __int64 v5; // rax
  void *v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // r13
  __int64 v10; // r14
  __int64 v11; // rax
  char v12; // r13
  __int64 v13; // r12
  _QWORD *v14; // r14
  __int64 v15; // rdx
  _QWORD *v16; // r12
  _QWORD *i; // rbp
  __int64 v19; // r15
  _QWORD *v20; // rax
  __int64 v21; // rax
  __int64 v22; // rcx
  char *v23; // rcx
  __int64 v24; // rcx
  const __m128i *v25; // rsi
  char *v26; // rdx
  const __m128i *v27; // rax
  __int32 v28; // ecx
  __int64 v29; // rdx
  __int64 v30; // rax
  __int64 v31; // rbp
  __int64 v32; // r12
  __int64 v33; // rax
  unsigned __int64 v34; // r13
  unsigned __int64 *v35; // rdx
  __int64 v36; // [rsp+18h] [rbp-90h]
  unsigned __int64 v37; // [rsp+20h] [rbp-88h]
  __int64 v38; // [rsp+28h] [rbp-80h]
  void *v39; // [rsp+38h] [rbp-70h] BYREF
  void *ptr; // [rsp+40h] [rbp-68h] BYREF
  __int64 v41; // [rsp+48h] [rbp-60h]
  _WORD v42[44]; // [rsp+50h] [rbp-58h] BYREF

  if ( !*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 104LL) + 312LL) )
    return 0;
  if ( !*(_QWORD *)(a1 + 168) )
  {
    sub_12F6500((_QWORD *)a1);
    if ( !*(_QWORD *)(a1 + 168) )
      return 0;
  }
  sub_1EBF340();
  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 168) + 520LL);
  if ( v2 )
  {
    if ( *(_BYTE *)(a1 + 321) )
      return v2;
LABEL_12:
    v12 = *(_BYTE *)(a1 + 8);
    if ( v12 )
      return v2;
    v13 = *(_QWORD *)(*(_QWORD *)(a1 + 96) + 104LL);
    sub_12EEE10((__int64 **)&ptr, *(__int64 **)(v13 + 888), *(_DWORD *)(v13 + 896) == 0);
    v14 = ptr;
    sub_12EEE10((__int64 **)&ptr, (__int64 *)(*(_QWORD *)(v13 + 888) + 8LL * *(unsigned int *)(v13 + 896)), 1);
    if ( ptr == v14 )
      goto LABEL_39;
    v36 = v2;
    v15 = *v14;
    v16 = ptr;
    for ( i = v14; ; i = v20 )
    {
      v19 = *(_QWORD *)(v15 + 8);
      if ( !*(_QWORD *)(sub_FEEE40(v19) + 304) )
      {
        ptr = v42;
        v41 = 0x200000000LL;
        v21 = sub_6F3470(*(_QWORD *)(a1 + 96) + 552LL, *(const void **)v19, *(_QWORD *)(v19 + 8));
        v22 = (unsigned int)v41;
        if ( (unsigned int)v41 >= (unsigned __int64)HIDWORD(v41) )
        {
          v34 = a2 | v37 & 0xFFFFFFFF00000000LL;
          v37 = v34;
          if ( HIDWORD(v41) < (unsigned __int64)(unsigned int)v41 + 1 )
          {
            v38 = v21;
            sub_2237220(&ptr, v42, (unsigned int)v41 + 1LL, 16);
            v22 = (unsigned int)v41;
            v21 = v38;
          }
          v35 = (unsigned __int64 *)((char *)ptr + 16 * v22);
          *v35 = v34;
          v35[1] = v21;
          v24 = (unsigned int)(v41 + 1);
          LODWORD(v41) = v41 + 1;
        }
        else
        {
          v23 = (char *)ptr + 16 * (unsigned int)v41;
          *(_DWORD *)v23 = a2;
          *((_QWORD *)v23 + 1) = v21;
          v24 = (unsigned int)(v41 + 1);
          LODWORD(v41) = v41 + 1;
        }
        v25 = (const __m128i *)ptr;
        v26 = (char *)ptr + 16 * v24;
        if ( ptr != v26 )
        {
          v27 = (const __m128i *)(v26 - 16);
          if ( v26 - 16 <= ptr )
          {
            v26 = (char *)ptr;
          }
          else
          {
            do
            {
              v28 = v25->m128i_i32[0];
              v29 = v25->m128i_i64[1];
              --v27;
              ++v25;
              v25[-1] = _mm_loadu_si128(v27 + 1);
              v27[1].m128i_i32[0] = v28;
              v27[1].m128i_i64[1] = v29;
            }
            while ( v25 < v27 );
            v26 = (char *)ptr;
            v24 = (unsigned int)v41;
          }
        }
        (*(void (__fastcall **)(__int64, _QWORD, char *, __int64, _QWORD, _QWORD))(*(_QWORD *)a1 + 16LL))(
          a1,
          *(unsigned int *)(v19 + 32),
          v26,
          v24,
          0,
          0);
        if ( ptr != v42 )
          free(ptr);
        v12 = 1;
      }
      v15 = i[1];
      v20 = i + 1;
      if ( v15 == -8 || !v15 )
      {
        do
        {
          do
            v15 = *++v20;
          while ( !*v20 );
        }
        while ( v15 == -8 );
      }
      if ( v20 == v16 )
        break;
    }
    v2 = v36;
    if ( !v12 )
    {
LABEL_39:
      *(_BYTE *)(a1 + 321) = 1;
      return v2;
    }
    v30 = *(_QWORD *)(*(_QWORD *)(a1 + 96) + 104LL);
    v31 = *(_QWORD *)(v30 + 312);
    v32 = *(_QWORD *)(v30 + 304);
    v33 = sub_12EF2D0((_QWORD *)a1);
    sub_1FD6990(&v39, *(_QWORD *)(a1 + 64), v33, v32, v31);
    if ( !v39 )
    {
      *(_BYTE *)(*(_QWORD *)(a1 + 168) + 9266LL) = 0;
      sub_1EBF340();
      v2 = *(_QWORD *)(*(_QWORD *)(a1 + 168) + 520LL);
      goto LABEL_39;
    }
    ptr = v39;
    v39 = nullptr;
    sub_A0E8E0((_QWORD **)&ptr);
    if ( ptr )
      (*(void (__fastcall **)(void *))(*(_QWORD *)ptr + 8LL))(ptr);
    if ( v39 )
      (*(void (__fastcall **)(void *))(*(_QWORD *)v39 + 8LL))(v39);
    return 0;
  }
  if ( !(unsigned __int8)sub_12E9B60(a1) )
    return 0;
  if ( !*(_QWORD *)(a1 + 64) )
    return 0;
  v4 = *(_QWORD *)(a1 + 96);
  if ( !v4 )
    return 0;
  v5 = *(_QWORD *)(v4 + 104);
  v6 = *(void **)(v5 + 304);
  v7 = *(_QWORD *)(v5 + 312);
  v42[8] = 261;
  ptr = v6;
  v41 = v7;
  sub_228BCB0(&ptr, 1, 504);
  v8 = *(_QWORD *)(*(_QWORD *)(a1 + 96) + 104LL);
  v9 = *(_QWORD *)(v8 + 312);
  v10 = *(_QWORD *)(v8 + 304);
  v11 = sub_12EF2D0((_QWORD *)a1);
  sub_1FD6990(&v39, *(_QWORD *)(a1 + 64), v11, v10, v9);
  if ( !v39 )
  {
    *(_BYTE *)(*(_QWORD *)(a1 + 168) + 9266LL) = 0;
    sub_1EBF340();
    v2 = *(_QWORD *)(*(_QWORD *)(a1 + 168) + 520LL);
    if ( *(_BYTE *)(a1 + 321) )
      return v2;
    if ( !v2 )
      return 0;
    goto LABEL_12;
  }
  ptr = v39;
  v39 = nullptr;
  sub_A0E8E0((_QWORD **)&ptr);
  if ( ptr )
    (*(void (__fastcall **)(void *))(*(_QWORD *)ptr + 8LL))(ptr);
  if ( v39 )
    (*(void (__fastcall **)(void *))(*(_QWORD *)v39 + 8LL))(v39);
  return v2;
}
