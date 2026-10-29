__int64 __fastcall sub_437350(const char *a1, __int64 a2, unsigned int a3)
{
  const char *v3; // r12
  _QWORD *v5; // rax
  __int64 v6; // rax
  __int64 v7; // rdi
  _QWORD *v8; // rbx
  unsigned __int8 (*v9)(void); // rax
  size_t v10; // r8
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 (__fastcall *v15)(_QWORD *, __int64, __int64, __int64, __int64); // rax
  __int64 v16; // rdi
  __int64 (*v17)(); // rax
  __int64 v18; // rdi
  const char *v19; // rsi
  __int64 v20; // rdx
  __int64 v21; // rbp
  __int64 v22; // rbx
  __int64 v23; // rax
  __int64 v24; // rdi
  unsigned int v25; // ebp
  __int64 v26; // rdx
  __int64 v27; // r12
  __int64 v28; // rbx
  __int64 *v29; // rax
  __int64 v30; // rdi
  void *v32; // [rsp+0h] [rbp-88h]
  size_t n; // [rsp+8h] [rbp-80h]
  size_t na; // [rsp+8h] [rbp-80h]
  __int64 v35; // [rsp+10h] [rbp-78h] BYREF
  __int128 v36; // [rsp+18h] [rbp-70h]
  __int64 v37; // [rsp+30h] [rbp-58h] BYREF
  __int128 v38; // [rsp+38h] [rbp-50h]
  unsigned __int64 v39; // [rsp+48h] [rbp-40h]

  v3 = a1;
  v39 = __readfsqword(0x28u);
  v5 = sub_426230(a1, (const char *)a2);
  v6 = sub_417080((__int64)v5);
  v7 = *(_QWORD *)(v6 + 8);
  if ( !v7 )
    return 0;
  v8 = (_QWORD *)v6;
  v9 = *(unsigned __int8 (**)(void))(*(_QWORD *)v7 + 480LL);
  if ( (char *)v9 != (char *)sub_178B60 )
  {
    if ( v9() )
      return 0;
  }
  v10 = *(_QWORD *)(a2 + 8);
  v35 = 0;
  v36 = 0;
  if ( !v10 )
  {
    v32 = nullptr;
    v11 = 0;
    v12 = 1;
LABEL_5:
    n = v10;
    v35 = qvector_reserve(&v35, v11, v12, 24);
    v11 = v35;
    v10 = n;
    v13 = v36;
    goto LABEL_6;
  }
  na = v10;
  v32 = (void *)qalloc_or_throw(v10);
  memcpy(v32, *(const void **)a2, na);
  v13 = v36;
  v11 = v35;
  v10 = na;
  v12 = v36 + 1;
  if ( *((_QWORD *)&v36 + 1) < (unsigned __int64)(v36 + 1) )
    goto LABEL_5;
LABEL_6:
  v14 = v11 + 24 * v13;
  *(_QWORD *)v14 = v32;
  *(__m128i *)(v14 + 8) = _mm_unpacklo_epi64((__m128i)v10, (__m128i)v10);
  *(_QWORD *)&v36 = v36 + 1;
  v15 = *(__int64 (__fastcall **)(_QWORD *, __int64, __int64, __int64, __int64))(*v8 + 240LL);
  if ( v15 != vault_with_events_t__::vfunc_30 )
  {
    v19 = v3;
    LODWORD(v3) = v15(v8, (__int64)v3, (__int64)&v35, a3, 3);
    goto LABEL_16;
  }
  v16 = v8[1];
  if ( v16 )
  {
    v17 = *(__int64 (**)())(*(_QWORD *)v16 + 480LL);
    if ( v17 == sub_178B60 || !(unsigned __int8)v17() )
    {
      v38 = 0;
      v18 = v8[1];
      v37 = 0;
      v3 = (const char *)(*(unsigned int (__fastcall **)(__int64, __int64 *, const char *, __int64 *, _QWORD, __int64))(*(_QWORD *)v18 + 208LL))(
                           v18,
                           &v37,
                           v3,
                           &v35,
                           a3,
                           3);
      v19 = v3;
      (*(void (__fastcall **)(_QWORD *, const char *, __int64 *))(*v8 + 24LL))(v8, v3, &v37);
      v20 = v37;
      if ( v37 )
      {
        v21 = v38;
        if ( (_QWORD)v38 )
        {
          v22 = 0;
          do
          {
            v23 = v20 + 32 * v22;
            v24 = *(_QWORD *)(v23 + 8);
            if ( v24 )
            {
              *(_QWORD *)(v23 + 16) = 0;
              qfree(v24, v3);
              v20 = v37;
            }
            ++v22;
          }
          while ( v21 != v22 );
        }
        *(_QWORD *)&v38 = 0;
        qfree(v20, v3);
      }
LABEL_16:
      v25 = 1;
      if ( !(_DWORD)v3 )
        goto LABEL_17;
      goto LABEL_31;
    }
  }
  LODWORD(v3) = 52;
LABEL_31:
  v19 = "Diff revision...";
  sub_416980((unsigned int)v3, (__int64)"Diff revision...");
  v25 = 0;
LABEL_17:
  v26 = v35;
  if ( v35 )
  {
    v27 = v36;
    if ( (_QWORD)v36 )
    {
      v28 = 0;
      do
      {
        v29 = (__int64 *)(v26 + 24 * v28);
        v30 = *v29;
        if ( *v29 )
        {
          v29[1] = 0;
          qfree(v30, v19);
          v26 = v35;
        }
        ++v28;
      }
      while ( v27 != v28 );
    }
    *(_QWORD *)&v36 = 0;
    qfree(v26, v19);
  }
  return v25;
}
