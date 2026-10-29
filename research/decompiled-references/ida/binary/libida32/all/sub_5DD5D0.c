__int64 __fastcall sub_5DD5D0(__int64 a1, const char *a2, __int64 a3, unsigned int a4, char a5, __m128i a6, double a7)
{
  unsigned int v12; // eax
  __int64 v13; // rdi
  char *v14; // rdi
  __int64 v15; // r15
  __int64 v16; // r13
  char *v17; // rbx
  void *v18; // rdi
  void *v19; // rdi
  const char *v20; // rsi
  char *v21; // rdi
  __int64 v22; // r12
  __int64 v23; // rbp
  char *v24; // rbx
  void *v25; // rdi
  void *v26; // rdi
  void *ptr; // [rsp+0h] [rbp-C8h] BYREF
  __int128 v28; // [rsp+8h] [rbp-C0h]
  void *v29; // [rsp+20h] [rbp-A8h] BYREF
  __int128 v30; // [rsp+28h] [rbp-A0h]
  __int64 v31; // [rsp+38h] [rbp-90h]
  __int64 v32; // [rsp+40h] [rbp-88h] BYREF
  _QWORD v33[2]; // [rsp+48h] [rbp-80h] BYREF
  int v34; // [rsp+58h] [rbp-70h]
  void *v35; // [rsp+60h] [rbp-68h]
  __int128 v36; // [rsp+68h] [rbp-60h]
  char v37; // [rsp+78h] [rbp-50h]
  unsigned __int64 v38; // [rsp+88h] [rbp-40h]

  v38 = __readfsqword(0x28u);
  if ( (unsigned int)sub_5D8F60(a1, a3, 12) || (unsigned int)sub_5DD1F0(a1, a3, a4, a6, a7) )
    return 0;
  sub_5D6C80(a1, a2, a3, 0);
  if ( (*(_BYTE *)(a3 + 186) & 0xF) == 0xC )
  {
    v12 = *(_DWORD *)(a3 + 68);
    if ( v12 > 0x1FF || v12 <= 0xFF && (v12 & 0xFFFFFF0F) != 0 )
    {
      v13 = *(_QWORD *)a2;
      v37 = 16;
      v29 = nullptr;
      v31 = 0;
      v32 = 0;
      v33[0] = 0;
      v33[1] = 0;
      v34 = 0;
      v35 = nullptr;
      v30 = 0;
      v36 = 0;
      if ( !(unsigned __int8)get_tinfo_details(v13, 12, &v29) )
      {
        if ( !under_debugger )
          interr(3360);
        BUG();
      }
      ptr = nullptr;
      v28 = 0;
      if ( (unsigned __int8)sub_3D7CC0((__int64)&v29, (__int64)&ptr) )
      {
        if ( ptr )
        {
          *(_QWORD *)&v28 = 0;
          qfree(ptr);
        }
        if ( v35 )
        {
          *(_QWORD *)&v36 = 0;
          qfree(v35);
        }
        cleanup_argloc(v33);
        clear_tinfo_t(&v32);
        v14 = (char *)v29;
        if ( v29 )
        {
          v15 = v30;
          if ( (_QWORD)v30 )
          {
            v16 = 0;
            do
            {
              v17 = &v14[80 * v16];
              clear_tinfo_t(v17 + 64);
              v18 = *((void **)v17 + 5);
              if ( v18 )
              {
                *((_QWORD *)v17 + 6) = 0;
                qfree(v18);
              }
              v19 = *((void **)v17 + 2);
              if ( v19 )
              {
                *((_QWORD *)v17 + 3) = 0;
                qfree(v19);
              }
              ++v16;
              cleanup_argloc(v17);
              v14 = (char *)v29;
            }
            while ( v15 != v16 );
          }
          *(_QWORD *)&v30 = 0;
          qfree(v14);
        }
        goto LABEL_5;
      }
      v20 = haystack;
      if ( (_QWORD)v28 )
        v20 = (const char *)ptr;
      set_error_string();
      set_qerrno(1753, v20);
      if ( ptr )
      {
        *(_QWORD *)&v28 = 0;
        qfree(ptr);
      }
      if ( v35 )
      {
        *(_QWORD *)&v36 = 0;
        qfree(v35);
      }
      cleanup_argloc(v33);
      clear_tinfo_t(&v32);
      v21 = (char *)v29;
      if ( v29 )
      {
        v22 = v30;
        if ( (_QWORD)v30 )
        {
          v23 = 0;
          do
          {
            v24 = &v21[80 * v23];
            clear_tinfo_t(v24 + 64);
            v25 = *((void **)v24 + 5);
            if ( v25 )
            {
              *((_QWORD *)v24 + 6) = 0;
              qfree(v25);
            }
            v26 = *((void **)v24 + 2);
            if ( v26 )
            {
              *((_QWORD *)v24 + 3) = 0;
              qfree(v26);
            }
            ++v23;
            cleanup_argloc(v24);
            v21 = (char *)v29;
          }
          while ( v22 != v23 );
        }
        *(_QWORD *)&v30 = 0;
        qfree(v21);
      }
      return 0;
    }
  }
LABEL_5:
  if ( a5 && (*(_BYTE *)(a1 + 730) & 1) != 0 && *(_QWORD *)a2 > 0xFFu )
    lower_type(*(_QWORD *)(a1 + 240), a2, **(_QWORD **)(a1 + 104), 0);
  return 1;
}

