__int64 __fastcall sub_562260(char *a1, __int64 a2)
{
  unsigned int v3; // r14d
  char tinfo_details; // al
  char *v6; // rdi
  unsigned __int64 v7; // rbp
  char *v8; // rbx
  unsigned __int64 v9; // r13
  __int64 v10; // r15
  unsigned __int64 v11; // rax
  int v12; // r13d
  unsigned int tinfo_property4; // eax
  int v14; // eax
  __int64 v15; // rdx
  unsigned __int8 v16; // r15
  const char *v17; // r13
  size_t v18; // rax
  char v19; // al
  __int64 v20; // r12
  __int64 v21; // rbp
  char *v22; // rbx
  void *v23; // rdi
  void *v24; // rdi
  char v25; // [rsp+1Fh] [rbp-129h]
  __int64 v26; // [rsp+30h] [rbp-118h] BYREF
  __int64 v27; // [rsp+38h] [rbp-110h] BYREF
  void *ptr; // [rsp+40h] [rbp-108h] BYREF
  __int128 v29; // [rsp+48h] [rbp-100h]
  __int128 v30; // [rsp+58h] [rbp-F0h]
  __int64 v31; // [rsp+68h] [rbp-E0h]
  int v32; // [rsp+70h] [rbp-D8h]
  _BYTE v33[136]; // [rsp+80h] [rbp-C8h] BYREF
  unsigned __int64 v34; // [rsp+108h] [rbp-40h]

  v34 = __readfsqword(0x28u);
  v26 = 0;
  v3 = 0;
  if ( (unsigned __int8)tinfo_get_func_frame(&v26, a2) )
  {
    ptr = nullptr;
    v31 = 0;
    v32 = 1;
    v29 = 0;
    v30 = 0;
    tinfo_details = get_tinfo_details(v26, 13, &ptr);
    v6 = (char *)ptr;
    if ( tinfo_details )
    {
      if ( !(_QWORD)v29 )
      {
        v3 = 0;
        if ( !ptr )
          goto LABEL_2;
        goto LABEL_34;
      }
      v7 = 0;
      do
      {
        v8 = &v6[128 * v7];
        if ( (v8[117] & 0x30) == 0 )
        {
          v9 = *(_QWORD *)v8;
          if ( !v3 )
            (*(void (__fastcall **)(char *))(*(_QWORD *)a1 + 160LL))(a1);
          v27 = 0;
          v10 = *((_QWORD *)a1 + 59);
          ++v3;
          get_frame_part(&v27, a2, 3);
          v11 = v9 >> 3;
          if ( *(char *)(v10 + 9) >= 0 )
            v12 = HIDWORD(v27) - v11;
          else
            v12 = v11 - v27;
          tinfo_property4 = get_tinfo_property4(v26, 297, v7, 0, 0, 0);
          if ( !sub_375980(0x63u, a1, v8, (unsigned int)-v12, tinfo_property4) )
          {
            v25 = 45;
            if ( v12 <= 0 )
            {
              v25 = 32;
              v12 = -v12;
            }
            if ( (*(_BYTE *)(get_ph(99, a1) + 10) & 0x40) != 0 )
            {
              v14 = sub_375980(0x3Du);
              if ( !v14 )
                sub_375320((__int64)"Request ph.get_stkvar_scale_factor should be implemented", a1, v15, 0);
              if ( v14 <= 0 )
                sub_375320(
                  (__int64)"Invalid return code from ph.get_stkvar_scale_factor request",
                  a1,
                  v15,
                  (unsigned int)v14);
              v12 /= v14;
            }
            btoa32(v33, 136, (unsigned int)v12, 0);
            v16 = getinf(40);
            v17 = haystack;
            if ( *((_QWORD *)v8 + 3) )
              v17 = *((const char **)v8 + 2);
            (*(void (__fastcall **)(char *, const char *, __int64))(*(_QWORD *)a1 + 56LL))(a1, v17, 25);
            if ( v17 )
            {
              v18 = strlen(v17);
              if ( v18 < v16 )
                (*(void (__fastcall **)(char *, __int64, _QWORD))(*(_QWORD *)a1 + 40LL))(
                  a1,
                  32,
                  v16 - (unsigned int)v18);
            }
            sub_359A50((__int64)a1, (__int64)&unk_22B2BFA, (unsigned int)v25, v33);
          }
          v19 = sub_561EC0(a1, *((_QWORD *)a1 + 60), *((const char **)v8 + 5));
          v6 = (char *)ptr;
          if ( v19 )
            break;
        }
        ++v7;
      }
      while ( v7 < (unsigned __int64)v29 );
    }
    else
    {
      v3 = 0;
    }
    if ( !v6 )
      goto LABEL_2;
    v20 = v29;
    if ( (_QWORD)v29 )
    {
      v21 = 0;
      do
      {
        v22 = &v6[128 * v21];
        clear_tinfo_t(v22 + 64);
        v23 = *((void **)v22 + 5);
        if ( v23 )
        {
          *((_QWORD *)v22 + 6) = 0;
          qfree(v23);
        }
        v24 = *((void **)v22 + 2);
        if ( v24 )
        {
          *((_QWORD *)v22 + 3) = 0;
          qfree(v24);
        }
        ++v21;
        v6 = (char *)ptr;
      }
      while ( v20 != v21 );
    }
LABEL_34:
    *(_QWORD *)&v29 = 0;
    qfree(v6);
  }
LABEL_2:
  clear_tinfo_t(&v26);
  return v3;
}

