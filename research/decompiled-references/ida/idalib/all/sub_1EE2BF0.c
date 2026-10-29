__int64 __fastcall sub_1EE2BF0(__int64 a1)
{
  _QWORD *v1; // r13
  __int64 (__fastcall *v2)(__int64); // rax
  int v3; // eax
  __int64 v4; // r14
  __int64 v5; // rbx
  __int64 v6; // r13
  __m128i v7; // xmm1
  char *v8; // rcx
  char *v9; // r8
  __m128i v10; // xmm0
  signed __int64 v11; // r12
  int v12; // eax
  int v13; // eax
  __int64 v14; // rax
  __m128i v15; // xmm0
  char *v16; // rdx
  _QWORD *v17; // rsi
  __int64 v18; // rdi
  unsigned __int64 v19; // rdx
  __int64 v20; // rdi
  size_t v22; // rax
  __int64 v23; // rdi
  __int64 v24; // rax
  _QWORD *v25; // rax
  _QWORD *v26; // rax
  __m128i v27; // [rsp+0h] [rbp-428h] BYREF
  _QWORD *v28; // [rsp+10h] [rbp-418h]
  __int64 v29; // [rsp+18h] [rbp-410h]
  __m128i v30; // [rsp+20h] [rbp-408h]
  __m128i v31; // [rsp+30h] [rbp-3F8h]
  int v32; // [rsp+40h] [rbp-3E8h]
  _QWORD *v33; // [rsp+58h] [rbp-3D0h] BYREF
  _QWORD *v34; // [rsp+60h] [rbp-3C8h] BYREF
  char v35; // [rsp+68h] [rbp-3C0h]
  _QWORD *v36; // [rsp+70h] [rbp-3B8h] BYREF
  char v37; // [rsp+78h] [rbp-3B0h]
  _OWORD v38[2]; // [rsp+80h] [rbp-3A8h] BYREF
  int v39; // [rsp+A0h] [rbp-388h]
  int v40; // [rsp+A4h] [rbp-384h]
  __m128i v41; // [rsp+A8h] [rbp-380h] BYREF
  __int64 v42; // [rsp+B8h] [rbp-370h]
  _QWORD v43[2]; // [rsp+C0h] [rbp-368h] BYREF
  _QWORD v44[34]; // [rsp+D0h] [rbp-358h] BYREF
  void *ptr; // [rsp+1E0h] [rbp-248h] BYREF
  __int64 v46; // [rsp+1E8h] [rbp-240h]
  _BYTE v47[568]; // [rsp+1F0h] [rbp-238h] BYREF

  v1 = (_QWORD *)a1;
  v29 = a1 + 24;
  v2 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a1 + 24) + 184LL);
  if ( v2 == sub_1EA8950 )
  {
    v3 = *(_DWORD *)(a1 + 9408) + 1;
    *(_DWORD *)(a1 + 9408) = v3;
    if ( v3 == 1 )
    {
      v23 = *(_QWORD *)(a1 + 496);
      if ( v23 )
        sub_224E010(v23);
    }
  }
  else
  {
    v2(a1 + 24);
  }
  v4 = v1[20];
  v5 = v4 + 8LL * *((unsigned int *)v1 + 42);
  if ( v5 != v4 )
  {
    v28 = v1;
    v27.m128i_i64[1] = (__int64)v44;
    while ( 1 )
    {
      while ( 1 )
      {
        v6 = *(_QWORD *)(v5 - 8);
        if ( *(_QWORD *)(v6 + 1744) )
          break;
        v5 -= 8;
        if ( v4 == v5 )
          goto LABEL_43;
      }
      v7 = _mm_loadu_si128((const __m128i *)(v6 + 1736));
      v8 = *(char **)(v6 + 1784);
      v41 = 0u;
      v9 = *(char **)(v6 + 1776);
      v30 = v7;
      v10 = _mm_loadu_si128((const __m128i *)(v6 + 1752));
      v11 = v8 - v9;
      v38[0] = v7;
      v31 = v10;
      v12 = *(_DWORD *)(v6 + 1768);
      v38[1] = v10;
      v32 = v12;
      v39 = v12;
      v13 = *(_DWORD *)(v6 + 1772);
      v42 = 0;
      v40 = v13;
      if ( (v8 - v9) >> 4 )
      {
        if ( (unsigned __int64)((v8 - v9) >> 4) > 0xFFFFFFFFFFFFFFFLL )
          std::__throw_bad_alloc();
        v14 = operator new(v8 - v9);
        v8 = *(char **)(v6 + 1784);
        v9 = *(char **)(v6 + 1776);
      }
      else
      {
        v14 = 0;
      }
      v27.m128i_i64[0] = v14;
      v15 = _mm_loadl_epi64(&v27);
      v42 = v14 + v11;
      v41 = _mm_unpacklo_epi64(v15, v15);
      if ( v8 != v9 )
      {
        v16 = v9;
        v17 = (_QWORD *)v14;
        if ( &_pthread_key_create )
        {
          do
          {
            *v17 = *(_QWORD *)v16;
            v18 = *((_QWORD *)v16 + 1);
            v17[1] = v18;
            if ( v18 )
              _InterlockedAdd((volatile signed __int32 *)(v18 + 8), 1u);
            v16 += 16;
            v17 += 2;
          }
          while ( v8 != v16 );
        }
        else
        {
          do
          {
            *v17 = *(_QWORD *)v16;
            v20 = *((_QWORD *)v16 + 1);
            v17[1] = v20;
            if ( v20 )
              ++*(_DWORD *)(v20 + 8);
            v16 += 16;
            v17 += 2;
          }
          while ( v8 != v16 );
        }
        v14 += ((v8 - 16 - v9) & 0xFFFFFFFFFFFFFFF0LL) + 16;
      }
      v41.m128i_i64[1] = v14;
      v43[0] = v27.m128i_i64[1];
      v43[1] = 0x800000000LL;
      if ( *(_DWORD *)(v6 + 1808) )
        sub_13A7720((__int64)v43, (__int64 *)(v6 + 1800));
      v19 = *(_QWORD *)(v6 + 2144);
      v44[32] = *(_QWORD *)(v6 + 2072);
      sub_1EAF7C0((__int64 *)&ptr, (__int64)v38, v19);
      if ( ptr )
        break;
      ptr = v47;
      v46 = 0x4000000000LL;
      v27.m128i_i64[0] = (__int64)&v36;
      while ( 1 )
      {
        sub_1EB0460((__int64)&v34, (__int64)v38, 0);
        if ( (v35 & 1) != 0 )
        {
          v1 = v28;
          v25 = v34;
          v34 = nullptr;
          v36 = v25;
          sub_1EBF0A0((__int64)v28, &v36);
          if ( v36 )
            (*(void (__fastcall **)(_QWORD *))(*v36 + 8LL))(v36);
          goto LABEL_38;
        }
        if ( (_DWORD)v34 == 1 )
          break;
        if ( !(_DWORD)v34 || (_DWORD)v34 == 2 )
        {
          v1 = v28;
          v22 = j__strlen("malformed block record in AST file");
          sub_1EAD680((__int64)v1, "malformed block record in AST file", v22);
LABEL_38:
          sub_A0B030((__int64 *)&v34);
          if ( ptr != v47 )
            free(ptr);
          goto LABEL_35;
        }
        if ( (_DWORD)v34 == 3 )
        {
          LODWORD(v46) = 0;
          sub_2027F10(v27.m128i_i64[0], v38, HIDWORD(v34), &ptr, 0);
          if ( (v37 & 1) != 0 )
          {
            v1 = v28;
            v26 = v36;
            v36 = nullptr;
            v33 = v26;
            sub_1EBF0A0((__int64)v28, &v33);
            if ( v33 )
              (*(void (__fastcall **)(_QWORD *))(*v33 + 8LL))(v33);
            sub_A0AE90((__int64 *)v27.m128i_i64[0]);
            goto LABEL_38;
          }
          if ( (unsigned int)((_DWORD)v36 - 1) <= 1 )
          {
            v24 = sub_1EE2BD0(v28, v6, *(_QWORD *)ptr);
            if ( (*(_BYTE *)(v24 + 4) & 0x10) != 0 )
              (*(void (__fastcall **)(_QWORD *, __int64))(*v28 + 24LL))(v28, v24);
          }
          sub_A0AE90((__int64 *)v27.m128i_i64[0]);
        }
        sub_A0B030((__int64 *)&v34);
      }
      sub_A0B030((__int64 *)&v34);
      if ( ptr != v47 )
        free(ptr);
      v5 -= 8;
      sub_A0AEB0((__int64)v43);
      sub_A0AD20((__int64)&v41);
      if ( v4 == v5 )
      {
LABEL_43:
        v1 = v28;
        return (*(__int64 (__fastcall **)(__int64))(v1[3] + 192LL))(v29);
      }
    }
    v1 = v28;
    sub_1EBF0A0((__int64)v28, (_QWORD **)&ptr);
    if ( ptr )
      (*(void (__fastcall **)(void *))(*(_QWORD *)ptr + 8LL))(ptr);
LABEL_35:
    sub_A0AEB0((__int64)v43);
    sub_A0AD20((__int64)&v41);
  }
  return (*(__int64 (__fastcall **)(__int64))(v1[3] + 192LL))(v29);
}
