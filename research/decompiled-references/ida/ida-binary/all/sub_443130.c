__int64 __fastcall sub_443130(
        double a1,
        __m128 a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14)
{
  const char *v14; // rsi
  _QWORD *v15; // rax
  _QWORD *v16; // rbx
  const char *v17; // rdx
  __int64 (__fastcall *v18)(__int64); // rax
  __int64 *v19; // rdi
  __int64 v20; // rax
  __int64 (*v21)(); // rcx
  unsigned int v22; // eax
  unsigned int v23; // ebx
  char v25; // al
  char v26; // [rsp+0h] [rbp-48h]
  const char *v27; // [rsp+8h] [rbp-40h]
  unsigned int v28; // [rsp+1Ch] [rbp-2Ch] BYREF
  const char *v29; // [rsp+20h] [rbp-28h] BYREF
  __int128 v30; // [rsp+28h] [rbp-20h]
  unsigned __int64 v31; // [rsp+38h] [rbp-10h]

  v14 = nullptr;
  v31 = __readfsqword(0x28u);
  v30 = 0;
  v29 = nullptr;
  if ( !(unsigned __int8)sub_196F50(
                           (int)&v29,
                           0,
                           (int)"Enter a new worklist description",
                           a12,
                           a13,
                           a14,
                           (__m128)0LL,
                           a2,
                           a3,
                           a4,
                           a5,
                           a6,
                           a7,
                           a8,
                           v26) )
    goto LABEL_17;
  v15 = sub_426230(&v29, nullptr);
  v16 = (_QWORD *)sub_417080((__int64)v15);
  v17 = &s1;
  v18 = *(__int64 (__fastcall **)(__int64))(*v16 + 256LL);
  if ( !(_QWORD)v30 )
  {
    if ( v18 == vault_with_events_t__::vfunc_32 )
      goto LABEL_4;
LABEL_13:
    v14 = (const char *)&v28;
    v22 = ((__int64 (__fastcall *)(_QWORD *, unsigned int *, const char *))v18)(v16, &v28, v17);
LABEL_7:
    if ( !v22 )
    {
      v23 = v28;
      goto LABEL_9;
    }
    goto LABEL_16;
  }
  v17 = v29;
  if ( v18 != vault_with_events_t__::vfunc_32 )
    goto LABEL_13;
LABEL_4:
  v19 = (__int64 *)v16[1];
  if ( v19 )
  {
    v20 = *v19;
    v21 = *(__int64 (**)())(*v19 + 480);
    if ( v21 == sub_178B60 )
    {
LABEL_6:
      v14 = (const char *)&v28;
      v22 = (*(__int64 (__fastcall **)(__int64 *, unsigned int *, const char *))(v20 + 224))(v19, &v28, v17);
      goto LABEL_7;
    }
    v27 = v17;
    v25 = v21();
    v17 = v27;
    if ( !v25 )
    {
      v19 = (__int64 *)v16[1];
      v20 = *v19;
      goto LABEL_6;
    }
  }
  v22 = 52;
LABEL_16:
  v14 = "Failed to add worklist";
  sub_4168C0(v22, (__int64)"Failed to add worklist");
LABEL_17:
  v23 = -1;
LABEL_9:
  if ( v29 )
  {
    *(_QWORD *)&v30 = 0;
    qfree(v29, v14);
  }
  return v23;
}
