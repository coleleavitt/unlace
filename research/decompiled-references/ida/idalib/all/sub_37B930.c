__int64 __fastcall sub_37B930(_QWORD *a1, __int64 a2)
{
  char *v2; // rbp
  bool v3; // zf
  __int64 v4; // r12
  int radix; // eax
  int v7; // edx
  char v8; // cl
  char v9; // dl
  char *v10; // rdi
  __int64 v11; // r13
  __int64 v12; // r12
  __int64 v13; // rbp
  char *v14; // rbx
  void *v15; // rdi
  void *v16; // rdi
  __int64 v17; // [rsp+0h] [rbp-78h]
  __int64 v18; // [rsp+8h] [rbp-70h] BYREF
  void *v19; // [rsp+10h] [rbp-68h] BYREF
  __int128 v20; // [rsp+18h] [rbp-60h]
  void *ptr; // [rsp+28h] [rbp-50h]
  __int128 v22; // [rsp+30h] [rbp-48h]
  __int64 v23; // [rsp+40h] [rbp-38h]
  unsigned __int64 v24; // [rsp+48h] [rbp-30h]

  v2 = (char *)haystack;
  v3 = a1[6] == 0;
  v24 = __readfsqword(0x28u);
  if ( !v3 )
    v2 = (char *)a1[5];
  v4 = a1[9];
  *(_QWORD *)(a2 + 8) = -1;
  if ( (unsigned __int8)is_valid_typename(v2, v17, v18, (int)v19, v20, SDWORD2(v20), (int)ptr, v22, SDWORD2(v22), v23)
    && get_named_type_tid(v2) == -1 )
  {
    BYTE4(v23) = 0x80;
    LODWORD(v23) = 0;
    v19 = nullptr;
    ptr = nullptr;
    v20 = 0;
    v22 = 0;
    if ( (v4 & 0xF00000) == 0x300000 )
    {
      if ( (v4 & 0x20000) != 0 )
        LODWORD(v23) = 1024;
      v8 = 0x80;
      goto LABEL_35;
    }
    radix = get_radix(v4, 0);
    v7 = v23;
    v8 = BYTE4(v23) & 0x9F;
    BYTE4(v23) &= 0x9Fu;
    if ( (v4 & 0x20000) != 0 )
    {
      BYTE1(v7) = BYTE1(v23) & 0xF8 | 4;
      LODWORD(v23) = v7;
      if ( radix != 2 )
      {
        if ( radix > 2 )
        {
          if ( radix == 8 )
          {
LABEL_37:
            BYTE1(v7) |= 1u;
            LODWORD(v23) = v7;
            goto LABEL_13;
          }
          v9 = 64;
          if ( radix == 10 )
          {
LABEL_12:
            BYTE4(v23) = v9 | v8;
            goto LABEL_13;
          }
          goto LABEL_13;
        }
LABEL_38:
        if ( radix == 1 )
LABEL_35:
          BYTE4(v23) = v8 | 0x20;
LABEL_13:
        v18 = 0;
        if ( (unsigned __int8)create_tinfo(&v18, 45, 45, &v19) && !(unsigned int)save_tinfo(&v18, 0, 0, v2, 1) )
          *(_QWORD *)(a2 + 8) = get_tinfo_tid(&v18, 0);
        clear_tinfo_t(&v18);
        if ( ptr )
        {
          *(_QWORD *)&v22 = 0;
          qfree(ptr);
        }
        v10 = (char *)v19;
        if ( v19 )
        {
          v11 = v20;
          if ( (_QWORD)v20 )
          {
            v12 = 0;
            v13 = 0;
            do
            {
              v14 = &v10[v12];
              v15 = *(void **)&v10[v12 + 24];
              if ( v15 )
              {
                *((_QWORD *)v14 + 4) = 0;
                qfree(v15);
              }
              v16 = *(void **)v14;
              if ( *(_QWORD *)v14 )
              {
                *((_QWORD *)v14 + 1) = 0;
                qfree(v16);
              }
              ++v13;
              v10 = (char *)v19;
              v12 += 56;
            }
            while ( v11 != v13 );
          }
          *(_QWORD *)&v20 = 0;
          qfree(v10);
        }
        return 0;
      }
    }
    else
    {
      BYTE1(v7) = BYTE1(v23) & 0xF8;
      LODWORD(v23) = v7;
      if ( radix != 2 )
      {
        if ( radix > 2 )
        {
          if ( radix != 8 )
          {
            v9 = 96;
            if ( radix != 10 )
              goto LABEL_13;
            goto LABEL_12;
          }
          goto LABEL_37;
        }
        goto LABEL_38;
      }
    }
    BYTE1(v7) |= 2u;
    LODWORD(v23) = v7;
    goto LABEL_13;
  }
  return 0;
}
