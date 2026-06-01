__int64 __fastcall sub_1999C0(
        int a1,
        _QWORD *a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  __int64 (__fastcall *v10)(__int64); // rax
  _QWORD *v11; // rax
  const char *v12; // rdi
  __int64 v13; // r12
  __int64 extlang; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __m128 v19; // xmm4
  __m128 v20; // xmm5
  __int64 v21; // rbp
  void (__fastcall **v22)(_QWORD *, __int64, __int64 *); // rax
  const char *v23; // rdx
  __int64 v24; // rsi
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __m128 v29; // xmm4
  __m128 v30; // xmm5
  void (__fastcall **v32)(_QWORD *, __int64, __int64 *); // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  const char *v36; // rsi
  void *v37; // rsi
  char v38; // [rsp+0h] [rbp-78h]
  int v39; // [rsp+Ch] [rbp-6Ch] BYREF
  __int64 v40; // [rsp+10h] [rbp-68h] BYREF
  __int128 v41; // [rsp+18h] [rbp-60h]
  __int64 v42; // [rsp+30h] [rbp-48h] BYREF
  const char *v43; // [rsp+38h] [rbp-40h]
  __int128 v44; // [rsp+40h] [rbp-38h]
  int v45; // [rsp+50h] [rbp-28h]
  unsigned __int64 v46; // [rsp+58h] [rbp-20h]

  v46 = __readfsqword(0x28u);
  if ( !byte_8CACA0 )
  {
    byte_8CACA0 = 1;
    if ( a1 == 30 )
    {
      (*(void (__fastcall **)(_QWORD *, __int64, __int64 *))*a2)(a2, 30, &v40);
      v32 = (void (__fastcall **)(_QWORD *, __int64, __int64 *))*a2;
      v45 = 0;
      v42 = 40;
      v43 = nullptr;
      v44 = 0;
      (*v32)(a2, 10, &v42);
      HIWORD(v45) = v40;
      (*(void (__fastcall **)(_QWORD *, __int64, __int64 *))(*a2 + 8LL))(a2, 10, &v42);
      if ( v43 )
      {
        *(_QWORD *)&v44 = 0;
        qfree(v43, 10, v33, v34, v35);
        byte_8CACA0 = 0;
        return 1;
      }
    }
    else if ( a1 == 40 )
    {
      (*(void (__fastcall **)(_QWORD *, __int64, int *))*a2)(a2, 20, &v39);
      v10 = *(__int64 (__fastcall **)(__int64))(*a2 + 72LL);
      if ( v10 == form_actions_impl_t__::vfunc_9 )
        v11 = (_QWORD *)a2[4];
      else
        v11 = (_QWORD *)v10((__int64)a2);
      v12 = &s1;
      v13 = *v11 + 24LL * v39;
      if ( *(_QWORD *)(v13 + 8) )
        v12 = *(const char **)v13;
      extlang = find_extlang(v12, 1);
      v21 = extlang;
      if ( extlang )
      {
        if ( *(_QWORD *)(extlang + 40) )
        {
          v22 = (void (__fastcall **)(_QWORD *, __int64, __int64 *))*a2;
          v40 = 0;
          v42 = 40;
          v43 = nullptr;
          v45 = 0;
          v41 = 0;
          v44 = 0;
          (*v22)(a2, 10, &v42);
          v23 = &s1;
          if ( (_QWORD)v44 )
            v23 = v43;
          v24 = -1;
          if ( !(*(unsigned __int8 (__fastcall **)(const char *, __int64, const char *, __int64 *))(v21 + 40))(
                  "__test__compile",
                  -1,
                  v23,
                  &v40) )
          {
            if ( (unsigned __int64)v41 > 1 )
              goto LABEL_14;
            v37 = (void *)v40;
            if ( *((_QWORD *)&v41 + 1) <= 0xDu )
            {
              v40 = qvector_reserve(&v40, v40, 14, 1);
              v37 = (void *)v40;
            }
            *(_QWORD *)&v41 = 14;
            qmemcpy(v37, "unknown error", 13);
            *(_BYTE *)(v40 + 13) = 0;
            if ( (_QWORD)v41 )
LABEL_14:
              v24 = v40;
            else
              v24 = (__int64)&s1;
            sub_169630(
              (int)"Script error:\n%s",
              v24,
              v25,
              v26,
              v27,
              v28,
              (__m128)0LL,
              a4,
              a5,
              a6,
              v29,
              v30,
              a9,
              a10,
              v38);
          }
          if ( v43 )
          {
            *(_QWORD *)&v44 = 0;
            qfree(v43, v24, v25, v26, v27);
          }
          if ( v40 )
          {
            *(_QWORD *)&v41 = 0;
            qfree(v40, v24, v25, v26, v27);
          }
        }
        else
        {
          sub_169630(
            (int)"The '%s' extlang does not implement the 'compile_expr' callback!",
            *(_QWORD *)(extlang + 16),
            v15,
            v16,
            v17,
            v18,
            a3,
            a4,
            a5,
            a6,
            v19,
            v20,
            a9,
            a10,
            v38);
        }
        --*(_DWORD *)(v21 + 12);
      }
      else
      {
        v36 = &s1;
        if ( *(_QWORD *)(v13 + 8) )
          v36 = *(const char **)v13;
        sub_169630(
          (int)"Language '%s' is not loaded, cannot compile!",
          (__int64)v36,
          v15,
          v16,
          v17,
          v18,
          a3,
          a4,
          a5,
          a6,
          v19,
          v20,
          a9,
          a10,
          v38);
      }
    }
    byte_8CACA0 = 0;
  }
  return 1;
}
