__int64 __fastcall sub_5AA1A0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rax
  __int64 v6; // r14
  _QWORD *v7; // r13
  __int64 *v8; // rbp
  __int64 *v9; // r15
  __int64 v10; // rax
  __m128i v11; // xmm1
  __int64 v12; // rax
  _QWORD *v13; // rax
  _QWORD *v14; // rsi
  size_t v15; // rdx
  __int64 v16; // rax
  _QWORD *v17; // rbp
  void (***v18)(void); // rax
  _QWORD *v19; // rdx
  __int64 v20; // rax
  void (***v21)(void); // r12
  void (***v22)(void); // rdi
  __int64 v23; // rax
  void (***v24)(void); // rdi
  void *v25; // r12
  __int64 (__fastcall *v26)(void (__fastcall ***)(_QWORD)); // rdx
  __int64 v28; // rax
  int v29; // eax
  __int64 v30; // rax
  void (***v31)(void); // r12
  void (***v32)(void); // rdi
  void (***v33)(void); // rax
  void (***v34)(void); // r15
  _QWORD *ptr; // [rsp+8h] [rbp-70h]
  unsigned int v36; // [rsp+10h] [rbp-68h]
  void (***v37)(void); // [rsp+10h] [rbp-68h]
  int v38; // [rsp+2Ch] [rbp-4Ch] BYREF
  _QWORD *v39; // [rsp+30h] [rbp-48h] BYREF
  int v40; // [rsp+38h] [rbp-40h]

  if ( *(_BYTE *)(a1 + 96) )
    return (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(a1 + 24) + 16LL))(
             *(_QWORD *)(a1 + 24),
             *(_QWORD *)(a2 + 104),
             *(_QWORD *)(a3 + 104));
  v5 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 40) + 16LL))(*(_QWORD *)(a1 + 40));
  v6 = *(_QWORD *)(a2 + 104);
  v7 = (_QWORD *)v5;
  v8 = *(__int64 **)(v6 + 8);
  v9 = *(__int64 **)(*(_QWORD *)(a2 + 8) + 24LL);
  ptr = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(a1 + 48) + 16LL))(
                    *(_QWORD *)(a1 + 48),
                    v6,
                    *(_QWORD *)(v5 + 104));
  (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(a1 + 64) + 16LL))(*(_QWORD *)(a1 + 64), v6, v7[13]);
  v39 = nullptr;
  v10 = ptr[2];
  if ( v10 )
  {
    v11 = _mm_cvtsi32_si128(*(_DWORD *)(v10 - 4));
    v12 = *(unsigned int *)(v10 - 8);
    v36 = v12;
    v13 = (_QWORD *)sub_186B270(8 * v12 + 8);
    v39 = v13 + 1;
    v14 = (_QWORD *)ptr[2];
    *v13 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v36), _mm_cvtsi32_si128(_mm_cvtsi128_si32(v11))).m128i_u64[0];
    if ( v14 )
    {
      v15 = 8LL * *((unsigned int *)v14 - 1);
      if ( v15 <= 8 )
      {
        if ( v15 == 8 )
          v13[1] = *v14;
      }
      else
      {
        memmove(v13 + 1, v14, v15);
      }
    }
  }
  v16 = *v8;
  v40 = 2;
  v17 = (_QWORD *)(*(__int64 (__fastcall **)(__int64 *, _QWORD **))(v16 + 40))(v8, &v39);
  v18 = *(void (****)(void))(a1 + 56);
  if ( !v18 )
  {
    v18 = (void (***)(void))sub_4C4B50((__int64)v9, (__int64)v17, (__int64)ptr, 0);
    v32 = *(void (****)(void))(a1 + 56);
    if ( v32 != v18 )
    {
      v37 = v18;
      sub_568140(v32);
      v18 = v37;
      *(_QWORD *)(a1 + 56) = v37;
    }
  }
  ((void (__fastcall *)(void (***)(void), _QWORD *, _QWORD *, _QWORD))(*v18)[2])(v18, v17, ptr, 0);
  v19 = (_QWORD *)sub_186B270(0x20u);
  *v19 = off_1C52308;
  v20 = *v9;
  v19[1] = a1;
  v19[2] = a2;
  v19[3] = v7;
  v21 = (void (***)(void))(*(__int64 (__fastcall **)(__int64 *, _QWORD *))(v20 + 16))(v9, v17);
  ((void (__fastcall *)(void (***)(void), _QWORD *))(*v21)[2])(v21, v17);
  sub_568170(v21);
  v22 = *(void (****)(void))(a1 + 80);
  if ( !v22 )
  {
    v28 = v17[2];
    v29 = v28 ? *(_DWORD *)(v28 - 4) - 1 : -1;
    v38 = v29;
    v30 = sub_4C5900((__int64)v9, (__int64)v17, 1u, (unsigned int *)&v38);
    v22 = *(void (****)(void))(a1 + 80);
    v31 = (void (***)(void))v30;
    if ( (void (***)(void))v30 != v22 )
    {
      sub_4CFE00(v22);
      *(_QWORD *)(a1 + 80) = v31;
      v22 = v31;
    }
  }
  v23 = ((__int64 (__fastcall *)(void (***)(void), _QWORD *))(*v22)[2])(v22, v17);
  v24 = *(void (****)(void))(a1 + 88);
  v25 = (void *)v23;
  if ( !v24 )
  {
    v33 = (void (***)(void))sub_4C4B50((__int64)v9, v6, v23, 0);
    v24 = *(void (****)(void))(a1 + 88);
    v34 = v33;
    if ( v33 != v24 )
    {
      sub_568140(v24);
      *(_QWORD *)(a1 + 88) = v34;
      v24 = v34;
    }
  }
  ((void (__fastcall *)(void (***)(void), __int64, void *, _QWORD))(*v24)[2])(v24, v6, v25, 0);
  if ( v25 )
    sub_4D63E0(v25);
  if ( v17 )
    sub_4D63E0(v17);
  if ( v39 )
    sub_186B220(v39 - 1);
  sub_4D63E0(ptr);
  v26 = *(__int64 (__fastcall **)(void (__fastcall ***)(_QWORD)))(*v7 + 16LL);
  if ( v26 != sub_4C9C10 )
    return v26((void (__fastcall ***)(_QWORD))v7);
  (*(void (__fastcall **)(_QWORD *))*v7)(v7);
  return sub_186B220(v7);
}

