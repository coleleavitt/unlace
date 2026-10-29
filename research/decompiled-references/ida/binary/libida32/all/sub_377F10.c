__int64 __fastcall sub_377F10(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  char *v6; // rbp
  bool v7; // zf
  unsigned int v8; // r12d
  int v10; // r13d
  int radix; // eax
  int v12; // edx
  char v13; // cl
  char v14; // dl
  char *v15; // rdi
  __int64 v16; // r13
  __int64 v17; // r12
  __int64 v18; // rbp
  char *v19; // rbx
  void *v20; // rdi
  void *v21; // rdi
  __int64 v22; // [rsp+0h] [rbp-78h]
  __int64 v23; // [rsp+8h] [rbp-70h] BYREF
  void *v24; // [rsp+10h] [rbp-68h] BYREF
  __int128 v25; // [rsp+18h] [rbp-60h]
  void *ptr; // [rsp+28h] [rbp-50h]
  __int128 v27; // [rsp+30h] [rbp-48h]
  __int64 v28; // [rsp+40h] [rbp-38h]
  unsigned __int64 v29; // [rsp+48h] [rbp-30h]

  v6 = (char *)haystack;
  v7 = *(_QWORD *)(a1 + 48) == 0;
  v29 = __readfsqword(0x28u);
  if ( !v7 )
    v6 = *(char **)(a1 + 40);
  v8 = *(_DWORD *)(a1 + 72);
  *(_DWORD *)(a2 + 8) = -1;
  if ( (unsigned __int8)is_valid_typename(
                          v6,
                          a2,
                          a3,
                          a4,
                          a5,
                          a6,
                          v22,
                          v23,
                          (int)v24,
                          v25,
                          SDWORD2(v25),
                          (int)ptr,
                          v27,
                          SDWORD2(v27),
                          v28)
    && (unsigned int)get_named_type_tid(v6) == -1 )
  {
    BYTE4(v28) = 0x80;
    LODWORD(v28) = 0;
    v10 = v8 & 0x20000;
    v24 = nullptr;
    ptr = nullptr;
    v25 = 0;
    v27 = 0;
    if ( (v8 & 0xF00000) == 0x300000 )
    {
      if ( v10 )
        LODWORD(v28) = 1024;
      v13 = 0x80;
      goto LABEL_35;
    }
    radix = get_radix(v8, 0);
    v12 = v28;
    v13 = BYTE4(v28) & 0x9F;
    BYTE4(v28) &= 0x9Fu;
    if ( v10 )
    {
      BYTE1(v12) = BYTE1(v28) & 0xF8 | 4;
      LODWORD(v28) = v12;
      if ( radix != 2 )
      {
        if ( radix > 2 )
        {
          if ( radix == 8 )
          {
LABEL_37:
            BYTE1(v12) |= 1u;
            LODWORD(v28) = v12;
            goto LABEL_13;
          }
          v14 = 64;
          if ( radix == 10 )
          {
LABEL_12:
            BYTE4(v28) = v14 | v13;
            goto LABEL_13;
          }
          goto LABEL_13;
        }
LABEL_38:
        if ( radix == 1 )
LABEL_35:
          BYTE4(v28) = v13 | 0x20;
LABEL_13:
        v23 = 0;
        if ( (unsigned __int8)create_tinfo(&v23, 45, 45, &v24) && !(unsigned int)save_tinfo(&v23, 0, 0, v6, 1) )
          *(_DWORD *)(a2 + 8) = get_tinfo_tid(&v23, 0);
        clear_tinfo_t(&v23);
        if ( ptr )
        {
          *(_QWORD *)&v27 = 0;
          qfree(ptr);
        }
        v15 = (char *)v24;
        if ( v24 )
        {
          v16 = v25;
          if ( (_QWORD)v25 )
          {
            v17 = 0;
            v18 = 0;
            do
            {
              v19 = &v15[v17];
              v20 = *(void **)&v15[v17 + 24];
              if ( v20 )
              {
                *((_QWORD *)v19 + 4) = 0;
                qfree(v20);
              }
              v21 = *(void **)v19;
              if ( *(_QWORD *)v19 )
              {
                *((_QWORD *)v19 + 1) = 0;
                qfree(v21);
              }
              ++v18;
              v15 = (char *)v24;
              v17 += 56;
            }
            while ( v16 != v18 );
          }
          *(_QWORD *)&v25 = 0;
          qfree(v15);
        }
        return 0;
      }
    }
    else
    {
      BYTE1(v12) = 0;
      LODWORD(v28) = v12;
      if ( radix != 2 )
      {
        if ( radix > 2 )
        {
          if ( radix != 8 )
          {
            v14 = 96;
            if ( radix != 10 )
              goto LABEL_13;
            goto LABEL_12;
          }
          goto LABEL_37;
        }
        goto LABEL_38;
      }
    }
    BYTE1(v12) |= 2u;
    LODWORD(v28) = v12;
    goto LABEL_13;
  }
  return 0;
}

