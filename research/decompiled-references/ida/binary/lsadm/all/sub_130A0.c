__int64 __fastcall sub_130A0(
        unsigned int a1,
        __int64 (__fastcall ***a2)(_QWORD),
        const __m128i *a3,
        const __m128i *a4,
        __int64 a5,
        __int64 a6,
        char a7)
{
  __int64 v7; // rbx
  unsigned __int64 v9; // r12
  const __m128i *v10; // rbp
  char *v11; // rax
  char *v12; // rax
  __int64 v13; // rax
  __m128i v14; // [rsp+18h] [rbp-2890h] BYREF
  __int64 v15; // [rsp+28h] [rbp-2880h]
  char s[10248]; // [rsp+30h] [rbp-2878h] BYREF
  unsigned __int64 v17; // [rsp+2838h] [rbp-70h]
  __int64 (__fastcall ***v18)(_QWORD); // [rsp+2848h] [rbp-60h]
  const __m128i *v19; // [rsp+2850h] [rbp-58h]
  const __m128i *v20; // [rsp+2858h] [rbp-50h]
  __int64 v21; // [rsp+2860h] [rbp-48h]
  __int64 v22; // [rsp+2868h] [rbp-40h]

  v18 = a2;
  v19 = a3;
  v20 = a4;
  v21 = a5;
  v22 = a6;
  v17 = __readfsqword(0x28u);
  if ( a1 == 28 )
    return (unsigned int)v21;
  v7 = 0;
  if ( a1 <= 0x1C )
  {
    if ( a1 == 23 )
    {
      v14 = _mm_loadu_si128(v19);
      v15 = v19[1].m128i_i64[0];
      sub_2BD90(v18, &v14);
    }
    else if ( a1 == 24 )
    {
      v9 = (unsigned int)v18;
      if ( (_DWORD)v18 != 10 )
      {
        v10 = v19;
        if ( !v19 )
          v10 = (const __m128i *)"<null>";
        while ( 1 )
        {
          while ( !strncmp(v10->m128i_i8, "ICON ", 5u)
               || !strncmp(v10->m128i_i8, "AUTOHIDE ", 9u)
               || v10->m128i_i8[0] == 64 && v10->m128i_i8[1] == 48 && v10->m128i_i8[2] == 58 )
          {
            v12 = strchr(v10->m128i_i8, 10);
            if ( !v12 )
              break;
            v10 = (const __m128i *)(v12 + 1);
          }
          if ( strncmp(v10->m128i_i8, "HELP\n", 5u) )
            break;
          v11 = strstr(v10->m128i_i8, "ENDHELP\n");
          if ( !v11 )
            break;
          v10 = (const __m128i *)(v11 + 8);
        }
        v14 = _mm_loadu_si128(v20);
        v15 = v20[1].m128i_i64[0];
        sub_2BAB0(s);
        __printf_chk();
        if ( (unsigned int)v9 <= 8 )
        {
          v13 = 473;
          if ( _bittest64(&v13, v9) )
            sub_2A3F0(1);
        }
      }
    }
  }
  else if ( a1 == 52 )
  {
    LOBYTE(v7) = 1;
    sub_2BDD0((_DWORD)v18, (_DWORD)v19, (unsigned int)"%d.%d", 9, 30, a6, 8, &a7);
  }
  else if ( a1 == 86 )
  {
    return (**v18)(v18);
  }
  return v7;
}

