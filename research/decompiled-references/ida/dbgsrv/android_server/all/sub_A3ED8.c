/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A3ED8
// Address: 0x00000000000A3ED8

//----- (00000000000A3ED8) ----------------------------------------------------
void __fastcall sub_A3ED8(__int64 a1)
{
  const void **v2; // x23
  unsigned __int64 v3; // x21
  const void *v4; // x22
  unsigned __int64 v5; // x21
  const void *v6; // x22
  void *align; // x1
  struct __pthread_internal_list *v8; // x21
  const void *v9; // x22
  struct __pthread_internal_list *prev; // x0
  __int64 *v11; // x20
  __int64 v12; // x0
  size_t v13; // x21
  void *v14; // x8
  __int64 v15; // x8
  void *v16; // x21
  const char *v17; // x0
  const char *v18; // x1
  __int64 v19; // x0
  __int64 v20; // x1
  size_t v21; // x21
  size_t v22; // x22
  size_t v23; // x25
  unsigned __int64 v24; // x23
  __int64 v25; // x0
  __int64 v26; // x1
  size_t v27; // x21
  __int64 v28; // x23
  __int64 v29; // x25
  unsigned __int64 v30; // x22
  __time_t v31; // x0
  const char *v32; // x2
  const char *v33; // x4
  __int64 *v34; // x1
  const char *v35; // x21
  int v36; // w22
  const char *v37; // x0
  __int64 v38; // [xsp+8h] [xbp-508h] BYREF
  void *ptr; // [xsp+10h] [xbp-500h] BYREF
  __int64 v40; // [xsp+18h] [xbp-4F8h]
  __int64 v41; // [xsp+20h] [xbp-4F0h]
  pthread_mutex_t v42; // [xsp+28h] [xbp-4E8h] BYREF
  unsigned __int64 v43; // [xsp+50h] [xbp-4C0h]
  __int64 v44; // [xsp+58h] [xbp-4B8h]
  __int16 v45; // [xsp+60h] [xbp-4B0h]
  pthread_mutex_t dest; // [xsp+68h] [xbp-4A8h] BYREF
  unsigned __int64 v47; // [xsp+90h] [xbp-480h]
  pthread_mutex_t v48[26]; // [xsp+98h] [xbp-478h] BYREF
  __int64 v49; // [xsp+4B8h] [xbp-58h]

  v49 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v2 = (const void **)(a1 + 8);
  *(_QWORD *)(a1 + 80) = sub_A48F8(*(unsigned __int8 *)(a1 + 106));
  *(_OWORD *)(&v42.__align + 3) = 0x58u;
  v43 = 0;
  v44 = 0;
  v45 = 0;
  v47 = 0;
  memset(&dest, 0, sizeof(dest));
  if ( &v42.__align + 3 != (__int64 *)a1 )
  {
    v3 = *(_QWORD *)(a1 + 16);
    if ( v3 < 2 )
    {
      v43 = 0;
    }
    else
    {
      v4 = *v2;
      v42.__list.__next = (struct __pthread_internal_list *)qvector_reserve(
                                                              (pthread_mutex_t *)(&v42.__align + 4),
                                                              nullptr,
                                                              *(_QWORD *)(a1 + 16),
                                                              1u);
      v43 = v3;
      memmove(v42.__list.__next, v4, v3 - 1);
      *((_BYTE *)v42.__list.__next + v3 - 1) = 0;
    }
  }
  v45 = *(_WORD *)(a1 + 104);
  if ( &dest != (pthread_mutex_t *)(a1 + 32) )
  {
    v5 = *(_QWORD *)(a1 + 40);
    if ( v5 < 2 )
    {
      *(&dest.__align + 1) = 0;
    }
    else
    {
      v6 = *(const void **)(a1 + 32);
      align = (void *)dest.__align;
      if ( *(&dest.__align + 2) < v5 )
      {
        align = qvector_reserve(&dest, (void *)dest.__align, *(_QWORD *)(a1 + 40), 1u);
        dest.__align = (__int64)align;
      }
      *(&dest.__align + 1) = v5;
      memmove(align, v6, v5 - 1);
      *(_BYTE *)(dest.__align + v5 - 1) = 0;
    }
  }
  if ( &dest.__align + 3 != (__int64 *)(a1 + 56) )
  {
    v8 = *(struct __pthread_internal_list **)(a1 + 64);
    if ( (unsigned __int64)v8 < 2 )
    {
      dest.__list.__next = nullptr;
    }
    else
    {
      v9 = *(const void **)(a1 + 56);
      if ( v47 >= (unsigned __int64)v8 )
      {
        prev = dest.__list.__prev;
      }
      else
      {
        prev = (struct __pthread_internal_list *)qvector_reserve(
                                                   (pthread_mutex_t *)(&dest.__align + 3),
                                                   dest.__list.__prev,
                                                   *(_QWORD *)(a1 + 64),
                                                   1u);
        dest.__list.__prev = prev;
      }
      dest.__list.__next = v8;
      memmove(prev, v9, (size_t)&v8[-1].__next + 7);
      *((_BYTE *)&dest.__list.__prev->__prev + (unsigned __int64)&v8[-1].__next + 7) = 0;
    }
  }
  v11 = (__int64 *)(a1 + 80);
  if ( (sub_A4944(*(_QWORD *)(a1 + 80)) & 1) == 0 )
  {
    if ( *(_QWORD *)(a1 + 16) >= 2u )
      v35 = (const char *)*v2;
    else
      v35 = "0.0.0.0";
    v36 = *(unsigned __int16 *)(a1 + 104);
    v37 = (const char *)sub_A4920(*(_QWORD *)(a1 + 80));
    sub_A84C8("%s:%u: %s\n", v35, v36, v37);
    sub_A49A0((_QWORD *)(a1 + 80));
    exit(1);
  }
  memset(&v42, 0, 24);
  v40 = 0;
  v41 = 0;
  ptr = nullptr;
  sub_A4978(*v11, (__int64)&ptr, 0);
  if ( (sub_BE724() & 1) != 0 )
  {
    v12 = __strlen_chk((char *)&v48[0].__align + 28, 1025);
    v13 = v12;
    if ( v12 )
    {
      v14 = (void *)v42.__align;
      if ( *(&v42.__align + 2) < (unsigned __int64)(v12 + 1) )
      {
        v14 = qvector_reserve(&v42, (void *)v42.__align, v12 + 1, 1u);
        v42.__align = (__int64)v14;
      }
      *(&v42.__align + 1) = v13 + 1;
      memmove(v14, (char *)&v48[0].__align + 28, v13);
      *(_BYTE *)(v42.__align + v13) = 0;
      v15 = *(&v42.__align + 1);
    }
    else
    {
      v15 = 0;
      *(&v42.__align + 1) = 0;
    }
    v16 = (void *)v42.__align;
    if ( v40 )
      v17 = (const char *)ptr;
    else
      v17 = &byte_F154B;
    if ( v15 )
      v18 = (const char *)v42.__align;
    else
      v18 = &byte_F154B;
    if ( !strcmp(v17, v18) )
    {
      if ( v16 )
      {
        *(&v42.__align + 1) = 0;
        qfree(v16);
        v42.__align = 0;
        *(&v42.__align + 2) = 0;
      }
    }
    else
    {
      v19 = __strlen_chk(" (my ip ", 9);
      v20 = v42.__align;
      v21 = v19;
      if ( *(&v42.__align + 1) )
        v22 = *(&v42.__align + 1) - 1;
      else
        v22 = 0;
      v23 = v22 + v19;
      v24 = v22 + v19 + 1;
      if ( *(&v42.__align + 2) < v24 )
      {
        v20 = (__int64)qvector_reserve(&v42, (void *)v42.__align, v24, 1u);
        v42.__align = v20;
      }
      *(&v42.__align + 1) = v24;
      *(_BYTE *)(v20 + v23) = 0;
      if ( v22 )
        memmove((void *)(v42.__align + v21), (const void *)v42.__align, v22);
      memmove((void *)v42.__align, " (my ip ", v21);
      v25 = __strlen_chk(")", 2);
      v26 = v42.__align;
      v27 = v25;
      if ( *(&v42.__align + 1) )
        v28 = *(&v42.__align + 1) - 1;
      else
        v28 = 0;
      v29 = v28 + v25;
      v30 = v28 + v25 + 1;
      if ( *(&v42.__align + 2) < v30 )
      {
        v26 = (__int64)qvector_reserve(&v42, (void *)v42.__align, v30, 1u);
        v42.__align = v26;
      }
      *(&v42.__align + 1) = v30;
      *(_BYTE *)(v26 + v29) = 0;
      memmove((void *)(v42.__align + v28), ")", v27);
    }
  }
  v31 = qtime64();
  format_timestamp(v48, 25, v31, 0);
  if ( v40 )
    v32 = (const char *)ptr;
  else
    v32 = &byte_F154B;
  if ( *(&v42.__align + 1) )
    v33 = (const char *)v42.__align;
  else
    v33 = &byte_F154B;
  sub_A84C8("%s Listening on %s:%u%s...\n", (const char *)v48, v32, *(unsigned __int16 *)(a1 + 104), v33);
  while ( *v11 )
  {
    v38 = sub_A48F8(*(unsigned __int8 *)(a1 + 106));
    if ( (sub_A4950(v38) & 1) != 0
      && (v34 = (__int64 *)(*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 24LL))(a1, v38)) != nullptr )
    {
      sub_A3A64(a1, v34);
    }
    else
    {
      sub_A49A0(&v38);
      if ( !*v11 )
        break;
      sub_A84C8("Rejected client\n");
    }
  }
  if ( ptr )
  {
    v40 = 0;
    qfree(ptr);
    ptr = nullptr;
    v41 = 0;
  }
  if ( v42.__align )
  {
    *(&v42.__align + 1) = 0;
    qfree((void *)v42.__align);
    v42.__align = 0;
    *(&v42.__align + 2) = 0;
  }
  if ( dest.__list.__prev )
  {
    dest.__list.__next = nullptr;
    qfree(dest.__list.__prev);
    dest.__list.__prev = nullptr;
    v47 = 0;
  }
  if ( dest.__align )
  {
    *(&dest.__align + 1) = 0;
    qfree((void *)dest.__align);
    dest.__align = 0;
    *(&dest.__align + 2) = 0;
  }
  if ( v42.__list.__next )
  {
    v43 = 0;
    qfree(v42.__list.__next);
    v42.__list.__next = nullptr;
    v44 = 0;
  }
}
// 37590: using guessed type __int64 __fastcall __strlen_chk(_QWORD, _QWORD);
// A48F8: using guessed type __int64 __fastcall sub_A48F8(_QWORD);
// F154B: using guessed type char byte_F154B;
