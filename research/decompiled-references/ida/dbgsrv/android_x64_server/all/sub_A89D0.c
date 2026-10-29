/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A89D0
// Address: 0x00000000000A89D0

//----- (00000000000A89D0) ----------------------------------------------------
unsigned __int64 __fastcall sub_A89D0(__int64 a1)
{
  const void **v2; // rbp
  void *v3; // rbx
  const void *v4; // r12
  void *v5; // rbx
  const void *v6; // r12
  void *v7; // rax
  unsigned __int64 v8; // rbx
  const void *v9; // r12
  void *v10; // rdi
  __int64 *v11; // rbx
  size_t v12; // r15
  char *v13; // rax
  char *v14; // rax
  const char *v15; // rsi
  const char *v16; // rdi
  char *v17; // rbp
  size_t v18; // r15
  char *v19; // r12
  char *v20; // rax
  size_t v21; // r15
  char *v22; // r12
  char *v23; // rax
  __time_t v24; // rax
  const char *v25; // r8
  const char *v26; // rdx
  __int64 *v27; // rax
  const char *v29; // r15
  int v30; // ebp
  const char *v31; // rax
  __int64 v32; // [rsp+8h] [rbp-500h] BYREF
  char *s1[2]; // [rsp+10h] [rbp-4F8h]
  __int64 v34; // [rsp+20h] [rbp-4E8h]
  char *s2[2]; // [rsp+30h] [rbp-4D8h] BYREF
  unsigned __int64 v36; // [rsp+40h] [rbp-4C8h]
  __int64 v37; // [rsp+48h] [rbp-4C0h] BYREF
  void *v38[4]; // [rsp+50h] [rbp-4B8h] BYREF
  void *dest[2]; // [rsp+70h] [rbp-498h] BYREF
  void *ptr[2]; // [rsp+80h] [rbp-488h] BYREF
  __int128 v41; // [rsp+90h] [rbp-478h]
  char v42[32]; // [rsp+A0h] [rbp-468h] BYREF
  _BYTE src[1040]; // [rsp+C0h] [rbp-448h] BYREF
  unsigned __int64 v44; // [rsp+4D0h] [rbp-38h]

  v44 = __readfsqword(0x28u);
  *(_QWORD *)(a1 + 80) = sub_A95D0(*(unsigned __int8 *)(a1 + 106));
  v37 = 88;
  memset(v38, 0, 26);
  v41 = 0;
  *(_OWORD *)ptr = 0;
  *(_OWORD *)dest = 0;
  v2 = (const void **)(a1 + 8);
  if ( &v37 != (__int64 *)a1 )
  {
    v3 = *(void **)(a1 + 16);
    if ( (unsigned __int64)v3 < 2 )
    {
      v38[1] = nullptr;
    }
    else
    {
      v4 = *v2;
      v38[0] = qvector_reserve((__int64)v38, nullptr, *(_QWORD *)(a1 + 16), 1u);
      v38[1] = v3;
      memmove(v38[0], v4, (size_t)v3 - 1);
      *((char *)v38[0] + (unsigned __int64)v3 - 1) = 0;
    }
  }
  LOWORD(v38[3]) = *(_WORD *)(a1 + 104);
  if ( dest != (void **)(a1 + 32) )
  {
    v5 = *(void **)(a1 + 40);
    if ( (unsigned __int64)v5 < 2 )
    {
      dest[1] = nullptr;
    }
    else
    {
      v6 = *(const void **)(a1 + 32);
      v7 = dest[0];
      if ( ptr[0] < v5 )
      {
        v7 = qvector_reserve((__int64)dest, (char *)dest[0], *(_QWORD *)(a1 + 40), 1u);
        dest[0] = v7;
      }
      dest[1] = v5;
      memmove(v7, v6, (size_t)v5 - 1);
      *((char *)dest[0] + (unsigned __int64)v5 - 1) = 0;
    }
  }
  if ( &ptr[1] != (void **)(a1 + 56) )
  {
    v8 = *(_QWORD *)(a1 + 64);
    if ( v8 < 2 )
    {
      *(_QWORD *)&v41 = 0;
    }
    else
    {
      v9 = *(const void **)(a1 + 56);
      if ( *((_QWORD *)&v41 + 1) >= v8 )
      {
        v10 = ptr[1];
      }
      else
      {
        v10 = qvector_reserve((__int64)&ptr[1], (char *)ptr[1], *(_QWORD *)(a1 + 64), 1u);
        ptr[1] = v10;
      }
      *(_QWORD *)&v41 = v8;
      memmove(v10, v9, v8 - 1);
      *((_BYTE *)ptr[1] + v8 - 1) = 0;
    }
  }
  v11 = (__int64 *)(a1 + 80);
  if ( !(unsigned __int8)sub_A9640(*(_QWORD *)(a1 + 80)) )
  {
    if ( *(_QWORD *)(a1 + 16) >= 2u )
      v29 = (const char *)*v2;
    else
      v29 = "0.0.0.0";
    v30 = *(unsigned __int16 *)(a1 + 104);
    v31 = (const char *)sub_A9610(*(_QWORD *)(a1 + 80));
    sub_AD470("%s:%u: %s\n", v29, v30, v31);
    sub_A96B0((_QWORD *)(a1 + 80));
    exit(1);
  }
  *(_OWORD *)s2 = 0;
  v36 = 0;
  *(_OWORD *)s1 = 0;
  v34 = 0;
  sub_A9680(*v11);
  if ( (unsigned __int8)sub_C3560() )
  {
    v12 = __strlen_chk(src, 1025);
    if ( v12 )
    {
      v13 = s2[0];
      if ( v36 < v12 + 1 )
      {
        v13 = (char *)qvector_reserve((__int64)s2, s2[0], v12 + 1, 1u);
        s2[0] = v13;
      }
      s2[1] = (char *)(v12 + 1);
      memmove(v13, src, v12);
      s2[0][v12] = 0;
      v14 = s2[1];
    }
    else
    {
      s2[1] = nullptr;
      v14 = nullptr;
    }
    v15 = ::s1;
    v16 = ::s1;
    if ( s1[1] )
      v16 = s1[0];
    v17 = s2[0];
    if ( v14 )
      v15 = s2[0];
    if ( !strcmp(v16, v15) )
    {
      if ( v17 )
      {
        s2[1] = nullptr;
        qfree(v17);
        s2[0] = nullptr;
        v36 = 0;
      }
    }
    else
    {
      v18 = __strlen_chk(" (my ip ", 9);
      v19 = s2[1] - 1;
      if ( !s2[1] )
        v19 = nullptr;
      v20 = s2[0];
      if ( v36 < (unsigned __int64)&v19[v18 + 1] )
      {
        v20 = (char *)qvector_reserve((__int64)s2, s2[0], (unsigned __int64)&v19[v18 + 1], 1u);
        s2[0] = v20;
      }
      s2[1] = &v19[v18 + 1];
      v19[v18 + (_QWORD)v20] = 0;
      if ( v19 )
        memmove(&s2[0][v18], s2[0], (size_t)v19);
      memmove(s2[0], " (my ip ", v18);
      v21 = __strlen_chk(")", 2);
      v22 = s2[1] - 1;
      if ( !s2[1] )
        v22 = nullptr;
      v23 = s2[0];
      if ( v36 < (unsigned __int64)&v22[v21 + 1] )
      {
        v23 = (char *)qvector_reserve((__int64)s2, s2[0], (unsigned __int64)&v22[v21 + 1], 1u);
        s2[0] = v23;
      }
      s2[1] = &v22[v21 + 1];
      v22[v21 + (_QWORD)v23] = 0;
      memmove(&s2[0][(unsigned __int64)v22], ")", v21);
    }
  }
  v24 = qtime64();
  format_timestamp(v42, 25, v24, 0);
  v25 = ::s1;
  v26 = ::s1;
  if ( s1[1] )
    v26 = s1[0];
  if ( s2[1] )
    v25 = s2[0];
  sub_AD470("%s Listening on %s:%u%s...\n", v42, v26, *(unsigned __int16 *)(a1 + 104), v25);
  while ( *v11 )
  {
    v32 = sub_A95D0(*(unsigned __int8 *)(a1 + 106));
    if ( (unsigned __int8)sub_A9650(v32)
      && (v27 = (__int64 *)(*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 24LL))(a1, v32)) != nullptr )
    {
      sub_A8590(a1, v27);
    }
    else
    {
      sub_A96B0(&v32);
      if ( !*v11 )
        break;
      sub_AD470("Rejected client\n", 0xFFFFFFFFLL);
    }
  }
  if ( s1[0] )
  {
    s1[1] = nullptr;
    qfree(s1[0]);
    s1[0] = nullptr;
    v34 = 0;
  }
  if ( s2[0] )
  {
    s2[1] = nullptr;
    qfree(s2[0]);
    s2[0] = nullptr;
    v36 = 0;
  }
  if ( ptr[1] )
  {
    *(_QWORD *)&v41 = 0;
    qfree(ptr[1]);
    ptr[1] = nullptr;
    *((_QWORD *)&v41 + 1) = 0;
  }
  if ( dest[0] )
  {
    dest[1] = nullptr;
    qfree(dest[0]);
    dest[0] = nullptr;
    ptr[0] = nullptr;
  }
  if ( v38[0] )
  {
    v38[1] = nullptr;
    qfree(v38[0]);
    v38[0] = nullptr;
    v38[2] = nullptr;
  }
  return __readfsqword(0x28u);
}
// 33AE0: using guessed type __int64 __fastcall __strlen_chk(_QWORD, _QWORD);
// A95D0: using guessed type __int64 __fastcall sub_A95D0(_QWORD);
