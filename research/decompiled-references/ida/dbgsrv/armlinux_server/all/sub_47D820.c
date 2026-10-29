/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47D820
// Address: 0x000000000047D820

//----- (000000000047D820) ----------------------------------------------------
__int64 sub_47D820(
        unsigned int a1,
        double a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7,
        double a8,
        double a9,
        ...)
{
  __int64 v9; // x21
  int v10; // w23
  char *v11; // x20
  char *v12; // x0
  char *v13; // x0
  int gr_offs; // w1
  __int64 **stack; // x0
  __int64 *v17; // x4
  __int64 v18; // x7
  __int64 v19; // x4
  __int64 v20; // x5
  __int64 *v21; // t2
  bool v22; // cc
  __int64 v23; // x5
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // [xsp+50h] [xbp-28B0h] BYREF
  __int64 v27; // [xsp+58h] [xbp-28A8h]
  __int64 v28; // [xsp+60h] [xbp-28A0h]
  __int64 v29; // [xsp+68h] [xbp-2898h]
  gcc_va_list va; // [xsp+78h] [xbp-2888h] BYREF
  __int64 v31; // [xsp+98h] [xbp-2868h]
  __int64 v32; // [xsp+A0h] [xbp-2860h]
  __int64 v33; // [xsp+A8h] [xbp-2858h]
  __int64 v34; // [xsp+B0h] [xbp-2850h]
  char v35[10240]; // [xsp+B8h] [xbp-2848h] BYREF
  char *v36; // [xsp+28C8h] [xbp-38h]
  __int64 *v37; // [xsp+28D0h] [xbp-30h]
  __int64 v38; // [xsp+28D8h] [xbp-28h]
  __int64 v39; // [xsp+28E0h] [xbp-20h]

  va_start(va, a9);
  v36 = va_arg(va, char *);
  v37 = va_arg(va, __int64 *);
  v38 = va_arg(va, _QWORD);
  v39 = va_arg(va, _QWORD);
  va_end(va);
  va_start(va, a9);
  v9 = 0;
  if ( a1 == 28 )
  {
    va[0].__gr_offs = -24;
    return (unsigned int)v39;
  }
  if ( a1 > 0x1C )
  {
    if ( a1 == 52 )
    {
      va[0].__gr_offs = -40;
      sub_49B748(v36, (unsigned __int64)v37, "%d.%d", 9, 30);
      return 1;
    }
    else if ( a1 == 86 )
    {
      va[0].__gr_offs = -48;
      return (**(__int64 (__fastcall ***)(char *, double, double, double, double, double, double, double, double))v36)(
               v36,
               a2,
               a3,
               a4,
               a5,
               a6,
               a7,
               a8,
               a9);
    }
  }
  else
  {
    if ( a1 == 23 )
    {
      v23 = v37[1];
      v31 = *v37;
      v32 = v23;
      va[0].__gr_offs = -40;
      v24 = v37[2];
      v25 = v37[3];
      v26 = v31;
      v27 = v23;
      v28 = v24;
      v29 = v25;
      v33 = v24;
      v34 = v25;
      sub_49B6D8(v36, &v26);
      return v9;
    }
    if ( a1 == 24 )
    {
      va[0].__gr_offs = -48;
      v10 = (int)v36;
      if ( (_DWORD)v36 != 10 )
      {
        v11 = (char *)v37;
        va[0].__gr_offs = -40;
        if ( !v37 )
          v11 = "<null>";
        while ( 1 )
        {
          if ( !strncmp(v11, "ICON ", 5u) )
            goto LABEL_14;
LABEL_9:
          if ( !strncmp(v11, "AUTOHIDE ", 9u) || !strncmp(v11, "@0:", 3u) )
            goto LABEL_14;
          do
          {
            if ( strncmp(v11, "HELP\n", 5u) || (v12 = strstr(v11, "ENDHELP\n")) == nullptr )
            {
              gr_offs = va[0].__gr_offs;
              stack = (__int64 **)va[0].__stack;
              va[0].__gr_offs += 8;
              if ( gr_offs + 8 > 0 )
                va[0].__stack = (void *)(((unsigned __int64)va[0].__stack + 15) & 0xFFFFFFFFFFFFFFF8LL);
              else
                stack = (__int64 **)((char *)va[0].__gr_top + gr_offs);
              v17 = *stack;
              v18 = (*stack)[1];
              v31 = **stack;
              v32 = v18;
              v21 = v17 + 2;
              v19 = v17[2];
              v20 = v21[1];
              v26 = v31;
              v27 = v18;
              v28 = v19;
              v29 = v20;
              v33 = v19;
              v34 = v20;
              sub_49B318(v35, 0x2800u, v11, &v26);
              __printf_chk(1, "%s: %s\n", off_51BD10[v10], v35);
              if ( v10 )
                v22 = (unsigned int)(v10 - 3) > 1;
              else
                v22 = 0;
              if ( !v22 || (unsigned int)(v10 - 6) <= 2 )
                sub_4922C0(1);
              return v9;
            }
            v11 = v12 + 8;
            if ( strncmp(v12 + 8, "ICON ", 5u) )
              goto LABEL_9;
LABEL_14:
            v13 = strchr(v11, 10);
          }
          while ( !v13 );
          v11 = v13 + 1;
        }
      }
    }
  }
  return v9;
}
// 47D820: could not find valid save-restore pair for x23
// 47DA10: conditional instruction was optimized away because %var_2888@24.4==FFFFFFD8
// 406030: using guessed type __int64 __printf_chk(_QWORD, const char *, ...);
// 51BD10: using guessed type char *off_51BD10[14];
