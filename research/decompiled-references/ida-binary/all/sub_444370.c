unsigned __int64 __fastcall sub_444370(__int64 a1, const char *a2)
{
  _QWORD *v3; // rax
  __int64 v4; // rax
  __int64 v5; // rdi
  _QWORD *v6; // rbp
  unsigned __int8 (*v7)(void); // rax
  __int64 v8; // rax
  char *v9; // rdx
  __int64 (__fastcall *v10)(__int64); // rax
  __int64 *v11; // rdi
  __int64 v12; // rax
  __int64 (*v13)(); // rcx
  const char *v14; // rsi
  unsigned int v15; // eax
  __int64 v16; // rdi
  __m128i v17; // xmm0
  __int64 v18; // rax
  __m128i v19; // xmm1
  __int64 v20; // r13
  __int64 v21; // r12
  __int64 v22; // rbp
  __int64 *v23; // rbx
  __int64 v24; // rdi
  __int64 v25; // rdi
  __int64 v26; // rdi
  char v28; // al
  __int64 v29; // r13
  __int64 v30; // r12
  __int64 v31; // rbp
  __int64 *v32; // rbx
  __int64 v33; // rdi
  __int64 v34; // rdi
  __int64 v35; // rdi
  char *v36; // [rsp+8h] [rbp-50h]
  __int64 v37; // [rsp+10h] [rbp-48h] BYREF
  __m128i v38; // [rsp+18h] [rbp-40h] BYREF
  unsigned __int64 v39; // [rsp+28h] [rbp-30h]

  v39 = __readfsqword(0x28u);
  v3 = sub_426230(a1, a2);
  v4 = sub_417080((__int64)v3);
  v5 = *(_QWORD *)(v4 + 8);
  if ( !v5 )
    return v39 - __readfsqword(0x28u);
  v6 = (_QWORD *)v4;
  v7 = *(unsigned __int8 (**)(void))(*(_QWORD *)v5 + 480LL);
  if ( (char *)v7 != (char *)sub_178B60 )
  {
    if ( v7() )
      return v39 - __readfsqword(0x28u);
  }
  v8 = *(_QWORD *)(a1 + 312);
  v37 = 0;
  v9 = "*";
  v38 = 0;
  if ( !*(_BYTE *)(v8 + 2532) )
    v9 = nullptr;
  v10 = *(__int64 (__fastcall **)(__int64))(*v6 + 296LL);
  if ( v10 == vault_with_events_t__::vfunc_37 )
  {
    v11 = (__int64 *)v6[1];
    if ( v11 )
    {
      v12 = *v11;
      v13 = *(__int64 (**)())(*v11 + 480);
      if ( v13 == sub_178B60 )
      {
LABEL_8:
        v14 = (const char *)&v37;
        v15 = (*(__int64 (__fastcall **)(__int64 *, __int64 *, char *, char *, __int64))(v12 + 264))(
                v11,
                &v37,
                v9,
                v9,
                0xFFFFFFFFLL);
        goto LABEL_9;
      }
      v36 = v9;
      v28 = v13();
      v9 = v36;
      if ( !v28 )
      {
        v11 = (__int64 *)v6[1];
        v12 = *v11;
        goto LABEL_8;
      }
    }
    v15 = 52;
    goto LABEL_24;
  }
  v14 = (const char *)&v37;
  v15 = ((__int64 (__fastcall *)(_QWORD *, __int64 *, char *, char *, __int64))v10)(v6, &v37, v9, v9, 0xFFFFFFFFLL);
LABEL_9:
  if ( v15 )
  {
LABEL_24:
    v14 = "Failed to retrieve worklists";
    sub_416980(v15, (__int64)"Failed to retrieve worklists");
    v16 = v37;
    if ( !v37 )
      return v39 - __readfsqword(0x28u);
    v29 = v38.m128i_i64[0];
    if ( v38.m128i_i64[0] )
    {
      v30 = 0;
      v31 = 0;
      do
      {
        v32 = (__int64 *)(v16 + v30);
        v33 = *(_QWORD *)(v16 + v30 + 48);
        if ( v33 )
        {
          v32[7] = 0;
          qfree(v33, "Failed to retrieve worklists");
        }
        v34 = v32[3];
        if ( v34 )
        {
          v32[4] = 0;
          qfree(v34, "Failed to retrieve worklists");
        }
        v35 = *v32;
        if ( *v32 )
        {
          v32[1] = 0;
          qfree(v35, "Failed to retrieve worklists");
        }
        ++v31;
        v16 = v37;
        v30 += 88;
      }
      while ( v29 != v31 );
    }
    goto LABEL_20;
  }
  v17 = _mm_loadu_si128((const __m128i *)(a1 + 408));
  v18 = v37;
  v19 = _mm_loadu_si128(&v38);
  v37 = *(_QWORD *)(a1 + 400);
  v16 = v37;
  *(_QWORD *)(a1 + 400) = v18;
  *(__m128i *)(a1 + 408) = v19;
  v38 = v17;
  if ( v16 )
  {
    v20 = v17.m128i_i64[0];
    if ( v17.m128i_i64[0] )
    {
      v21 = 0;
      v22 = 0;
      do
      {
        v23 = (__int64 *)(v16 + v21);
        v24 = *(_QWORD *)(v16 + v21 + 48);
        if ( v24 )
        {
          v23[7] = 0;
          *(double *)v17.m128i_i64 = qfree(v24, (const char *)&v37);
        }
        v25 = v23[3];
        if ( v25 )
        {
          v23[4] = 0;
          *(double *)v17.m128i_i64 = qfree(v25, (const char *)&v37, *(double *)v17.m128i_i64);
        }
        v26 = *v23;
        if ( *v23 )
        {
          v23[1] = 0;
          *(double *)v17.m128i_i64 = qfree(v26, (const char *)&v37, *(double *)v17.m128i_i64);
        }
        ++v22;
        v16 = v37;
        v21 += 88;
      }
      while ( v20 != v22 );
    }
LABEL_20:
    v38.m128i_i64[0] = 0;
    qfree(v16, v14);
  }
  return v39 - __readfsqword(0x28u);
}
