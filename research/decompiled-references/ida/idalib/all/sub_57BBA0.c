__int64 __fastcall sub_57BBA0(char *a1, __int64 a2)
{
  unsigned int v3; // r13d
  char tinfo_details; // al
  char *v6; // rdi
  unsigned __int64 v7; // r14
  char *v8; // rbx
  unsigned __int64 v9; // r12
  __int64 v10; // r15
  unsigned __int64 v11; // rax
  __int64 v12; // r12
  __int64 tinfo_property4; // rax
  int v14; // eax
  const char *v15; // r12
  size_t v16; // rax
  char v17; // al
  __int64 v18; // r12
  __int64 v19; // rbp
  char *v20; // rbx
  void *v21; // rdi
  void *v22; // rdi
  char v23; // [rsp+1Fh] [rbp-139h]
  unsigned __int8 v24; // [rsp+28h] [rbp-130h]
  __int64 v25; // [rsp+38h] [rbp-120h] BYREF
  __int128 v26; // [rsp+40h] [rbp-118h] BYREF
  void *ptr; // [rsp+50h] [rbp-108h] BYREF
  __int128 v28; // [rsp+58h] [rbp-100h]
  __int128 v29; // [rsp+68h] [rbp-F0h]
  __int64 v30; // [rsp+78h] [rbp-E0h]
  int v31; // [rsp+80h] [rbp-D8h]
  _BYTE v32[136]; // [rsp+90h] [rbp-C8h] BYREF
  unsigned __int64 v33; // [rsp+118h] [rbp-40h]

  v33 = __readfsqword(0x28u);
  v25 = 0;
  v3 = 0;
  if ( (unsigned __int8)tinfo_get_func_frame(&v25, a2) )
  {
    ptr = nullptr;
    v30 = 0;
    v31 = 1;
    v28 = 0;
    v29 = 0;
    tinfo_details = get_tinfo_details(v25, 13, &ptr);
    v6 = (char *)ptr;
    if ( tinfo_details )
    {
      if ( !(_QWORD)v28 )
      {
        v3 = 0;
        if ( !ptr )
          goto LABEL_2;
        goto LABEL_34;
      }
      v7 = 0;
      do
      {
        v8 = &v6[144 * v7];
        if ( (v8[133] & 0x30) == 0 )
        {
          v9 = *(_QWORD *)v8;
          if ( !v3 )
            (*(void (__fastcall **)(char *))(*(_QWORD *)a1 + 160LL))(a1);
          v10 = *((_QWORD *)a1 + 78);
          ++v3;
          v26 = 0;
          get_frame_part(&v26, a2, 3);
          v11 = v9 >> 3;
          if ( *(char *)(v10 + 9) >= 0 )
            v12 = *((_QWORD *)&v26 + 1) - v11;
          else
            v12 = v11 - v26;
          tinfo_property4 = get_tinfo_property4(v25, 297, v7, 0, 0, 0);
          if ( !sub_3792E0(0x63u, a1, v8, -v12, tinfo_property4) )
          {
            v23 = 45;
            if ( v12 <= 0 )
            {
              v23 = 32;
              v12 = -v12;
            }
            if ( (*(_BYTE *)(get_ph(99, a1) + 10) & 0x40) != 0 )
            {
              v14 = sub_3792E0(0x3Du);
              if ( !v14 )
                sub_378C70((__int64)"Request ph.get_stkvar_scale_factor should be implemented");
              if ( v14 <= 0 )
                sub_378C70((__int64)"Invalid return code from ph.get_stkvar_scale_factor request");
              v12 /= v14;
            }
            btoa64(v32, 136, v12, 0);
            v24 = getinf(40);
            v15 = haystack;
            if ( *((_QWORD *)v8 + 3) )
              v15 = *((const char **)v8 + 2);
            (*(void (__fastcall **)(char *, const char *, __int64))(*(_QWORD *)a1 + 56LL))(a1, v15, 25);
            if ( v15 )
            {
              v16 = strlen(v15);
              if ( v16 < v24 )
                (*(void (__fastcall **)(char *, __int64, _QWORD))(*(_QWORD *)a1 + 40LL))(
                  a1,
                  32,
                  v24 - (unsigned int)v16);
            }
            sub_35CD40((__int64)a1, (__int64)&unk_22D60CE, (unsigned int)v23, v32);
          }
          v17 = sub_57B800(a1, *((_QWORD *)a1 + 79), *((const char **)v8 + 5));
          v6 = (char *)ptr;
          if ( v17 )
            break;
        }
        ++v7;
      }
      while ( v7 < (unsigned __int64)v28 );
    }
    else
    {
      v3 = 0;
    }
    if ( !v6 )
      goto LABEL_2;
    v18 = v28;
    if ( (_QWORD)v28 )
    {
      v19 = 0;
      do
      {
        v20 = &v6[144 * v19];
        clear_tinfo_t(v20 + 64);
        v21 = *((void **)v20 + 5);
        if ( v21 )
        {
          *((_QWORD *)v20 + 6) = 0;
          qfree(v21);
        }
        v22 = *((void **)v20 + 2);
        if ( v22 )
        {
          *((_QWORD *)v20 + 3) = 0;
          qfree(v22);
        }
        ++v19;
        v6 = (char *)ptr;
      }
      while ( v18 != v19 );
    }
LABEL_34:
    *(_QWORD *)&v28 = 0;
    qfree(v6);
  }
LABEL_2:
  clear_tinfo_t(&v25);
  return v3;
}
