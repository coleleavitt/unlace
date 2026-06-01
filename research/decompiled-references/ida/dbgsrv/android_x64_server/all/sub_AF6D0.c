/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_AF6D0
// Address: 0x00000000000AF6D0

//----- (00000000000AF6D0) ----------------------------------------------------
__int64 sub_AF6D0(int a1, ...)
{
  __int64 v1; // rbx
  __int64 gp_offset; // rax
  unsigned int v3; // ecx
  char *v4; // rdi
  char *v5; // rcx
  _QWORD *v6; // rax
  unsigned int v7; // eax
  __int64 v8; // rax
  unsigned int v9; // ecx
  char *v10; // rdi
  __int64 *v11; // rcx
  unsigned int v12; // eax
  unsigned int *v13; // rcx
  char **overflow_arg_area; // rax
  __int128 *v15; // rax
  unsigned int *v16; // rcx
  char **v17; // rax
  __int64 v18; // rcx
  const char **v19; // rcx
  const char *v20; // rax
  bool v21; // zf
  const char *v22; // rcx
  const char *v23; // rbx
  char *v24; // rax
  char *v25; // rax
  __int128 **v26; // rax
  __int128 *v27; // rax
  int v28; // eax
  __int64 v30; // [rsp+8h] [rbp-2930h]
  __int128 arg; // [rsp+C0h] [rbp-2878h] BYREF
  __int64 v32; // [rsp+D0h] [rbp-2868h]
  gcc_va_list va; // [rsp+E0h] [rbp-2858h] BYREF
  char s[10240]; // [rsp+100h] [rbp-2838h] BYREF
  unsigned __int64 v35; // [rsp+2900h] [rbp-38h]

  va_start(va, a1);
  v35 = __readfsqword(0x28u);
  v1 = 0;
  switch ( a1 )
  {
    case 23:
      gp_offset = (int)va[0].gp_offset;
      if ( (unsigned __int64)(int)va[0].gp_offset >= 0x29 )
      {
        overflow_arg_area = (char **)va[0].overflow_arg_area;
        va[0].overflow_arg_area = (char *)va[0].overflow_arg_area + 8;
        v4 = *overflow_arg_area;
      }
      else
      {
        v3 = va[0].gp_offset + 8;
        va[0].gp_offset = v3;
        v4 = *(char **)((char *)va[0].reg_save_area + gp_offset);
        if ( v3 <= 0x28 )
        {
          v5 = (char *)va[0].reg_save_area + (int)v3;
          va[0].gp_offset = gp_offset + 16;
          goto LABEL_19;
        }
      }
      v5 = (char *)va[0].overflow_arg_area;
      va[0].overflow_arg_area = (char *)va[0].overflow_arg_area + 8;
LABEL_19:
      v15 = *(__int128 **)v5;
      v32 = *(_QWORD *)(*(_QWORD *)v5 + 16LL);
      arg = *v15;
      qvprintf(v4, &arg);
      return 0;
    case 24:
      v12 = va[0].gp_offset;
      if ( (unsigned __int64)(int)va[0].gp_offset > 0x28 )
      {
        v13 = (unsigned int *)va[0].overflow_arg_area;
        va[0].overflow_arg_area = (char *)va[0].overflow_arg_area + 8;
      }
      else
      {
        v13 = (unsigned int *)((char *)va[0].reg_save_area + (int)va[0].gp_offset);
        v12 = va[0].gp_offset + 8;
        va[0].gp_offset += 8;
      }
      v18 = *v13;
      if ( v18 == 10 )
        return 0;
      v30 = v18;
      if ( v12 > 0x28 )
      {
        v19 = (const char **)va[0].overflow_arg_area;
        va[0].overflow_arg_area = (char *)va[0].overflow_arg_area + 8;
      }
      else
      {
        v19 = (const char **)((char *)va[0].reg_save_area + (int)v12);
        va[0].gp_offset = v12 + 8;
      }
      v20 = *v19;
      v21 = *v19 == nullptr;
      v22 = "<null>";
      if ( !v21 )
        v22 = v20;
      do
      {
        do
        {
          v23 = v22;
          if ( strncmp(v22, "ICON ", 5u) && strncmp(v23, "AUTOHIDE ", 9u) && strncmp(v23, "@0:", 3u) )
            break;
          v24 = strchr(v23, 10);
          v22 = v24 + 1;
        }
        while ( v24 );
        if ( strncmp(v23, "HELP\n", 5u) )
          break;
        v25 = strstr(v23, "ENDHELP\n");
        v22 = v25 + 8;
      }
      while ( v25 );
      if ( (unsigned __int64)(int)va[0].gp_offset > 0x28 )
      {
        v26 = (__int128 **)va[0].overflow_arg_area;
        va[0].overflow_arg_area = (char *)va[0].overflow_arg_area + 8;
      }
      else
      {
        v26 = (__int128 **)((char *)va[0].reg_save_area + (int)va[0].gp_offset);
        va[0].gp_offset += 8;
      }
      v27 = *v26;
      v32 = *((_QWORD *)v27 + 2);
      arg = *v27;
      qvsnprintf(s, 10240, v23, (__int64)&arg);
      v1 = 0;
      printf("%s: %s\n", off_14F9D0[v30], s);
      if ( (unsigned int)v30 <= 8 )
      {
        v28 = 473;
        if ( _bittest(&v28, v30) )
          qexit(1);
      }
      return v1;
    case 25:
    case 26:
    case 27:
    case 29:
    case 30:
    case 31:
    case 32:
    case 33:
    case 34:
    case 35:
    case 36:
    case 37:
    case 38:
    case 39:
    case 40:
    case 41:
    case 42:
    case 43:
    case 44:
    case 45:
    case 46:
    case 47:
    case 48:
    case 49:
    case 50:
    case 51:
      return v1;
    case 28:
      v7 = va[0].gp_offset;
      va[0].gp_offset += 8;
      if ( v7 + 8 >= 0x29 )
      {
        va[0].overflow_arg_area = (char *)va[0].overflow_arg_area + 8;
        goto LABEL_21;
      }
      va[0].gp_offset = v7 + 16;
      if ( v7 + 16 >= 0x29 )
      {
LABEL_21:
        va[0].overflow_arg_area = (char *)va[0].overflow_arg_area + 8;
        goto LABEL_22;
      }
      va[0].gp_offset = v7 + 24;
      if ( v7 + 24 <= 0x28 )
      {
        va[0].gp_offset = v7 + 32;
        return *(unsigned int *)((char *)va[0].reg_save_area + (int)(v7 + 24));
      }
LABEL_22:
      v16 = (unsigned int *)va[0].overflow_arg_area;
      va[0].overflow_arg_area = (char *)va[0].overflow_arg_area + 8;
      return *v16;
    case 52:
      v8 = (int)va[0].gp_offset;
      if ( (unsigned __int64)(int)va[0].gp_offset >= 0x29 )
      {
        v17 = (char **)va[0].overflow_arg_area;
        va[0].overflow_arg_area = (char *)va[0].overflow_arg_area + 8;
        v10 = *v17;
      }
      else
      {
        v9 = va[0].gp_offset + 8;
        va[0].gp_offset = v9;
        v10 = *(char **)((char *)va[0].reg_save_area + v8);
        if ( v9 <= 0x28 )
        {
          v11 = (__int64 *)((char *)va[0].reg_save_area + (int)v9);
          va[0].gp_offset = v8 + 16;
          goto LABEL_25;
        }
      }
      v11 = (__int64 *)va[0].overflow_arg_area;
      va[0].overflow_arg_area = (char *)va[0].overflow_arg_area + 8;
LABEL_25:
      qsnprintf(v10, *v11, "%d.%d", 9, 30);
      return 1;
    default:
      if ( a1 == 86 )
      {
        if ( (unsigned __int64)(int)va[0].gp_offset > 0x28 )
        {
          v6 = va[0].overflow_arg_area;
          va[0].overflow_arg_area = (char *)va[0].overflow_arg_area + 8;
        }
        else
        {
          v6 = (char *)va[0].reg_save_area + (int)va[0].gp_offset;
          va[0].gp_offset += 8;
        }
        return (**(__int64 (__fastcall ***)(_QWORD))*v6)(*v6);
      }
      return v1;
  }
}
// AF81E: conditional instruction was optimized away because %var_2858.4==8
// 14F9D0: using guessed type char *off_14F9D0[12];
