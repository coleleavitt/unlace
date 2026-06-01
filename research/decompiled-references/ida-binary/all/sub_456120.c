__int64 __fastcall sub_456120(
        __int64 a1,
        const char *a2,
        double a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  const char *v10; // rbp
  __int64 v11; // rax
  _QWORD *v12; // rax
  _QWORD *v13; // rbx
  __int64 v14; // r9
  __m128 v15; // xmm4
  __m128 v16; // xmm5
  double v17; // xmm0_8
  const char *v18; // rsi
  __int64 (__fastcall *v19)(__int64); // rax
  __int64 *v20; // rdi
  __int64 v21; // rax
  unsigned __int8 (*v22)(void); // rdx
  unsigned int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __m128 v28; // xmm4
  __m128 v29; // xmm5
  const char **v31; // [rsp+0h] [rbp-88h]
  const char *v32; // [rsp+10h] [rbp-78h] BYREF
  __int128 v33; // [rsp+18h] [rbp-70h]
  __int64 v34; // [rsp+30h] [rbp-58h] BYREF
  __int128 v35; // [rsp+38h] [rbp-50h]
  unsigned __int64 v36; // [rsp+48h] [rbp-40h]

  v10 = &s1;
  v36 = __readfsqword(0x28u);
  v11 = *(_QWORD *)(a1 + 336) + 136LL * (_QWORD)a2;
  if ( *(_QWORD *)(v11 + 8) )
    v10 = *(const char **)v11;
  v12 = sub_426230(a1, a2);
  v13 = (_QWORD *)sub_417080((__int64)v12);
  v31 = &v32;
  while ( 1 )
  {
    v17 = 0.0;
    v32 = nullptr;
    v34 = 0;
    v33 = 0;
    v35 = 0;
    if ( (int)sub_1697D0(
                (int)"Set password\n"
                     "\n"
                     "%/Login: %A\n"
                     "<~P~assword        :p5:1000:24::>\n"
                     "<~C~onfirm password:p6:1000:24::>\n"
                     "\n",
                (__int64)sub_4541A0,
                (__int64)v10,
                (__int64)v31,
                (__int64)&v34,
                v14,
                (__m128)0LL,
                a4,
                a5,
                a6,
                v15,
                v16,
                a9,
                a10,
                (char)v31) <= 0 )
      break;
    v18 = &s1;
    v19 = *(__int64 (__fastcall **)(__int64))(*v13 + 120LL);
    if ( (_QWORD)v33 )
      v18 = v32;
    if ( v19 == vault_with_events_t__::vfunc_15 )
    {
      v20 = (__int64 *)v13[1];
      if ( !v20 )
        goto LABEL_18;
      v21 = *v20;
      v22 = *(unsigned __int8 (**)(void))(*v20 + 480);
      if ( (char *)v22 != (char *)sub_178B60 )
      {
        if ( v22() )
        {
LABEL_18:
          v23 = 52;
          goto LABEL_19;
        }
        v20 = (__int64 *)v13[1];
        v21 = *v20;
      }
      v23 = (*(__int64 (__fastcall **)(__int64 *, const char *, const char *))(v21 + 88))(v20, v18, v10);
    }
    else
    {
      v23 = ((__int64 (__fastcall *)(_QWORD *, const char *, const char *))v19)(v13, v18, v10);
    }
    if ( !v23 )
    {
      sub_16B9E0(
        (int)"The new password for '%s' has been set",
        (__int64)v10,
        v24,
        v25,
        v26,
        v27,
        (__m128)0LL,
        a4,
        a5,
        a6,
        v28,
        v29,
        a9,
        a10,
        (char)v31);
      if ( v34 )
      {
        *(_QWORD *)&v35 = 0;
        v17 = qfree(v34, v10);
      }
      if ( v32 )
      {
        *(_QWORD *)&v33 = 0;
        qfree(v32, v10, v17);
      }
      return 1;
    }
LABEL_19:
    sub_4168C0(v23, (__int64)"Failed to set password");
    if ( v34 )
    {
      *(_QWORD *)&v35 = 0;
      qfree(v34, "Failed to set password");
    }
    if ( v32 )
    {
      *(_QWORD *)&v33 = 0;
      qfree(v32, "Failed to set password");
    }
  }
  if ( v34 )
  {
    *(_QWORD *)&v35 = 0;
    qfree(v34, (const char *)sub_4541A0);
  }
  if ( v32 )
  {
    *(_QWORD *)&v33 = 0;
    qfree(v32, (const char *)sub_4541A0);
  }
  return 0;
}
