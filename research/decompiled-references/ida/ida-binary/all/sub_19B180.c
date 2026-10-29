unsigned __int64 __fastcall sub_19B180(
        __int64 a1,
        unsigned int a2,
        double a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  __int64 v13; // rdi
  const char *v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r12
  const QT::QObject *v19; // rsi
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rax
  __int64 v24; // r9
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __m128 v29; // xmm4
  __m128 v30; // xmm5
  __int64 v31; // [rsp+0h] [rbp-88h] BYREF
  __int128 v32; // [rsp+8h] [rbp-80h]
  __int64 v33; // [rsp+18h] [rbp-70h]
  _BYTE s1[36]; // [rsp+20h] [rbp-68h] BYREF
  __int128 v35; // [rsp+44h] [rbp-44h]
  int v36; // [rsp+54h] [rbp-34h]
  __int64 v37; // [rsp+58h] [rbp-30h]
  unsigned __int64 v38; // [rsp+68h] [rbp-20h]

  v38 = __readfsqword(0x28u);
  if ( a2 > 0x23 )
    return v38 - __readfsqword(0x28u);
  if ( ((1LL << a2) & 0xA000D) != 0 )
    goto LABEL_12;
  if ( a2 != 35 )
  {
    if ( a2 != 13 )
      goto LABEL_6;
    goto LABEL_5;
  }
  v13 = *(_QWORD *)(a1 + 8);
  v14 = s1;
  memset(s1, 0, 24);
  (*(void (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v13 + 536LL))(v13, s1);
  v18 = *(_QWORD *)s1;
  if ( *(_QWORD *)&s1[8] )
  {
    v14 = "Module:";
    if ( !strncmp(*(const char **)s1, "Module:", 7u) )
    {
      if ( v18 )
      {
        *(_QWORD *)&s1[8] = 0;
        qfree(v18, "Module:", v15, v16, v17);
      }
LABEL_12:
      sub_5392C0(a1, "bpts:Add", 8);
      sub_5392A0(a1, "bpts:Del", 0, 1);
LABEL_5:
      sub_5392A0(a1, "bpts:Enable", 0, 1);
      sub_5392A0(a1, "bpts:Disable", 0, 1);
      if ( a2 == 13 )
      {
LABEL_13:
        v19 = *(const QT::QObject **)(a1 + 8);
        v31 = 0;
        v32 = 0;
        sub_19B050(&v31, v19, a2);
        if ( a2 == 13 )
        {
          if ( (_QWORD)v32 )
          {
            v36 = 0;
            memset(&s1[4], 0, 32);
            *(_QWORD *)&s1[16] = "Export breakpoints as IDC...";
            *(_DWORD *)s1 = 64;
            v37 = 0x1FFFFFFFFLL;
            v35 = 0;
            v23 = qalloc_or_throw(40);
            *(_QWORD *)v23 = expidc_ah_t___vtable;
            *(_DWORD *)(v23 + 8) = 1;
            *(_QWORD *)(v23 + 16) = 0;
            *(_OWORD *)(v23 + 24) = 0;
            *(_QWORD *)&s1[24] = v23;
            if ( !(unsigned __int8)((__int64 (__fastcall *)(__int64, _BYTE *, _QWORD, _QWORD, _QWORD, __int64, __int64, _QWORD, _QWORD, __int64))sub_539470)(
                                     a1,
                                     s1,
                                     0,
                                     0,
                                     0,
                                     v24,
                                     v31,
                                     v32,
                                     *((_QWORD *)&v32 + 1),
                                     v33) )
              sub_169700(
                (int)"Failed to attach action \"%s\"\n",
                (__int64)"Export breakpoints as IDC...",
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
                v31);
          }
          v19 = nullptr;
          sub_5392E0(a1, 0, 1);
        }
        if ( v31 )
        {
          *(_QWORD *)&v32 = 0;
          qfree(v31, v19, v20, v21, v22);
        }
        return v38 - __readfsqword(0x28u);
      }
LABEL_6:
      if ( a2 != 27 )
        return v38 - __readfsqword(0x28u);
      goto LABEL_13;
    }
  }
  if ( v18 )
  {
    *(_QWORD *)&s1[8] = 0;
    qfree(v18, v14, v15, v16, v17);
  }
  return v38 - __readfsqword(0x28u);
}
