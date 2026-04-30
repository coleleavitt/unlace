unsigned __int64 __fastcall sub_455D80(
        __int64 a1,
        __int64 a2,
        double a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        __m128 a10)
{
  __int64 v10; // r13
  unsigned __int64 v11; // r12
  const char *v12; // r12
  __int64 (__fastcall *v13)(int, unsigned __int8 (__fastcall ***)(__int64, __int64, char **)); // rsi
  char *v14; // rdi
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // r8
  _QWORD *v18; // rax
  _QWORD *v19; // rcx
  __int64 (__fastcall *v20)(__int64, __int64, unsigned __int8); // rax
  __int64 *v21; // rdi
  __int64 v22; // rax
  unsigned __int8 (*v23)(void); // rdx
  unsigned int v24; // eax
  size_t v26; // r9
  __int64 (__fastcall *v27)(int, unsigned __int8 (__fastcall ***)(__int64, __int64, char **)); // r11
  const void *v28; // r15
  __int64 v29; // rax
  __int64 v30; // [rsp-10h] [rbp-C0h]
  __int64 (__fastcall *v31)(int, unsigned __int8 (__fastcall ***)(__int64, __int64, char **)); // [rsp+8h] [rbp-A8h]
  size_t v32; // [rsp+10h] [rbp-A0h]
  __int64 v33; // [rsp+18h] [rbp-98h]
  _QWORD *v34; // [rsp+18h] [rbp-98h]
  __int64 v35; // [rsp+18h] [rbp-98h]
  void **v36; // [rsp+20h] [rbp-90h]
  __int16 v37; // [rsp+4Eh] [rbp-62h] BYREF
  __int64 v38; // [rsp+50h] [rbp-60h] BYREF
  void *src; // [rsp+58h] [rbp-58h] BYREF
  __int128 v40; // [rsp+60h] [rbp-50h]
  int v41; // [rsp+70h] [rbp-40h]
  unsigned __int64 v42; // [rsp+78h] [rbp-38h]

  v42 = __readfsqword(0x28u);
  v38 = 40;
  src = nullptr;
  v41 = 0;
  v40 = 0;
  v10 = *(_QWORD *)(a1 + 336) + 136 * a2;
  v36 = (void **)(v10 + 72);
  if ( (void **)(v10 + 72) != &src )
  {
    v11 = *(_QWORD *)(v10 + 80);
    if ( v11 > 1 )
    {
      v28 = *(const void **)(v10 + 72);
      src = (void *)qvector_reserve(&src, 0, *(_QWORD *)(v10 + 80), 1);
      *(_QWORD *)&v40 = v11;
      memmove(src, v28, v11 - 1);
      *((char *)src + v11 - 1) = 0;
    }
  }
  v12 = &s1;
  if ( *(_QWORD *)(v10 + 8) )
    v12 = *(const char **)v10;
  while ( 1 )
  {
    v13 = sub_4541A0;
    v14 = "Edit user\n"
          "\n"
          "%/Login: %A\n"
          "<~R~eal name :q2:1000:24::>\n"
          "<~E~mail     :q3:1000:24::>\n"
          "<~A~dministrator:C4>>\n"
          "<No~t~es     :t7:1000:24::>\n"
          "\n";
    v37 = *(unsigned __int8 *)(v10 + 128);
    v15 = sub_1697D0(
            (int)"Edit user\n"
                 "\n"
                 "%/Login: %A\n"
                 "<~R~eal name :q2:1000:24::>\n"
                 "<~E~mail     :q3:1000:24::>\n"
                 "<~A~dministrator:C4>>\n"
                 "<No~t~es     :t7:1000:24::>\n"
                 "\n",
            (__int64)sub_4541A0,
            (__int64)v12,
            v10 + 24,
            v10 + 48,
            (__int64)&v37,
            (__m128)0LL,
            a4,
            a5,
            a6,
            a7,
            a8,
            a9,
            a10,
            (char)&v38);
    v16 = v30;
    if ( v15 <= 0 )
      break;
    *(_BYTE *)(v10 + 128) = v37 != 0;
    if ( v36 != &src )
    {
      v17 = v40;
      if ( !(_QWORD)v40 || (v26 = v40 - 1, (_QWORD)v40 == 1) )
      {
        *(_QWORD *)(v10 + 80) = 0;
      }
      else
      {
        v27 = (__int64 (__fastcall *)(int, unsigned __int8 (__fastcall ***)(__int64, __int64, char **)))src;
        v14 = *(char **)(v10 + 72);
        if ( *(_QWORD *)(v10 + 88) < (unsigned __int64)v40 )
        {
          v31 = (__int64 (__fastcall *)(int, unsigned __int8 (__fastcall ***)(__int64, __int64, char **)))src;
          v32 = v40 - 1;
          v35 = v40;
          v29 = qvector_reserve(v36, *(_QWORD *)(v10 + 72), v40, 1);
          *(_QWORD *)(v10 + 72) = v29;
          v27 = v31;
          v14 = (char *)v29;
          v26 = v32;
          v17 = v35;
        }
        *(_QWORD *)(v10 + 80) = v17;
        v13 = v27;
        v33 = v17;
        memmove(v14, v27, v26);
        *(_BYTE *)(*(_QWORD *)(v10 + 72) + v33 - 1) = 0;
      }
    }
    v18 = sub_426230(v14, (const char *)v13);
    v19 = (_QWORD *)sub_417080((__int64)v18);
    v20 = *(__int64 (__fastcall **)(__int64, __int64, unsigned __int8))(*v19 + 48LL);
    if ( v20 == vault_with_events_t__::vfunc_6 )
    {
      v21 = (__int64 *)v19[1];
      if ( !v21 )
        goto LABEL_23;
      v22 = *v21;
      v23 = *(unsigned __int8 (**)(void))(*v21 + 480);
      if ( (char *)v23 != (char *)sub_178B60 )
      {
        v34 = v19;
        if ( v23() )
        {
LABEL_23:
          v24 = 52;
          goto LABEL_24;
        }
        v21 = (__int64 *)v34[1];
        v22 = *v21;
      }
      v13 = (__int64 (__fastcall *)(int, unsigned __int8 (__fastcall ***)(__int64, __int64, char **)))v10;
      v24 = (*(__int64 (__fastcall **)(__int64 *, __int64, _QWORD))(v22 + 16))(v21, v10, 0);
    }
    else
    {
      v13 = (__int64 (__fastcall *)(int, unsigned __int8 (__fastcall ***)(__int64, __int64, char **)))v10;
      v24 = v20((__int64)v19, v10, 0);
    }
    if ( !v24 )
      break;
LABEL_24:
    sub_4168C0(v24, (__int64)"Failed to edit user");
  }
  if ( src )
  {
    *(_QWORD *)&v40 = 0;
    qfree(src, (const char *)v13, v16);
  }
  return v42 - __readfsqword(0x28u);
}
