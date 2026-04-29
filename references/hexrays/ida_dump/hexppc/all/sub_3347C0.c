__int64 __fastcall sub_3347C0(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v3; // r13
  __int64 *func; // rax
  __int64 *v7; // r14
  unsigned int v8; // r12d
  __int64 first_fcref_from; // rax
  __int64 *v11; // rax
  __int64 v12; // rdi
  __int64 v13; // rdi
  __int64 v14; // r13
  __int64 v15; // rbp
  _QWORD *v16; // r15
  __int64 v17; // rdi
  __int64 v18; // rdi
  unsigned __int8 v19; // al
  char v20; // r15
  int v21; // r13d
  __int64 v22; // rdx
  __int64 v23; // rdi
  unsigned int v24; // eax
  char v25; // [rsp+Fh] [rbp-C9h]
  char tinfo_details; // [rsp+Fh] [rbp-C9h]
  __int64 v27; // [rsp+18h] [rbp-C0h]
  unsigned __int8 v28; // [rsp+18h] [rbp-C0h]
  __int64 v29; // [rsp+28h] [rbp-B0h] BYREF
  __int64 v30; // [rsp+30h] [rbp-A8h] BYREF
  __int128 v31; // [rsp+38h] [rbp-A0h]
  __int64 v32; // [rsp+48h] [rbp-90h]
  __int64 v33; // [rsp+50h] [rbp-88h] BYREF
  __int64 v34; // [rsp+58h] [rbp-80h] BYREF
  __int128 v35; // [rsp+60h] [rbp-78h]
  __int64 v36; // [rsp+70h] [rbp-68h]
  __int128 v37; // [rsp+78h] [rbp-60h]
  char v38; // [rsp+88h] [rbp-50h]
  unsigned __int64 v39; // [rsp+98h] [rbp-40h]

  v3 = a2;
  v39 = __readfsqword(0x28u);
  func = (__int64 *)get_func(a2);
  v7 = func;
  if ( !func )
  {
    v8 = *(_DWORD *)(*(_QWORD *)(a1 + 112) + 48LL) & 2;
    if ( !v8 )
      return v8;
LABEL_11:
    if ( (~((unsigned __int16)get_flags_ex(v3, 4) >> 8) & 6) != 0 && !(unsigned __int8)is_spec_ea(v3) )
    {
      v25 = 1;
      v8 = 0;
      if ( (unsigned __int8)*a3 )
        get_tinfo_property(*a3, 2);
      goto LABEL_15;
    }
    v8 = guess_tinfo(a3, v3);
    if ( (unsigned __int8)*a3 && (get_tinfo_property(*a3, 2) & 0xF) != 0xC || !v8 )
    {
LABEL_38:
      v25 = 1;
      v8 = 0;
LABEL_15:
      if ( !v7 || !v25 )
        return v8;
LABEL_21:
      v3 = *v7;
      return sub_334500(v3, (__int64)a3);
    }
    v12 = *a3;
    v30 = 0;
    v32 = 0;
    v33 = 0;
    v34 = 0;
    v36 = 0;
    v38 = 16;
    v31 = 0;
    v35 = 0;
    v37 = 0;
    tinfo_details = get_tinfo_details(v12, 140, &v30);
    if ( !tinfo_details )
    {
      v25 = 1;
      v8 = 0;
LABEL_26:
      if ( v36 )
      {
        *(_QWORD *)&v37 = 0;
        qfree(v36);
      }
      cleanup_argloc(&v34);
      clear_tinfo_t(&v33);
      v13 = v30;
      if ( v30 )
      {
        v14 = v31;
        if ( (_QWORD)v31 )
        {
          v15 = 0;
          do
          {
            v16 = (_QWORD *)(v13 + 80 * v15);
            clear_tinfo_t(v16 + 8);
            v17 = v16[5];
            if ( v17 )
            {
              v16[6] = 0;
              qfree(v17);
            }
            v18 = v16[2];
            if ( v18 )
            {
              v16[3] = 0;
              qfree(v18);
            }
            ++v15;
            cleanup_argloc(v16);
            v13 = v30;
          }
          while ( v14 != v15 );
        }
        *(_QWORD *)&v31 = 0;
        qfree(v13);
      }
      goto LABEL_15;
    }
    v19 = sub_325790(a1, *(unsigned __int8 *)(a1 + 130));
    v20 = 0;
    if ( (_BYTE)v33 == 7 )
    {
      v28 = v19;
      v29 = v19;
      copy_tinfo_t(&v33, &v29);
      clear_tinfo_t(&v29);
      v20 = tinfo_details;
      v19 = v28;
    }
    if ( (_QWORD)v31 )
    {
      v21 = 0;
      v22 = 0;
      v27 = v19;
      do
      {
        v23 = v30 + 80 * v22;
        if ( *(_BYTE *)(v23 + 64) == 7 )
        {
          v29 = v27;
          copy_tinfo_t(v23 + 64, &v29);
          clear_tinfo_t(&v29);
          v20 = tinfo_details;
        }
        v22 = ++v21;
      }
      while ( v21 < (unsigned __int64)v31 );
    }
    v24 = v38 & 0xF0;
    if ( (v38 & 0xF0) == 0xC0 )
      v24 = HIDWORD(v32);
    if ( v24 <= 0x10 )
      v24 = getinf(99);
    if ( v24 != 48 || (*(_BYTE *)(*(_QWORD *)(a1 + 112) + 48LL) & 8) != 0 )
    {
      if ( !v20 )
      {
LABEL_52:
        v25 = 0;
        goto LABEL_26;
      }
    }
    else
    {
      HIDWORD(v32) = 0;
      v38 = v38 & 0xF | 0x70;
    }
    create_tinfo(a3, 12, 12, &v30);
    goto LABEL_52;
  }
  if ( *func != a2 )
    return 0;
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 112) + 48LL) & 2) != 0 )
  {
    while ( *((char *)v7 + 16) < 0 )
    {
      first_fcref_from = get_first_fcref_from(v3);
      v11 = (__int64 *)get_func(first_fcref_from);
      if ( !v11 || v11 == v7 )
      {
        if ( !(unsigned __int8)*a3 )
          goto LABEL_21;
        get_tinfo_property(*a3, 2);
        goto LABEL_38;
      }
      v3 = *v11;
      v7 = v11;
    }
    goto LABEL_11;
  }
  return sub_334500(v3, (__int64)a3);
}
