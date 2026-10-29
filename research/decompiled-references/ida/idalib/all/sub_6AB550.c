unsigned __int64 __fastcall sub_6AB550(void *a1, const char *a2)
{
  __int64 ph; // r13
  int v4; // eax
  const char *v5; // rdx
  int v6; // eax
  __int64 v7; // [rsp+0h] [rbp-60h] BYREF
  __int64 v8; // [rsp+8h] [rbp-58h] BYREF
  _QWORD v9[3]; // [rsp+10h] [rbp-50h] BYREF
  unsigned __int64 v10; // [rsp+28h] [rbp-38h]

  v10 = __readfsqword(0x28u);
  if ( unk_2C81928 )
  {
    v7 = 0;
    ph = get_ph(a1, a2);
    if ( (getinf(57) & 0xF) == 6 && (unsigned __int8)getinf_flag(3, 4)
      || (getinf(57) & 0xF) == 6
      && !(unsigned __int8)getinf_flag(3, 4)
      && ((v6 = *(_DWORD *)(ph + 4), v6 == 12) || v6 == 15) )
    {
      if ( !strcmp(a2, "__gnuc_va_list") )
      {
        v8 = 0;
        sub_6AB850(&v8, a1, "__va_list_tag");
        v9[0] = 0;
        v9[1] = 0x100000000LL;
        copy_tinfo_t(v9);
        create_tinfo(&v7, 11, 11, v9);
        clear_tinfo_t(v9);
        clear_tinfo_t(&v8);
      }
      else
      {
        if ( strcmp(a2, "va_list") )
        {
          if ( !strcmp(a2, "__va_list_tag") )
          {
            v4 = *(_DWORD *)(ph + 4);
            v5 = "struct __va_list_tag {  void *__stack;  void *__gr_top;  void *__vr_top;  int __gr_offs;  int __vr_offs;}";
            if ( v4 != 13 )
            {
              v5 = "struct __va_list_tag {  unsigned char gpr;  unsigned char fpr;  char *overflow_arg_area;  char *reg_save_area;}";
              if ( v4 != 15 )
              {
                v5 = "struct __va_list_tag {  void *__overflow_argptr;  void *__gpr_top;  void *__fpr_top;  unsigned __in"
                     "t8 __gpr_offset;  unsigned __int8 __fpr_offset;  unsigned __int8 __reserved[2];};";
                if ( v4 != 12 )
                  v5 = "struct __va_list_tag {  unsigned int gp_offset;  unsigned int fp_offset;  void *overflow_arg_area"
                       ";  void *reg_save_area;}";
              }
            }
            h2ti(a1, 0, (__int64)v5, 1024, 0, 0, nullptr, 0, 0);
          }
          goto LABEL_6;
        }
        sub_6AB850(&v7, a1, "__gnuc_va_list");
      }
    }
    else
    {
      if ( strcmp(a2, "__builtin_va_list") )
      {
LABEL_6:
        clear_tinfo_t(&v7);
        return v10 - __readfsqword(0x28u);
      }
      v9[0] = 0;
      get_stock_tinfo(v9, 8);
      copy_tinfo_t(&v7);
      clear_tinfo_t(v9);
    }
    save_tinfo(&v7, a1, 0, a2, 1);
    clear_tinfo_t(&v7);
  }
  return v10 - __readfsqword(0x28u);
}
