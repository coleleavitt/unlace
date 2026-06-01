/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14007285C
// Address: 0x000000014007285C

//----- (000000014007285C) ----------------------------------------------------
char __fastcall sub_14007285C(__int64 a1)
{
  char v1; // al
  __int64 v2; // rbx
  char v3; // si
  char v4; // al
  unsigned int v5; // edx
  char v6; // r8
  int v7; // ecx
  __int64 v9; // rdx
  __int64 v10; // rdi
  char v11; // cl
  bool v12; // r8
  unsigned int v13; // ebp
  int *v14; // rsi
  int v15; // ecx
  __int64 v16; // rdx
  __int16 v17; // [rsp+50h] [rbp+8h] BYREF
  char v18; // [rsp+52h] [rbp+Ah]

  v1 = *(_BYTE *)(a1 + 65);
  v2 = a1;
  v3 = 120;
  if ( v1 > 100 )
  {
    if ( v1 <= 103 )
      goto LABEL_34;
    if ( v1 != 105 )
    {
      switch ( v1 )
      {
        case 'n':
          v4 = unknown_libname_54();
          goto LABEL_35;
        case 'o':
          v7 = *(_DWORD *)(a1 + 48);
          if ( (v7 & 0x20) != 0 )
            *(_DWORD *)(v2 + 48) = v7 | 0x80;
          v5 = 8;
          a1 = v2;
          goto LABEL_32;
        case 'p':
          *(_DWORD *)(a1 + 56) = 16;
          *(_DWORD *)(a1 + 60) = 11;
LABEL_25:
          v6 = 1;
          v5 = 16;
LABEL_33:
          v4 = sub_1400730B0(a1, v5, v6);
          goto LABEL_35;
        case 's':
LABEL_23:
          v4 = unknown_libname_55();
          goto LABEL_35;
      }
      if ( v1 != 117 )
      {
        if ( v1 != 120 )
          return 0;
        v5 = 16;
        goto LABEL_32;
      }
LABEL_31:
      v5 = 10;
LABEL_32:
      v6 = 0;
      goto LABEL_33;
    }
LABEL_30:
    *(_DWORD *)(a1 + 48) |= 0x10u;
    goto LABEL_31;
  }
  if ( v1 == 100 )
    goto LABEL_30;
  if ( v1 != 65 )
  {
    if ( v1 == 67 )
    {
LABEL_12:
      v4 = unknown_libname_53(a1, 0);
      goto LABEL_35;
    }
    if ( v1 <= 68 )
      return 0;
    if ( v1 > 71 )
    {
      if ( v1 != 83 )
      {
        if ( v1 != 88 )
        {
          if ( v1 == 90 )
          {
            v4 = unknown_libname_51();
            goto LABEL_35;
          }
          if ( v1 != 97 )
          {
            if ( v1 == 99 )
              goto LABEL_12;
            return 0;
          }
          goto LABEL_34;
        }
        goto LABEL_25;
      }
      goto LABEL_23;
    }
  }
LABEL_34:
  v4 = unknown_libname_52();
LABEL_35:
  if ( !v4 )
    return 0;
  if ( !*(_BYTE *)(v2 + 64) )
  {
    v9 = *(unsigned int *)(v2 + 48);
    v17 = 0;
    v10 = 0;
    v18 = 0;
    if ( (v9 & 0x10) == 0 )
      goto LABEL_46;
    if ( (v9 & 0x40) != 0 )
    {
      LOBYTE(v17) = 45;
    }
    else if ( (v9 & 1) != 0 )
    {
      LOBYTE(v17) = 43;
    }
    else
    {
      if ( (v9 & 2) == 0 )
        goto LABEL_46;
      LOBYTE(v17) = 32;
    }
    v10 = 1;
LABEL_46:
    v11 = *(_BYTE *)(v2 + 65);
    v12 = ((v11 - 88) & 0xDF) == 0 && (v9 & 0x20) != 0;
    if ( v12 || ((v11 - 65) & 0xDF) == 0 )
    {
      *((_BYTE *)&v17 + v10) = 48;
      if ( v11 == 88 || v11 == 65 )
        v3 = 88;
      *((_BYTE *)&v17 + v10 + 1) = v3;
      LODWORD(v10) = v10 + 2;
    }
    v13 = *(_DWORD *)(v2 + 52) - *(_DWORD *)(v2 + 80) - v10;
    if ( (v9 & 0xC) == 0 )
    {
      LOBYTE(v9) = 32;
      __crt_stdio_output::write_multiple_characters<__crt_stdio_output::stream_output_adapter<char>,char>(
        v2 + 1128,
        v9,
        v13,
        v2 + 40);
    }
    v14 = (int *)(v2 + 40);
    if ( (*(_DWORD *)(*(_QWORD *)(v2 + 1128) + 20LL) & 0x1000) == 0 || *(_QWORD *)(*(_QWORD *)(v2 + 1128) + 8LL) )
      __crt_stdio_output::output_adapter_common<char,__crt_stdio_output::stream_output_adapter<char>>::write_string_impl(
        v2 + 1128,
        (unsigned int)&v17,
        v10,
        v2 + 40,
        v2 + 16);
    else
      *v14 += v10;
    v15 = *(_DWORD *)(v2 + 48);
    if ( (v15 & 8) != 0 && (v15 & 4) == 0 )
    {
      LOBYTE(v9) = 48;
      __crt_stdio_output::write_multiple_characters<__crt_stdio_output::stream_output_adapter<char>,char>(
        v2 + 1128,
        v9,
        v13,
        v2 + 40);
    }
    unknown_libname_56(v2, 0);
    if ( *v14 >= 0 && (*(_DWORD *)(v2 + 48) & 4) != 0 )
    {
      LOBYTE(v16) = 32;
      __crt_stdio_output::write_multiple_characters<__crt_stdio_output::stream_output_adapter<char>,char>(
        v2 + 1128,
        v16,
        v13,
        v2 + 40);
    }
  }
  return 1;
}
// 140072A95: variable 'v9' is possibly undefined
// 140072ABF: variable 'v16' is possibly undefined
// 14007192C: using guessed type __int64 __fastcall __crt_stdio_output::write_multiple_characters<__crt_stdio_output::stream_output_adapter<char>,char>(_QWORD, _QWORD, _QWORD, _QWORD);
// 140072DB8: using guessed type __int64 unknown_libname_51(void);
// 140072E2C: using guessed type __int64 unknown_libname_52(void);
// 140072FE8: using guessed type __int64 __fastcall unknown_libname_53(_QWORD, _QWORD);
// 140073230: using guessed type __int64 unknown_libname_54(void);
// 1400732B8: using guessed type __int64 unknown_libname_55(void);
// 1400733EC: using guessed type __int64 __fastcall unknown_libname_56(_QWORD, _QWORD);
// 140073690: using guessed type __int64 __fastcall __crt_stdio_output::output_adapter_common<char,__crt_stdio_output::stream_output_adapter<char>>::write_string_impl(_DWORD, _DWORD, _DWORD, _DWORD, __int64);
