__int64 __fastcall sub_33C0F0(__int64 a1, char *a2, __int64 *a3, __int64 *a4)
{
  const char *v5; // rbx
  char v6; // al
  unsigned int v7; // ebp
  char *v8; // r14
  char *v9; // rax
  const char *v10; // r15
  size_t v11; // rcx
  const char *v12; // rbx
  size_t v13; // rax
  size_t v14; // r14
  char *v15; // rax
  char *v16; // rbx
  unsigned __int64 v17; // rdx
  char *v18; // rax
  int v19; // r15d
  const char *v20; // r14
  const char *file_ext; // rax
  size_t v22; // rax
  size_t v23; // r14
  __int64 v24; // rdi
  const char *v25; // rbx
  int v27; // eax
  void *v28; // rdi
  char *v29; // rdx
  __int64 v30; // rax
  char *v31; // rdx
  void *v32; // rdi
  __int64 v33; // rax
  char *s1; // [rsp+18h] [rbp-1050h]
  char *s1a; // [rsp+18h] [rbp-1050h]
  char *s1b; // [rsp+18h] [rbp-1050h]
  char s[4104]; // [rsp+20h] [rbp-1048h] BYREF
  unsigned __int64 v40; // [rsp+1028h] [rbp-40h]

  v5 = a2;
  v40 = __readfsqword(0x28u);
  v6 = *a2;
  if ( *a2 == 45 )
  {
    v7 = 32;
    while ( 1 )
    {
      v8 = (char *)(v5 + 1);
      v9 = strchr(v5 + 1, 58);
      if ( v9 )
      {
        v10 = v9 + 1;
        v11 = v9 - v8;
      }
      else
      {
        v11 = strlen(v5 + 1);
        v10 = &v8[v11];
      }
      if ( v11 == 3 )
      {
        if ( *(_WORD *)v8 != 25966 || v5[3] != 119 )
          goto LABEL_17;
        v7 |= 2u;
        goto LABEL_11;
      }
      if ( v11 == 4 )
      {
        switch ( *(_DWORD *)(v5 + 1) )
        {
          case 0x73727265:
            v7 |= 8u;
            break;
          case 0x74617473:
            v7 |= 0x40u;
            break;
          case 0x66726570:
            v7 |= 0x200000u;
            break;
          case 0x74736574:
            v7 |= 0x8000u;
            break;
          default:
            goto LABEL_17;
        }
        goto LABEL_11;
      }
      if ( v11 == 6 )
        break;
      if ( v11 == 8 )
      {
        if ( *(_QWORD *)(v5 + 1) == 0x73636E756662696CLL )
        {
          *(_DWORD *)(a1 + 604) |= 0x1000000u;
          goto LABEL_11;
        }
LABEL_6:
        if ( *(_DWORD *)v8 != 1818845549 )
          goto LABEL_7;
        goto LABEL_21;
      }
      if ( v11 <= 5 )
        goto LABEL_17;
      if ( *(_DWORD *)v8 != 1818845549 )
      {
LABEL_7:
        if ( *(_DWORD *)v8 == 1768781164 && *(_WORD *)(v5 + 5) == 24942 )
        {
          if ( v5[7] == 64 )
          {
            v27 = 60 * strtol(v5 + 8, nullptr, 10);
            *(_DWORD *)(a1 + 1340) = v27;
            if ( !v27 )
              goto LABEL_17;
          }
          LOBYTE(v7) = v7 | 0x80;
        }
        else
        {
          if ( v11 != 8 || *(_QWORD *)(v5 + 1) != 0x6568636163657375LL )
            goto LABEL_17;
          *(_DWORD *)(a1 + 604) |= 0x8000000u;
        }
        goto LABEL_11;
      }
LABEL_21:
      if ( v5[5] != 61 )
        goto LABEL_7;
      v12 = v5 + 6;
      v13 = strlen(v12);
      v14 = v13;
      if ( v13 )
      {
        v28 = *(void **)(a1 + 952);
        v29 = (char *)(v13 + 1);
        if ( *(_QWORD *)(a1 + 968) < v13 + 1 )
        {
          s1a = (char *)(v13 + 1);
          v30 = qvector_reserve(a1 + 952, *(_QWORD *)(a1 + 952), v29, 1);
          v29 = s1a;
          *(_QWORD *)(a1 + 952) = v30;
          v28 = (void *)v30;
        }
        *(_QWORD *)(a1 + 960) = v29;
        memmove(v28, v12, v14);
        *(_BYTE *)(*(_QWORD *)(a1 + 952) + v14) = 0;
LABEL_11:
        v6 = *v10;
        if ( *v10 != 45 )
          goto LABEL_24;
        goto LABEL_12;
      }
      *(_QWORD *)(a1 + 960) = 0;
      v6 = *v10;
      if ( *v10 != 45 )
        goto LABEL_24;
LABEL_12:
      v5 = v10;
    }
    if ( *(_DWORD *)v8 == 1634955118 && *(_WORD *)(v5 + 5) == 25974 )
    {
      if ( getinf(91) )
        set_database_flag(1, 1);
      goto LABEL_11;
    }
    goto LABEL_6;
  }
  v10 = a2;
  v7 = 32;
LABEL_24:
  if ( v6 )
  {
    if ( v6 == 43 )
    {
      v7 |= 1u;
      ++v10;
    }
    v15 = strchr(v10, 58);
    v16 = v15;
    if ( !v15 )
    {
LABEL_17:
      set_database_flag(1, 1);
      sub_319070((__int64)"AUTOHIDE NONE\n"
                          "Wrong options for the decompiler plugin.\n"
                          "\n"
                          "The format is: -Ohexrays:-option1:-option2...:outfile:func1:func2...\n"
                          "  Valid options are:\n"
                          "    -new    decompile only if output file does not exist\n"
                          "    -nosave do not save to existing database (idb) file\n"
                          "    -errs   send problematic databases to Hex-Rays\n"
                          "    -lumina use Lumina server\n"
                          "    -libfuncs decompile library functions too\n"
                          "    -usecache use cached microcode and pseudocode\n"
                          "    -mail=my@mail.com your email (if -errs option is used)\n"
                          "\n"
                          "  The output file name can be prepended with + to append to it\n"
                          "  If the specified file extension is invalid, .c will be used\n"
                          "\n"
                          "  The functions can be specified by their addresses or names\n"
                          "  The ALL keyword means all non-library non-trivial functions\n"
                          "\n"
                          "Example: \"-Ohexrays:-errs:-mail=john@mail.com:outfile:ALL\"\n"
                          " will decompile all nonlibrary non-trivial (having more than\n"
                          "one instruction) functions to outfile.*. In the case of an\n"
                          "error, the .idb file will be sent to hex-rays.com\n");
    }
    v17 = v15 - v10 + 1;
    if ( v17 > 0x1000 )
      v17 = 4096;
    qstrncpy(s, v10, v17);
    v18 = "rs";
    v19 = *(_DWORD *)(a1 + 1336) & 0x4000;
    if ( !v19 )
      v18 = "c";
    v20 = v18;
    file_ext = (const char *)get_file_ext(s);
    if ( !file_ext || (s1 = (char *)file_ext, strcasecmp(file_ext, v20)) && (v19 || strcasecmp(s1, "cpp")) )
      set_file_ext(s, 4096, s, v20);
    v22 = strlen(s);
    v23 = v22;
    if ( v22 )
    {
      v31 = (char *)(v22 + 1);
      v32 = (void *)*a3;
      if ( a3[2] < v22 + 1 )
      {
        s1b = (char *)(v22 + 1);
        v33 = qvector_reserve(a3, *a3, v31, 1);
        v31 = s1b;
        *a3 = v33;
        v32 = (void *)v33;
      }
      a3[1] = (__int64)v31;
      memmove(v32, s, v23);
      *(_BYTE *)(*a3 + v23) = 0;
    }
    else
    {
      a3[1] = 0;
    }
    if ( a4 )
    {
      v24 = *a4;
      if ( *a4 )
      {
        a4[1] = 0;
        qfree(v24);
        *a4 = 0;
        a4[2] = 0;
      }
      v25 = v16 + 1;
      if ( strcmp(v25, "ALL") )
        sub_361F60(a1, a4, v25);
    }
  }
  return v7;
}
