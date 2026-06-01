/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140020560
// Address: 0x0000000140020560

//----- (0000000140020560) ----------------------------------------------------
__int64 __fastcall sub_140020560(int a1, struct __crt_locale_pointers *a2, signed __int64 a3, va_list a4, int a5)
{
  __int64 v5; // rbx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  unsigned int v10; // esi
  __m128i *v11; // rdi
  __int8 *v12; // rax
  const __m128i *v13; // rax
  int v14; // eax
  __int64 v16; // [rsp+30h] [rbp-2848h]
  struct __crt_locale_pointers v17; // [rsp+40h] [rbp-2838h] BYREF
  unsigned int v18; // [rsp+2888h] [rbp+10h]

  v18 = (unsigned int)a2;
  v5 = 0;
  v16 = 0;
  v6 = a1 - 23;
  if ( v6 )
  {
    v7 = v6 - 1;
    if ( v7 )
    {
      v8 = v7 - 4;
      if ( v8 )
      {
        v9 = v8 - 24;
        if ( v9 )
        {
          if ( v9 == 34 )
            return (*(__int64 (__fastcall **)(struct __crt_locale_pointers *))a2->locinfo)(a2);
        }
        else
        {
          sub_14005B0A0(a2, a3, "%d.%d", 9, 30);
          LOBYTE(v16) = 1;
          return v16;
        }
      }
      else
      {
        LODWORD(v16) = a5;
        return v16;
      }
    }
    else
    {
      v10 = (unsigned int)a2;
      if ( (_DWORD)a2 != 10 )
      {
        v11 = (__m128i *)"<null>";
        if ( a3 )
          v11 = (__m128i *)a3;
        while ( 1 )
        {
          while ( !strncmp(v11->m128i_i8, "ICON ", 5u)
               || !strncmp(v11->m128i_i8, "AUTOHIDE ", 9u)
               || !strncmp(v11->m128i_i8, "@0:", 3u) )
          {
            v12 = sub_14006CA14((__int64)v11, 0xAu);
            if ( !v12 )
              break;
            v11 = (__m128i *)(v12 + 1);
          }
          if ( strncmp(v11->m128i_i8, "HELP\n", 5u) )
            break;
          v13 = sub_14006C4B8(v11, (const __m128i *)"ENDHELP\n");
          if ( !v13 )
            break;
          v11 = (__m128i *)&v13->m128i_u64[1];
        }
        sub_14005B240(&v17, 10240, v11->m128i_i8, a4);
        sub_140020810((__int64)"%s: %s\n", off_140094820[v18], (const char *)&v17);
        if ( v18 <= 8 )
        {
          v14 = 473;
          if ( _bittest(&v14, v10) )
            sub_14005A640(1);
        }
      }
    }
  }
  else
  {
    sub_14005B200((char *)a2, a3);
  }
  return v5;
}
// 140094820: using guessed type char *off_140094820[12];
