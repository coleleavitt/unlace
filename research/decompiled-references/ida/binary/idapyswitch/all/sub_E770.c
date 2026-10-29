__int64 __fastcall sub_E770(
        unsigned int a1,
        __int64 (__fastcall ***a2)(_QWORD),
        const __m128i *a3,
        const __m128i *a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v6; // rbx
  unsigned __int64 v8; // r12
  const __m128i *v9; // rbp
  char *v10; // rax
  char *v11; // rax
  __int64 v12; // rax
  __m128i v13; // [rsp+18h] [rbp-2890h] BYREF
  __int64 v14; // [rsp+28h] [rbp-2880h]
  char s[10248]; // [rsp+30h] [rbp-2878h] BYREF
  unsigned __int64 v16; // [rsp+2838h] [rbp-70h]
  __int64 (__fastcall ***v17)(_QWORD); // [rsp+2848h] [rbp-60h]
  const __m128i *v18; // [rsp+2850h] [rbp-58h]
  const __m128i *v19; // [rsp+2858h] [rbp-50h]
  __int64 v20; // [rsp+2860h] [rbp-48h]
  __int64 v21; // [rsp+2868h] [rbp-40h]

  v17 = a2;
  v18 = a3;
  v19 = a4;
  v20 = a5;
  v21 = a6;
  v16 = __readfsqword(0x28u);
  if ( a1 == 28 )
    return (unsigned int)v20;
  v6 = 0;
  if ( a1 <= 0x1C )
  {
    if ( a1 == 23 )
    {
      v13 = _mm_loadu_si128(v18);
      v14 = v18[1].m128i_i64[0];
      sub_12790(v17, &v13);
    }
    else if ( a1 == 24 )
    {
      v8 = (unsigned int)v17;
      if ( (_DWORD)v17 != 10 )
      {
        v9 = v18;
        if ( !v18 )
          v9 = (const __m128i *)"<null>";
        while ( 1 )
        {
          while ( !strncmp(v9->m128i_i8, "ICON ", 5u)
               || !strncmp(v9->m128i_i8, "AUTOHIDE ", 9u)
               || v9->m128i_i8[0] == 64 && v9->m128i_i8[1] == 48 && v9->m128i_i8[2] == 58 )
          {
            v11 = strchr(v9->m128i_i8, 10);
            if ( !v11 )
              break;
            v9 = (const __m128i *)(v11 + 1);
          }
          if ( strncmp(v9->m128i_i8, "HELP\n", 5u) )
            break;
          v10 = strstr(v9->m128i_i8, "ENDHELP\n");
          if ( !v10 )
            break;
          v9 = (const __m128i *)(v10 + 8);
        }
        v13 = _mm_loadu_si128(v19);
        v14 = v19[1].m128i_i64[0];
        sub_124B0(s);
        __printf_chk();
        if ( (unsigned int)v8 <= 8 )
        {
          v12 = 473;
          if ( _bittest64(&v12, v8) )
            sub_117A0(1);
        }
      }
    }
  }
  else if ( a1 == 52 )
  {
    LOBYTE(v6) = 1;
    sub_127D0((_DWORD)v17, (_DWORD)v18, (unsigned int)"%d.%d", 9, 30, a6);
  }
  else if ( a1 == 86 )
  {
    return (**v17)(v17);
  }
  return v6;
}

