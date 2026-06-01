__int64 __fastcall perform_external_merge(
        __int64 a1,
        const char *a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  _QWORD *v11; // rbp
  __int64 v12; // rax
  __int64 v13; // r12
  const char *v14; // rsi
  __int64 (__fastcall *v15)(__int64); // rax
  __int64 *v16; // rdi
  __int64 v17; // rax
  __int64 (*v18)(); // rdx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  unsigned int v23; // r12d
  __m128 v24; // xmm4
  __m128 v25; // xmm5
  const char *v26; // rsi
  char v28; // [rsp+0h] [rbp-28h]

  v11 = sub_426230(a1, a2);
  v12 = sub_417080((__int64)v11);
  if ( *(_DWORD *)(a1 + 24) )
  {
    v23 = 47;
    sub_416980(0x2Fu, (__int64)"Failed to merge");
    goto LABEL_11;
  }
  v13 = v12;
  v14 = &s1;
  v15 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 368LL);
  if ( *(_QWORD *)(a1 + 40) )
  {
    v14 = *(const char **)(a1 + 32);
    if ( v15 == vault_with_events_t__::vfunc_46 )
    {
LABEL_4:
      v16 = *(__int64 **)(v13 + 8);
      if ( v16 )
      {
        v17 = *v16;
        v18 = *(__int64 (**)())(*v16 + 480);
        if ( v18 == sub_178B60 )
        {
LABEL_6:
          v23 = (*(__int64 (__fastcall **)(__int64 *, const char *))(v17 + 336))(v16, v14);
          goto LABEL_7;
        }
        if ( !(unsigned __int8)v18() )
        {
          v16 = *(__int64 **)(v13 + 8);
          v17 = *v16;
          goto LABEL_6;
        }
      }
      v23 = 52;
      goto LABEL_16;
    }
  }
  else if ( v15 == vault_with_events_t__::vfunc_46 )
  {
    goto LABEL_4;
  }
  v23 = ((__int64 (__fastcall *)(__int64, const char *))v15)(v13, v14);
LABEL_7:
  if ( v23 )
  {
LABEL_16:
    sub_416980(v23, (__int64)"Failed to resolve");
    goto LABEL_11;
  }
  v26 = &s1;
  if ( *(_QWORD *)(a1 + 40) )
    v26 = *(const char **)(a1 + 32);
  sub_169700(
    (int)"Successfully resolved %s\n",
    (__int64)v26,
    v19,
    v20,
    v21,
    v22,
    a3,
    a4,
    a5,
    a6,
    v24,
    v25,
    a9,
    a10,
    v28);
LABEL_11:
  sub_418570((__int64)v11, v23, a1 + 32);
  return 0;
}
