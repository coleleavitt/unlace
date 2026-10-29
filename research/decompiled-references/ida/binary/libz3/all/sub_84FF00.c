__int64 __fastcall sub_84FF00(__int64 a1, unsigned int *a2, __m128 a3)
{
  __int64 v4; // rbx
  __int64 *v5; // r14
  __int64 *v6; // rbx
  __int64 *j; // r13
  __int64 v8; // r12
  __int64 v9; // r15
  __int64 **v10; // rax
  __int64 v11; // r12
  __int64 v12; // rdi
  __int64 v13; // rbx
  __int64 v14; // rsi
  bool v15; // zf
  __int64 v16; // rdi
  std::ios_base *v17; // rdi
  unsigned int v18; // ebx
  __int64 v19; // rdx
  unsigned int v20; // eax
  void (__fastcall *v21)(__int64 *, __int64); // rcx
  __int64 v22; // r12
  __int64 v23; // rdi
  __int64 v24; // r12
  __int64 v26; // rax
  __int64 v27; // r12
  void (__fastcall ***v28)(void *); // r13
  _QWORD *v29; // rbx
  void *v30; // rcx
  __int64 v31; // rdi
  void (__fastcall ***v32)(_QWORD); // rbp
  __int64 *v33; // [rsp+8h] [rbp-60h]
  int i; // [rsp+14h] [rbp-54h]
  void *ptr[8]; // [rsp+28h] [rbp-40h] BYREF

  v4 = sub_7D5350(*(_QWORD *)(a1 + 8), (__int64)a2);
  if ( !*(_QWORD *)(a1 + 192) )
  {
    v26 = sub_374300(*(_QWORD *)(a1 + 16), a1 + 184, (__int64)&qword_18D6CD0);
    v27 = v26;
    if ( v26 )
      ++*(_DWORD *)(v26 + 48);
    v28 = *(void (__fastcall ****)(void *))(a1 + 192);
    if ( v28 )
    {
      v15 = (*((_DWORD *)v28 + 12))-- == 1;
      if ( v15 )
      {
        (**v28)(v28);
        sub_186B220(v28);
      }
    }
    *(_QWORD *)(a1 + 192) = v27;
  }
  v33 = sub_849FD0(a1, v4);
  if ( !v33 )
    return 0;
  if ( v33[3] == *(_QWORD *)(*(_QWORD *)(a1 + 16) + 864LL) )
    return 1;
  if ( (unsigned __int8)sub_84B100(a1, (__int64)a2, v4, (__int64)v33, a3) )
    return (unsigned int)-1;
  *(_QWORD *)(a1 + 256) = 0;
  for ( i = 1; ; ++i )
  {
    v5 = *(__int64 **)(a1 + 192);
    (*(void (__fastcall **)(__int64 *))(*v5 + 192))(v5);
    v6 = (__int64 *)v33[1];
    if ( v6 )
    {
      for ( j = &v6[*((unsigned int *)v6 - 1)]; j != v6; ++v6 )
      {
        v8 = *v6;
        v9 = sub_15D1F10(*v6);
        if ( (unsigned __int8)sub_13735C0(*(_QWORD *)(a1 + 176), v9) )
        {
          v10 = (__int64 **)(*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 176) + 16LL))(
                              *(_QWORD *)(a1 + 176),
                              v9);
          sub_84BB00(a1, v8, v10);
        }
      }
    }
    v11 = *(_QWORD *)(a1 + 16);
    v12 = *(_QWORD *)(a1 + 192);
    v13 = v33[3];
    if ( v13 )
    {
      ++*(_DWORD *)(v13 + 8);
      v14 = v13;
      sub_E5EBF0(v12, v13);
      v15 = (*(_DWORD *)(v13 + 8))-- == 1;
      if ( v15 )
      {
        v14 = v13;
        v12 = v11;
        sub_15D7BC0(v11, v13);
      }
    }
    else
    {
      v14 = 0;
      sub_E5EBF0(v12, 0);
    }
    ++*(_DWORD *)(a1 + 28);
    if ( (unsigned int)sub_180B130(v12) > 1 )
    {
      if ( (unsigned __int8)sub_186A530(*(double *)a3.m128_u64) )
      {
        sub_186A4C0(*(double *)a3.m128_u64);
        v16 = sub_180B150(v12, v14);
        std::__ostream_insert<char,std::char_traits<char>>();
        sub_186A500(v16, "(mbqi.check)\n");
      }
      else
      {
        sub_180B150(v12, v14);
        std::__ostream_insert<char,std::char_traits<char>>();
      }
    }
    v17 = *(std::ios_base **)(a1 + 192);
    v18 = sub_E60CB0(v17, 0, 0);
    if ( (unsigned int)sub_180B130(v17) <= 1 )
      goto LABEL_18;
    if ( !(unsigned __int8)sub_186A530(*(double *)a3.m128_u64) )
    {
      v24 = sub_180B150(v17, 0);
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_17F35B0(v24, v18);
      std::__ostream_insert<char,std::char_traits<char>>();
LABEL_18:
      if ( !v18 )
        goto LABEL_24;
      goto LABEL_19;
    }
    sub_186A4C0(*(double *)a3.m128_u64);
    v22 = sub_180B150(v17, 0);
    std::__ostream_insert<char,std::char_traits<char>>();
    v23 = sub_17F35B0(v22, v18);
    std::__ostream_insert<char,std::char_traits<char>>();
    sub_186A500(v23, ")\n");
    if ( !v18 )
      goto LABEL_24;
LABEL_19:
    if ( v18 == 1 )
    {
      v29 = *(_QWORD **)(a1 + 192);
      ptr[0] = nullptr;
      (*(void (__fastcall **)(_QWORD *, void **))(*v29 + 32LL))(v29, ptr);
      v30 = ptr[0];
      if ( ptr[0] )
      {
        v31 = v29[7];
        if ( v31 )
        {
          (*(void (__fastcall **)(__int64, void **))(*(_QWORD *)v31 + 32LL))(v31, ptr);
          v30 = ptr[0];
        }
      }
      v18 = -1;
      if ( !(unsigned __int8)sub_84FA80((__m128i *)a1, a2, v33, (__int64)v30, *(double *)a3.m128_u64) )
        v18 = -(unsigned __int8)sub_84F940((__m128i *)a1, a2, v33, (__int64)ptr[0], *(double *)a3.m128_u64);
      v32 = (void (__fastcall ***)(_QWORD))ptr[0];
      if ( ptr[0] )
      {
        v15 = (*((_DWORD *)ptr[0] + 4))-- == 1;
        if ( v15 )
        {
          (**v32)(v32);
          sub_186B220(v32);
        }
      }
LABEL_24:
      v19 = *v5;
      goto LABEL_25;
    }
    v19 = *v5;
    v20 = *(_DWORD *)(a1 + 256);
    v21 = *(void (__fastcall **)(__int64 *, __int64))(*v5 + 200);
    if ( v20 >= *(_DWORD *)(a1 + 260) )
      break;
    *(_DWORD *)(a1 + 256) = i + v20;
    v21(v5, 1);
  }
  v18 = 1;
LABEL_25:
  (*(void (__fastcall **)(__int64 *, __int64))(v19 + 200))(v5, 1);
  return v18;
}

