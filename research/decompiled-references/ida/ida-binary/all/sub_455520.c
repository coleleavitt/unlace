__int64 __fastcall sub_455520(
        __int64 a1,
        double a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        __m128 a9)
{
  unsigned __int64 v9; // rbx
  __int16 v11; // ax
  const char *v12; // rsi
  char *v13; // rdi
  unsigned __int64 v14; // r12
  size_t v15; // r9
  _QWORD *v16; // rax
  _QWORD *v17; // r12
  __int64 (__fastcall *v18)(__int64, __int64, unsigned __int8); // rax
  __int64 *v19; // rdi
  __int64 v20; // rax
  unsigned __int8 (*v21)(void); // rdx
  unsigned int v22; // eax
  const char *v23; // rdx
  __int64 (__fastcall *v24)(__int64); // rax
  __int64 *v25; // rdi
  __int64 v26; // rax
  __int64 (*v27)(); // r8
  unsigned int v28; // eax
  unsigned int v29; // ebx
  char v31; // al
  const char *v32; // r11
  const void *v33; // r12
  __int64 v34; // rax
  const char *v35; // [rsp+0h] [rbp-E0h]
  __int64 v36; // [rsp+10h] [rbp-D0h]
  __int64 v37; // [rsp+18h] [rbp-C8h]
  const char *v38; // [rsp+20h] [rbp-C0h]
  __int16 v39; // [rsp+3Eh] [rbp-A2h]
  const char *v40; // [rsp+40h] [rbp-A0h] BYREF
  __int128 v41; // [rsp+48h] [rbp-98h]
  __int64 v42; // [rsp+60h] [rbp-80h] BYREF
  __int128 v43; // [rsp+68h] [rbp-78h]
  __int64 v44; // [rsp+80h] [rbp-60h]
  void *src; // [rsp+88h] [rbp-58h] BYREF
  __int128 v46; // [rsp+90h] [rbp-50h]
  int v47; // [rsp+A0h] [rbp-40h]
  unsigned __int64 v48; // [rsp+A8h] [rbp-38h]

  v9 = *(_QWORD *)(a1 + 80);
  v48 = __readfsqword(0x28u);
  v44 = 40;
  src = nullptr;
  v47 = 0;
  v46 = 0;
  if ( v9 > 1 )
  {
    v33 = *(const void **)(a1 + 72);
    src = (void *)qvector_reserve(&src, 0, v9, 1);
    *(_QWORD *)&v46 = v9;
    memmove(src, v33, v9 - 1);
    *((char *)src + v9 - 1) = 0;
  }
  v36 = a1 + 48;
  v37 = a1 + 24;
  while ( 1 )
  {
    v11 = *(unsigned __int8 *)(a1 + 128);
    v40 = nullptr;
    v43 = 0;
    v12 = (const char *)sub_4541A0;
    v13 = "Add user\n"
          "\n"
          "%/<Logi~n~           :q1:1000:24::>\n"
          "<~R~eal name       :q2:1000:24::>\n"
          "<~E~mail           :q3:1000:24::>\n"
          "<~P~assword        :p5:1000:24::>\n"
          "<~C~onfirm password:p6:1000:24::>\n"
          "<~A~dministrator:C4>>\n"
          "<No~t~es           :t7:1000:24::>\n"
          "\n";
    v39 = v11;
    v42 = 0;
    v41 = 0;
    if ( (int)sub_1697D0(
                (int)"Add user\n"
                     "\n"
                     "%/<Logi~n~           :q1:1000:24::>\n"
                     "<~R~eal name       :q2:1000:24::>\n"
                     "<~E~mail           :q3:1000:24::>\n"
                     "<~P~assword        :p5:1000:24::>\n"
                     "<~C~onfirm password:p6:1000:24::>\n"
                     "<~A~dministrator:C4>>\n"
                     "<No~t~es           :t7:1000:24::>\n"
                     "\n",
                (__int64)sub_4541A0,
                a1,
                v37,
                v36,
                (__int64)&v40,
                (__m128)0LL,
                a3,
                a4,
                a5,
                a6,
                a7,
                a8,
                a9,
                (char)&v42) <= 0 )
      break;
    v14 = v46;
    *(_BYTE *)(a1 + 128) = v39 != 0;
    if ( v14 && (v15 = v14 - 1, v14 != 1) )
    {
      v32 = (const char *)src;
      v13 = *(char **)(a1 + 72);
      if ( *(_QWORD *)(a1 + 88) < v14 )
      {
        v35 = (const char *)src;
        v34 = qvector_reserve(a1 + 72, *(_QWORD *)(a1 + 72), v14, 1);
        *(_QWORD *)(a1 + 72) = v34;
        v32 = v35;
        v13 = (char *)v34;
        v15 = v14 - 1;
      }
      *(_QWORD *)(a1 + 80) = v14;
      v12 = v32;
      memmove(v13, v32, v15);
      *(_BYTE *)(*(_QWORD *)(a1 + 72) + v14 - 1) = 0;
    }
    else
    {
      *(_QWORD *)(a1 + 80) = 0;
    }
    v16 = sub_426230(v13, v12);
    v17 = (_QWORD *)sub_417080((__int64)v16);
    v18 = *(__int64 (__fastcall **)(__int64, __int64, unsigned __int8))(*v17 + 48LL);
    if ( v18 == vault_with_events_t__::vfunc_6 )
    {
      v19 = (__int64 *)v17[1];
      if ( !v19 )
        goto LABEL_32;
      v20 = *v19;
      v21 = *(unsigned __int8 (**)(void))(*v19 + 480);
      if ( (char *)v21 != (char *)sub_178B60 )
      {
        if ( v21() )
        {
LABEL_32:
          v22 = 52;
          goto LABEL_33;
        }
        v19 = (__int64 *)v17[1];
        v20 = *v19;
      }
      v22 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64))(v20 + 16))(v19, a1, 1);
    }
    else
    {
      v22 = v18((__int64)v17, a1, 1u);
    }
    if ( !v22 )
    {
      v23 = &s1;
      v24 = *(__int64 (__fastcall **)(__int64))(*v17 + 120LL);
      if ( *(_QWORD *)(a1 + 8) )
        v23 = *(const char **)a1;
      v12 = &s1;
      if ( !(_QWORD)v41 )
      {
        if ( v24 == vault_with_events_t__::vfunc_15 )
          goto LABEL_17;
LABEL_29:
        v28 = ((__int64 (__fastcall *)(_QWORD *, const char *, const char *))v24)(v17, v12, v23);
        if ( v28 )
        {
LABEL_30:
          v12 = "Failed to set password";
          sub_4168C0(v28, (__int64)"Failed to set password");
        }
LABEL_20:
        if ( v42 )
        {
          *(_QWORD *)&v43 = 0;
          qfree(v42, v12);
        }
        if ( v40 )
        {
          *(_QWORD *)&v41 = 0;
          qfree(v40, v12);
        }
        v29 = 1;
        goto LABEL_25;
      }
      v12 = v40;
      if ( v24 != vault_with_events_t__::vfunc_15 )
        goto LABEL_29;
LABEL_17:
      v25 = (__int64 *)v17[1];
      if ( !v25 )
        goto LABEL_38;
      v26 = *v25;
      v27 = *(__int64 (**)())(*v25 + 480);
      if ( v27 == sub_178B60 )
        goto LABEL_19;
      v38 = v23;
      v31 = v27();
      v23 = v38;
      if ( v31 )
      {
LABEL_38:
        v12 = "Failed to set password";
        sub_4168C0(0x34u, (__int64)"Failed to set password", v23);
        goto LABEL_20;
      }
      v25 = (__int64 *)v17[1];
      v26 = *v25;
LABEL_19:
      v28 = (*(__int64 (__fastcall **)(__int64 *, const char *, const char *))(v26 + 88))(v25, v12, v23);
      if ( v28 )
        goto LABEL_30;
      goto LABEL_20;
    }
LABEL_33:
    sub_4168C0(v22, (__int64)"Failed to add user");
    if ( v42 )
    {
      *(_QWORD *)&v43 = 0;
      qfree(v42, "Failed to add user");
    }
    if ( v40 )
    {
      *(_QWORD *)&v41 = 0;
      qfree(v40, "Failed to add user");
    }
  }
  if ( v42 )
  {
    *(_QWORD *)&v43 = 0;
    qfree(v42, (const char *)sub_4541A0);
  }
  if ( v40 )
  {
    *(_QWORD *)&v41 = 0;
    qfree(v40, (const char *)sub_4541A0);
  }
  v29 = 0;
LABEL_25:
  if ( src )
  {
    *(_QWORD *)&v46 = 0;
    qfree(src, v12);
  }
  return v29;
}
