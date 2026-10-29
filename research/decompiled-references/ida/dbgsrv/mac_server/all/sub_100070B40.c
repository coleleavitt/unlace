/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100070B40
// Address: 0x0000000100070B40

//----- (0000000100070B40) ----------------------------------------------------
__int64 sub_100070B40(int a1, ...)
{
  __int64 v1; // rax
  void *v2; // rsp
  __int64 result; // rax
  __int64 gp_offset; // rcx
  char *v5; // rdi
  __va_list_tag **v6; // rax
  _QWORD *v7; // rax
  __int64 v8; // rax
  __int64 v9; // rcx
  char *v10; // rdi
  signed __int64 *v11; // rax
  unsigned int v12; // r12d
  unsigned int *v13; // rax
  unsigned int *v14; // rcx
  char **overflow_arg_area; // rax
  char **v16; // rax
  __int64 v17; // rax
  const char **v18; // rax
  const char *v19; // rax
  const char *v20; // rcx
  char *v21; // rax
  char *v22; // rbx
  int v23; // eax
  char *v24; // rax
  __va_list_tag **v25; // rax
  char *v26; // rsi
  int v27; // eax
  unsigned __int8 v28; // cf
  __int64 v29; // [rsp+B8h] [rbp-2878h]
  va_list v30; // [rsp+C0h] [rbp-2870h] BYREF
  va_list va; // [rsp+E0h] [rbp-2850h] BYREF
  char __str[10240]; // [rsp+100h] [rbp-2830h] BYREF
  __int64 v33; // [rsp+2900h] [rbp-30h]

  v33 = v1;
  v2 = alloca(10496);
  va_start(va, a1);
  result = 0;
  switch ( a1 )
  {
    case 23:
      gp_offset = va[0].gp_offset;
      if ( va[0].gp_offset >= 0x29uLL )
      {
        overflow_arg_area = (char **)va[0].overflow_arg_area;
        va[0].overflow_arg_area = (char *)va[0].overflow_arg_area + 8;
        v5 = *overflow_arg_area;
        v6 = (__va_list_tag **)va[0].overflow_arg_area;
        va[0].overflow_arg_area = (char *)va[0].overflow_arg_area + 8;
      }
      else
      {
        va[0].gp_offset += 8;
        v5 = *(char **)((char *)va[0].reg_save_area + gp_offset);
        v6 = (__va_list_tag **)((char *)va[0].reg_save_area + gp_offset + 8);
        va[0].gp_offset = gp_offset + 16;
      }
      v30[0] = **v6;
      qvprintf(v5, v30);
      return 0;
    case 24:
      v12 = va[0].gp_offset;
      if ( va[0].gp_offset > 0x28uLL )
      {
        v13 = (unsigned int *)va[0].overflow_arg_area;
        va[0].overflow_arg_area = (char *)va[0].overflow_arg_area + 8;
      }
      else
      {
        v13 = (unsigned int *)((char *)va[0].reg_save_area + va[0].gp_offset);
        v12 = va[0].gp_offset + 8;
        va[0].gp_offset += 8;
      }
      v17 = *v13;
      if ( v17 == 10 )
        return 0;
      v29 = v17;
      if ( v12 > 0x28 )
      {
        v18 = (const char **)va[0].overflow_arg_area;
        va[0].overflow_arg_area = (char *)va[0].overflow_arg_area + 8;
      }
      else
      {
        v18 = (const char **)((char *)va[0].reg_save_area + v12);
        v12 += 8;
        va[0].gp_offset = v12;
      }
      v19 = *v18;
      v20 = "<null>";
      if ( v19 )
        v20 = v19;
      do
      {
        do
        {
          v22 = (char *)v20;
          if ( strncmp(v20, "ICON ", 5u) && strncmp(v22, "AUTOHIDE ", 9u) )
          {
            v23 = (unsigned __int8)*v22 - 64;
            if ( *v22 == 64 )
            {
              v23 = (unsigned __int8)v22[1] - 48;
              if ( v22[1] == 48 )
                v23 = (unsigned __int8)v22[2] - 58;
            }
            if ( v23 )
              break;
          }
          v21 = strchr(v22, 10);
          v20 = v21 + 1;
        }
        while ( v21 );
        if ( strncmp(v22, "HELP\n", 5u) )
          break;
        v24 = strstr(v22, "ENDHELP\n");
        v20 = v24 + 8;
      }
      while ( v24 );
      if ( v12 > 0x28 )
      {
        v25 = (__va_list_tag **)va[0].overflow_arg_area;
        va[0].overflow_arg_area = (char *)va[0].overflow_arg_area + 8;
      }
      else
      {
        v25 = (__va_list_tag **)((char *)va[0].reg_save_area + v12);
        va[0].gp_offset = v12 + 8;
      }
      v30[0] = **v25;
      qvsnprintf(__str, 10240, v22, v30);
      v26 = (char *)qword_100090990 + *((int *)qword_100090990 + v29);
      printf("%s: %s\n", v26, __str);
      if ( (unsigned int)v29 > 8 )
        return 0;
      v27 = 473;
      v28 = _bittest(&v27, v29);
      result = 0;
      if ( v28 )
      {
        qexit(1, (__va_list_tag *)v26);
        return 0;
      }
      return result;
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
      return result;
    case 28:
      v8 = va[0].gp_offset;
      if ( va[0].gp_offset >= 0x29uLL )
      {
        va[0].overflow_arg_area = (char *)va[0].overflow_arg_area + 8;
        va[0].overflow_arg_area = (char *)va[0].overflow_arg_area + 8;
        va[0].overflow_arg_area = (char *)va[0].overflow_arg_area + 8;
        v14 = (unsigned int *)va[0].overflow_arg_area;
        va[0].overflow_arg_area = (char *)va[0].overflow_arg_area + 8;
        return *v14;
      }
      else
      {
        va[0].gp_offset |= 0x20u;
        return *(unsigned int *)((char *)va[0].reg_save_area + v8 + 24);
      }
    case 52:
      v9 = va[0].gp_offset;
      if ( va[0].gp_offset >= 0x29uLL )
      {
        v16 = (char **)va[0].overflow_arg_area;
        va[0].overflow_arg_area = (char *)va[0].overflow_arg_area + 8;
        v10 = *v16;
        v11 = (signed __int64 *)va[0].overflow_arg_area;
        va[0].overflow_arg_area = (char *)va[0].overflow_arg_area + 8;
      }
      else
      {
        va[0].gp_offset += 8;
        v10 = *(char **)((char *)va[0].reg_save_area + v9);
        v11 = (signed __int64 *)((char *)va[0].reg_save_area + v9 + 8);
        va[0].gp_offset = v9 + 16;
      }
      qsnprintf(v10, *v11, "%d.%d", 9, 30);
      return 1;
    default:
      if ( a1 == 86 )
      {
        if ( va[0].gp_offset > 0x28uLL )
        {
          v7 = va[0].overflow_arg_area;
          va[0].overflow_arg_area = (char *)va[0].overflow_arg_area + 8;
        }
        else
        {
          v7 = (char *)va[0].reg_save_area + va[0].gp_offset;
          va[0].gp_offset += 8;
        }
        return (**(__int64 (__fastcall ***)(_QWORD))*v7)(*v7);
      }
      return result;
  }
}
// 100070C3F: conditional instruction was optimized away because ecx.4==8
// 100070CA7: conditional instruction was optimized away because eax.4==8
// 100070CB9: conditional instruction was optimized away because eax.4==8
// 100070CCC: conditional instruction was optimized away because eax.4==8
// 100070D14: conditional instruction was optimized away because ecx.4==8
// 100070B4D: variable 'v1' is possibly undefined
// 100090990: using guessed type __int64 qword_100090990[6];
